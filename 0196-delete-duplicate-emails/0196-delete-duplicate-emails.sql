# Write your MySQL query statement below
DELETE p FROM Person p, Person d
WHERE
    p.email = d.email
    AND p.id > d.id;