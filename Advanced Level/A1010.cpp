#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
const int maxn = 15;
//char s[36] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
string s = "0123456789abcdefghijklmnopqrstuvwxyz";
int toDec(int rad, char str[])
{
	int pro = 1;
	int x = 0;
	for(int i=0; str[i]; i++)
	{
		int tmp = s.find(str[i]);
		x += tmp*pro;
		pro = pro*rad; 
	}
	return x;
}
int binarySearch(char str[], int x, int left, int right)
{
	int mid;
	while(left<=right)
	{
		mid = (left+right)/2;
		int y = toDec(mid, str);
		//printf("left:%d right:%d mid:%d x:%d y:%d\n",left, right, mid, x, y);
		if(x==y)
			return mid;
		else if(x<y)
			right = mid -1;
		else
			left = mid + 1;
	}
	return -1;
}

int main()
{
	char n1[maxn],n2[maxn];  
	int tag, rad;
	scanf("%s%s%d%d",n1,n2,&tag,&rad);
	if(tag==2)
		swap(n1, n2);
	reverse(n1, n1+strlen(n1));
	reverse(n2, n2+strlen(n2));
	int x = toDec(rad, n1);
	int k = -1;
	for(int i=1; i<=x; i++)
	{
		int y = toDec(i, n2);
		if(x==y)
		{
			k = i;
			break;
		}
	}
	if(k!=-1)
		printf("%d",k);
	else
		printf("Impossible");

}
