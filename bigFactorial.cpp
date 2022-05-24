//2022/5/23
#include <bits/stdc++.h>

using namespace std;
const int maxn = 1E6;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int a,b,c;
    for(int i=1;i<1000;i++){
        for(int j=i;j<=1000-i;j++){
            for(int k=j;k<=1000-i-j;k++){//小于等于i+j+k是有可能等于1000的
                if(i+j+k>1000)continue;
                if(i*i+j*j==k*k)cout<<i<<" "<<j<<" "<<k<<endl;
            }
        }
    }
    return 0;
}
