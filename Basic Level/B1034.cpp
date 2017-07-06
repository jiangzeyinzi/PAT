#include <cstdio>
struct Fen{
	int zi;
	int mu;
}fen[2];
void pr(Fen a)
{
	if(a.zi * a.mu < 0)
		printf("(");
	if(a.zi % a.mu == 0)
		printf("%d",a.zi/a.mu);
	else if(a.zi<a.mu)
		printf("%d/%d",a.zi,a.mu);
		
	if(a.zi * a.mu < 0)
		printf(")");
}
Fen tong(Fen &a, Fen &b)
{
	a.zi *= b.mu;
	a.mu *= b.mu;
	b.zi *= a.mu;
	b.mu *= a.mu;
}
void add(Fen a, Fen b)
{
	pr(a);
	printf(" + ");
	pr(b);
	printf(" = ");
	tong(a,b);
	
	
}

int main()
{
	scanf("%d/%d %d/%d",&fen[0].zi,&fen[0].mu,&fen[1].zi,&fen[1].mu);
	add(fen[0],fen[1]);
	//min(fen[0],fen[1]);
	//mul(fen[0],fen[1]);
	//div(fen[0],fen[1]);
}
