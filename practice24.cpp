#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n;
  cin >> n;
  bool num[101] = {false};
  int temp;
  int diff = 0;

  vector<int> vec;
  cin >> temp;
  vec.push_back(temp);
  
  for(int i = 1 ; i < n; i++)
  {
    cin >> temp;
    vec.push_back(temp);
    diff = abs(vec[i] - vec[i-1]);
    if (diff > n-1)
    {
      cout << "NO" << endl;
      return 0;
    }
    else
    {
      if ( num[diff] == true)
      {
        cout << "NO" << endl;
        return 0;
      }
      num[diff] = true;
    }
  }
  
  for(int i = 0 ; i < n; i++)
  {
    if(num[diff] == false)
    {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}
