#include <cstdio>
struct Per{
	char name[10];
	int year;
	int month;
	int day;
	int flag;
	Per(){}
	Per(int _year,int _month, int _day):year(_year),month(_month),day(_day){}
}per[101000];
int isRight(Per p)
{
	if(p.year>2014 || (p.year==2014 && p.month>9) || (p.year==2014 && p.month==9 && p.day>6))
		return 0;
	if(p.year<1814 || (p.year==1814 && p.month<9) || (p.year==1814 && p.month==9 && p.day<6))
		return 0;
	return 1;
}
int main()
{
	int N;
	scanf("%d",&N);
	int cnt = 0;
	Per maxp = Per(2014,9,6);
	Per minp = Per(1814,9,6);
	for(int i=0; i<N; i++)
	{
		scanf("%s%d/%d/%d",per[i].name,&per[i].year,&per[i].month,&per[i].day);
		int flag = isRight(per[i]);
		if(flag)
		{
			cnt++;
			if(per[i].year>minp.year || (per[i].year==minp.year && per[i].month>minp.month) || (per[i].year==minp.year && per[i].month==minp.month && per[i].day>minp.day))
				minp = per[i];
			if(per[i].year<maxp.year || (per[i].year==maxp.year && per[i].month<maxp.month) || (per[i].year==maxp.year && per[i].month==maxp.month && per[i].day<maxp.day))
				maxp = per[i];
			//printf("%s%d/%d/%d\n",minp.name,minp.year,minp.month,minp.day);
		}		
	}
	if(cnt)
		printf("%d %s %s",cnt, maxp.name, minp.name);
	else
		printf("0");
}
