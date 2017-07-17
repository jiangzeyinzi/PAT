#include <cstdio>
#include <cstring>
char s1[13][5] = {"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
int main()
{
	char s2[5] = "jan";
	//printf("%d",strstr(s1[1],s2));
	char b[15] = "qqq";
	char a[12] = "qqq";
	if(a==b)
		printf("=");
	else if(a>b)
		printf("a>b a:%d b:%d",a,b);
	else
		printf("a<b a:%d b:%d",a,b);	
}
