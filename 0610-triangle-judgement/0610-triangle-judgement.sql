/* Write your T-SQL query statement below */
select x, y, z ,Case
                    when x < y + z and y < x + z and z < x + y then 'Yes' 
                    else 'No'
                END as triangle
from triangle 