#include <stdio.h>
// ���� ���� �Ҽ� ã�� (�Ҽ��� ��� ���� ���)

int main()
{
	int n;
	scanf("%d",&n);
	bool arr[200001] = {false};
	int flag;
	int cnt = 0;
	
	for(int i = 2; i<=n;i++)
	{
		flag = 1;
		//i�� �Ҽ������� root i ������ Ȯ���ص� ��� ã�� ���� 
		for(int j =2; j*j <= i; j++) 
		{
			if(i%j==0)
			{
				flag = 0;
				break;
			}
		}
		if(flag == 1) cnt++;
	}
	
	printf("%d",cnt);
	
} 
