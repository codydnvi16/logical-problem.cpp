 // Armstrong numberss!!!!
#include<iostream>
using namespace std;

 int main(){
  int n,r,sum=0,temp;
  clrscr();
  cout <<"enter numebr"<<endl;
  cin>> n;
  temp=n;
  while(n>0){
  r=n%10;
  sum=sum+(r*r*r);
  n=n/10;
  }
  if(temp==sum){
   cout<<"Armstrong number"<< endl;
   }else{
    cout << "Not armstrong number"<<endl;
    }
    return 0;
    }

