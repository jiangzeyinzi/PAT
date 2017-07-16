#include <cstdio>
#include <cstring>
char s1[13][5] = {"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
int main()
{
	char s2[5] = "jan";
	printf("%d",strstr(s1[1],s2));
}
