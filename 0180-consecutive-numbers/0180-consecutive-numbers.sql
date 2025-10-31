/* Write your T-SQL query statement below */
select distinct (num )as ConsecutiveNums
from(select num from Logs l1
        where num = (select num from logs l2
                    where l2.id = l1.id + 1 and num = ((select num from logs l3
                                    where l3.id = l1.id + 2 and num = num )))) as temp