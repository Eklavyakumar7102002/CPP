#include <iostream>
using namespace std;
class Two;
class One
{
private:
    int x;

public:
    One(int num)
    {
        x = num;
    }
    friend void min(One, Two);
};
class Two
{
private:
    int y;

public:
    Two(int num2)
    {
        y = num2;
    }
    friend void min(One,Two);
};
void min(One a,Two b)
{
    if (a.x < b.y)
        cout << a.x  << "is minimum"<<endl;
    else if (a.x == b.y)
        cout << " both are equal "<<endl;
    else
        cout<<b.y  << " is ghh"<<endl;    
}
int main()
{
    One a(10);
    Two b(20);
    min(a,b);
    return 0;

}
