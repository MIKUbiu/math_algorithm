//2022/5/23
#include <bits/stdc++.h>

using namespace std;
const int maxn = 1E6;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<int>v;
    int n;
    cin>>n;
    v.push_back(1);
    for(int i=1;i<=n;i++){
        int k=0;
        for(int j=0;j<v.size();j++){
            int res=v[j]*i+k;
            v[j]=res%10;//当前位数
            k=res/10;//保存进位
        }
       // cerr<<k<<" ";
       //因为进位每次都是在最高位拓展位数，所以放在上面for循环的外面
        while(k!=0) {
            v.push_back(k%10);
            //cerr<<k<<" ";
            k /= 10;
            //cerr<<k<<endl;
//          v.resize(v.size() + 1);//不用再加容器大小，因为push_back已经添加过了
        }
    }
//    for(auto e:v){
//        cerr<<e<<" ";
//    }
//    copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));
    for(auto it=v.rbegin();it!=v.rend();it++){
        cout<<*it;
    }
    return 0;
}
