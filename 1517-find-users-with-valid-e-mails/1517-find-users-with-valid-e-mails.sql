SELECT user_id, name, mail
FROM Users
WHERE RIGHT(mail, 13) COLLATE SQL_Latin1_General_CP1_CS_AS = '@leetcode.com'
  AND LEFT(mail, LEN(mail) - 13) LIKE '[a-zA-Z]%'
  AND LEFT(mail, LEN(mail) - 13) NOT LIKE '%[^a-zA-Z0-9._-]%';
