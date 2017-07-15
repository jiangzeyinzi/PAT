#include <cstdio>
#include <cmath>
struct Fraction{
	int up, down;
};
int gcd(int a, int b)
{
	return !b ? a : gcd(b, a%b);
	//gcd(a,b)=gcd(b,a%b);
	//当a<b时，a与b交换；要a>b,这样a%b的数才大于0 
}
Fraction reduction(Fraction result)
{
	if(result.down<0)
	{
		result.up = -result.up;
		result.down = -result.down;
	}
	if(result.up==0)
	{
		result.down = 1;
	}
	else
	{
		int d = gcd(abs(result.up),abs(result.down));
		result.up /= d;
		result.down /= d;
	}
	return result;
}
Fraction add(Fraction f1, Fraction f2)
{
	Fraction result;
	result.up = f1.up*f2.down + f2.up*f1.down;
	result.down = f1.down*f2.down;
	return reduction(result);
}
Fraction minu(Fraction f1, Fraction f2)
{
	Fraction result;
	result.up = f1.up*f2.down-f2.up*f1.down;
	result.down = f1.down*f2.down;
	return reduction(result);
}
Fraction multi(Fraction f1, Fraction f2)
{
	Fraction result;
	result.up = f1.up*f2.up;
	result.down = f1.down*f2.down;
	return reduction(result);
}
Fraction divide(Fraction f1, Fraction f2)
{
	Fraction result;
	result.up = f1.up*f2.down;
	result.down = f1.down*f2.up;
	return reduction(result);
}
Fraction showResult(Fraction r)
{
	r = reduction(r);
	if(r.down==1)
		printf("%d\n",r.up);
	else if(abs(r.up)>r.down)
		printf("%d %d/%d\n",r.up/r.down,abs(r.up)%r.down, r.down);
	else
		printf("%d/%d\n",r.up,r.down);
}
int main()
{
	Fraction a, b;
	a.up = 18;
	a.down = 40;
	b.up = 2;
	b.down = 3;
	printf("up/down: %d/%d\n",a.up, a.down);
	printf("up/down: %d/%d\n",b.up, b.down);	
	printf("gcd: %d\n",gcd(12,40));
	printf("reduction: %d/%d\n",reduction(a).up, reduction(a).down);
	printf("add: %d/%d\n",add(a,b).up, add(a,b).down);
	showResult(add(a,b));
	printf("minu: %d/%d\n",minu(a,b).up, minu(a,b).down);
	printf("multi: %d/%d\n",multi(a,b).up, multi(a,b).down);
	printf("divide: %d/%d\n",divide(a,b).up, divide(a,b).down);
}
