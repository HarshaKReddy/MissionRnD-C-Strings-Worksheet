/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
char KthIndexFromEnd(char *str, int k) {
	int i = 0;
	if (k<0 || str == '\0' || str == "")
		return '\0';

	while (str[i])
		i++;
	 
	if (k >= i)
		return '\0';
	else
		return str[i - k - 1];
}