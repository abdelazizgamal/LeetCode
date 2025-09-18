/* Write your T-SQL query statement below */
-- with temp as(
--     select user_id , count(*) as cnt
--     from  Confirmations  
--     where action = 'confirmed'
--     group by user_id
-- )


-- select s.user_id, case
--                     when s.user_id not in (select user_id from temp) then 0
--                     else ROUND(CAST((SELECT cnt FROM temp t WHERE s.user_id = t.user_id) AS FLOAT)/
--                     count(c.action), 2)
--                   end as  confirmation_rate 
-- from Signups s
-- left outer join Confirmations c
-- on s.user_id = c.user_id
-- group by s.user_id
SELECT 
    s.user_id,
    ISNULL(
        ROUND(
            CAST(SUM(CASE WHEN c.action = 'confirmed' THEN 1 ELSE 0 END) AS FLOAT) 
            / NULLIF(COUNT(c.action), 0), 
            2
        ),
        0.00
    ) AS confirmation_rate
FROM Signups s
LEFT JOIN Confirmations c ON s.user_id = c.user_id
GROUP BY s.user_id;

