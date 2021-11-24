#include <bits/stdc++.h>
using namespace std;

int main(){
    float weight,height,bmi;
    cout<< "enter height  and weight ";
    cin>> height>> weight;

    bmi=weight/(height*height);
    
    if(bmi< 18.5) 
    cout<<"underweight"<<endl; 
    else if(bmi>24.9)
    cout<<"overweight"<<endl;
    else
    cout<<"normal weight"<<endl;
    
    cout<<"your bmi is"<<bmi;
    
    return 0;
}