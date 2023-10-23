//factorial

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, fact=1;
    cin>>n;
    if(n<1)
    cout<<"negative number fatorial is does not exist"<<endl;
    else
    {
        for(int i=1; i<=n; i++)
        fact*=i;
    }
    cout<<fact<<endl;
}
