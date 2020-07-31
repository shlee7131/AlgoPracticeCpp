#include <stdio.h>
int main()
{
	int i, j, n;
	
	int a[200]; //점수 
	int b[200]; //등수 
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		scanf("%d",&a[i]);
		b[i]=1;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[j]>a[i]) b[i]++;
		}
	}
	for(i=1;i<=n;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
