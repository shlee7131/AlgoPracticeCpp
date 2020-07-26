#include <stdio.h>
//ANAGRAM

int main()
{
	int n;
	scanf("%d",&n);
	int qst;
	int res;
	int ans;
	
	
	for(int i = 0 ; i <n ; i++)
	{
		scanf("%d%d",&qst,&res);		
		ans = ((1 + qst) * qst)/ 2;
		if (res != ans){
			printf("NO\n");
		}
		else printf("YES\n");
	}
} 

