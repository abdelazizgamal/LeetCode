/*WITH DepartmentCount AS (
    SELECT employee_id,
           COUNT(*) AS dept_count
    FROM Employee
    GROUP BY employee_id
)

SELECT e.employee_id,
       e.department_id
FROM Employee e
JOIN DepartmentCount dc
  ON e.employee_id = dc.employee_id
WHERE (dc.dept_count = 1)
   OR (dc.dept_count > 1 AND e.primary_flag = 'Y');
*/
with temp as(
select employee_id , department_id ,
       ROW_NUMBER() over(partition by employee_id   order by  primary_flag desc) as num
from Employee)
select employee_id , department_id
from temp
where num  = 1