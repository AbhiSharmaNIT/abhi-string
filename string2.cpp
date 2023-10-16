// // 1.  How to access the elements form the strings.
#include <iostream>
using namespace std;

int main()
{

    string st = "Element";
    cout << st[3] << endl;

    return 0;
}


// // 2. Remove the string from a perticular position
#include <iostream>
using namespace std;

int main()
{

    string st = "Satyambhai";
    st.erase(3, 4); // That means remove four terms after third position of the string.

    cout << st << endl;
    return 0;
}