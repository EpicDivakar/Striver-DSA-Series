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

