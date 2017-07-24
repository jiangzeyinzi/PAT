#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
struct Win{
	int endTime, popTime;
	queue<int> q;
}win[20];
const int INF = (1<<30)-1;
int ans[1010], Time[1010];
int hm2m(int hh, int ss)
{
	return 60*hh+ss;
}
int main()
{
	int n,m,k,Q;
	scanf("%d%d%d%d",&n, &m, &k, &Q);
	for(int i=0; i<k; i++)
	{
		scanf("%d",&Time[i]);
	}
	for(int i=0; i<n; i++)
	{
		win[i].endTime = win[i].popTime = hm2m(8,0);
	}
	int idx=0;
	for(int i=0; i<min(n*m, k); i++)
	{
		win[idx%n].q.push(idx);
		win[idx%n].endTime += Time[idx];
		if(idx<n)
			win[idx].popTime = Time[idx];
		ans[idx] = win[idx%n].endTime;
		idx++;
	}
	for(; idx<k; idx++)
	{
		int minidx=0, minpopTime = INF; 
		for(int i=0; i<n; i++)
		{
			if(win[i].popTime<minpopTime)
			{
				minpopTime = win[i].popTime;
				minidx = i;
			}
		}
		win[minidx].q.pop();
		int front = win[minidx].q.front();
		win[minidx].popTime += Time[front];  
		win[minidx].q.push(idx);
		win[minidx].endTime += Time[idx];
		ans[idx] = win[minidx].endTime; 
	}
	for(int i=0; i<Q; i++)
	{
		int tmp;
		scanf("%d",&tmp);
		if(ans[tmp-1]-Time[tmp-1]<hm2m(17,0))
			printf("%02d:%02d\n",ans[tmp-1]/60, ans[tmp-1]%60);
		else
			printf("Sorry\n");
		
			
	}
}
