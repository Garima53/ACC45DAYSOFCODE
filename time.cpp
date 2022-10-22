#include<iostream>
using namespace std;
class time
{
    public:
    int hrs,min,sec;
    void getdata()
    {
        cout<<"Hours:"<<endl;
        cin>>hrs;
        cout<<"Minutes:"<<endl;
        cin>>min;
        cout<<"Seconds:"<<endl;
        cin>>sec;
    }
    void display()
    {
        cout<<hrs<<":"<<min<<":"<<sec<<endl;
    }
    time operator+(time t)
    {
        time x;
        x.hrs=hrs+t.hrs;
        x.min=min+t.min;
        x.sec=sec+t.sec;
        return x;
    }
};
int main()
{
    time t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t1.display();
    t2.display();
    t3=t1+t2;
    if(t3.sec/60>0)
    {
        t3.min+=t3.sec/60;
        t3.sec=t3.sec%60;
    }
    if(t3.min/60>0)
    {
        t3.hrs+=t3.min/60;
        t3.min=t3.min%60;
    }
    cout<<"the sum  of two times:";
    t3.display();
            
}
