#include <stdio.h>
// ������ �� ��� ȸ�� ���ϱ� 
// 1081 -> 1, 0, 8, 1 => 4ȸ 

int main()
{
	int n;
	int arr[10] = {0};
	char s[101];
	scanf("%s",s);
	int max = -1;
	int flag = 0;
	
	for(int i = 0 ; s[i] != '\0'; i++)
	{
		arr[s[i]-48] += 1;
	}
	
	for(int j = 0 ; j < 10; j++)
	{
		if (max <= arr[j]) 
		{
			max = arr[j];	// max �� 
			flag = j;		// index ���� 
		}
	}
	printf("%d", flag);
} 
