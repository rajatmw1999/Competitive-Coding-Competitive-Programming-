#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	int n,k;
	int flag=0;
	while(tc>0)
	{
	    flag=0;
	cin>>n>>k;
	int a[n];
	
	for(int i=0; i<n; ++i)
	    {
	        cin>>a[i];
	        if((a[i]<=k)&&(flag==0)){
	        for(int j=i-1; j>=0; --j)
	        {
	            if((a[i]+a[j])==k)
	                {
	                    flag=1;
	                    break;
	                }
	        }}
	
	    }
	      if(flag==1)
	    {cout<<"Yes\n";

	    }
	 else if(flag==0)
	    {cout<<"No\n";
	    }

	--tc;
	}
	return 0;
}
