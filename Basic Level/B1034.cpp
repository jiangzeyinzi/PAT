#include <cstdio>
#include <algorithm>
using namespace std;
struct Fr{
	long long up;
	long long down;
}; 
long long gcd(long long a, long long b)
{
	return !b ? a : gcd(b, a%b);
}
Fr redu(Fr a)
{
	if(a.down<0)
	{
		a.up = -a.up;
		a.down = -a.down;
	}
	if(a.up==0)
		a.down = 1;
	else
	{
		int d = gcd(abs(a.up), abs(a.down));
		a.up /= d;
		a.down /= d;
	}
	return a;
}
void show(Fr a)
{
	a = redu(a);
	if(a.up<0)
		printf("(");
	if(a.down==1)
		printf("%lld",a.up);
	else if(abs(a.up)>abs(a.down))
		printf("%lld %lld/%lld",a.up/a.down, abs(a.up%a.down), a.down);
	else
		printf("%lld/%lld",a.up,a.down);
	if(a.up<0)
		printf(")");
}
Fr add(Fr a, Fr b)
{
	Fr c;
	c.up = a.up*b.down+a.down*b.up;
	c.down = a.down*b.down;
	return redu(c);
}
Fr minu(Fr a, Fr b)
{
	Fr c;
	c.up = a.up*b.down-a.down*b.up;
	c.down = a.down*b.down;
	return redu(c);
}
Fr multi(Fr a, Fr b)
{
	Fr c;
	c.up = a.up*b.up;
	c.down = a.down*b.down;
	return redu(c);
}
Fr div(Fr a, Fr b)
{
	Fr c;
	c.up = a.up*b.down;
	c.down = a.down*b.up;
	return redu(c);
}
int main()
{
	Fr a, b;
	scanf("%lld/%lld%lld/%lld",&a.up,&a.down,&b.up,&b.down);
	show(a);
	printf(" + ");
	show(b);
	printf(" = ");
	show(add(a,b));
	printf("\n");
	
	show(a);
	printf(" - ");
	show(b);
	printf(" = ");
	show(minu(a,b));
	printf("\n");
	
	show(a);
	printf(" * ");
	show(b);
	printf(" = ");
	show(multi(a,b));
	printf("\n");
	
	show(a);
	printf(" / ");
	show(b);
	printf(" = ");
	if(b.up==0)
		printf("Inf");
	else
		show(div(a,b));
	return 0;
}
