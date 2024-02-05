// write a program to take student details and display them
// using objects and classes

#include<iostream>

class student
{
    private:
    int roll;
    char name;
    int marks;
    public:
    void getdata()
    {
        std::cout<<"Enter roll no. : ";
        std::cin>>roll;
        std::cout<<"Enter name : ";
        std::cin>>name;
        std::cout<<"Enter marks : ";
        std::cin>>marks;
    }
    void display()
    {
        std::cout<<"Roll no. : "<<roll<<std::endl;
        std::cout<<"Name : "<<name<<std::endl;
        std::cout<<"Marks : "<<marks<<std::endl;
    }
};

int main()
{
    student stu;
    stu.getdata();
    stu.display();
    return 0;
}
