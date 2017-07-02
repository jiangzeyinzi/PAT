#include <cstdio>

char pose[3] = {'C','J','B'};
int w1[3];
int w2[3];
int p2n(char p)
{
	if(p=='C')
		return 0;
	else if(p=='J')
		return 1;
	else if(p=='B')
		return 2;	
}
char judge(int arr[])
{
	int max = 2;
	if(arr[2]>=arr[0] && arr[2]>=arr[1])
		max = 2;
	else if(arr[0]>=arr[1] && arr[0]>arr[2])
		max = 0;
	else if(arr[1]>arr[0] && arr[1]>arr[2])
		max = 1;
	return pose[max];
}

int main()
{
	int n;
	int w1num = 0, l1num=0, b1num=0;
	scanf("%d\n",&n);
	char p1, p2;
	for(int i=0; i<n; i++)
	{
		p1 = getchar();
		getchar();
		p2 = getchar();
		getchar();
		int dif = p2n(p1) - p2n(p2);
		//printf("%c %c %d\n",p1, p2, dif);
		if(dif==-1 || dif==2)
		{
			w1[p2n(p1)]++;
			w1num++;
		}
		else if(dif==1 || dif==-2)
		{
			w2[p2n(p2)]++;
			l1num++;
		}
		else
			b1num++;
	}
	printf("%d %d %d\n",w1num, b1num, l1num);
	printf("%d %d %d\n",l1num, b1num, w1num);
	printf("%c %c",judge(w1), judge(w2));
}
