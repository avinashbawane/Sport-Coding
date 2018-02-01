#include<bits/stdc++.h>
using namespace std;
/*class Integer
{
    int num;
public:
    Integer()
    {
        num = 0;
        cout<<"1";
    }
    Integer(int arg)
    {
        cout<<"2";
        num = arg;
    }
    int getValue()
    {
        cout<<"3";
        return num;
    }
};
*/

template <typename T>
class Foo{
    T tVar;
public:
    Foo(T t) : tVar(t) {}
};
class FooDerived : public Foo<std::string> {};
int main()
{
    int testarray[3][2][2] = {1,2,3,4,5,6,7,8,9,10,11,12};

    //cout<<testarray[2][1][0];
    FooDerived d;

    return 0;
}
