
#include <bits/stdc++.h>
using namespace std;
//有两个整数，如果每个整数的约数和（除了它本身以外）等于对方，我们就称这对数是友好的。例如：
//9的约数和有：1+3=4
//4的约数和有：1+2=3
//所以9和4不是友好的。
//220的约数和有：1  2  4  5  10  11  20  22  44  55  110=284
//284的约数和有：1  2  4  71  142=220
//所以220和284是友好的。
//编写程序，判断两个数是否是友好数。
using ll=long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll a,b;
    cin>>a>>b;
    ll s1=1;
    for(ll i=2;i*i<=a;i++){
        if(a%i)continue;
        s1+=i;

        ll j=a/i;
        if(i==j)continue;
        s1+=j;
    }
    ll s2=1;
    for(ll i=2;i*i<=b;i++){
        if(b%i)continue;
        s2+=i;
        ll j=b/i;
        if(i==j)continue;//当b是完全平方数时，b/i=j,约数只有一个，但是加了两次，所以要去掉
        s2+=j;
    }
    //cout<<s1<<" "<<s2<<endl;
    if(s1==b&&s2==a)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return 0;
}
