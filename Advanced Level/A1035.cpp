#include <cstdio>
#include <string>
#include <vector>
using namespace std;
struct User{
	char name[15];
	char pwd[15];
}user[1010];
vector<User> cor;
void correct(char str[])
{
	for(int i=0; str[i]; i++)
	{
		if(str[i]=='1')
			str[i] = '@';
		else if(str[i]=='0')
			str[i] = '%';
		else if(str[i]=='l')
			str[i] = 'L';
		else if(str[i]=='O')
			str[i] = 'o';
	}
}
bool judge(char str[])
{
	for(int i=0; str[i]; i++)
	{
		if(str[i]=='1' || str[i]=='0' || str[i]=='l' || str[i]=='O')
			return false;
	}
	return true;
}
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	int cnt=0;
	for(int i=0; i<n; i++)
	{
		scanf("%s %s",user[i].name, user[i].pwd);
		bool flag = judge(user[i].pwd);
		if(!flag)
		{
			cnt++;
			correct(user[i].pwd);
			cor.push_back(user[i]);	
		}
	}
	if(cnt!=0)
	{
		printf("%d\n",cnt);
		for(int i=0; i<cor.size(); i++)
			printf("%s %s\n",cor[i].name, cor[i].pwd);
	}
	else
	{
		if(n==1)
			printf("There is 1 account and no account is modified");
		else
			printf("There are %d accounts and no account is modified",n);
	}
	return 0;
}
