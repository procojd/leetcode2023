# Write your MySQL query statement below
select product_name,year,price
from product inner join sales
using(product_id)