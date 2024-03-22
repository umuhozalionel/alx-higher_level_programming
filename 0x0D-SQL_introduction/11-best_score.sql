-- Lists all records in the table second_table with score >=10, records to be in descending order
SELECT `score`, `name`
FROM `second_table`
WHERE `score` >= 10
ORDER BY `score` DESC;
