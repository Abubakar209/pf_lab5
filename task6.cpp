#include<iostream>
using namespace std;
void result(int num1);
void result1(int num1);

int num1;
 
main()
{
   cout<<"Enetr a number";
   cin>>num1;
   if(num1>=0 && num1<=10){
   result(num1);  
  
}

 if(num1>=20 && num1<99){

   result1(num1);



}



}

 

void result(int num1){

   if(num1==1){

   cout<<"one";

}
      if(num1==2){

   cout<<"two";

}



   if(num1==3){

   cout<<"three";

}
  

   if(num1==4){

   cout<<"four";

}


    if(num1==5){

   cout<<"five";

}


     if(num1==6){

   cout<<"six";

}


     if(num1==7){

   cout<<"seven";

}
   

     if(num1==8){

   cout<<"Eight";

}


      if(num1==9){

   cout<<"Nine";

}




      if(num1==10){

      cout<<"ten";

}

}  



void result1(int num1){
    if(num1>=20  &&  num1<=29){

   cout<<" tewnty"; 
   int n1=num1%10;
   num1=n1;
   result(num1);


}

 if(num1>=30  &&  num1<=39){

   cout<<" thirty"; 
   int n1=num1%10;
   num1=n1;
   result(num1);


}


 if(num1>=40  &&  num1<=49){

   cout<<" fourty"; 
   int n1=num1%10;
   num1=n1;
   result(num1);


}


 if(num1>=50  &&  num1<=59){

   cout<<" fifty"; 
   int n1=num1%10;
   num1=n1;
   result(num1);


}

 if(num1>=60  &&  num1<=69){

   cout<<" sixty"; 
   int n1=num1%10;
   num1=n1;
   result(num1);


}



 if(num1>=70  &&  num1<=79){

   cout<<" seventy"; 
   int n1=num1%10;
   num1=n1;
   result(num1);


}


 if(num1>=80  &&  num1<=89){

   cout<<" eighty"; 
   int n1=num1%10;
   num1=n1;
   result(num1);


}


 if(num1>=90  &&  num1<=99){

   cout<<" ninety"; 
   int n1=num1%10;
   num1=n1;
   result(num1);


}























































}








