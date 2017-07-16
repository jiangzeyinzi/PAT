#include <cstdio>
#include <cstring>
#include <cstdlib>
double tmp = 0.0;
int isNum(char str[])
{
	int len = strlen(str);
	int numpoint = 0;
	int pos = 0;
	tmp = 0.0;
	if(str[0]!='-' && (str[0]<'0' || str[0]>'9'))
	{
		return 0;
	}
		
	for(int i=1; i<len; i++)
	{
		if(str[i]!='.' && (str[i]<'0' || str[i]>'9'))
			return 0;
		if(str[i]=='.')
		{
			pos = i;
			numpoint++;
		}
		if(numpoint>1)
			return 0;
	}
	if(len-pos>3 && pos!=0)
		return 0;
	if(pos==1 && str[0]=='-')
		return 0;
	tmp = atof(str);
	if(tmp<-1000 || tmp>1000)
		return 0;
	return 1;
	
}
int main()
{
	int N;
	scanf("%d",&N);
	double sum=0.0;
	int cnt=0;
	for(int i=0; i<N; i++)
	{
		char str[110];
		scanf("%s",str);
		int flag = isNum(str);
		if(flag)
		{
			cnt++;
			sum += tmp;
		}
		else
		{
			printf("ERROR: %s is not a legal number\n",str);
		}
	}
	if(cnt==0)
		printf("The average of 0 numbers is Undefined\n");
	else if(cnt==1)
		printf("The average of 1 number is %.2f",sum/cnt);
	else
		printf("The average of %d numbers is %.2f",cnt,sum/cnt);
		
}
