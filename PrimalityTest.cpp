#include<iostream>
using namespace std ;
int isPrime(int) ;
int main()
{
 int t,num,ans ;
 cin>>t ;
 while(t--)
 {
  cin>>num ;
  ans=isPrime(num) ;
  if(ans)
   cout<<"yes"<<endl;
  else
   cout<<"no" << endl;
 }
 return 0 ;
}

int isPrime(int num)
{
 int i ;
 for(i=2;i<num;i++)
 {
  if(num%i==0)
   return 0 ;
 }
 return 1 ;
}
