#include <cstdio>
#include <algorithm>
const int maxn = 510;
const int INF = (1<<30)-1;
using namespace std;
struct Gas{
	double price;
	double dis;
}gas[maxn];
double Cmax, D, Davg;
int n;
bool cmp(Gas a, Gas b)
{
	return a.dis < b.dis;
}
int main()
{
	scanf("%lf%lf%lf%d",&Cmax, &D, &Davg, &n);
	for(int i=0; i<n; i++)
	{
		scanf("%lf%lf", &gas[i].price, &gas[i].dis);
	}
	gas[n].price = 0.0;
	gas[n].dis = D;
	sort(gas, gas+n+1, cmp);
	if(gas[0].dis!=0)
	{
		printf("The maximum travel distance = 0.00");
	}
	else
	{
		int now = 0;
		double MAX = Cmax*Davg, nowTank=0.0, cost = 0.0; 
		while(now<n)
		{
			int Mink=-1;
			double Minpri = INF;
			for(int i=now+1; i<=n&&gas[i].dis-gas[now].dis<=MAX; i++)
			{
				if(gas[i].price<Minpri)
				{
					Minpri = gas[i].price;
					Mink = i;
					if(Minpri<gas[now].price)
						break;
				}
			}
			if(Mink==-1)	break;
			double need = (gas[Mink].dis-gas[now].dis)/Davg;
			if(Minpri<gas[now].price)
			{
				if(nowTank<need)
				{
					cost += (need-nowTank)*gas[now].price;
					nowTank = 0;
				}
				else
				{
					nowTank -= need;
				}
			}
			else
			{
				cost += (Cmax - nowTank) * gas[now].price;
				nowTank = Cmax - need;
			}
			now = Mink;
		}
		if(now == n)
			printf("%.2f",cost);
		else
			printf("The maximum travel distance = %.2f\n",gas[now].dis+MAX);
	}
	
}
