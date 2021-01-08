#include <iostream>
#include <cmath>
#include <math.h>
#include <cctype>

using namespace std;
int main (){
    while (true){
    int a,fact=1;
    long b=-2147483648,c=-2147483648 ;
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



while( b < -2147483647 )
    {
         cout << "\nNumber of b  ";

         char z ;
         // if failed to read or the character just after the number is not a white space
         if( !( cin >> b ) || ( cin.get(z) && !isspace(z) ) )
         {
             cout << "Entry must be a whole number! Try again: " ;
             cin.clear();
             cin.ignore( 500, '\n' );
             b = -2147483648 ; // go through the loop again
         }

         else if( b < 1 )
            cout << "Number of Bunnies must be a positive number! Try again: " ;
    }
    cin>>d;
    while( c < -2147483647 )
    {
         cout << "\nNumber of c  ";

         char z ;
         // if failed to read or the character just after the number is not a white space
         if( !( cin >> c ) || ( cin.get(z) && !isspace(z) ) )
         {
             cout << "Entry must be a whole number! Try again: " ;
             cin.clear();
             cin.ignore( 500, '\n' );
             c = -2147483648 ; // go through the loop again
         }

         else if( c < 1 )
            cout << "Number of Bunnies must be a positive number! Try again: " ;
    }


    if(d=="+"){cout <<"the result is "<< b+c <<endl; break; }
    else if(d=="-"){cout <<"the result is "<< b-c <<endl;break; }
    else if(d=="*"){cout <<"the result is "<< b*c <<endl;break; }
    else if(d=="/"){cout <<"the result is "<< b/c <<endl;break; }
    else {cout<<"Invalid operation!"<<endl; break;}

                }

//operations 2
if(a==2){
                while(true){

    cout <<"write var1 then the operation then second var if needed"<<endl;
    cin >>b>>d;
    if (d=="sqrt"){cout <<"the result is "<<sqrt(b)<<endl;break; }

    else if (d=="factorial"){int i=1;for(i=1;i<=b;i++){fact=fact*i;}
      cout<<"Factorial of " <<b<<" is: "<<fact<<endl;break; }

    else if (d=="power"){ cin >>c; cout <<"the result is "<<pow(b,c)<<endl; break; }
else {cout<<"Invalid operation!"<<endl; ;}

                }}
//operations 3

if(a==3){
        while(true){
        cout<<"write the operation then the var"<<endl;
        cin >> d >>b ;
        if(d=="log"){cout << "the result is "<<log(b)<<endl; break; }
        else if(d=="log2"){cout << "the result is "<<log2(b)<<endl;break;  }
        else if(d=="log10"){cout << "the result is "<<log10(b)<<endl;break; }
        else if(d=="exp"){cout << "the result is "<<exp(b)<<endl; break; }
        else {cout<<"Invalid operation!"<<endl; ;}

                }

}
// operation 4
if(a==4){
            while(true){

        cout <<"write the operaiton then the var" <<endl;
    cout<<"write a before the operation to get the inverse: asin for example" <<endl;
        cin >> d >>b ;
if (d=="sin"){cout << "the result is "<< sin(b* 3.14159 / 180)<<endl;break; }
else if (d=="cos"){cout << "the result is "<< cos(b* 3.14159 / 180)<<endl;break; }
else if (d=="tan"){cout << "the result is "<< tan(b* 3.14159 / 180)<<endl;break; }
else if (d=="asin"){cout << "the result is "<< asin(b* 3.14159 / 180)<<endl;break; }
else if (d=="acos"){cout << "the result is "<< acos(b* 3.14159 / 180)<<endl;break; }
 else if (d=="atan"){cout << "the result is "<< atan(b* 3.14159 / 180)<<endl;break; }
else {cout<<"Invalid operation!"<<endl; ;}

                }
}
if(a==5){
            while(true){

    cout << "write the operation then the var" <<endl;
    cin >> d >>b ;

if (d=="sinh"){cout << "the result is "<< sinh(b)<<endl;break; }
else if (d=="cosh"){cout << "the result is "<< cosh(b)<<endl;break; }
else if (d=="tanh"){cout << "the result is "<< tanh(b)<<endl;break; }
else if (d=="asinh"){cout << "the result is "<< asinh(b)<<endl;break; }
else if (d=="acosh"){cout << "the result is "<< acosh(b)<<endl;break; }
else if (d=="atanh"){cout << "the result is "<< atanh(b)<<endl;break; }
else {cout<<"Invalid operation!"<<endl; ;}

                }}
string x;
   cout <<"do you need new operation: type yes or no for answer"<< endl;
    cin >> x;
    if (x=="yes"){continue;}
    else {break;}
    }
return 0;
}
