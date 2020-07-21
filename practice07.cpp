#include <stdio.h>

//입력 받은 문자열의 char -> int 변환 후 10 배수 
int main()
{
	char a[101];
	char b[101];
	int cnt = 0;
	
	//scanf("%s",&a); 중간에 개행이 있기 때문에 공백 포함 문자열 읽을 수 없다
	gets(a);
	for(int i = 0 ; a[i] != '\0';i++)
	{
		if(a[i] != ' ')
		{
			if (a[i] >= 65 && a[i] <= 90)
			{
				b[cnt++] = a[i] + 32;
			}
			else
			{
				b[cnt++] = a[i];
			}
		}
	}
	b[cnt] = '\0';
	printf("%s",b);
}
