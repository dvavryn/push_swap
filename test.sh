#!/bin/bash



echo -e "PUSH SWAP -- BENCHMARK\n"

echo "Input 0 1 2 - all combinations"
ARG="0 1"; OUTPUT=$(./push_swap $ARG | ./checker_mac $ARG); if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
ARG="1 0"; OUTPUT=$(./push_swap $ARG | ./checker_mac $ARG); if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
ARG="0 1 2"; OUTPUT=$(./push_swap $ARG | ./checker_mac $ARG); if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
ARG="0 2 1"; OUTPUT=$(./push_swap $ARG | ./checker_mac $ARG); if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
ARG="1 0 2"; OUTPUT=$(./push_swap $ARG | ./checker_mac $ARG); if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
ARG="1 2 0"; OUTPUT=$(./push_swap $ARG | ./checker_mac $ARG); if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
ARG="2 0 1"; OUTPUT=$(./push_swap $ARG | ./checker_mac $ARG); if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
ARG="2 1 0"; OUTPUT=$(./push_swap $ARG | ./checker_mac $ARG); if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
echo
echo
echo "Random input 3 digits - between -100 & 100"
for ((i=0; i<3; i++))
do
	for ((j=0; j<10; j++))
	do
		ARG=$(seq -100 100 | gshuf | head -3 | tr '\n' ' ')
		OUTPUT=$(./push_swap $ARG | ./checker_mac $ARG)
		if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
	done
	echo
done
echo
echo "Sorted 100 correctly"
for ((i=0; i<3; i++))
do
	for ((j=0; j<10; j++))
	do
		ARG=$(seq -100 100 | gshuf | head -100 | tr '\n' ' ')
		OUTPUT=$(./push_swap $ARG | ./checker_mac $ARG)
		if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
	done
	echo
done
echo
echo "Sorted 500 correctly"
for ((i=0; i<3; i++))
do
	for ((j=0; j<10; j++))
	do
		ARG=$(seq -500 500 | gshuf | head -500 | tr '\n' ' ')
		OUTPUT=$(./push_swap $ARG | ./checker_mac $ARG)
		if [ "$OUTPUT" = OK ]; then printf "\e[32m[OK]\e[0m "; else printf "\e[31m[KO]\e[0m "; fi
	done
	echo
done
