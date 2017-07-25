#include <cstdio>
#include <map>
#include <set>
#include <string>
#include <iostream>
using namespace std;
map<string, set<int> > mTitle, mAuthor, mKey, mPuber, mPubed;
void query(map<string, set<int> > &mp, string &str)
{
	if(mp.find(str)==mp.end())
		printf("Not Found\n");
	else
	{
		for(set<int>::iterator it=mp[str].begin(); it!=mp[str].end(); it++)
		{
			printf("%07d\n",*it);
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		int id;
		string title, author, key, puber, pubed;
		scanf("%d",&id);
		getchar();
		getline(cin,title);
		mTitle[title].insert(id);
		getline(cin, author);
		mAuthor[author].insert(id);
		while(cin>>key)
		{
			mKey[key].insert(id);
			char c = getchar();
			if(c=='\n') break;
		}
		getline(cin, puber);
		mPuber[puber].insert(id);
		getline(cin, pubed);
		mPubed[pubed].insert(id);
	}
	int m;
	scanf("%d",&m);
	for(int i=0; i<m; i++)
	{
		int no;
		string tmp;
		scanf("%d: ",&no);
		getline(cin, tmp);
		printf("%d: %s\n",no,tmp.c_str());
		if(no==1) query(mTitle, tmp);
		else if(no==2) query(mAuthor, tmp);
		else if(no==3) query(mKey, tmp);
		else if(no==4) query(mPuber, tmp);
		else if(no==5) query(mPubed, tmp);
	}
	
}
