read n
sum=0
for i in `seq 1 $n`
do
	read num
	sum=$((sum + num))
done
$res=echo "$sum / $n" |  bc -l | awk '{s=($0<0)?-1:1;print int($0*s*1000+0.5)/1000/s;}'
