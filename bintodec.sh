read -p "enter the number:" n
s=0
i=1

while [ $n -gt 0 ]
do
 r=$((n%10))
 s=$((s+r*i))
 i=$((i*2))
 n=$((n/10))
done

echo "the decimal representation is $s"
