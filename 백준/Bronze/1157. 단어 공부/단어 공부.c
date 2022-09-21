#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[1000001];
    int alpa[26] = {0};
    
    scanf("%s", str);

    int length = strlen(str);
    for (int i = 0; i < length; i++)
	{
		if (str[i] > 90)
		{
			str[i] -= 32;
		}
		alpa[str[i] - 65]++;
	}

	char ans;
	int max = 0;	

	for (int i = 0; i < 26; i++)
	{
		if (alpa[i] == max)
		{
			ans = '?';
		}
		else if (alpa[i] > max)
		{
			max = alpa[i];
			ans = 65 + i;
		}
	}
	printf("%c", ans);




    return 0;
}