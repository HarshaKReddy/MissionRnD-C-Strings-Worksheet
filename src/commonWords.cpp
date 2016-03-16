/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>

#include <malloc.h>

#define SIZE 31

void words_similar(char *s1, char *s2, char **result){

	int i, j, l;
	char temp[50];
	int val;
	int x = 0, y = 0;

	for (i = 0; s1[i] != '\0'; i++){
		l = 0;
		while (s1[i] != ' ' && s1[i]){

			temp[l] = s1[i];
			l++;
			i++;
		}
		temp[l] = '\0';

		l = 0;
		j = 0;
		while (s2[j]  && temp[l]){

			if (s2[j] == temp[l]){
				l++;
				val = 1;

				if (!temp[l])
					break;
			}
			else if (s2[j - 1] == temp[l - 1] && !l){
				 val = 0;
				 l = 0;
			}
			j++;
		}

		if (val == 1 && !temp[l]){
			y = 0;
			for (l = 0; temp[l] != '\0'; l++){
				result[x][y] = temp[l];
				y++;
			}
			!result[x][y];
			x++;
		}
	}
}


char ** commonWords(char *str1, char *str2) {
	if (!str1 || !str2)
		return NULL;

	int i;
	char **result = (char **)calloc(30, sizeof(char*));

	for (i = 0; i < SIZE; i++)
		result[i] = (char *)calloc(SIZE, sizeof(char));

	words_similar(str1, str2, result);

	if (!result[0][0])
		return NULL;
	else
		return result;
}