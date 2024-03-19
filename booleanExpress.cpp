#include<iostream>
using namespace std;
int main(){
  int year,month,date;
  cout<<"Enter Date: ";
  cin>>date;
  cout<<"Enter month: ";
  cin>>month;
  cout<<"Enter Year: ";
  cin>>year;
  if(year<1582 || year==1582 && month<10 || month==10 && date<15 || date==15){
   cout<<true;
  }else{
    cout<<false;
  }

  return 0;
}
