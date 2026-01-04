// This is very basic that how to print any value in cpp

#include<iostream>
using namespace std;

int main(){
    cout<<"This is a normal output";
    return 0;
}

//This is how we take the input from user and it prints as output same

#include<iostream>
using namespace std;

int main(){
    int num1 , num2;
    cout<<"Please enter your first number :";
    cin>>num1;
    cout<<"Please enter your second number :";
    cin>>num2;
        cout << "Your first number is " << num1 << " and your second number is " << num2;
    return 0;
    
}

// and this is how we directly print values 
#include<iostream>
using namespace std;
int main (){
    string days[]={"Monday" , "Tuesday" , "Wednesday", "Thursday" , "Friday" , "Saturday" , "Sunday"};
    int dayNumber;
    cout<<"Please enter your day number between (1-7) :";
    cin>>dayNumber;
    if(dayNumber>= 1 && dayNumber<=7){
        cout<<"Day is "<<days[dayNumber - 1];
    }else {
        cout<<"Please enter a correct number";    }
    return 0;
}

//If-Else question

#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Please enter your age : ";
    cin>>age;
    if (age<18){
        cout<<"You are not allowed to rent a bike";
    }else if(age>18 && age<=60){
        cout<<"Yes you can rent a bike";
    }else if(age>60){
        cout<<"Please provide medical assurance";
    };
    
    return 0;
}

//Another If-else statement

#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    string calcOperator;
    cout<<"Please enter your first number :";
    cin>>num1;
    cout<<"Please enter your second number :";
    cin>>num2;
    cout<<"Please now enter your operator";
    cin>>calcOperator;
    if(calcOperator == "+"){
        cout<<"Sum of your number is "<<num1+num2;
    }else if (calcOperator == "*"){
        cout<<"So after multiplying your output is"<<num1*num2;
    }else if (calcOperator == "-"){
        cout<<"so after subtracting your output is"<<num1-num2;
    }else{
        cout<<"You entered a invalid operator";
    }

// Switch case statement

#include<iostream>
using namespace std;

int main(){
    int services;
    cout<<"Please enter your number :";
    cin>>services;
    switch(services){
        case 1:
        cout<<"Talk to sales";
        break;
        case 2:
        cout<<"Talk to technical support";
        break;
        case 3:
        cout<<"Talk to billing department";
        break;
        case 4:
        cout<<"Talk to account management";
        break;
        case 5:
        cout<<"Exit";
        break;
        default:
        cout<<"Invalid Choice";
    }
    return 0;
}

//Another example of switch statement

#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    char calcOperator;

    cout << "Please enter your first number: ";
    cin >> num1;

    cout << "Please enter your second number: ";
    cin >> num2;

    cout << "Please now enter your operator (+, -, *): ";
    cin >> calcOperator;

    switch (calcOperator) {
        case '+':
            cout << "Sum of your numbers is " << num1 + num2;
            break;

        case '*':
            cout << "After multiplying, your output is " << num1 * num2;
            break;

        case '-':
            cout << "After subtracting, your output is " << num1 - num2;
            break;

        default:
            cout << "You entered an invalid operator";
    }

    return 0;
}

// THis is a 1-D array problem

// Store 5 roll numbers in an array and print them.
#include<iostream>
using namespace std;
int main (){
    int rollNumbers[5] = {1123 , 1124 , 1125 , 1126 , 1127 };
    
    cout<<rollNumbers[0]<<endl;
    cout<<rollNumbers[1]<<endl;
    cout<<rollNumbers[2]<<endl;
    cout<<rollNumbers[3]<<endl;
    cout<<rollNumbers[4]<<endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int number[5];

    cout << "Enter 5 numbers: ";
    cin >> number[0];
    cin >> number[1];
    cin >> number[2];
    cin >> number[3];
    cin >> number[4];

    cout << number[0] << endl;
    cout << number[1] << endl;
    cout << number[2] << endl;
    cout << number[3] << endl;
    cout << number[4] << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    char characters[5] = {'a', 'b', 'c', 'd', 'e'};

    cout << characters[0] << endl;
    cout << characters[1] << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int price[3] = {100, 250, 400};

    cout << price[0] << endl;
    cout << price[1] << endl;
    cout << price[2] << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    string countryName[5] = {"India", "Germany", "USA", "Japan", "France"};
    int number;

    cout << "Enter number (1-5): ";
    cin >> number;

    if (number <= 0 || number > 5) {
        cout << "Please enter correct number";
    } else {
        cout << countryName[number - 1];
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    string month[12] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    int number;
    cout << "Enter month number (1-12): ";
    cin >> number;

    if (number <= 0 || number > 12) {
        cout << "Invalid month";
    } else {
        cout << month[number - 1];
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    string month[12] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    int number;
    cout << "Enter month number (1-12): ";
    cin >> number;

    if (number <= 0 || number > 12) {
        cout << "Invalid month";
    } else {
        cout << month[number - 1];
    }

    return 0;
}
// How to access element in multidimensional array (2-D array)\
#include<iostream>
using namespace std;

int main (){
    int multiDimensionalArray[3][5]={
        {2 , 3 ,4 ,5 , 6},
        {10 , 12 , 13 , 14 , 15},
        {7 , 8 , 10 , 0 , 5},
    };
    cout << multiDimensionalArray[1][3];
    return 0;
}

// Basic array accessing element and adding them
#include<iostream>
using namespace std;

int main (){
    int matrix[2][2]={
        { 2 , 3},
        {4, 5},
    };
    cout<<matrix[1][0] + matrix[1][1];
    return 0;
}

// For loop
#include<iostream>
using namespace std;
int main (){
    for (int i = 1; i<=10 ; i = i +1){
        cout<<"Diwakar"<< i <<endl;
    }
    return 0;
}

// Some questions on for loop

#include <iostream>
using namespace std;

int main (){
    int numbers[2][4]= {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};
    for(int i=0; i<10; i++){
        cout<<numbers[i]<<endl;
    }
    return 0;
    
}

//Need to print all even numbers between 1 to 50

#include<iostream>
using namespace std;
int main(){
  for(int i = 0; i<=50; i++){
    if( i%2 == 0){
      cout<<i<<endl;
    }
  }
  return 0;
}

// To print all the odd numbers between 1 to 50

#include<iostream>
using namespace std;
int main(){
  for(int i = 0; i<=50; i++){
    if( i%2 != 0){
      cout<<i<<endl;
    }
  }
  return 0;
}

//To print from monday to saturday

#include<iostream>
using namespace std;
int main(){
  string days[]={"Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , "Saturday" , "Sunday"};
  
  for(int i = 0; i<=6; i++){
    cout<<days[i]<<endl;
  }
return 0;
}


//Loops pattern problems

#include<iostream>
using namespace std;
int main(){
  for(int i=0; i<=4; i++){
    for(int i =0; i<=4; i++){
      cout<<"*";
    };
    cout<<endl;
  };
  return 0;
}

//Now from here functions starts

#include<iostream>
using namespace std;

int main(){
  void outputValue(){
    cout<<"hey, my name is Diwakar and this is my first function program";
  };
  outputValue();
  return 0;
}
//this will give error you know why because in c++ functions can't be inside another functions it should a a global function

#include<iostream>
using namespace std;
void outputValue(){
  cout<<"hey, my name is Diwakar and this is my first function program"<<endl;
};
int main(){
  outputValue();
  outputValue();
  return 0;
}
//Sum of 2 numbers in functions
#include<iostream>
using namespace std;
int sum (int a , int b){
 int s = a+b;
  return s;
}
int main(){
  cout<<sum(24 , 6)<<endl;
  return 0;
}

//To calculate the minimum of two numbers in functions

#include<iostream>
using namespace std;
int minofTwo (int a , int b){
  if(a<b){
    return a;
  }else{
    return b;
  }
};
int main(){
  int a;
  int b;
  cout<<"Please enter your first number :";
  cin>>a;
  cout<<"Please enter your second value :";
  cin>>b;
  cout<<"So minimum is"<<minofTwo(a,b);
  return 0;
}
