#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int n,m;
vector <int> course[2510];
int Hash(char str[])
{
	int sum = 0;
	int i;
	for(i=0; i<3; i++)
		sum = sum*26 + (str[i]-'A');
	sum = sum*10 + (str[i]-'0');
	return sum;
}
void dehash(int a)
{
	char s[5];
	s[3] = a%10 + '0';
	a /= 10;
	for(int i = 2; i>=0; i--)
	{
		s[i] = a%26 + 'A';
		a /= 26;
	}
	s[4] = '\0';
	puts(s);
}
int main()
{
	scanf("%d%d",&n,&m);
	char name[5];
	for(int i=0; i<n; i++)
	{
		scanf("%s",name);
		int id = Hash(name);
		int kk;
		scanf("%d",&kk);
		for(int j=1; j<=kk; j++)
		{
			int tmp ;
			scanf("%d",&tmp);
			course[tmp].push_back(id);
		}
	}
	
	for(int i=1; i<=m; i++)
	{
		sort(course[i].begin(), course[i].end());
		printf("%d %d\n", i, course[i].size());
		for(vector<int>::iterator it=course[i].begin(); it!=course[i].end(); it++)
		{
			dehash(*it);
		}
	}
}
