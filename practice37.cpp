#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int s;
	scanf("%d",&s);
	int n;
	scanf("%d", &n);
	int idx;
	int temp;
	
	int array[s] = {0,};
	int cache;
	
	for(int i = 0 ; i < n; i++){
		scanf("%d",&cache);
		if (i < s-1){
			idx = -1;
			for(int h = 0 ; h < i; h++){
				if (array[h] == cache) idx = h;
			}
			if(idx>0){
				temp = array[idx];
				for(int j = idx - 1; j > -1; j--){
					array[j+1] = array[j];
				}
				array[0] = temp;
			}
			else array[i] = cache;
		}
		else{
			idx = -1;
			for(int h = 0 ; h < s; h++){
				if (array[h] == cache) idx = h;
			}
			if(idx>0){
				temp = array[idx];
				for(int j = idx - 1; j > -1; j--){
					array[j+1] = array[j];
				}
				array[0] = temp;
			}
			else{
				for(int j = s-2; j>-1; j--){
					array[j+1] = array[j];
				}
				array[0] = cache;
			}
		}
	}
	
	for(int i = 0 ; i<s;i++){
		printf("%d ",array[i]);
	}
	
	return 0;
}

