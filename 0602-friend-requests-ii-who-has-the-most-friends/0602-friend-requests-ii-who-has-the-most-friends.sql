# Write your MySQL query statement below
select id, count(id) as num from 
(SELECT requester_id AS id FROM RequestAccepted
    UNION ALL
    SELECT accepter_id AS id FROM RequestAccepted
) temp
GROUP BY id
ORDER BY num DESC
LIMIT 1;