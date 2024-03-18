/*Testing Explicit Type Cast Average 1to100*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  int sum=0;
  double average;
  for(int i=1;i<=100;i++){
    sum+=i;
  }
  average =sum/100;
  cout<<fixed<<setprecision(1);
  cout<<"Average is: "<<average;

  return 0;
}