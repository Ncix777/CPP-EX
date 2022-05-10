#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter any number"<<endl;
cin>>n;
cout<<"The prime numbers are generated below"<<endl;
for(int i=1;i<=n;i++){
if(i%2==0)
cout<<i<<"  ";
}
return 0;
}
