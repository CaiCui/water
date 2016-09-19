/**CF-148A
  *math
  *
  */
#include<bits/stdc++.h>
int main()
{
    int k,l,m,n,d,count;
    int a[100010]={0};
    count=0;
    std::cin>>k>>l>>m>>n>>d;
    for(int i=k;i<=d;i+=k)a[i]=1;
    for(int i=l;i<=d;i+=l)a[i]=1;
    for(int i=m;i<=d;i+=m)a[i]=1;
    for(int i=n;i<=d;i+=n)a[i]=1;
    for(int i=1;i<=d;i++)
        if(a[i])
          count++;
    std::cout<<count<<std::endl;
    return 0;
}
/*
#include <iostream>
using namespace std;
int k,l,m,n,d,ans,i;
main()
{
cin>>k>>l>>m>>n>>d>>i;
for (i=1;i<=d;i++){
    if(i%k==0||i%l==0||i%m==0||i%n==0)ans++;
}
cout<<ans;
}
*/


