/* Write your T-SQL query statement below */
with temp as(
    select user_id , count(*) as cnt
    from  Confirmations  
    where action = 'confirmed'
    group by user_id
)
select s.user_id, case
                    when s.user_id not in (select user_id from temp) then 0
                    else ROUND(CAST((SELECT cnt FROM temp t WHERE s.user_id = t.user_id) AS FLOAT)/count(c.action), 2)
                  end as  confirmation_rate 
from Signups s
left outer join Confirmations c
on s.user_id = c.user_id
group by s.user_id
