#include<iostream>
using namespace std;
class Distance{
    public:
    int feet,inch;
    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }
    void operator-()
    {
        feet--;
        inch--;
        cout<<"\nFeet & Inches(Decrement):"<<feet<<"'"<<inch;
    
    }
};
int main()
{
    cout<<"Name: Samruddhi M Suryawanshi"<<endl;
    cout<<"div: B"<<endl;
    cout<<"Roll No: 42"<<endl;
    Distance d1(8,9);
    -d1;
    return 0;
}
