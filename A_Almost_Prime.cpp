#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
int n;
cin>>n;
int a[100001],ans=0;

for(int i=2;i<=n;i++)
{
	if(a[i]==0)
	{
     for(int j=i;j<=n; j+=i)
     a[j]++;
    }

	if(a[i]==2) 
    ans++;
}
		cout<<ans << endl;
        return 0;
}

 	    					  		 			  	 	     		