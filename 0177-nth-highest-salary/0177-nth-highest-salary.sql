CREATE FUNCTION getNthHighestSalary(@N INT) RETURNS INT AS
BEGIN
    RETURN (
        /* Write your T-SQL query statement below. */
        
        select distinct(salary)
        from (select salary , Dense_rank() over(order by salary desc) as nm from employee) as temp
        where (select count(distinct(salary)) from employee) >= @N and
            nm = @N

    );
END