/* Write your T-SQL query statement below */
with del_table as(
    select  ROW_NUMBER() OVER(partition by email order by id ) as num
    from person
)

delete from del_table
where num > 1
-- delete from Person
-- where