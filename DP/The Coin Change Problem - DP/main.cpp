#include <iostream>

using namespace std;

int main()
{
    long int sum,ct;
    cin>>sum>>ct;
    long int type[ct];
    for(long int i=0; i<ct; ++i)
        cin>>type[i];
    long int ans[ct+1][sum+1];
    for(int i=0; i<=sum; ++i)
        ans[0][i]=0;
    for(int i=0; i<=ct; ++i)
        ans[i][0]=1;

    for(int i=1; i<=ct; ++i)
    {
        for(int j=1; j<=sum; ++j)
        {
            if(type[i-1]<=j)
            {
                ans[i][j] = ans[i][j-type[i-1]] + ans[i-1][j];
            }
            else
            {
                ans[i][j] = ans[i-1][j];
            }
        }
    }

    cout<<ans[ct][sum]<<endl;
    return 0;
}
