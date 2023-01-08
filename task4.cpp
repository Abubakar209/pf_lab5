#include<iostream>
using namespace std;
int resultant(int number);
main(){

	int number;
	cout<<"Enter four digit number";
	cin>>number;
        int result=resultant(number);
        if(result%2==0){
        cout<<"even";

}
   if(result%2!=0){
     cout<<"odd";

}

}




int resultant(int number){


         int mode_1 = number % 10;
         cout<<mode_1<<endl;

         int number_1 = number/10;
         int mode_2 = number_1 % 10;
         cout<<mode_2<<endl;

	int number_2 = number/100;
	int mode_3 = number_2 % 10;
	cout<<mode_3<<endl;

	int number_3 = number/1000;
	int mode_4 = number_3 % 10;
	cout<<mode_4<<endl;

	int sum = mode_1 + mode_2 + mode_3 + mode_4;

        return sum;


}