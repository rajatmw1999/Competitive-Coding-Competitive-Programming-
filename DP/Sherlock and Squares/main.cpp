#include <bits/stdc++.h>

using namespace std;


int main()
{
    long long int t,a,b,first=-1;
    cin>>t;
    while(t>0)
    {
        long long int cnt = 0;
        first = -1;
        //long long int j=0;
        cin>>a>>b;
        for(long long int i=a; i<=b; ++i)
        {
            if(first==-1){
            float root = sqrt(i);
            if(root == int(root))
            {
                first = root;
                ++cnt;
            }
            }
            else
            {
                first++;
                long long int sq = first*first;
                if(sq<=b)
                    ++cnt;
                else
                    break;
            }
        }
        cout<<cnt<<endl;
        --t;
    }
   return 0;
}
