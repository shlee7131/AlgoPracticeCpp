#include <iostream>
using namespace std;
//입력되는 값들 중 가장 큰 차이 찾기 
int main()
{
	int n;
	int age;
	int min = 1000;
	int max = -1;
	
	cin >> n;
	
	for(int i =0; i < n; i++)
	{
		cin >> age;
		min = age < min ? age:min;
		max = age > max ? age:max;
	}
	
	cout << max - min;
	
	return 0;
}
