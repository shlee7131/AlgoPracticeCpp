#include <stdio.h>

//�Է� ���� ���ڿ��� char -> int ��ȯ �� 10 ��� 
int main()
{
	char a[101];
	char b[101];
	int cnt = 0;
	
	//scanf("%s",&a); �߰��� ������ �ֱ� ������ ���� ���� ���ڿ� ���� �� ����
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
