/*
prompt user for possitive integer and display the count ,maximum,minimum,average.Terminated the input with -1.
*/
#include<iostream>
#include<climits>
#include<iomanip>
using namespace std;
int main(){
  int numberIn;
  int count=0;
  int sum=0;
  int max=0;
  int min=INT_MAX;
  int sential=-1;
  cout<<"Enter the possitive integer 0r"<<sential;
  while(cin>>numberIn && numberIn != sential){
    if(numberIn>0){ 
      ++count;
      sum+=numberIn;
      if(max<numberIn) max=numberIn;
      if(min>numberIn) min=numberIn;
    }else{
      cout<<"ERROR : input must be possitive ! try again"<<endl;

    }cout<<"Enter a possitive integer or"<<sential<<"to exit";
  }
  cout<<endl;
  cout<<"cout is:"<<count<<endl;
  if(count>0){
    cout<<"Maximum is: "<<max<<endl;
    cout<<"Minimum is: "<<min<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Average is:"<<(double)sum/count<<endl;
  }
}