#include <stdio.h>
#include <vector>
//Vector Ȱ�� (ť)
 
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int d;
		
	vector<int> a;
	vector<int> b;
	//Vector �� ���� ���� 
	for(int i = 0 ; i < n; i++)
	{
		scanf("%d",&d);
		a.push_back(d);
	}
	//Vector �� ���� ���� 
	for(int i = 0 ; i < n; i++)
	{
		scanf("%d",&d);
		b.push_back(d);
	}
	//Vector�� ����� ���� �� 
	for(int i = 0; i < n; i++)
	{
		if(a[i] == b[i]) printf("D\n");
		else if(a[i] == 3 && b[i] == 2) printf("A\n");
		else if(a[i] == 2 && b[i] == 1) printf("A\n");
		else if(a[i] == 1 && b[i] == 3) printf("A\n");
		else printf("B\n");
	}
	
} 

