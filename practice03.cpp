#include <iostream>

using namespace std;


int main()
{
	int a;
	int result = 1;
	cin >> a;
	cout << "1";
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			result += i;
			cout << " + " << i;
		}
	}
	cout << " = " << result;

	return 0;
}