/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

char* reverse(char *s, int n)
{
	char *x, *y, t;
	x = s;
	y = &s[n - 1];
	while (x <= y)
	{
		t = *x;
		*x = *y;
		*y = t;
		x++;
		y--;
	}
	return s;
}

void str_words_in_rev(char *input, int len){
	char *i, *j;
	int k = 0;
	input = reverse(input, len);
	i = input;
	while (*i)
	{
		j = i;
		k = 0;
		while (*i != ' ' && *i)
		{
			k++;
			i++;
		}
		j = reverse(j, k);
		if (*i != '\0')
			i++;
	}
	
}
