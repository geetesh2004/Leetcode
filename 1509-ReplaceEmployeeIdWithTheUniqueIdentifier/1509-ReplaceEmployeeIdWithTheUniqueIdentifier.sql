-- Last updated: 9/5/2025, 8:59:49 PM
# Write your MySQL query statement below
select e2.unique_id , e1.name
From Employees e1 Left Join EmployeeUNI e2
On e1.id=e2.id;