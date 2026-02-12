Striver A-Z DSA Series

Studying Arrays Again and this is notes for that.(Reference by striver)
When do we use arrays ? When we want to store similar datatype multiple types than we use arrays.
<img width="519" height="134" alt="image" src="https://github.com/user-attachments/assets/a5150f5e-3655-41b5-8bee-854b56741967" />
This image is about the addressing of array element and you know how numbers are stored , so we are not sure about the first number that is stored can be anywhere in the cpu ,i'm not sure about it but the thinng i am sure about is the second element because that will be just after the first element.
Arrays element are stored in consicutive manner but i'm not sure about the first element.
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<<arr[3];
    return 0;
}
This is 1-D array

Now let's talk about 2-D arrays.

#include<iostream>
using namespace std;
int main(){
    // 2-D array
    int arr[3][5];
    arr[1][3]=99;
    cout<<arr[1][3];
    return 0;
}

This is how a 2-D arrays works


