#include <iostream> 

using namespace std;

int main()
{
  int n;
  int num;
  int temp = 0;
  int cnt = 0;
  int comp = 0;
  int max = -1;
  cin >> n;
  for(int i = 0 ; i < n; i++)
  {
    cin >> num;
    if (temp <= num)
    {
      cnt += 1;
      comp = cnt;
    }
    else
    {
      comp = cnt;
      cnt = 1;
    }
    if(max < comp) max = comp;
    temp = num;
  }
  cout << max;

}
