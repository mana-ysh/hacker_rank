read form
echo $form | bc -l | awk '{s=($0<0)?-1:1;print int($0*s*1000+0.5)/1000/s;}'
