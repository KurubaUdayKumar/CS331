#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	n=n-1;//to get the values excluding 1
	int ans = n+floor(0.5+sqrt(n));
	cout<<ans;
}
