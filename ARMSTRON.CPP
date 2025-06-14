 // Armstrong numberss
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
   cout<<"arm";
   }else{
    cout << "not arm";
    }
    getch();
    return 0;
    }

