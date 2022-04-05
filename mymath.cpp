#include<iostream>
#include<cmath>
using namespace std; 
#include"mymath.hpp"

int mymath::calc_add(int num1 , int num2){
    int result;
    result = num1+num2;
    cout<<result;
    }

int mymath::calc_sub(int num1,int num2){
    int difference;
    difference=num1-num2;
    cout<<difference;

}
int mymath::calc_mult(int num1, int num2){
    int product;
    product =num1*num2;
    cout<<product;

}
int mymath::calc_div(int num1,int num2){
    int divs;
    divs= num1/num2;
    cout <<divs;

}