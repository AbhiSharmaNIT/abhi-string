//1. How to display the size or length of the string ?
#include<iostream>
using namespace std;

int main(){

    string st = "Ankeshkumar";

    cout<<st.size()<<endl;     //We can use .length() for size.
    return 0;
}

//2. How to display the all character of string one by one ?
#include<iostream>
using namespace std;

int main(){

    string st = "Chetanjibhai";

    for (int i = 0; i < st.length(); i++)
    {
        cout<<st[i]<<endl;
    }

     return 0;
}

//3. How to add number in a string ?
#include<iostream>
using namespace std;

int main(){

    string st = "100";
    int a = stoi(st);   // That is used for increase or decrease the integer values of string.

    cout<<a+100<<endl;
    return 0;

}
