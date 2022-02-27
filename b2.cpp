#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1="";
    getline(cin,s);
    for(auto x:s)   //chạy hết các phần tử của s
    {
        if(x==" ")
        {
            cout<<s1<<endl;
            s1="";    //xâu rỗng
        }
        s1=s1+x;
    }
}
