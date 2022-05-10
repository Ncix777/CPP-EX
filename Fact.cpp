#include<iostream>
using namespace std;
int main(){
   int n,fact=1;
   cout<<"Enter any number"<<endl;
   cin>>n;
   while(n){
       fact*=n;
       n--;
   }
   cout<<"Factorial of the given number is"<<fact;
return 0;
}
