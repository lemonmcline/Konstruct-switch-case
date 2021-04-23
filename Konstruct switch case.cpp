#include <iostream>
using namespace std;

int main()
{
    int z = 0;
    int x;
    while (true)
    {
        cin >> x;

        switch (z) {

        case 0:
            cout << "0";
            z = 1;
            break;

        case 1:
            cout << "1";
            z = 0;
            break;
        }
    }
}