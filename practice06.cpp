#include <stdio.h>

//�Է� ���� ���ڿ��� char -> int ��ȯ �� 10 ��� 
int main()
{
	char a[51];
	int num= 0, count = 0;
	//input example :  
	scanf("%s",a);
	// ASCII �ѹ� A = 65 ~ Z = 90, a = 97 ~ z = 122 , 0 = 48 ~ 9 = 57
	for(int i = 0; i < 51; i++)	{
		if (a[i] == '\n') break;
		if (a[i] <= 57 && a[i] >= 48) num = num * 10 + (a[i]-48);
	 } 
	
	for(int i = 1 ; i <= num ; i++)
	{
		if (num % i == 0 ) count += 1;
	}
	printf("%d\n",num);
	printf("%d",count);
	return 0;
}
