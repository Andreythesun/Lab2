﻿#include <stdio.h>
/*char tolower(char x)
{
	if ('A' <= x && x <= 'Z')
	{
		char low;
		low = 0;
		low = (x + 30);
		return(low);
	}
	return 1;
}

int main()
{
	int i = 0, j = 0, k = 0, z = 0;
	char strin[200], strout[200];
	char vowels[7] = {'A','E','Y','U','O','I'};   //massive with vowels
	printf("Input a sentence:\n");   
	fgets(strin, 199, stdin);
	for (i = 0; strin[i] != 0; i++) 
	{
		if ('z' < strin[i] || strin[i] < 'A' || ('Z' < strin[i] && strin[i] < 'a'))
		{
			strin[i] = ' ';
		}
	}
	i = 0;
	for (i = 0; strin[i] != 0; i++)      //the main cycle for every letter
	{
		strout[i] = strin[i];   //initialize this letter to output
		if (strin[i+1] == ' ' && strin[i] != ' ')   //check if this is a last letter of the word adn vowel
		{
			for (j = 0; j <= 5 && k == 0; j++)    //check symbol if this is a vowel
			{ 
				if (strin[i] == vowels[j] || strin[i] == tolower(vowels[j]))
				{
					k++;  //variable indicates a vowel
				}
			}
			if (k == 0 && strout[i+1] != 0)
			{
				z = i;
				do
				{
					strout[z] = ' ';
					z--;
				} while (('a' <= strout[z] && strout[z] <= 'z') || ('A' <= strout[z] && strout[z] <= 'Z'));
			}
			k = 0;   //reset for next vowel chec
		}
	}
	strout[i] = '\0';  //add terminator
	printf("\nOnly words which ends with vowel:\n");
	puts(strout);   //output
	return 0;
}*/
int vowcheck(char x)
{
	char vow[] = { 'A','E','Y','U','I','O' };
	int j;
	for (j = 0; vow[j] != 0; j++) {
		if (x == vow[j] || x == vow[j] + 32) {
			return 1;
		}
	}

}
int main()
{
	int i, j = 0;
	char strin[200], strout[200];
	printf("Input a sentence:\n");
	fgets(strin, 199, stdin);
	for (i = 0; strin[i] != '\n'; i++, j++) {
		strout[j] = strin[i];
		if ((strin[i+1] == ' ' || strin[i+1] == '\n' || strin[i+1] == ',' || strin[i+1] == '.') && !(strout[j] == ',' || strout[j] == '.' || strout[j] == ' ')) {
			if (vowcheck(strout[j]) != 1) {
				strout[i] = '&';
			}
		}
	}
	strout[j] = 0;
	puts(strout);
}
