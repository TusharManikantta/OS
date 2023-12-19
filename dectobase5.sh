read -p "enter the number" n
s=0
i=1
while [ $n -gt 0 ]
do
 r=$((n%5))
 s=$((s+r*i))
 i=$((i*10))
 n=$((n/5))
done
echo "the base5 representation is $s"
