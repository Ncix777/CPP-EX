#include<iostream>
using namespace std;
int main()
{
int i,n,x,sum=0;
float avg;
cout<<"How many numbers u want to enter :";
cin>>n;
for(i=1;i<=n;++i)
{
cout<<"\nEnter number "<<i<<" : ";
cin>>x;
sum+=x;
}
avg=(float)sum/(float)n;
cout<<"Sum of "<<n<<" Numbers : "<<sum<<endl;
cout<<"Average of "<<n<<" Numbers :"<<avg;
return 0;
}
