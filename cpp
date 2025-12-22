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
