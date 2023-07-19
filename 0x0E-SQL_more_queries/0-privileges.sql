-- Script that lists all privileges of the MySQL users
SELECT CONCAT('SHOW GRANTS FOR \'', user, '\'@\'', host, '\';') AS query
FROM mysql.user
WHERE user IN ('user_0d_1', 'user_0d_2') AND host = 'localhost'
ORDER BY user;
