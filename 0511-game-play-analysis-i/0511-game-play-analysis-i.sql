/* Write your T-SQL query statement below */
SELECT player_id, event_date as first_login 
FROM Activity a1
WHERE a1.event_date < ALL (
  SELECT event_date
  FROM Activity a2
  where event_date != a1.event_date  and player_id = a1.player_id 
);
