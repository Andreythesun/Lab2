#include <stdio.h>

int isLetter(char x)
{
	return ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'));
}

int main()
{
	int i, j = 0;
	char strin[200], strin2[200], strout[200];
	printf("Input a sentence:\n");
	fgets(strin, 199, stdin);
	for (i = 0; strin[i] != '\n'; i++) {
		if (isLetter(strin[i]) == 0 && strin[i] != '\n')
			strin[i] = ' ';
	}
	fgets(strin2, 199, stdin);
	for (i = 0; strin[i] != '\n'; i++) {
		if (strin[i] == strin2[j]) {
			strout[j] = strin[i];
			j++;
		}
		else {
			while (j != 0)
			{
				strout[j] = ' ';
				j--;
			}
			strout[j] = ' ';
		}
	}

	strout[j] = 0;
	puts(strout);
	return 0;
}