#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "Enter four sides " << endl;
    cin >> a >> b >> c >> d;
    if (a == b && c == d)
    {
        cout << "It is a Rectangle";
    }
    else if (a == c && b == d)
    {
        cout << "It is a Rectangle";
    }
    else if (a == d && b == c)
    {
        cout << "It is a Rectangle";
    }

    else
        cout << "IS is not a Rectangle";
    return 0;
}
     