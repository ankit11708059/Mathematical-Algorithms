#include<bits/stdc++.h>
using namespace std;

/* Here the concept is that we know that a set has 2 raised to n subset if their are
n elements in it so here we extract the each upto 2 raised to n if it is set then print
corresponding character and right shift that number*/
void subsets(int no,string s)
{
	int i=0;
	while(no>0)
	{
		if(no&1)
		cout<<s[i];
		else
		cout<<"";
		no=no>>1;
		i++;
	}
	cout<<endl;
}
int main()
{
	string s;
	cin>>s;
	int k=pow(2,s.size());
	for(int i=0;i<k;i++)
	{
		subsets(i,s);
	}
}
