#include<iostream>
using namespace std;
int isGreat(int,int);
int isMini(int,int);
main(){

   int num1,num2;
   cout<<"Enter First number ";
   cin>>num1;
   cout<<"Enter second number";
   cin>>num2;
  isGreat(num1,num2);
  int great=isGreat(num1,num2);
  cout<<great<<" grater number"<<endl;

  isMini(num1,num2);
  int minimum=isMini(num1,num2);
  cout<<minimum<<" minimum number ";



}


   int isGreat(int num_1, int num_2){
  

  if(num_1>num_2){
 return num_1;

}

  if(num_1<num_2)
{
   return num_2;

}
 

return 0;



}

  int isMini(int num_1,int num_2)
{

 if(num_1>num_2){
 return num_2;

}

  if(num_1<num_2)
{
   return num_1;

}
 

return 0;







}


