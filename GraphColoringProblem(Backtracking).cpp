#include<iostream>
using namespace std;
bool gph[4][4]={{0,1,0,1},{1,0,1,1},{0,1,0,1},{1,1,1,0}};
int V=4;
int m=3;
int x[4]={0};
bool isSafe(int v, int c)
{   for(int i=0;i<V;i++)
	{
		if(gph[v][i] && c==x[i])
		{
		cout<<"\nColor "<<c<<" is not safe for  vertex "<<v<<endl;
		return false;
		}
	}
	cout<<"\nColor "<<c<<" is safe for  vertex "<<v<<endl;
	return true;
}

bool gphcolor(int v)
{
	if(v==V) return true;
	for(int c=1;c<=m;c++)
	{   if(isSafe(v,c))
		{ x[v]=c;
		cout<<"\nTHe intermediate solution is\n";
	    for(int i=0;i<V;i++) cout<<x[i]<<" ";
		if(gphcolor(v+1)==true)
		return true;
		x[v]=0;
		}
	}
	return false;
}

int main()
{
	if(gphcolor(0)==false) 
	{   cout<<"No solution exist";
		exit(-1);
	}
	cout<<"\nTHe solution is\n";
	for(int i=0;i<V;i++) cout<<x[i]<<" ";
}


