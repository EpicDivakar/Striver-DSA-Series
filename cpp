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
