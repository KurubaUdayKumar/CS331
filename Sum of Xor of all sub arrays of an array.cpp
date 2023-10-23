#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int sum=0;
    for(int i=0; i<n; i++) 
    {
        for(int j=i; j<n; j++) 
        {
            int zor=0;
            for(int k=i; k<=j; k++)
            zor^=a[k];
            sum+=zor;
        }
    }
    cout<<sum<< endl;
}


//Different Method//

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n, sum=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++) 
    {
        int zor=0;
        for(int j=i; j<n; j++) 
        {
            zor=zor^a[j];
            sum+=zor;    
        }
    }
    cout<<sum<< endl;
}
