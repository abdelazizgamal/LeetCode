/* Write your T-SQL query statement below */
select name as Customers from Customers
where id Not IN (select customerId  from Orders)