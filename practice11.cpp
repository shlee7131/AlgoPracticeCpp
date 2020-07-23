#include <stdio.h>
// 숫자의 총 사용 회수 구하기 
// 1081 -> 1, 0, 8, 1 => 4회 

int main()
{
	int n;
	int cnt;
	scanf("%d",&n);
	for(int i = 1; i <=n; i++)
	{
		//자릿수에 따라 cnt가 1씩 증가
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
