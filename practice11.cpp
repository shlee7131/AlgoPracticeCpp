#include <stdio.h>
// ������ �� ��� ȸ�� ���ϱ� 
// 1081 -> 1, 0, 8, 1 => 4ȸ 

int main()
{
	int n;
	int cnt;
	scanf("%d",&n);
	for(int i = 1; i <=n; i++)
	{
		//�ڸ����� ���� cnt�� 1�� ����
		if ( i < 10){
			cnt += 1;
		}
		else if ( 10 <= i && i < 100)
		{
			cnt += 2;
		}
		else if ( 100 <= i && i < 1000)
		{
			cnt += 3;
		}
		else if ( 1000 <= i && i < 10000)
		{
			cnt += 4;
		}
		else
		{
			cnt += 5;
		}
	}
	printf("%d",cnt);
	return 0;
} 
