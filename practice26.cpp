#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int cnt = 0;
	int n;
	scanf("%d", &n);
	vector<int> a(n+1);
	
	for(int i = 1; i <= n; i++)
	{
		scanf("%d",&a[i]); // º¤ÅÍ ÀÎµ¦½º¸¦ È°¿ë ÀÔ·Â 
	}
	printf("1 ");
	for(int i=2;i <= n; i++)
	{
		cnt = 0;
		for(int j = i-1; j >= 1; j--)
		{
			if(a[j]>=a[i]) cnt++;
		}
		printf("%d ",cnt + 1);
	}

	return 0;	
}

