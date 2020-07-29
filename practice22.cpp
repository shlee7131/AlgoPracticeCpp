#include <iostream>
#include <queue>

using namespace std;

int main() {
  int n,k;
  queue<int> q;
  
  cin >> n >> k;
  int end = k-1;
  
  
  int sum = 0;
  int num = 0;
  int dnum = 0;
  
  int max = -21470000;

  for(int i = 0 ; i < n; i++)
  {
      cin >> num;
      if( i > end)
      {
        dnum = q.front();
        q.pop();
        q.push(num);
        sum = sum - dnum + num;
        if (sum > max) max = sum;
      }
      else
      {
        q.push(num);
        sum += num;
      } 
  }
  
  cout << max;
}
