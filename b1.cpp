#include <iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
void kt(unsigned long n)
{
int i;
for (i=n-1;i>0;i--)
    if  ((n%i==0)&&(i%2==1))
        {
            cout<<i;
            break;
        }cout<<"!";

}
int main()
{
    freopen("l.inp","r",stdin);
unsigned long b;
int t;
cin >>t;
for (int i=0;i<t;i++)
    {
        cin >>b;
        kt(b);
    }
}
