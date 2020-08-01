#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	int temp;
	int cnt =0;
	int digit;
	
	scanf("%d",&n);
	for(int i=1; i <=n ; i++)
	{
		temp = i;
		while(temp >0)
		{
			digit = temp % 10; // 1의 자리 분리 
			if(digit==3) cnt++;
			temp = temp/10;
		}
	}
	printf("%d\n",cnt);
	
	return 0;
	 
}

