#include <cstdio>
const int maxn = 54;
int move[maxn+1];
int num[maxn+1];
char mp[maxn+1][5] = {"","S1","S2","S3","S4","S5","S6","S7","S8","S9","S10","S11","S12","S13",
"H1","H2","H3","H4","H5","H6","H7","H8","H9","H10","H11","H12","H13",
"C1","C2","C3","C4","C5","C6","C7","C8","C9","C10","C11","C12","C13",
"D1","D2","D3","D4","D5","D6","D7","D8","D9","D10","D11","D12","D13",
"J1","J2"};
void shuffle()
{
	int tmp[maxn+1];
	for(int i=1; i<=maxn; i++)
	{
		tmp[move[i]] = num[i]; 
	}
	for(int i=1; i<=maxn; i++)
		num[i] = tmp[i];
}

int main()
{
	int repeat;
	scanf("%d",&repeat);
	for(int i=1; i<=maxn; i++)
	{
		scanf("%d",&move[i]);
	}
	for(int i=1; i<=maxn; i++)
		num[i] = i;
	for(int i=0; i<repeat; i++)
	{
		shuffle();
	}
	for(int i=1; i<=maxn; i++)
	{
		if(i>1)
			printf(" ");
		printf("%s",mp[num[i]]);
	}
}
