#include<iostream>

using namespace std;

int sum(){

//SUM OF TWO NUMBERS 
   
     int a , b;
    cout<< "Enter a number: "<<endl;
    cin>> a;

    cout<< "Enter another number: "<<endl;
    cin>> b;

    cout<< "Sum of "<<a<< " And "<<b<<" is "<<a+b<<endl;
    
    
    return 0;

}

int diff (){

    int a,b;
    cout<< "enter two numbers to find difference: "<<endl;
    cin>> a >> b;
    cout<< "Difference of "<<a<< " And "<<b<<" is "<<a-b;
    return 0;
}

int main(){
    sum();
    diff();
    return 0;
}

