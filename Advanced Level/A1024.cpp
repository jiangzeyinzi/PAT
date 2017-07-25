#include <cstdio>
#include <cstring>
struct bign{
	int d[1000];
	int len;
	bign()
	{
		memset(d, 0, sizeof(d));
		len = 0;
	}
}tmp, re;
char str[1000];
bign change(char str[])
{
	bign a;
	a.len = strlen(str);
	for(int i=0; i<a.len; i++)
	{
		a.d[i] = str[a.len-i-1]-'0'; 
	}
	return a;
}
void show(bign a)
{
	for(int i=a.len-1; i>=0; i--)
	{
		printf("%d",a.d[i]);
	}
}
bign reve(bign a)
{
	bign b;
	for(int i=0; i<a.len; i++)
	{
		b.d[i] = a.d[a.len-i-1];
	}
	return b;
}
bign add(bign a, bign b)
{
	bign c;
	int carry = 0;
	int len = a.len>b.len ? a.len : b.len;
	for(int i=0; i<len; i++)
	{
		int tmp = a.d[i]+b.d[i] +carry;
		c.d[c.len++] = tmp%10;
		carry = tmp/10;
	} 
	if(carry!=0)
	{
		c.d[c.len++] = carry%10;
	}
	return c;
}
bool isPal(bign a)
{
	for(int i=0; i<=a.len/2; i++)
	{
		if(a.d[i]!=a.d[a.len-i-1])
			return false;
	}
	return true;
}
int main()
{
	int k;
	scanf("%s%d",str, &k);
	tmp = change(str);
	int cnt = 0;
	do{
		if(isPal(tmp))
		{
			break;
		}
		else
		{
			re = reve(tmp);	
			tmp = add(re, tmp);
		}
		cnt++;
	}while(cnt<k);
	show(tmp);
	printf("\n%d",cnt);
} 
