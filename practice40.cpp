#include <stdio.h>
#include <vector>
#include <algorithm>

//Two-Point Algorithm

using namespace std;
int a[101], b[101], c[101];
int main(){
	int n;
	int m;
	int p1 = 0, p2 = 0 , p3 = 0;
	scanf("%d",&n);
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	
	//algorithm¿¡ Æ÷ÇÔ 
	sort(a.begin(),a.end());
	
	scanf("%d",&m);
	vector<int> b(m), c(n+m);
	for(int i = 0 ; i < m ; i++){
		scanf("%d",&b[i]);
	}
	sort(b.begin(),b.end());
	
	while(p1<n && p2<m){
		if(a[p1]==b[p2]){
			c[p3++] = a[p1++];
			p2++;
		}
		else if(a[p1]<b[p2]) p1++;
		else p2++;
	}
	for(int i = 0 ; i < p3; i++){
		printf("%d",c[i]);
	}
	return 0;
}

