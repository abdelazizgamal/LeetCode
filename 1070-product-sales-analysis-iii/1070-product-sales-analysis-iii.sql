/* Write your T-SQL query statement below */
-- WITH CTE 
-- with year_sales as(
--     select product_id, year ,quantity,price, 
--         rank() over(partition by product_id order by year asc) as rnk
--     from Sales
-- )
-- select product_id , year as first_year , quantity, price
-- from year_sales
-- where rnk = 1
-----------------------------------------------------------
--correlated subquery
--Simple but not scalable
/*select s1.product_id , s1.year as first_year , s1.quantity, s1.price
from sales s1
where year = (select min(year) from sales 
                where product_id = s1.product_id)*/
-----------------------------------------------------------
--using Joins for better performance 
with ProductFirstYear as (
    select product_id, min(year)as first_year
    from sales
    group by product_id 
)
select pfy.product_id ,  first_year , s1.quantity, s1.price
from ProductFirstYear pfy
join sales s1
on pfy.product_id = s1.product_id and first_year  = year
