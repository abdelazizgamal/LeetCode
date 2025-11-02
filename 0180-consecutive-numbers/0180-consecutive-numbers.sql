-- /* Write your T-SQL query statement below */
-- select distinct (num )as ConsecutiveNums
-- from(select num from Logs l1
--         where num = (select num from logs l2
--                     where l2.id = l1.id + 1 and num = ((select num from logs l3
--                                     where l3.id = l1.id + 2 and num = num )))) as temp

with lag_lead as(
    select num , lag =lAG(num) OVER(ORDER BY id), 
	   lead =LEAD(num) OVER(ORDER BY id)
    from logs
)
SELECT distinct(num) as ConsecutiveNums 
FROM lag_lead
where  num = lag and num = lead