awk '{ave = ($2+$3+$4) / 3; if (ave >= 80) print $0, ": A"; else if (ave >= 60) print $0, ": B"; else if (ave >= 50) print $0, ": C"; else print $0, ": FAIL" }'
