#include<iostream>
using namespace std;

int main(){
    int num1,num2;

    cout<<"enter your first number :";
    cin>>num1;

    cout<<"enter your second number :";
    cin>>num2;

    int oper;
    cout<<"Enter the no. of operation that you want to perform : \n1.'+' \n2.'-' \n3.'*' \n4.'/'"<<endl;
    cin>>oper;

    switch(oper){

        case 1:
            cout<<"The Outcome of the Operation is :"<<(num1+num2);
            break;

        case 2:
            cout<<"The Outcome of the Operation is :"<<(num1-num2);
            break;

        case 3:
            cout<<"The Outcome of the Operation is :"<<(num1*num2);
            break;
        
        case 4:
            cout<<"The Outcome of the Operation is :"<<(num1/num2);

        default:
            cout<<"INVALID OPERATION";
            break;
    }
    return 0;
}