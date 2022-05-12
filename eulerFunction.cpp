//2022/5/12
#include <bits/stdc++.h>
using namespace std;
//phi(n)=n*(1-1/p1)*(1-1/p2).....(1-pi) pi是n分解的质数
int Euler(int n){
    int p=2;
    int tot=n;
    while(n>1){
        if(n%p==0){
            tot/=p;
            tot*=p-1;
        }
        while(n%p==0){
            n/=p;
        }
        p++;
    }
    return tot;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    cout<<Euler(n)<<endl;
    return 0;
}
