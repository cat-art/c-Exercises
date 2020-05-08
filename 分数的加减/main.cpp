#include <iostream>

using namespace std;

class fraction
{
private:
    int fz,fm;
public:
    fraction(int a=1,int b=1)
    {
        fz=a;
        fm=b;
    }
    friend fraction operator+(fraction,fraction);
    friend fraction operator-(fraction,fraction);
    void show()
    {
        cout<<fz<<"/"<<fm<<endl;
    }
};
fraction operator+(fraction f1,fraction f2)
{
    return fraction((f1.fz*f2.fm+f2.fz*f1.fm),f1.fm*f2.fm);
}
fraction operator-(fraction f1,fraction f2)
{
    return fraction((f1.fz*f2.fm-f2.fz*f1.fm),f1.fm*f2.fm);
}
int main()
{
    int a,b,c,d;
    cout<<"please input two fraction"<<endl;
    cin>>a>>b>>c>>d;
    fraction f1(a,b),f2(c,d);
    (f1+f2).show();
    (f1-f2).show();
    return 0;
}
