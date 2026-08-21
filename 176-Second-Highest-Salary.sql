# Write your MySQL query statement below
Select MAX(salary) as SecondHighestSalary from Employee Where Salary < (Select MAX(salary) from Employee);