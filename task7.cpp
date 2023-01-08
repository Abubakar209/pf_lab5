#include<iostream>
using namespace std;
void flowrate(int water_volume, int pipe1, int pipe2, float hour);


main(){

     int water_volume;
     int hour;
     int pipe1;
     int pipe2;
   cout<<"Enetr water per liter";
     cin>>water_volume;
     cout<<"Enetr flow of pipe one";
      cin>>pipe1;
      cout<<"Enetr flow of pipe two";
      cin>>pipe2;
      cout<<"Enetr hour";
     cin>>hour;
     
    flowrate(water_volume,pipe1,pipe2,hour);
    

}


void flowrate(int water_volume, int pipe1, int pipe2, float hour)
{
  
  
   float sumofpipe=pipe1+pipe2;


      if(sumofpipe < water_volume){
       float p_1 = pipe1 * hour;	
	float p_2 = pipe2 * hour;	
	float sum = p_1 + p_2;
	float percentage = (sum*100)/water_volume;
	
	float conp1 = (p_1 * 100)/sum;
	float conp2 = (p_2 * 100)/sum;

	cout<<"The pool is " <<percentage<<" % full"<<endl;
	cout<<"Pipe 1: "<<conp1<< "%"<<endl;
	cout<<"Pipe 2: "<<conp2<< "%"<<endl; 	

}
      if(sumofpipe > water_volume){
       
                float p_1 = pipe1 * hour;	
		float p_2 = pipe2 * hour;
		float sum = p_1 + p_2;
		float overflow = sum - water_volume;
		cout<<"For "<<hour<<" hours the pool overflows with "<<overflow<<" litres.";
          
}

	}
 

 
 

