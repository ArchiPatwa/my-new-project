#include <iostream>
#include <conio.h>
using namespace std;
class complex
{
    int a, b;
public:
    void set(int x, int y)
    {
        a=x;
        b=y;
    }
    void disp()
    {
        cout<<"a="<<a<<endl<<"b="<<b;
    }
    operator int()
    {
        return b;
    }

};
int main()
{
    complex c1;
    c1.set(3,4);
    c1.disp();
    int x, y;
    x = c1;
    y = c1;
    cout<<"x="<<x;
    cout<<"y="<<y;
}
