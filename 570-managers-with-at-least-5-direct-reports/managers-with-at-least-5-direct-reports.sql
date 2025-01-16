# Write your MySQL query statement below
-- select name
-- from Employee
-- where id in(
--     select managerId
--     from Employee
--     group by managerId
--     having count(*) >4
-- );

SELECT E1.name FROM Employee E1 INNER JOIN  ( SELECT managerId FROM 

Employee GROUP BY managerId HAVING COUNT(managerId) >4)  E2 ON 

E1.id = E2.managerId 