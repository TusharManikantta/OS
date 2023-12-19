read -p "enter the decimal number:" n
s=0
i=1
while [ $n -gt 0 ]
do
 r=$((n%2))
 s=$((s+r*i))
 i=$((i*10))
 n=$((n/2))
done
echo "the binary representation is $s"
