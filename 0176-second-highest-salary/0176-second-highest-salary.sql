/* Write your T-SQL query statement below */
with temp as(
   select salary, DENSE_RANK() over(order by salary desc) as rnk
    from Employee
)
select max(CASE WHEN rnk = 2 THEN salary ELSE NULL END) as SecondHighestSalary
from temp
