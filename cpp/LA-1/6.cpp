#include <iostream>
using namespace std;
class Demo
{
    int secret = 42;
    void hiddenFunction()
    {
        cout << "Hidden function executed";
    }

public:
    int getSecret()
    {
        return secret; // accessing private variable
    }
    void runHidden()
    {
        hiddenFunction(); // accessing & calling private function
    }
};

int main()
{
    Demo obj;
    cout << obj.getSecret() << endl; // Access secret indirectly
    obj.runHidden();         //  Access + Call private function indirectly
    // obj.secret;             Cannot access private data directly
    // obj.hiddenFunction();   Cannot access private function directly
}
