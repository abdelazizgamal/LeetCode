/* Write your T-SQL query statement below */
select unique_id ,name   from   EmployeeUNI eu
right  join Employees e  
on eu.id = e.id 