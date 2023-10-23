#include<bits/stdc++.h>
using namespace std;

int solution(int N,int K){
    int hdigit=N/100;
    int tdigit=(N-(hdigit*100))/10;
    int odigit=N%10;

    int hsum=(9-hdigit);
    if(hsum<K){
        hdigit=hdigit+hsum;
        K=K-hsum;
    }
    else{
        hdigit=hdigit+K;
        cout<<hdigit<<endl;
        return (hdigit*100+tdigit*10+odigit);
    }
    int tsum=(9-tdigit);
    if(tsum<K){
        tdigit=tdigit+tsum;
        K=K-tsum;
    }
    else{
        tdigit=tdigit+K;
        return (hdigit*100+tdigit*10+odigit);
    }
    int osum=(9-odigit);
    if(osum<K){
        odigit=odigit+osum;
        K=K-osum;
    }
    else{
        odigit=odigit+K;
        return (hdigit*100+tdigit*10+odigit);
    }
    return (hdigit*100+tdigit*10+odigit);



}

int main(){
    int N;
    int K;
    cin>>N>>K;
    int res=solution(N,K);
    cout<<res;

    return 0;

}
