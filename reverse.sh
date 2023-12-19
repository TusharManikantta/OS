read -p "enter the number: " num
reverse=0
while [ $num -gt 0 ];
do
 rem=$(($num%10))
 reverse=$(($reverse*10+$rem))
 num=$(($num/10))
done

echo "the reverse of the given number is: $reverse"
