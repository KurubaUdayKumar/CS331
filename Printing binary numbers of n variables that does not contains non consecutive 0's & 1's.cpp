#include<bits/stdc++.h>
using namespace std;
void binary(int n, string s)
{
    if(s.length()==n)
    {
        cout<<s<<endl;
        return;
    }
    if(s.empty()==1 || s.back()!='0')
    binary(n,s+"0");
    if(s.empty()==1 || s.back()!='1')
    binary(n,s+"1");
}
int main()
{
    int n;
    cin>>n;
    binary(n,"");
}

