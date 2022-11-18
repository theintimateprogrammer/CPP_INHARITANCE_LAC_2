#include<iostream>
using namespace std;

class number{
    
    public:
    
    int num1,num2,num3,num4;
    int sum;
    number(int a,int b,int c,int d){
        
        num1=a;
        num2=b;
        num3=c;
        num4=d;
        
        
    }
    void  display (){
         int sum;
         sum=num1+num2+num3+num4;
         
         cout<<"------sum of the four differnt number------- :-"<<sum;
        
     }
    
    
};

class digit :public number{
    public:
    digit():number(30,58,76,99){
        
    }
    void showdata (){
        cout<<"enter the number:"<<endl;
        cout<<"enter the  first number:"<<num1<<endl;
        cout<<"enter the second number:"<<num2<<endl;
        cout<<"enter the third number:"<<num3<<endl;
        cout<<"enter the four number:"<<num4<<endl<<endl;
    }
};

main(){
    
    digit obj1;
    obj1.showdata();
    obj1.display();
    
}







