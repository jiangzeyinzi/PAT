#include <cstdio>
#include <set>
#include <cstdlib>
using namespace std;
set <int> arr;
int fri(int a)
{
	int sum = 0;
	while(a>0)
	{
		sum += a%10;
		a = a/10;
	}
	return sum;
}
int main()
{
	int N;
	scanf("%d",&N);
	int tmp;
	for(int i=0; i<N; i++)
	{
		scanf("%d",&tmp);
		int f = fri(tmp);
		arr.insert(f);
	}
	
	for(set<int>::iterator it=arr.begin(); it!=arr.end(); it++)
	{
		if(it!=arr.begin())
			printf(" ");
		else
			printf("%d\n",arr.size());
		printf("%d",*it);
	}
}
