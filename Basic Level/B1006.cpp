#include <cstdio>
#include <cstring>
int main()
{
	int n;
	char arr[10];
	scanf("%d",&n);
	sprintf(arr, "%d" ,n);
	if(strlen(arr)==3)
	{
		for(int i=0; i<(arr[0]-'0'); i++)
			printf("B");
		for(int i=0; i<(arr[1]-'0'); i++)
			printf("S");
		for(int i=1; i<=(arr[2]-'0'); i++)
			printf("%d",i);
	}
	else if(strlen(arr)==2)
	{
		for(int i=0; i<(arr[0]-'0'); i++)
			printf("S");
		for(int i=1; i<=(arr[1]-'0'); i++)
			printf("%d",i);
	}
	else
	{
		for(int i=1; i<=(arr[0]-'0'); i++)
			printf("%d",i);
	}
	return 0;
}
