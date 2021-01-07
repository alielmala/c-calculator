#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,fact=1;
    double b,c ;
    string d;

cout << "choose the type of calculation "<< endl
<<"1- Simple operators: (+, -, *, /) " <<endl
<<"2- Power functions: (power, sqrt, factorial)"<<endl
<<"3- Exponential and logarithmic functions: (exp, log, log10, log2)"<<endl
<<"4- Trigonometric functions: (sin, cos, tan, inverse sin, inverse cos, inverse tan)" <<endl
<<"5- Hyperbolic functions: (sinh, cosh, tanh, inverse sinh, inverse cosh, inverse tanh)"<<endl;
cin >> a ;

//operations 1
if(a==1){
    cout << "write var1 then the operation then var2"<<endl;
    cout << "operations are + - * /"<<endl;
    cin >>b>>d>>c;
    if(d=="+"){cout <<"the result is "<< b+c <<endl; }
    if(d=="-"){cout <<"the result is "<< b-c <<endl;}
    if(d=="*"){cout <<"the result is "<< b*c <<endl;}
    if(d=="/"){cout <<"the result is "<< b/c <<endl;}

}
//operations 2
if(a==2){
    cout <<"write var1 then the operation then second var if needed"<<endl;
    cin >>b>>d;
    if (d=="sqrt"){cout <<"the result is "<<sqrt(b)<<endl;}

    else if (d=="factorial"){int i=1;for(i=1;i<=b;i++){fact=fact*i;}
      cout<<"Factorial of " <<b<<" is: "<<fact<<endl;}

    else if (d=="power"){ cin >>c; cout <<"the result is "<<pow(b,c)<<endl;}
}
//operations 3

if(a==3){
    cout<<"write the operation then the var"<<endl;
        cin >> d >>b ;
        if(d=="log"){cout << "the result is "<<log(b)<<endl; }
        if(d=="log2"){cout << "the result is "<<log2(b)<<endl; }
        if(d=="log10"){cout << "the result is "<<log10(b)<<endl;
        if(d=="exp"){cout << "the result is "<<exp(b)<<endl; }
 }

}
// operation 4
if(a==4){
        cout <<"write the operaiton then the var" <<endl;
    cout<<"write a before the operation to get the inverse: asin for example" <<endl;
        cin >> d >>b ;
if (d=="sin"){cout << "the result is "<< sin(b* 3.14159 / 180)<<endl;}
if (d=="cos"){cout << "the result is "<< cos(b* 3.14159 / 180)<<endl;}
if (d=="tan"){cout << "the result is "<< tan(b* 3.14159 / 180)<<endl;}
if (d=="asin"){cout << "the result is "<< asin(b* 3.14159 / 180)<<endl;}
if (d=="acos"){cout << "the result is "<< acos(b* 3.14159 / 180)<<endl;}
if (d=="atan"){cout << "the result is "<< atan(b* 3.14159 / 180)<<endl;}

}
if(a==5){
    cout << "write the operation then the var" <<endl;
    cin >> d >>b ;

if (d=="sinh"){cout << "the result is "<< sinh(b)<<endl;}
if (d=="cosh"){cout << "the result is "<< cosh(b)<<endl;}
if (d=="tanh"){cout << "the result is "<< tanh(b)<<endl;}
if (d=="asinh"){cout << "the result is "<< asinh(b)<<endl;}
if (d=="acosh"){cout << "the result is "<< acosh(b)<<endl;}
if (d=="atanh"){cout << "the result is "<< atanh(b)<<endl;}
}
return 0;
}
