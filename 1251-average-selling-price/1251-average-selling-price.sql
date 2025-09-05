/* Write your T-SQL query statement below */
--units ,price  ,units * price as total,
  --  round(SUM(units * price)  over (partition by  u.product_id) * 1.0/ SUM(units) over (partition by  u.product_id),2)as verage_price 
select p.product_id 
        , ISNULL(round(SUM(units * price)* 1.0/ SUM(units),2),0) as average_price  
from Prices p  left outer join  UnitsSold u
on purchase_date BETWEEN start_date AND end_date 
        and u.product_id = p.product_id 


group by p.product_id