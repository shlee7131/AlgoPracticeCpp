#include <stdio.h>
#include <vector>
#include <algorithm>

//Two-Point Algorithm

using namespace std;

int main(){
	int a, b = 1, cnt = 0, temp, i;
	scanf("%d", &a);
	temp = a;
	a--;
	// 3�� ¥�� ���� �� = a + 1, a + 2, a + 3
	// 4�� ¥�� ���� �� = a + 1, a + 2, a + 3, a + 4
	// ... ���� ���� ������ ���ӿ� �����̴� 
	while(a>0){
		b++;
		a = a -b;
		if(a%b==0){
			for(i = 1; i < b; i++){
				printf("%d + ",(a/b)+i);
			}
			printf("%d = %d\n",(a/b)+i,temp);
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}

