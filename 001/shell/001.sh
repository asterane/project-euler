# Problem 1
# Multiples of 3 and 5

sum=0;
for i in {0..999};
do if (($i % 3 == 0 || $i % 5 == 0));
   then ((sum += $i));
   fi;
done;
echo $sum;
