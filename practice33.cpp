#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int a[100];
	int n;
	int idx;
	int temp;
	int cnt = 0;
	
	scanf("%d",&n);
	for(int i = 0 ; i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0 ; i < n-1;i++){
		idx = i;
		for(int j = i +1; j < n;j++){
			if(a[j] > a[idx]) idx = j;
		}
		temp = a[i];
		a[i] = a[idx];
		a[idx] = temp;
	}
	for(int i = 1; i<n; i++){
		if(a[i-1] != a[i]) cnt++;
		if(cnt==2){
			printf("%d\n",a[i]);
			break;
		}
	}
	
	return 0;
}

