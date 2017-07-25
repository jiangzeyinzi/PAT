#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
const int maxn = 10010;
const int maxtab = 110;
int n;
struct Per{
	int tt;
	int play;
	int vip;
}per[maxn]; 
struct Tab{
	int vip;
	int endTime;
}tab[maxtab]; 
queue<int> ord;
queue<int> very;
int pnum[maxtab];
int conv(int hh, int mm, int ss)
{
	return hh*3600+mm*60+ss;
}
bool cmp(Per a, Per b)
{
	return a.tt < b.tt;
}
int main()
{
	scanf("%d",&n);
	int st = conv(8,0,0);
	int ed = conv(21,0,0);
	int cnt = 0;
	for(int i=0; i<n; i++)
	{
		int h,m,s;
		scanf("%d:%d:%d%d%d",&h,&m,&s,&per[i].play,&per[i].vip);
		per[i].tt = conv(h,m,s);
		if(per[i].play>60)
			per[i].play = 60;
		if(per[i].tt<ed)
			cnt++;
	}
	sort(per, per+cnt, cmp);
	printf("\n");
	for(int i=0; i<cnt; i++)
	{
		if(per[i].vip==1)
			very.push(i);
		else
			ord.push(i);
		printf("%02d:%02d:%02d %d %d \n",per[i].tt/3600, per[i].tt/60%60,per[i].tt%60,per[i].play,per[i].vip);
	}
	int k, m;
	scanf("%d%d",&k,&m);
	for(int i=0; i<k; i++)
	{
		tab[i].endTime = st;
		tab[i].vip = 0;
	}
	for(int i=0; i<m; i++)
	{
		int v;
		scanf("%d",&v);
		tab[v].vip = 1;
	}
	for(int i=0; i<cnt; i++)
	{
		for(int j=0; j<k; j++)
		{
			if(tab[j].vip==1)
			{
				int now = very.front();
				int ser = tab[j].endTime;
				int wait = max(ser-per[now].tt, 0);
				tab[j].endTime += per[now].play;
				printf("%02d:%02d:%02d %02d:%02d:%02d %d\n",per[i].tt/3600, per[i].tt/60%60,per[i].tt%60,ser/3600,ser/60%60,ser%60,wait);

			}
			else
			{
				int now = ord.front();
				int ser = tab[j].endTime;
				int wait = max(ser-per[now].tt, 0);
				tab[j].endTime += per[now].play;
				printf("%02d:%02d:%02d %02d:%02d:%02d %d\n",per[i].tt/3600, per[i].tt/60%60,per[i].tt%60,ser/3600,ser/60%60,ser%60,wait);

			}
		}
	}
} 
