#include <stdio.h>
#include <stdlib.h>
/**
*main - prints its own opcodes
*@argc: number of arguments
*@argv: array of arguments
*
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int bytes, i;
unsigned char *arr;
/* Use unsigned char to ensure proper interpretation of opcodes*/
if (argc != 2)
{
printf("Usage: %s <number_of_bytes>\n", argv[0]);
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error: Number of bytes cannot be negative.\n");
exit(2);
}
arr = (unsigned char *)main;
for (i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%02x\n", arr[i]);
break;
}
printf("%02x ", arr[i]);
}
return (0);
}
