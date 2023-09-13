# Write your MySQL query statement below
#given a column and type id name int varchar 

select 
eu.unique_id as unique_id, e.name as name
from Employees e left join EmployeeUNI eu on e.id = eu.id