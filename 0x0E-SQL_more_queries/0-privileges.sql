-- Script that lists all privileges of the MySQL users
SELECT CONCAT('SHOW GRANTS FOR ''', user, '''@''localhost'';') AS query FROM mysql.user WHERE user IN ('user_0d_1', 'user_0d_2');

