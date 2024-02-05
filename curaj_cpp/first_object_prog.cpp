#include<iostream>
using namespace std;

class student
{
    private:
    int roll;
    char name[20];
    float marks;
    public:
    void getdata()
    {
        cout<<"Enter roll no. : ";
        cin>>roll;
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter marks : ";
        cin>>marks;
    }
    void display()
    {
        cout<<"Roll no. : "<<roll<<std::endl;
        cout<<"Name : "<<name<<std::endl;
        cout<<"Marks : "<<marks<<std::endl;
    }

    int main()
    {
        student stu;
        stu.getdata();
        stu.display();
        return 0;
    }

};