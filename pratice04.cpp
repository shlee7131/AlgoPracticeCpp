#include <iostream>
using namespace std;
//�ԷµǴ� ���� �� ���� ū ���� ã�� 
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
