#include <stdio.h>

// ���� ������, �Ҽ� ���� 

int reverse(int x) // ���� ������ 
{
	int re = 0;
	while(x>0)
	{
		re = re * 10 + x%10;	// ������ * 10 + ����� 1�� �ڸ� �� 
		x /= 10;
	}
	return re;
}

bool isPrime(int x)
{
	if (x == 1) return false; // 1�� �Ҽ��� �ƴϴ� 

	for(int i = 2; i < x; i++) // �Ҽ� 1, 2 �� ���� �� Ž��(���� ó��) 
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
