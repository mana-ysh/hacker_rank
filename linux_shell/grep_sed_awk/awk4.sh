awk '{if (NR%2 == 1) ORS=";"; else ORS="\n"; print }'
