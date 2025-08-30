/* Write your T-SQL query statement below */
select product_name ,  year , price from Sales s
left join Product p
ON s.product_id  = p.product_id 
