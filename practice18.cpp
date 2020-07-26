#include <stdio.h>
//ANAGRAM

int main()
{
	int n, m;
	scanf("%d%d",&n,&m);
	int decibel;
	int seq = 0;
	int max = -1;	
	
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d",&decibel);
		if(decibel > m)
		{
			seq += 1;
			if(max < seq) max = seq;
		}
		else seq = 0;
	}
	
	printf("%d",max);
	
	
	
} 

