#include <iostream>
using namespace std;
int main()
{
    int num, tab;
    cout << "Enter any number:";
    cin >> num;
    for (int i = 1;i <= num;i++)
    {
        for (int j = 1;j <= 10;j++)
        {
            tab = i * j;
            cout << i << "x" << j << "=" << tab << endl;
        }

    }
    cout << endl;
}

