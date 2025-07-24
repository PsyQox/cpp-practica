#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 30; i++)
    {
        if (i == 15)
        {
            break;
        }
        cout << i << endl;
    }
    
    for (int x = 0; x <= 10; x++)
    {
        if (x == 6 || x == 9)
        {
            continue;
        }
        cout << x << endl;
        
    }
    

    return 0;
}