-- print the name and scores of all records with name
SELECT score, name
FROM second_table
WHERE name IS NOT NULL
ORDER BY score DESC;
