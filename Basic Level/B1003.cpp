#include <cstdio>N
#include <cstring>
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int j=0; j<n; j++)
	{
		char str[110];
		int num_a1=0, num_a2=0, num_a3=0, flag1=0, flag2=0;
		gets(str);
		for(int i=0; i<strlen(str); i++)
		{
			if(str[i]=='P')
				flag1++;
			else if(str[i]=='T')
				flag2++;
			else if(str[i]=='A')
			{
				if(flag1==0 && flag2==0)
					num_a1++;
				else if(flag1==1 && flag2==0)
					num_a2++;
				else if(flag1==1 && flag2==1)
					num_a3++;
			}
			else
				break;
		}
		//printf("%d %d %d",num_a1,num_a2,num_a3);
		if(flag1==1 && flag2==1 && num_a2>0 && (num_a3 == num_a1 * num_a2))
			printf("YES\n");
		else
			printf("NO\n");		
	}
	return 0;
}
