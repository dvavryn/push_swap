cc main.c clean_chararr.c convert.c error.c ../libft/libft.a -o push_swap

# ./push_swap "1 2 3"


Test the Errors
echo 1 nice
./push_swap 1 3 5 +9 20 -4 50 60 04 08
echo
echo 2 nice 
./push_swap "3 4 6 8 9 74 -56 +495"
echo
echo 3 error
./push_swap 1 3 dog 35 80 -3
echo
echo 4 error
./push_swap a
echo
echo 5 error
./push_swap 1 2 3 5 67b778 947
echo
echo 6 error
./push_swap " 12 4 6 8 54fhd 4354"
echo
echo 7 error
./push_swap 1 --    45 32
echo
echo 8 error
./push_swap 1 3 58 9 3
echo
echo 9 error
./push_swap 3 03
echo
echo 10 error
./push_swap " 49 128     50 38   49"
echo
echo 11 nice
./push_swap "95 99 -9 10 9"
echo
echo 12 nice
./push_swap 2147483647 2 4 7
echo
echo 13 nice
./push_swap 99 -2147483648 23 545
echo
echo 14 nice
./push_swap "2147483647 843 56544 24394"
echo
echo 15 error
./push_swap 54867543867438 3
echo
echo 16 error
./push_swap -2147483647765 4 5
echo
echo 17 error
./push_swap "214748364748385 28 47 29"
echo
echo 18 error
./push_swap "1 2 4 3" 76 90 "348 05"