#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int number1,number2,sum,difference,product,quotient;
    cout<<"\n please enter two number:";
    cin>>number1>>number2;
    //sum
    sum=number1+number2;
    cout<<"\n sum="<<sum;
    //difference
    difference=number1-number2;
    cout<<"\n difference="<<difference;
    //product
    product=number1*number2;
    cout<<"\n product="<<product;
    //quotient
    quotient=number1/number2;
    cout<<"\n quotient="<<quotient;
    getch();
    return 0;
}