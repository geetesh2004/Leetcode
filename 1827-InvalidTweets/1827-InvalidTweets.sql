-- Last updated: 9/5/2025, 8:59:51 PM
# Write your MySQL query statement below
select tweet_id
from Tweets
where length(content)>15;