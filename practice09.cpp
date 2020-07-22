#include <stdio.h>
// '1초' 안에 약수를 구하기 
//  n 이 3만 이상이면 1초를 넘어간다 
int cnt[50001];

int main()
{
	int n, i, j;
	scanf("%d",&n);
	for(i = 1; i<=n; i++)
	{
		for(j = i; j<=n; j=j+i)
		{
			cnt[j]++;
		}
	}
	for(i = 1; i<=n; i++)
	{
		printf("%d ",cnt[i]);
	}
	
	return 0;
}
