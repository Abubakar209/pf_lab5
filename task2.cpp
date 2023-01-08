#include<iostream>
#include<cmath>
using namespace std;
float totalresult(float,float,float);
float total_result(float,float,float);
main(){
  float a;
  float b;
  float c;
  cout<<"enter value of a ";
  cin>>a;
  cout<<"enter value of b ";
  cin>>b;
  cout<<"enter value of c ";
  cin>>c;
 
  float result=totalresult(a,b,c);
  cout<<result<<endl;
   float result_2=total_result(a,b,c);
  cout<<result_2<<endl;
 
}
 float totalresult(float value1,float value2,float value3){

   float powerroot = pow(value2,2);
   float equation= (powerroot)-4*(value1)*(value3);
   float fullsqrt=sqrt(equation);
   float fullequation=(-value2+fullsqrt)/(2*(value1));
    return fullequation;

} 


 float total_result(float value1,float value2,float value3){

   float powerroot = pow(value2,2);
   float equation= (powerroot)-4*(value1)*(value3);
   float fullsqrt=sqrt(equation);
   float fullequation=(-value2-fullsqrt)/(2*(value1));
    return fullequation;

} 
