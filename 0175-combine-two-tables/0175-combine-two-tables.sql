/* Write your T-SQL query statement below */
select firstName , lastName, a.city, a.state 
from Person p
left join Address a
    ON p.personId = a.personId 