#include <cstdio>
#include <cstring>
char hand[12][5];
char eye[12][5];
char mouse[12][5];
char s1[10000];
char s2[10000];
char s3[10000];

int main()
{
	gets(s1);
	gets(s2);
	gets(s3);
	int handn=0, eyen=0, mousen=0;
	int k=0;
	int i=0;
	for(i=0; i<strlen(s1); i++)
	{
		k=0;
		if(s1[i]=='[')
		{
			i++;
			for(;s1[i]!=']';i++)
			{
				hand[handn][k++] = s1[i];
			}
			handn++;			
		}
	}
	for(i=0; i<strlen(s2); i++)
	{
		k=0;
		if(s2[i]=='[')
		{
			i++;
			for(;s2[i]!=']';i++)
			{
				eye[eyen][k++] = s2[i];
			}
			eyen++;			
		}
	}
	for(i=0; i<strlen(s3); i++)
	{
		k=0;
		if(s3[i]=='[')
		{
			i++;
			for(;s3[i]!=']';i++)
			{
				mouse[mousen][k++] = s3[i];
			}
			mousen++;			
		}
	}
	
	int N;
	scanf("%d",&N);
	int n1,n2,n3,n4,n5;
	for(int i=0; i<N; i++)
	{
		scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
		if(n1>handn || n2>eyen || n3>mousen || n4>eyen || n5>handn)
			printf("Are you kidding me? @\\/@");
		else
		{
			printf("%s",hand[n1-1]);
			printf("(");
			printf("%s",eye[n2-1]);
			printf("%s",mouse[n3-1]);
			printf("%s",eye[n4-1]);
			printf(")");
			printf("%s\n",hand[n5-1]);
		}
	}
}
