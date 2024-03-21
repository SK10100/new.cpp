#include<iostream>
using namespace std;
int main(){
  int sum=0,number=1;
  do{
    sum=sum+number;
    number++;
  }while(number<=1000);
  
  cout<<"sum= "<<sum<<endl;

  return 0;
}