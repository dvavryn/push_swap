cc main.c get_args.c error.c free_arr.c step_1.c step_2.c tmp_print.c ../libft/libft.a -o push_swap

echo -ne "  1\t "
./push_swap 1 3 5 +9 20 -4 50 60 04 08
echo
echo -ne "  2\t "
./push_swap "3 4 6 8 9 74 -56 +495"
echo
echo -ne "  3\t "
./push_swap "95 99 -9 10 9"
echo
echo -ne "  4\t "
./push_swap 2147483647 2 4 7
echo
echo -ne "  5\t "
./push_swap 99 -2147483648 23 545
echo
echo -ne "  6\t "
./push_swap "2147483647 843 56544 24394"
echo




# echo -ne "  1 ERROR:\t "
# ./push_swap 1 3 dog 35 80 -3
# echo -ne "  2 ERROR:\t "
# ./push_swap a
# echo -ne "  3 ERROR:\t "
# ./push_swap 1 2 3 5 67b778 947
# echo -ne "  4 ERROR:\t "
# ./push_swap " 12 4 6 8 54fhd 4354"
# echo -ne "  5 ERROR:\t "
# ./push_swap 1 --    45 32
# echo -ne "  6 ERROR:\t "
# ./push_swap 1 3 58 9 3
# echo -ne "  7 ERROR:\t "
# ./push_swap 3 03
# echo -ne "  8 ERROR:\t "
# ./push_swap " 49 128     50 38   49"
# echo -ne "  9 ERROR:\t "
# ./push_swap 54867543867438 3
# echo -ne " 10 ERROR:\t "
# ./push_swap -2147483647765 4 5
# echo -ne " 11 ERROR:\t "
# ./push_swap "214748364748385 28 47 29"
# echo -ne " 12 ERROR:\t "
# ./push_swap "1 2 4 3" 76 90 "348 05"
# echo -e "\n\n"