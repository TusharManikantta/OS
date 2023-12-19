read -p "enter the number: " n
sum=0
t=$n

while [ $t -gt 0 ]
do
 rem=$((t%10))
 sum=$((sum+rem**3))
 t=$((t/10))
done

if [ $n -eq $sum ]
then
 echo "$n is angstrom"
else
 echo "$n is not an angstrom"
fi

