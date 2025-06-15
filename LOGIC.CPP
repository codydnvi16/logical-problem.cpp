#include<iostream.h>
#include<conio.h>
int main(){
 int num1=0,num2=1,num3,number;
 clrscr();
 cout<<"enter number";
 cin>> number;
 cout << num1 <<endl<< num2<< endl;


 for (int i=2;i<=number ;i++){
  num3=num1+num2;
  cout << num3<<endl;

  num1=num2;
  num2=num3;
  }
  getch();
  return 0;
  }
  */
 // Prime numbers

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
 if(flag==0  ){
 cout<<"prime no"<<endl;
 }else{
 cout <<"no prime"<<endl;
 }
 getch();
 return 0;
 }
 */

 // Armstrong numberss
 /*int main(){
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
   cout<<"arm";
   }else{
    cout << "not arm";
    }
    getch();
    return 0;}*/

// Palindrome num
int main()
{
 int n , r, sum=0,temp;
 clrscr();
 cout <<"enter ni"<<endl;
 cin>> n;
 temp=n;
 while(n>0){
 r=n%10;
 sum=(sum*10)+r;
 n=n/10;
 }
 if(temp==sum){
  cout <<"pali";
}else{
cout <<" not";
}
getch();
return 0;
}