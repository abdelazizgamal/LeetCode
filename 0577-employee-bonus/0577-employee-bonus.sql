/* Write your T-SQL query statement below */
select name, bonus
from Employee as e
left outer join Bonus as b
On e.empId = b.empId 
where bonus < 1000 or bonus is null