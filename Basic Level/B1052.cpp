#include <cstdio>
#include <cstring>
char hand[15][8];
char eye[15][8];
char mouse[15][8];
char s1[10010];
char s2[10010];
char s3[10010];

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
			while(s1[i]!=']')
				hand[handn][k++] = s1[i++];
			handn++;			
		}
	}
	for(i=0; i<strlen(s2); i++)
	{
		k=0;
		if(s2[i]=='[')
		{
			i++;
			while(s2[i]!=']')
				eye[eyen][k++] = s2[i++];
			eyen++;		
		}
	}
	for(i=0; i<strlen(s3); i++)
	{
		k=0;
		if(s3[i]=='[')
		{
			i++;
			while(s3[i]!=']')
				mouse[mousen][k++] = s3[i++];
			mousen++;			
		}
	}
	
	int N;
	scanf("%d",&N);
	int n1,n2,n3,n4,n5;
	for(int i=0; i<N; i++)
	{
		scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
		if(n1>handn || n2>eyen || n3>mousen || n4>eyen || n5>handn || n1<=0 || n2<=0 || n3<=0 || n4<=0 || n5<=0)
			printf("Are you kidding me? @\\/@\n");
		else
		{
			printf("%s(%s%s%s)%s\n",hand[n1-1],eye[n2-1],mouse[n3-1],eye[n4-1],hand[n5-1]);
		}
	}
}
