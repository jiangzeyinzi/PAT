#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int mp[13] = {'0','1','2','3','4','5','6','7','8','9','A','B','C'};
int conv(char s)
{
	if(s>='0' && s<='9')
		return s-'0';
	else
		return s-'A'+10;
}
int main()
{
	int a[3];
	char b[5];
	fill(b, b+5, '0');
	int idx = 0;
	scanf("%d%d%d",&a[0],&a[1],&a[2]);
	printf("#");
	for(int i=0; i<3; i++)
	{
		//printf("sum:%d ",a[i]);
		idx = 0;
		do{
			b[idx++] = mp[a[i]%13];
			a[i] /= 13;
		}while(a[i]!=0);
	
		printf("%c%c",b[1],b[0]);
	}
}
