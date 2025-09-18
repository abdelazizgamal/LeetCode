/* Write your T-SQL query statement below */
select customer_id 
from Customer C
group by customer_id
having count(distinct c.product_key) = (select count(product_key) from Product)

-- with temp as(select customer_id, count(distinct product_key)as cnt
--        from Customer C
--        group by customer_id)

-- select customer_id  
-- from temp t
-- where cnt = (select count(product_key) from Product)

