#include<bits/stdc++.h>
using namespace std;
bool palin(string s, int i, int j)
{
    if (i>j) 
        return true;
    return (s[i]==s[j]) && palin(s, i+1, j-1);
}
int main()
{
    string s;
    cin>>s;
    if(palin(s, 0, s.length()-1))
    cout<<"plaindrome";
    else cout<<"not palindrome";
}
