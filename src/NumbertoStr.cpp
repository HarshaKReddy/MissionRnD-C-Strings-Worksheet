/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>

int power(int afterdecimal)
{
	int answer = 1;
	if (afterdecimal == 0)
		return answer;
	while (afterdecimal)
	{
		answer = answer * 10;
		afterdecimal--;
	}
	return answer;
}
void number_to_str(float number, char *str, int afterdecimal){

	int num, temp, count = 0, i, k, dot = 0;
	num = (int)(number*power(afterdecimal));
	if (number<0)
	{
		temp = -num;
		num = -num;
	}
	else
		temp = num;
	while (temp)
	{
		count++;
		temp = temp / 10;
	}
	if (afterdecimal == 0)
	{
		if (number >= 0)
		{
			str[count] = '\0';
			i = count - 1;
			k = 0;
		}
		else
		{
			str[count + 1] = '\0';
			str[0] = '-';
			i = count;
			k = 1;
		}
	}
	else if (number >= 0)
	{
		str[count + 1] = '\0';
		i = count;
		k = 0;
		dot = count - afterdecimal;
	}
	else if (number<0)
	{
		str[0] = (char)'-';
		str[count + 2] = '\0';
		i = count + 1;
		k = 1;
		dot = count - afterdecimal + 1;
	}
	for (; i >= k; i--)
	{
	
		if (i == dot && afterdecimal != 0)
			*(str + i) = '.';
		else
		{
			*(str + i) = (num % 10) + '0';
			num = num / 10;
		}
	}
}
