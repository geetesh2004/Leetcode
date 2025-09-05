-- Last updated: 9/5/2025, 8:59:56 PM
# Write your MySQL query statement below
select id,movie,description,rating
from Cinema
Where id%2!=0 AND description!='boring'
Order By rating DESC;