#include "holberton.h"
/**
 * tobin - convert an integer to binary (base 2).
 *
 * @arg: input
 *
 * Return: binary number.
 */
int tobin(int arg)
{
long binarynum = 0;
int rem, temp = 1;
while (arg != 0)
{
rem = arg % 2;
arg = arg / 2;
binarynum = binarynum + (rem *temp);
temp = temp * 10;
}
return (binarynum);
}
/**
 * tooct - prints an octal.
 * @o: input
 * Return: octal number.
 */
int tooct(int arg)
{
long oct = 0;
int rem, temp = 1;
while (arg != 0)
{
rem = arg % 8;
arg = arg / 8;
oct = oct + (rem *temp);
temp = temp * 10;
}
return (oct);
}
/**
 *  tohex - prints input integer to an hexadecimal in uppercase
 *  @arg: input
 *  Return: Hexadecimal
 */
char *toHEX(int arg)
{
int rem, i = 0;
char hex[2541];
char *p ;
while (arg != 0)
{
rem = arg % 16;
arg = arg / 16;
if(rem < 10)
hex[i++] = ((char)48 + rem);
else
hex[i++] = ((char)rem + 55);
}
hex[i]='\0';
p = hex;
return (p);
}
/**
 *  tohex - prints input integer to an hexadecimal in lowercase
 *  @arg: input
 *  Return: Hexadecimal
 */
char *tohex(int arg)
{
int rem, i = 0;
char hex[2541];
char *p ;
while (arg != 0)
{
rem = arg % 16;
arg = arg / 16;
if(rem < 10)
hex[i++] = ((char)48 + rem);
else
hex[i++] = ((char)rem + 87);
}
hex[i]='\0';
p = hex;
return (p);
}
