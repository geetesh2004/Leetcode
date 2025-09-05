-- Last updated: 9/5/2025, 8:59:52 PM
# Write your MySQL query statement below
select distinct author_id AS id
from Views
Where author_id = viewer_id
Order by author_id;