#include<iostream>
#include"mymath.hpp"
using namespace std; 

int main() {
    int a;
    int b;
    int choice;
    cout << "Press 1 to calculate Sum of Numbers\n";
    cout << "Press 2 to calculate Difference of Numbers\n";
    cout << "Press 3 to calculate Product of numbers\n";
    cout << "Press 4 to calculate Division of numbers\n";
    cout << "Press 5 to exit\n";
    cin>>choice;
    cout<<"enter first number";
    std::cin>>a;
    cout<<"enter second number";
    cin>>b;
    switch (choice) {
    case 1: {
        mymath cadd;
        cadd.calc_add(a,b);
        break;
    }
    case 2: {
        mymath csub;
        csub.calc_sub(a,b);
        break;
    }
    case 3: {
        mymath cmult;
        cmult.calc_mult(a,b);
        break;
    }
    case 4: {
        mymath cdiv;
        cdiv.calc_div(a,b);
        break;
    }
    case 5: {
        cout<<"incorrect input/exit selected"<<"\n";
        break;
    }
    }
}