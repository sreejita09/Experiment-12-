//Sreejita Bhardwaj 
//Prn: 23070123130 
//experiment 12 (destructor)


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