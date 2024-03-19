#include<iostream>
using namespace std;
int main(){
  int mark;
  cout<<"Enter yours marks:";
  cin>>mark;
  if(mark>=90){
    cout<<"Grade is:A"<<endl;

  }else if(mark>=80){
    cout<<"Grade is:B"<<endl;
  }else if(mark>=70){
    cout<<"Grade is:C"<<endl;
  }else if(mark>=60){
    cout<<"Grade is:D"<<endl;
  }else{
    cout<<"Grade is:F"<<endl;
  }

  return 0;
}