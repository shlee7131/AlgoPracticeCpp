#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	int temp,j;
	int cnt2 = 0, cnt5 = 0; 
	scanf("%d",&n);
	for(int i = 2 ; i <= n; i++)
	{
		temp = i;
		j = 2;
		while(1)
		{
			if(temp%j==0)
			{
				if(j==2) cnt2++;
				else if (j==5) cnt5++;
				temp = temp/j;
			}
			else j++;
			if(temp==1) break;
		}
	}
	
	if(cnt2 < cnt5) printf("%d\n",cnt2);
	else printf("%d\n",cnt5);
	
	return 0;
}

