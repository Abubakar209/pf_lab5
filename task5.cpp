#include<iostream>
using namespace std;

int minute(int min);
int hours(int hour);

main(){
    while(true){
   int minutes,hour;
   cout<<"Enter hour";
   cin>>hour;
   cout<<"Enter minute";
   cin>>minutes;
   int result_1=hour;
   int result_2=minute(minutes);
   

   
      if(result_2<60){
  
       cout<<result_1<<"	"<<result_2;
}

      if(result_2>60){
 
      result_1+=1;
      result_2-=60;

      if(result_1==24){
                           result_1=0;

}//nesting
      cout<<result_1<<"	"<<result_2;
 
  
}//if result_2
   
} //while 
   
}//function




 int minute(int min){

      int res=min+15;
      return res;

}


