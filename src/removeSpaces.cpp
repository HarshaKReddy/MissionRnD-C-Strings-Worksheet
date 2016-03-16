/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
char* mov_str(char *a)
{
	int x = 0, y = x;
	while (a[x])
	{
		while (a[x + 1] == ' ')
			x++;
		a[y] = a[x + 1];
		x++;
		y++;
	}
	return a;
} 

char removeSpaces(char *str) {
	int x = 0;
	char *a;
	if (str == '\0')
		return '\0';
		while (str[x] != ' '&& str[x])
			x++;
		a = &str[x];
		if (str[x] == ' ')
		{
			a = mov_str(a);
			x++;
		}
	}
