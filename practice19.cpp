#include <stdio.h>
//stack È°¿ë


typedef struct Stack
{
	int head;
	int num[101];
} Height;


int main()
{
	int n;
	Height array;
	array.head = -1;
	scanf("%d",&n);
	int height;
	int max = -1;
	int cnt = 0;
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d",&height);
		array.head += 1;
		array.num[array.head] = height;
	}
	
	for(int j = array.head; j >= 0 ; j--)
	{
		if (max < array.num[j])
		{
			max = array.num[j];
			cnt += 1;
		}
	}
	printf("%d",cnt-1);
	
} 

