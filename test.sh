cc main.c get_args.c error.c free_arr.c step_1.c step_2.c rotate.c reverse_rotate.c swap_push.c tmp_print.c ../libft/libft.a -o push_swap

echo "Runnung test.sh"
echo "Tests 2 and 3 digits"
ARG="0 2"; ./push_swap $ARG | ./checker $ARG
ARG="2 0"; ./push_swap $ARG | ./checker $ARG
ARG="0 2 3"; ./push_swap $ARG | ./checker $ARG 
ARG="0 3 2"; ./push_swap $ARG | ./checker $ARG 
ARG="2 0 3"; ./push_swap $ARG | ./checker $ARG 
ARG="2 3 0"; ./push_swap $ARG | ./checker $ARG 
ARG="3 0 2"; ./push_swap $ARG | ./checker $ARG 
ARG="3 2 0"; ./push_swap $ARG | ./checker $ARG 
echo "-------------"


echo "working input"
./push_swap 1 3 5 +9 20 -4 50 60 04 08
./push_swap "3 4 6 8 9 74 -56 +495"
./push_swap "95 99 -9 10 9"
./push_swap 2147483647 2 4 7
./push_swap 99 -2147483648 23 545
./push_swap "2147483647 843 56544 24394"
echo "-------------"


# echo "ERROR input"
# ./push_swap 1 3 dog 35 80 -3
# ./push_swap a
# ./push_swap 1 2 3 5 67b778 947
# ./push_swap " 12 4 6 8 54fhd 4354"
# ./push_swap 1 --    45 32
# ./push_swap 1 3 58 9 3
# ./push_swap 3 03
# ./push_swap " 49 128     50 38   49"
# ./push_swap 54867543867438 3
# ./push_swap -2147483647765 4 5
# ./push_swap "214748364748385 28 47 29"
# ./push_swap "1 2 4 3" 76 90 "348 05"
# echo "-------------"
