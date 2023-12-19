read -p "enter the number:" n
sum=0
t=$n
while [ $t -gt 0 ]
do
 rem=$((t%10))
 sum=$((sum*10+rem))
 t=$((t/10))
done
if [ $n -eq $sum ]
then
 echo "$n is a palindrome"
else
 echo "$n is not a palindrome"
fi
