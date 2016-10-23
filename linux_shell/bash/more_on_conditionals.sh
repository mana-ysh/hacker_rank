read x
read y
read z

if [ $x -ne $y -a $x -ne $z ]; then
	echo "SCALENE"
else
	if [ $x -eq $y -a $x -eq $z ]; then
		echo "EQUILATERAL"
	else
		echo "ISOSCELES"
	fi
fi
