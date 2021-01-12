#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;
int main()

{
    while (true)
    {
        int a, fact = 1; float b = -2147483648.1, c = -2147483648.1; string d, x; //declaration
        cout << "choose the type of calculation " << endl
            << "1- Simple operators" << endl
            << "2- Power functions" << endl
            << "3- Exponential and logarithmic functions" << endl
            << "4- Trigonometric functions" << endl
            << "5- Hyperbolic functions" << endl
            << "Your choice is =";
        cin >> a;

        switch (a)
        {
        case(1): //operations 1
        {cout << "write variable 1 then the operation then variable 2" << endl
            << "operations are + - * / " << endl;
        //check if b is int
        while (b < -2147483647.1)
        {
            cout << "Variable 1: ";
            char z;
            // if failed to read or the character just after the number is not a white space
            if (!(cin >> b) || (cin.get(z) && !isspace(z)))
            {
                cout << "Entry must be a number! Try again: " << endl;
                cin.clear();
                cin.ignore(500, '\n');
                b = -2147483648.1; // go through the loop again
            }
            else if (b < -2147483647.1)
                cout << "Entry must be a number! Try again:";
            }
            cout << "Enter the operation: ";
            cin >> d;
            //check if c is int
            while (c < -2147483647.1)
            {
                cout << "Variable 2: ";
                char z;
                // if failed to read or the character just after the number is not a white space
                if (!(cin >> c) || (cin.get(z) && !isspace(z)))
                {
                    cout << "Entry must be number! Try again: ";
                    cin.clear();
                    cin.ignore(500, '\n');
                    c = -2147483648.1; // go through the loop again
                }
                else if (c < -2147483647.1)
                    cout << "Entry must be a number! Try again: ";
                }

                if (d == "+") { cout << "the result is " << b + c << endl; }
                else if (d == "-") { cout << "the result is " << b - c << endl; }
                else if (d == "*") { cout << "the result is " << b * c << endl; }
                else if (d == "/") { cout << "the result is " << b / c << endl; }
                else { cout << "Invalid operation!" << endl; }
                break; }

        case(2): //operations 2
        { cout << "write variable 1 then the operation then variable 2" << endl
            << "write 0 if you will not use variable 2" << endl
            << "Operations are sqrt, power, factorial" << endl;
        while (b < -2147483647.1)
        {
            cout << "Variable 1: ";
            char z;
            // if failed to read or the character just after the number is not a white space
            if (!(cin >> b) || (cin.get(z) && !isspace(z)))
            {
                cout << "Entry must be number! Try again: ";
                cin.clear();
                cin.ignore(500, '\n');
                b = -2147483648.1; // go through the loop again
            }

            else if (b < -2147483647.1)
                cout << "Entry must be a number! Try again:";
            }

            cout << "Enter the operation: ";
            cin >> d;
            while (c < -2147483647.1)
            {
                cout << "Variable 2: ";
                char z;
                // if failed to read or the character just after the number is not a white space
                if (!(cin >> c) || (cin.get(z) && !isspace(z)))
                {
                    cout << "Entry must be number! Try again: ";
                    cin.clear();
                    cin.ignore(500, '\n');
                    c = -2147483648.1; // go through the loop again
                }
                else if (c < -2147483647.1)
                    cout << "Entry must be a number! Try again: ";
            }
            if (d == "sqrt") { cout << "the result is " << sqrt(b) << endl; }
            else if (d == "factorial") {
                int i = 1; for (i = 1; i <= b; i++) { fact = fact * i; }
                cout << "Factorial of " << b << " is: " << fact << endl;
            }
            else if (d == "power") { cout << "the result is " << pow(b, c) << endl; }
            else { cout << "Invalid operation!" << endl; ; }
            break;
        }

        case(3):  //operations 3
        { cout << "Operations are log, log2, log10, exp" << endl;
        while (b < -2147483647.1)
        {
            cout << "Variable 1: ";
            char z;
            // if failed to read or the character just after the number is not a white space
            if (!(cin >> b) || (cin.get(z) && !isspace(z)))
            {
                cout << "Entry must be number! Try again: ";
                cin.clear();
                cin.ignore(500, '\n');
                b = -2147483648.1; // go through the loop again
            }
            else if (b < -2147483647.1)
                cout << "Entry must be a number! Try again: ";
        }
        cout << "Enter the operation: ";
        cin >> d;
        if (d == "log") { cout << "the result is " << log(b) << endl; }
        else if (d == "log2") { cout << "the result is " << log2(b) << endl; }
        else if (d == "log10") { cout << "the result is " << log10(b) << endl; }
        else if (d == "exp") { cout << "the result is " << exp(b) << endl; }
        else { cout << "Invalid operation!" << endl; ; }
        break; }

        case(4): // operation 4
        { cout << "Operations are sin. cos, tan" << endl;
        cout << "for inverse: asin, acos, atan" << endl;
        while (b < -2147483647.1)
        {
            cout << "Enter Variable 1: ";
            char z;
            // if failed to read or the character just after the number is not a white space
            if (!(cin >> b) || (cin.get(z) && !isspace(z)))
            {
                cout << "Entry must be number! Try again: ";
                cin.clear();
                cin.ignore(500, '\n');
                b = -2147483648.1; // go through the loop again
            }
            else if (b < -2147483647.1)
                cout << "Entry must be number! Try again:  ";
        }
        cout << "Enter the operation: ";
        cin >> d;
        if (d == "sin") { cout << "the result is " << sin(b * 3.14159 / 180) << endl; }
        else if (d == "cos") { cout << "the result is " << cos(b * 3.14159 / 180) << endl; }
        else if (d == "tan") { cout << "the result is " << tan(b * 3.14159 / 180) << endl; }
        else if (d == "asin") { cout << "the result is " << asin(b * 3.14159 / 180) << endl; }
        else if (d == "acos") { cout << "the result is " << acos(b * 3.14159 / 180) << endl; }
        else if (d == "atan") { cout << "the result is " << atan(b * 3.14159 / 180) << endl; }
        else { cout << "Invalid operation!" << endl; ; }
        break; }

        case(5): //operations 5
        { cout << "Operations are sinh, cosh, tanh, " << endl;
        cout << "for inverse: asinh, acosh, atanh" << endl;
        while (b < -2147483647.1)
        {
            cout << "Enter Variable 1: ";
            char z;
            // if failed to read or the character just after the number is not a white space
            if (!(cin >> b) || (cin.get(z) && !isspace(z)))
            {
                cout << "Entry must be number! Try again: ";
                cin.clear();
                cin.ignore(500, '\n');
                b = -2147483648.1; // go through the loop again
            }
            else if (b < -2147483647.1)
                cout << "Entry must be number! Try again:  ";
        }
        cout << "Enter the operation: ";
        cin >> d;
        if (d == "sinh") { cout << "the result is " << sinh(b) << endl; }
        else if (d == "cosh") { cout << "the result is " << cosh(b) << endl; }
        else if (d == "tanh") { cout << "the result is " << tanh(b) << endl; }
        else if (d == "asinh") { cout << "the result is " << asinh(b) << endl; }
        else if (d == "acosh") { cout << "the result is " << acosh(b) << endl; }
        else if (d == "atanh") { cout << "the result is " << atanh(b) << endl; }
        else { cout << "Invalid operation!" << endl; ; }
        break; }

        }

        cout << "do you need new operation: type yes or no for answer" << endl;
        cin >> x;
        if (x == "yes") { continue; }
        else { break; }

        }        return 0;

        }


