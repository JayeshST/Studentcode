#include<iostream>
using namespace std;

class students{
	
	private: int id;
	         string name;
	         double marks1;
	         double marks2;
	         double marks3;
	         
			 
			 
 public:
 	
 	students(){
 		
 		cout<<"default constr"<<endl;
 		id=1234;
 		name="jayesh";
 		marks1=92;
 		marks2=78;
 		marks3=80;
	 }
	 
	students(int id, string name,double marks1,double marks2,double marks3 )
	{
	
	cout<<"parameterised constr"<<endl;
	this->id=id;
	this->name=name;
	this->marks1=marks1;
	this->marks2=marks2;
	this->marks3=marks3;
	
	
	
	
}

void display(){
	cout<<"id= "<<id<<"name= "<<name<<"marks1="<<marks1<<"marks2="<<marks2<<"marks3="<<marks3<<endl;
}



void calculate(){
	double sum,per,avg;
	cout<<"calculate percentage avg sum="<<endl;
	 sum=marks1+marks2+marks3;
	cout<<"sum="<<sum<<endl;
	 per=((sum*10)/100);
	cout<<"per="<<per<<endl;
	
	
	
}




};


