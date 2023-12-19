read -p "enter the number:" n
a1=0
a2=1
for((i=0;i<n;i++)){
 echo -n "$a1"
 temp=$((a1+a2))
 a1=$a2
 a2=$temp
}
