#include<iostream>
#include<math.h>
using namespace std;
int x[4];

void write(int x[],int n)
{for (int i=0;i<n;i++)
cout<<x[i]<<" ";}

int place(int k, int i)
{
	for(int j=0; j<k; j++)
	{if((x[j]==i) || abs(x[j]-i)==abs(j-k))  return 1;}
	return 0;
}

int NQueen(int k, int n)
{	for(int i=0; i<n; i++)
	{            if(place(k,i)==0)
		{             x[k]=i;
			write(x,n);
			cout<<"\n";
			if(k==n) {write(x,n); return 0;}
			else NQueen(k+1,n);
		}
	}
}

 

int main()
{
cout<<"Solution to 4 Queens Problem\n";
NQueen(0,4);}

