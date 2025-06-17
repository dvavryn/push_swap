#!/bin/bash

echo -e "PUSH SWAP -- BENCHMARK\n"

echo "Input 0 1 2 - all combinations"
if [ $(ARG="0 1"; ./push_swap $ARG | ./checker $ARG | grep -c OK) -eq 1 ]; then echo -e "\e[32m[OK]\e[0m"; else echo -e "\e[31m[KO]\e[0m"; fi | tr '\n' ' '
if [ $(ARG="1 0"; ./push_swap $ARG | ./checker $ARG | grep -c OK) -eq 1 ]; then echo -e "\e[32m[OK]\e[0m"; else echo -e "\e[31m[KO]\e[0m"; fi | tr '\n' ' '
if [ $(ARG="0 1 2"; ./push_swap $ARG | ./checker $ARG | grep -c OK) -eq 1 ]; then echo -e "\e[32m[OK]\e[0m"; else echo -e "\e[31m[KO]\e[0m"; fi | tr '\n' ' '
if [ $(ARG="0 2 1"; ./push_swap $ARG | ./checker $ARG | grep -c OK) -eq 1 ]; then echo -e "\e[32m[OK]\e[0m"; else echo -e "\e[31m[KO]\e[0m"; fi | tr '\n' ' '
if [ $(ARG="1 0 2"; ./push_swap $ARG | ./checker $ARG | grep -c OK) -eq 1 ]; then echo -e "\e[32m[OK]\e[0m"; else echo -e "\e[31m[KO]\e[0m"; fi | tr '\n' ' '
if [ $(ARG="1 2 0"; ./push_swap $ARG | ./checker $ARG | grep -c OK) -eq 1 ]; then echo -e "\e[32m[OK]\e[0m"; else echo -e "\e[31m[KO]\e[0m"; fi | tr '\n' ' '
if [ $(ARG="2 0 1"; ./push_swap $ARG | ./checker $ARG | grep -c OK) -eq 1 ]; then echo -e "\e[32m[OK]\e[0m"; else echo -e "\e[31m[KO]\e[0m"; fi | tr '\n' ' '
if [ $(ARG="2 1 0"; ./push_swap $ARG | ./checker $ARG | grep -c OK) -eq 1 ]; then echo -e "\e[32m[OK]\e[0m"; else echo -e "\e[31m[KO]\e[0m"; fi | tr '\n' ' '
echo -e "\n"
echo "Random input 3 digits - between -100 & 100"

for ((i=0; i<5; i++))
do
	for ((j=0; j<8; j++))
	do
		if [ $(ARG=$(seq -100 100 | shuf | head -3 | tr '\n' ' '); ./push_swap $ARG | ./checker $ARG | grep -c OK) -eq 1 ]; then echo -e "\e[32m[OK]\e[0m"; else echo -e "\e[31m[KO]\e[0m"; fi | tr '\n' ' '
	done
	echo
done