#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cstdlib>
using namespace std;
bool cmp(char a, char b)
{
	return a > b;
}
int main()
{
	int num;
	int dif=-1;
	scanf("%d",&num);
	do
	{
		char tmp1[5],tmp2[5],str[5];
		sprintf(str,"%04d",num);
		strcpy(tmp1, str);
		strcpy(tmp2, str);
		sort(tmp1, tmp1+4, cmp);
		sort(tmp2, tmp2+4);
		num = atoi(tmp1)-atoi(tmp2);
		dif = num;
		if(dif==0)
			printf("%s - %s = 0000\n",tmp1, tmp2);
		else
			printf("%s - %s = %04d\n",tmp1, tmp2, num);
	}
	while(num!=6174 && dif!=0);
}
