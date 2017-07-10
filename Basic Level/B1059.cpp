#include <cstdio>
#include <cmath>
const int maxn = 10010;
struct Stu{
	int rank;
	int flag;
	Stu(){rank=0;flag=0;}
}stu[maxn];
int isPrime(int a)
{
	for(int i=2; i<=sqrt(a); i++)
	{
		if(a%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int N;
	scanf("%d",&N);
	int tmp;
	for(int i=0; i<N; i++)
	{
		scanf("%d",&tmp);
		stu[tmp].rank = i+1;
		stu[tmp].flag = 0;
	}
	int K;
	scanf("%d",&K);
	for(int i=0; i<K; i++)
	{
		scanf("%d",&tmp);
		if(stu[tmp].rank==0)
			printf("%04d: Are you kidding?\n",tmp);
		else if(stu[tmp].flag==1)
			printf("%04d: Checked\n",tmp);
		else if(stu[tmp].rank==1)
		{
			stu[tmp].flag = 1;
			printf("%04d: Mystery Award\n",tmp);
		}	
		else if(isPrime(stu[tmp].rank))
		{
			stu[tmp].flag = 1;
			printf("%04d: Minion\n", tmp);
		}
		else 
		{
			stu[tmp].flag = 1;
			printf("%04d: Chocolate\n", tmp);
		}
			
	}
}
