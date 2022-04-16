#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;
const int maxn = 1E6;
int primeList[maxn];
void prime_list(int n) {
	fill(primeList, end(primeList), 1);
	primeList[0] = 0; primeList[1] = 0;
	for (int i = 2; i * i <=n; i++) {
		if (primeList[i]) {
			for(int j = i*i; j <= n; j += i)//j=i*i而不是2*i是因为被2整除的数早已被i=2时删除掉，后续同理
				primeList[j] = 0;
		}
	}
}
bool reverseNumber(int n) {
	if (n < 0 || (n % 10 == 0 && n != 0))return false;//n最后一位为0时必不可能是回文数，除0外没有以0开头的数字
	int reNum = 0;
	while (n > reNum) {
		reNum = reNum * 10 + n % 10;
		n /= 10;
	}
	if (reNum == n || reNum / 10 == n)return true;//偶数时reNum=n;奇数时如12321中间的3不用管12=21
	else return false;//不加返回错误默认返回真
}
bool sevenTime(int n) {
	int sum = 0;
	do {
		sum += n % 10;
	} while (n /= 10);
	if (sum % 7 == 0)return true;
	else return false;
}
int main() {
	set<int>s;
	prime_list(maxn);
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		if (primeList[i]) {
			s.insert(i);
			cerr << i <<" ";
			continue;
		}
		else if (reverseNumber(i)) {
			s.insert(i);
			cerr <<"rever:"<<i << " ";
			continue;
		}
		else if (sevenTime(i)) {
			s.insert(i);
			cerr << i << " ";
			continue;
		}
	}
	cout << s.size() << endl;
	//copy(begin(primeList), end(primeList), ostream_iterator<int>(cout, " "));//输出数组的数
	return 0;
}
