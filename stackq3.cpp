#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testnum;
    cin>>testnum;
    for(int testcase=1;testcase<=testnum;testcase++)
    {
        stack<char> s;
        string test;
        cin>>test;
        for(int i=0;i<test.size();i++)
        {
            if(s.empty() || s.top()!=test[i])
            {
                s.push(test[i]);

            }
            else if(s.top()==test[i])
            {
                s.pop();
            }

        }
        int x=s.size();
        char ans[x+1];
        
        for(int i=x-1;i>=0;i--)
        {
            ans[i]=s.top();
            s.pop();

        }
         ans[x]='\0';
        cout<<ans<<endl;

    }
}