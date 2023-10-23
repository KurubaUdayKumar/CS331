#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, sum, value=0, result=0;
  cin>>n>>sum;
  int a[n];
  for(int i=0; i<n; i++)
  cin>>a[i];
  unordered_map<int, int> pair;
  for(int i=0; i<n; i++)
  {
    if(sum>a[i];
    {
      value=sum-a[i];
      if(pair[value]>0)
      result+=pair[value];
      pair[a[i]]++;
    }
  }
  cout<<"result: "<<result;
}
