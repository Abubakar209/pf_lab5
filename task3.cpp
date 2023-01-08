#include<iostream>
#include<cmath>
using namespace std;
bool smestry(int smest);
main(){
   
   while(true){
     int number;
     cout<<"enter a number";
     cin>>number;
     smestry(number);
     int result= smestry(number);
      if(result==true){
      cout<<"symestric"<<endl;


}


if(result==false){
      cout<<"non-symestric"<<endl;

}

}//while

}

    bool smestry(int smest){
      int result1=smest%10;
       int result2=smest/100;
        if(result1==result2){
          return true;

}
    else{

         return false;
}
   return 0;
}