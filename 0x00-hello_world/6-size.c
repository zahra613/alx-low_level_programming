#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
/* this program run the size of various variables  */
int main(void)
{
printf("Size of a char:%la byte(s)\n",sizeof(char));
printf("Size of an int: %la byte(s)\n",sizeof(int));
printf("Size of a long int:%la byte(s)\n",sizeof(long int));
printf("Size of a long long int:%la byte(s)\n",sizeof(long long int));
printf("Size of a float: %la byte(s)\n",sizeof(float));
return (0);
}
