#include <cstdio>
#include <string>
#include <map>
#include <iostream>
using namespace std;
const int maxn = 2020;
map<string, int> sToi;
map<int, string> iTos;
map<string, int> Gang;
int G[maxn][maxn];
int weight[maxn];
bool vis[maxn] = {false};
int n, k, nper=0;
int change(string str)
{
	if(sToi.find(str)!=sToi.end())
	{
		return sToi[str];
	}
	else
	{
		sToi[str] = nper;
		iTos[nper] = str;
		return nper++;
	}
}
void DFS(int u, int &head, int &sumw, int &member)
{
	member++;
	vis[u] = true;
	if(weight[u]>weight[head])
	{
		head = u;
	}
	for(int v=0; v<n; v++)
	{
		if(G[u][v]>0)
		{
			sumw += G[u][v];
			G[u][v] = G[v][u] = 0;
			if(vis[v] == false)
				DFS(v, head, sumw, member);
		}
	}
}
void DFSTrave()
{
	for(int i=0; i<nper; i++)
	{
		if(vis[i]==false)
		{
			int head=i, sumw=0, member=0;
			DFS(i, head, sumw, member);
			if(sumw>k && member>2)
			{
				Gang[iTos[head]] = member;
			}
		}			
	}
}
int main()
{
	scanf("%d%d",&n, &k);
	for(int i=0; i<n; i++)
	{
		string s1, s2;
		int w;
		cin>>s1>>s2>>w;
		int id1 = change(s1);
		int id2 = change(s2);
		G[id1][id2] += w;
		G[id2][id1] += w;
		weight[id1] += w;
		weight[id2] += w;
	}
	DFSTrave();
	cout<<Gang.size()<<endl;
	for(map<string, int>::iterator it=Gang.begin(); it!=Gang.end(); it++)
		cout<<it->first<<" "<<it->second<<endl;
}
