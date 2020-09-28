-- Problem 1
-- Multiples of 3 and 5

sum = 0

for i = 0, 999 do
   if i % 3 == 0 or i % 5 == 0 then
      sum = sum + i
   end
end

print(sum)
