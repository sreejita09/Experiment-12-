# Experiment 12 
# Aim 
To study and implement Constructors and Destructors

# Apparatus 
Vs Code

# Theory 

The constructor's name matches the class name.


Typically, constructors are defined in the public section of the class, but they can also be declared in the private section.
Constructors do not return any values and therefore lack a return type.
When an object of the class is created, the constructor is automatically invoked.


Constructors are used to initialize variables before an object is instantiated.
Constructors support overloading.
Constructors cannot be declared as virtual functions.


The syntax for a constructor's prototype is as follows: <class-name>(parameters);
Constructors can be implemented either inside or outside the class definition:
To define a constructor within the class: <class-name>(parameters) { // constructor implementation }
To define a constructor outside the class: <class-name>::<class-name>(parameters) { // constructor implementation }

# Codes 
# defining the constructor inside the class
code:
~~~
#include<iostream>
using namespace std;

class student
{
    int rollno;
    char name[50];
    double fee;

public:
    student()
    {
        cout << "Enter the RollNo: ";
        cin >> rollno;
        cin.ignore();
        cout << "Enter the Name: ";
        cin.getline(name, 50);
        cout << "Enter the Fee: "; 
        cin >> fee;
    }

    void display()
    {
        cout << endl << rollno << "\t" << name << "\t" << fee;
    }
};

int main()
{
    student s; 
    s.display();
    return 0;
}
~~~
![image](https://github.com/user-attachments/assets/d17187cf-f519-4d96-9f5c-d3a450901d45)

# defining the constructor outside the class
code:
~~~
#include<iostream>
using namespace std;

class student
{
    int rno;
    char name[50];
    double fee;

public:
    student();
    void display();
};

student::student()
{
    cout << "Enter the RollNo: ";
    cin >> rno;
    cout << "Enter the Name: ";
    cin >> name;
    cout << "Enter the Fee: ";
    cin >> fee;
}

void student::display()
{
    cout << endl << rno << "\t" << name << "\t" << fee;
}

int main()
{
    student s;
    s.display();
    return 0;
}
~~~
![image](https://github.com/user-attachments/assets/4d5bb89b-88fe-489b-bfc4-cb011a5a9801)

# default constructor 
code:
~~~
#include<iostream>
#include<string>
using namespace std;

class Data {
    string name;
    int roll_no;
    char dept[50];
    int batch;

public:
    Data() {
        cout << "Name: ";
        cin >> name;
        cout << "Roll Number: ";
        cin >> roll_no;
        cout << "Department: ";
        cin >> dept;
        cout << "Batch: ";
        cin >> batch;
    }

    void display() {
        cout << endl << "DETAILS:" << endl << name << " " << roll_no << " " << dept << " " << batch << endl;
    }
};

int main() {
    Data d1;
    d1.display();
}

~~~
![image](https://github.com/user-attachments/assets/92d8c239-5287-4fca-a6b7-264c3f8f1932)

# Parameterized constructor 
code:
~~~
#include<iostream>
using namespace std;
class Num
{
    public:
    Num(int c, int d)
    {
        if(c>d)
        {
            cout<<c<<" is greater";
        }
        else
        {
            cout<<d<<" is greater";
        }
    }
};
int main()
{
Num n1(4,3);
}
~~~
![image](https://github.com/user-attachments/assets/00e240f3-ca94-4177-b596-98cc668ea592)
# copy constructor 
code:
~~~
#include<iostream>
#include<string.h>
using namespace std;

class student {
    int rno;
    char name[50];
    double fee;

public:
    student(int no, const char n[], double f);
    student(const student &t);

    void display();
};

student::student(int no, const char n[], double f) {
    rno = no;
    strcpy(name, n);
    fee = f;
}

student::student(const student &t) {
    rno = t.rno;
    strcpy(name, t.name);
    fee = t.fee;
}

void student::display() {
    cout << endl << rno << "\t" << name << "\t" << fee;
}

int main() {
    student s(1001, "Manjeet", 10000);
    s.display();
    student manjeet(s);
    manjeet.display();
    return 0;
}
~~~
![image](https://github.com/user-attachments/assets/5d52cb2e-22e1-4a4c-bf14-c0ab14547465)

# destructors 
code:
~~~
#include<iostream>
using namespace std;
int count=0;
class destruct
{
    public:
    destruct()
    {
        count++;
        cout<<"No. of objects created: "<<count<<endl;
    }
    ~destruct()
    {
        count--;
        cout<<"No. of objects destroyed: "<<count<<endl;
    }
};
int main()
{
destruct aa,bb,cc;
{ 
    destruct dd;
}
return 0;
}
~~~
![image](https://github.com/user-attachments/assets/690716fa-845c-48a8-b2a1-ca35de6d57a8)

