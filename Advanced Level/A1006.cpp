#include <cstdio>
const int MAXN = 1000100;
struct Stu{
	char id[20];
	char in[15];
	char out[15];
}stu[MAXN];
bool isEarly(Stu a, Stu b)
{
	int h1, m1, s1, h2, m2, s2;
	sscanf(a.in, "%d:%d:%d", &h1, &m1, &s1);
	sscanf(b.in, "%d:%d:%d", &h2, &m2, &s2);
	//printf("%d %d %d %d %d %d",h1, m1, s1, h2, m2, s2);
	//printf("\n");
	if(h1<h2 || (h1==h2 && m1<m2) || (h1==h2 && m1==m2 && s1<s2))
		return false;
	else 
		return true;
}
bool isLate(Stu a, Stu b)
{
	int h1, m1, s1, h2, m2, s2;
	sscanf(a.out, "%d:%d:%d", &h1, &m1, &s1);
	sscanf(b.out, "%d:%d:%d", &h2, &m2, &s2);
	//printf("%d %d %d %d %d %d",h1, m1, s1, h2, m2, s2);
	//printf("\n");
	if(h1>h2 || (h1==h2 && m1>m2) || (h1==h2 && m1==m2 && s1>s2))
		return false;
	else 
		return true;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%s%s%s",stu[i].id, stu[i].in, stu[i].out);
	}
	Stu ear = stu[0], lat = stu[0];
	for(int i=0; i<n; i++)
	{
		if(isEarly(ear, stu[i]))
			ear = stu[i];
		if(isLate(lat, stu[i]))
			lat = stu[i];
	}
	printf("%s %s",ear.id, lat.id);
	
} 
