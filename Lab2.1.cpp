#include <stdio.h>

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
	for (i = 0; strin[i] != '\n'; i++) {
		if (strin[i] < 'A' || (strin[i] > 'Z' && strin[i] < 'a') || strin[i] > 'z')
			strin[i] = ' ';
	}
	for (i = 0; strin[i] != '\n'; i++, j++) {
		strout[j] = strin[i];
		if ((strin[i+1] == ' ' || strin[i+1] == '\n' || strin[i+1] == ',' || strin[i+1] == '.') && !(strout[j] == ',' || strout[j] == '.' || strout[j] == ' ')) {
			if (vowcheck(strout[j]) != 1) {
				//strout[j] = '&';
				while ((strout[j] >= 'A' && strout[j] <= 'Z') || (strout[j] >= 'a' && strout[j] <= 'z'))
				{
					strout[j] = ' ';
					j--;
				}
				while (strout[j] == ' ' && j != 0)
				{
					j--;
				}
			}
		}
	}
	strout[j] = 0;
	puts(strout);
}
