 #include<iostream>
 #include<cmath>
 using namespace std;

 main()
{
  double num1;
  double num2;
  double result;
  cout<<"Enter number ";
  cin>>num1;
  cout<<"Enter number ";
  cin>>num2;
  result =max(num1,num2);
  cout<<result <<" is maximum"<<endl;   
  result =min(num1,num2);
  cout<<result <<" is minimum "<<endl;
  result=sqrt(num1);
  cout<<result <<" squareroot"<<endl;
   result=cbrt(num1);
  cout<<result <<" cube root"<<endl;
  result=ceil(num1);
  cout<<result <<" without decimal"<<endl;
   result=floor(num1);
  cout<<result <<" with decimal"<<endl;


}