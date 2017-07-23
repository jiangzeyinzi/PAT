#include <cstdio>

int main()
{
	double win = 0.0, tie=0.0, lose=0.0;
	char ans[3];
	double odd[3];
	for(int i=0; i<3; i++)
	{
		scanf("%lf%lf%lf",&win, &tie, &lose);
		if(win>=tie && win>=lose)
		{
			ans[i] = 'W';
			odd[i] = win;
		}
		else if(tie>win && tie>=lose)
		{
			ans[i] = 'T';
			odd[i] = tie;
		}
		else if(lose>tie && lose>win)
		{
			ans[i] = 'L';
			odd[i] = lose;
		}
	}
	double sum = (odd[0]*odd[1]*odd[2]*0.65-1)*2;
	sum = 0.975;
	printf("%c %c %c %.2f",ans[0],ans[1],ans[2],sum); 
	
} 
