#include <stdio.h>
#include <vector>
//Vector 활용 (큐)
 
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int d;
		
	vector<int> a;
	vector<int> b;
	//Vector 에 정보 저장 
	for(int i = 0 ; i < n; i++)
	{
		scanf("%d",&d);
		a.push_back(d);
	}
	//Vector 에 정보 저장 
	for(int i = 0 ; i < n; i++)
	{
		scanf("%d",&d);
		b.push_back(d);
	}
	//Vector에 저장된 정보 비교 
	for(int i = 0; i < n; i++)
	{
		if(a[i] == b[i]) printf("D\n");
		else if(a[i] == 3 && b[i] == 2) printf("A\n");
		else if(a[i] == 2 && b[i] == 1) printf("A\n");
		else if(a[i] == 1 && b[i] == 3) printf("A\n");
		else printf("B\n");
	}
	
} 

