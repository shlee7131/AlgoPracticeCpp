#include <stdio.h>

// 숫자 뒤집기, 소수 검증 

int reverse(int x) // 숫자 뒤집기 
{
	int re = 0;
	while(x>0)
	{
		re = re * 10 + x%10;	// 기존값 * 10 + 대상의 1의 자리 수 
		x /= 10;
	}
	return re;
}

bool isPrime(int x)
{
	if (x == 1) return false; // 1은 소수가 아니다 

	for(int i = 2; i < x; i++) // 소수 1, 2 를 제외 후 탐색(예외 처리) 
	{
		if( x % i == 0) return false;
	}
	return true;
}

int main()
{
	int n;	
	scanf("%d",&n);
	
	int d;
	int newNumber = 0;
	for(int i = 0 ; i < n;i++)
	{
		scanf("%d",&d);
		newNumber = reverse(d);
		if(isPrime(newNumber)) printf("%d ",newNumber);
	}
	return 0;
} 
