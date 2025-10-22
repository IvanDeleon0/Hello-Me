/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
#include <cmath>

int main(){
    double input1, input2, solve;
    int operators;
    
    // Input numbers 
    cout << " Number1: ";
    cin >> input1;
    cout << "\n"<< "\n";
    cout << " Number2: ";
    cin >> input2;
    
    
    // Choosing Operators
    cout << "--------------------------------\n";
    cout << "Choose your operators\n " << "1.Addition\n " << "2.Subtraction\n" << "3.Multiplication\n" << "4. Division\n" << "5. Remainder\n";
    cout << "--------------------------------\n";
    cout << "You've Chosen Number: ";
    cin >> operators;
    cout << "--------------------------------\n";
    
    
    // Solution per operators
    
    // Addition
    if (operators == 1){
      solve = input1 + input2;
      cout << "You Chose 1.Addition\n";
      cout << "Answer: " << solve << endl;
    }
   else if (operators == 2){
      solve = input1 - input2;
      cout << "You Chose 2. Subtraction\n";
      cout << "Answer: "<< solve <<endl;
    }
    else if (operators == 3){
      solve = input1 * input2;
      cout << "You Chose 3. Multiplication\n";
      cout << "Answer: " << solve <<endl;
    }
    else if (operators == 4){
     solve = input1 / input2;
     cout <<"You Chose 4.Division\n";
     cout <<"Answer: "<<solve << endl;
    }
    else if (operators == 5){
     solve = fmod(input1,input2); // Will turn the remainder into a float
     double round_solve = round(solve); // rounds the float remainder to whole Number
     
     cout << "You Chose 5.Remainder\n";
     cout << "Remainder of " << input1 << " and " << input2 << " is " << solve << ".\n";
    }
    else{
     cout << "Invalid Operator Input\n Try Again";
     }
     
    }
  

