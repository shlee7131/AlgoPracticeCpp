#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int a[101];
	int n;
	int key;
	int j;
	scanf("%d",&n);
	for(int i = 0 ; i < n; i++){
		scanf("%d",&a[i]);
	}
	
	for(int i = 1 ; i< n; i++){
		key = a[i];
		for(j = i - 1 ; j > -1 && a[j] > key; j--){
			a[j+1] = a[j];
		}
		a[j+1] = key;
	}
	
	for(int i = 0 ; i < n ;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
	
}

