#include <iostream>
using namespace std;
class sample{
        int m;
        void read(void);
    public:
        void update(void);
        void write(void);
};
void sample :: update(void)
{
    read();//Amember function can access a private member function directly
}

int main()
{
    sample s1;
    // s1.read();
    // This won't work as objects cannot access private members
}