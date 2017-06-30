#include <cstdio>
#include <cstring>

struct Student {
	char name[12];
	char no[12];
	int sc;
}stu, minStu, maxStu;
int main()
{
	int n;
	scanf("%d",&n);
	int max=0;
	int min=100;
	for(int i=0; i<n; i++)
	{
		scanf("%s %s %d",stu.name, stu.no, &stu.sc);
		//printf("%s %s %d\n",stu.name, stu.no, stu.sc);
		if(stu.sc>max)
		{
			max = stu.sc;
			maxStu=stu;
		}
		if(stu.sc<min)
		{
			min = stu.sc;
			minStu=stu;
		}
			
	}
	printf("%s %s\n",maxStu.name, maxStu.no);
	printf("%s %s\n",minStu.name, minStu.no);
	return 0;
}
