#include<bits/stdc++.h>
using namespace std;

int main(){

    char operate;
    double number_1;
    double number_2;
    double result;

    cout<<"*********Calculator*********"<<endl;

    cout<<"Enter the operation (+,-,*,/) : "<<endl;
    cin>>operate;

    cout<<"Enter the Number_1 :";
    cin>>number_1;

    cout<<"Enter the Number_2 :";
    cin>>number_2;

    switch(operate){
         case '+':
            result = number_1 + number_2;
            cout << "result: " << result <<endl;
            break;

        case '-':
            result = number_1 - number_2;
            cout << "result: " << result <<endl;
            break;

        case '*':
            result = number_1 * number_2;
            cout << "result: " << result <<endl;
            break;

        case '/':
            result = number_1 / number_2;
            cout << "result: " << result <<endl;
            break;

        default:
            cout<<"Use a valid Operator"<<endl;
            break;

    }    

cout<<"--------Thank You!--------"<<endl;

    return 0;
}