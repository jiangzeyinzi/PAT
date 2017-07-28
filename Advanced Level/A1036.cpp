#include <cstdio>

struct Stu{
	char name[15];
	char gender;
	char id[15];
	int gr;
	Stu(){}
	Stu(int _gr):gr(_gr){}
};
int n;
int main()
{
	scanf("%d\n",&n);
	Stu male(101),female(-1),tmp;
	for(int i=0; i<n; i++)
	{
		scanf("%s %c %s %d", tmp.name, &tmp.gender, tmp.id, &tmp.gr);
		if(tmp.gender=='M')
		{
			if(tmp.gr<male.gr)
				male = tmp;
		}
		else if(tmp.gender=='F')
		{
			if(tmp.gr>female.gr)
				female = tmp;
		}
	}
	if(female.gr==-1)
		printf("Absent\n");
	else
		printf("%s %s\n",female.name, female.id);
	if(male.gr==101)
		printf("Absent\n");
	else
		printf("%s %s\n",male.name, male.id);
	if(female.gr==-1 || male.gr==101)
		printf("NA");
	else
		printf("%d",female.gr-male.gr);
}
