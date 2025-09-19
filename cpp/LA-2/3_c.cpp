#include <iostream>
using namespace std;

class counter
{
public:
    static int count; 
};

int counter::count = 100; 

int main()
{
    cout << "Static variable: " << counter::count << endl;
    return 0;
}
