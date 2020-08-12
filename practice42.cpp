#include <stdio.h>
#include <vector>
#include <algorithm>

//Two-Point Algorithm

using namespace std;

int main(){
	int n, m;
	scanf("%d",&n);
	scanf("%d",&m);
	vector<int> arr(n);
	
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&arr[i]);
	}
	
	sort(arr.begin(),arr.end());

	for(int i = 0 ; i < n ; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	int p = n/2;
	int temp = n;
	while(1){
		temp /= 2;
		if (arr[p] == m){
			printf("%d",p+1);
			break;
		}
		else if ( arr[p] > m){
			p /= 2;
		}
		else {
			p += p + (m-p) /2;
		}
	}
	return 0;
}

