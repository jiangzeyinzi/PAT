#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;
const int maxn = 10010;
string num[maxn];
int n;
bool cmp (string a, string b)
{
	return a+b < b+a;
}
int main()
{
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		cin>>num[i];
	}
	sort(num, num+n, cmp);
	string ans;
	for(int i=0; i<n; i++)
		ans += num[i];
	while(ans[0]=='0')
	{
		ans.erase(ans.begin());
	}
	if(ans.size()==0)
		cout<<"0";
	else
		cout<<ans;
	
}
