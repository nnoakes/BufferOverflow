This program shows an exploit that can be done with a buffer overflow in a c++ program. If you successfully exploit the program you will be able to change your price to $0. You should use a Kali Linux machine to run this program or any other Linux machine. See howtocrack.txt for instructions on how to perform the buffer overflow. 

How to compile:
1. Navigate to the folder you have downloaded the .cpp file to
2. Disable aslr with the command: echo "0" > /proc/sys/kernel/randomize_va_space
3. g++ -g -fno-stack-protector -z execstack -mpreferred-stack-boundary=2 bufferOverflow.cpp -o bufferOverflow
4. ./bufferOverflow

What it does:
This program is a bookstore that you will choose a book to purchase. The options will be listed and you will pick 1-4. Then your name, address, and credit card number will be requested and you will then be given your final total.

Goal of a successful exploit:
The final cost will be $0 and it will not seg fault.
