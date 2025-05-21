#include<iostream>
using namespace std;

class Complex
{
    private:
        int a,b; 
    public:
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        void showData()
        {  cout<<"\na="<<a<<" b="<<b;    }
        Complex operator+(int x)
        {
            Complex temp;
            temp.a=a+x;
            temp.b=b;
            return temp;
        }
        friend Complex operator+(int,Complex);
        friend Complex operator+(Complex ,Complex);
        friend Complex operator-(Complex);
        friend istream& operator>>(istream&, Complex&);
        friend ostream& operator<<(ostream&, Complex);
};
istream& operator>>(istream &din,Complex &C)
{
    din>>C.a>>C.b;
    return din;
} 
ostream& operator<<(ostream &dout, Complex C)
{
    dout<<"\na="<<C.a<<" b="<<C.b;
    return dout;
}

Complex operator+(int x,Complex C)
{
    Complex temp;
    temp.a=C.a+x;
    temp.b=C.b;
    return temp;
}
Complex operator+(Complex X, Complex Y)
{
    Complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return temp;
}
Complex operator-(Complex X)
{
    Complex temp;
    temp.a=-X.a;
    temp.b=-X.b;
    return temp;
}
int main()
{
    Complex c1;
    cout<<"Enter a complex number: ";
    cin>>c1; //operator>>(cin,c1);
    cout<<"Entered complex number is "<<c1;
    cout<<endl;
    return 0;
}

/*
int main()
{
  
    Complex c1,c2,c3,c4,c5;
    c1.setData(3,4);
    c2.setData(5,6);
    c3.setData(7,8);
    //c3=c1+c2; //c3=c1.operator+(c2)
    c3=c1+c2; //c3=operator+(c1,c2);
    c1.showData();
    c2.showData();
    c3.showData();
    c4=c1+5; //c4=c1.operator+(5);
    c4.showData();
    //c5=-c1; //c5=c1.operator-();
    c4=5+c1; // c4=operator+(5,c1);
    c4.showData();
    c5=-c1; //c5=operator-(c1);
    c1.showData();
    c5.showData();
    cout<<endl;
    return 0;
}
*/
//cout<<x<<y<<z;

