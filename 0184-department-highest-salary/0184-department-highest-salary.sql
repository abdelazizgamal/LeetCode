/* Write your T-SQL query statement below */
/*WITH emp AS (
    SELECT id, name, salary, departmentId,
           RANK() OVER (PARTITION BY departmentId ORDER BY salary DESC) AS rnk
    FROM Employee
)
SELECT d.name  as Department, e.name as Employee , salary as Salary 
FROM emp e, Department d
WHERE rnk = 1 and departmentId =  d.id  ;*/





select d.name as Department, e.name as Employee, salary
from Employee e
join Department d on departmentId = d.id
where salary = (select max(salary) from Employee e2
                where e2.departmentId  = e.departmentId )