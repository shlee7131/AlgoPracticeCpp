#include <stdio.h>
// 범위 내의 소수 찾기 (소수의 배수 제외 방법)

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
		//i가 소수인지는 root i 까지만 확인해도 약수 찾기 가능 
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
