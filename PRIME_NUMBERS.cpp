#incude<iostream>
using namespace std;

//PRIME NUMBERS

int main()
{
 int n,i,m=0,flag=0;
 clrscr();
 cout <<"enter number"<<endl;
 cin>> n;
 m=n/2;
 
 for (i=2;i<=m;i++){
 if(n%i==0){
 flag=1;
 break;
 }
 }
 
 if(flag==0){
 cout<<"prime no"<<endl;
 }else{
 cout <<"not prime"<<endl;
 }
 return 0;
 }
