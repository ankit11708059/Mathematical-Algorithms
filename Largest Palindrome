#include<bits/stdc++.h>
using namespace std;

bool isPalin(int k)
{
	int y=k;
	int sum=0,temp;
	while(k>0){
	 temp=k%10;
	 sum=sum*10+temp;
	 k=k/10;
	}
	return sum==y;
}
int main()
{
	int k=1,mex=INT_MIN;
	for(int i=99;i>=10;i--)
	{
		for(int j=i;j>=10;j--)
		{
			k=i*j;
			if(isPalin(k))
			{
				mex=max(mex,k);
			}
			
		}
	}
	cout<<mex<<endl;
}
