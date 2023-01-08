#include<iostream>
using namespace std;
int sum(int,int);
 float divide(float num1, float num2);
main(){
   int num_1; 
    int num_2;
   cout<<"enter first number";
    cin>>num_1;
   cout<<"enter second number";
    cin>>num_2;
     sum(num_1,num_2);
    int res = sum(num_1,num_2);
    cout<<res<<endl;
    float div = divide(num_1,num_2);
    cout<<div<<endl;
}


   int sum(int num1,int num2){

    int  res=num1+num2;
    return res;

}


  float divide(float num1, float num2){

    float  div=num1/num2;
    return div;


}