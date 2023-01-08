#include<iostream>
#include<cmath>
using namespace std;
float heightCalc( float,float);
 main(){


  float base;
  cout<<" Enter base " ;
  cin>>base;
  float angle;
  cout<<"Enter Angle in degree";
  cin>>angle;
  heightCalc( base ,angle);
  float result = heightCalc( base ,angle);
  cout<<result;

 }


  float heightCalc( float base_1 ,float angle_1){

   float radian =57.2958;
   float radians=angle_1/radian;
   float angle;
   angle=tan(radians);
   float height=base_1*angle;
    return height;


}