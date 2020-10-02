#include <stdio.h>
int main()
{
	int i = 0, j = 0, k = 0, z = 0;
	char strin[200], strout[200];
	char vowels[13] = { 'A','a','E','e','Y','y','U','u','O','o','I','i' };   //massive with vowels
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
			for (j = 0; j <= 11 && k != 1; j++)    //check symbol if this is a vowel
			{ 
				if (strin[i] == vowels[j])
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
}

