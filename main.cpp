/*
 * MIPS_Assignemt_5.cpp
 *
 *  Created on: Nov 10, 2014
 *      Author: Adam
 *      Description: This program reads two inputs from the keyboard. The
 *      first input is verified then sent to the factorial function and then
 *      a factorial value for that input is returned. The second is also
 *      verified and sent to the fibonacci function which returns a fibonacci
 *      sequence to the nth term. The nth term is defined by the user as the
 *      second input value.
 */
# include <iostream>

using namespace std;

int Factorial(int);        //Prototype for Factorial function.
int Fibonacci(int);        //Prototype for Fibonacci function.

int main() {
    int input1;            //Variable for Factorial.
    int input2;            //Variable for Fibonacci.
    int fact_value;        //Variable to hold factorial return value.
    int fib;            //Variable to hold fibonacci return value.

    //Do while for input verification.
    do {
        cout << "Please enter an integer greater than 1 and less than 15 to "
                "calculate its factorial value.";
        cin >> input1;
    } while (input1 <= 1 || input1 >= 15);

    //Function call for factorial.
    fact_value = Factorial(input1);
    //Output message to console for user.
    cout << "The factorial for value for the integer you entered is: "
         << fact_value;
    cout << endl;

    //Do while for input verification.
    do {
        cout << "Please enter an integer greater than 1 and less than 39 to "
                "generate the fibonacci number of the nth term.";
        cin >> input2;
    } while (input2 <= 1 || input2 >= 39);

    cout << "The fibonacci number for the integer you entered is: ";

    //Function call for fibonacci function.
    fib = Fibonacci(input2);
    cout << fib << endl;

    return 0;
}

/*****************************************************************************
 * Factorial - This function take the input from main and determines the
 * for that number.
 */
int Factorial(int value) {
    int fac = 1;

    while (value) {
        fac = fac * value;
        value--;
    }
    return fac;
}

/*****************************************************************************
 * Fibonacci - This function gets an integer as input from main and generates
 * a fibonacci sequence to the nth term denoted by the input value that is
 * sent by main.
 */
int Fibonacci(int value) {
    int first = 0;
    int second = 1;
    int third;

    for (int i = 0; i < value; i++) {
        third = first + second;
        first = second;
        second = third;
    }
    return first;
}
