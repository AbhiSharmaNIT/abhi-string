// 1. How to find the position of the substring form the main string?
#include <iostream>
using namespace std;

int main()
{
    string st = "BhaiJiUjjwal";

    cout << st.find("tta") << endl; // .find used to display the position of substring for the main string.
    return 0;
}

// 2. How to insert substring to the main string ?
#include <iostream>
using namespace std;

int main()
{

    string st = "chetankumar";
    st.insert(6, "lol");

    cout << st << endl;
    return 0;
}