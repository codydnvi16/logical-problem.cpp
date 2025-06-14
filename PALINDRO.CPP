
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