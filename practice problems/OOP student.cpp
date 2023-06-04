#include<iostream>
using namespace std;
class StudentRecord
{
    private:
        char name[15];
        float s1,s2,s3,total,avg;

    public:
        void getrecord(){
            cout<<"Enter Name Of The student : ";
            cin>>name;
            cout<<"Enter Marks of 1st subject : ";
            cin>>s1;
            cout<<"Enter Marks of 2nd subject : ";
            cin>>s2;
            cout<<"Enter Marks of 3rd subject : ";
            cin>>s3;
            total=s1+s2+s3;
            avg=total/3.0;

        }
    void displayrecord(){
        cout<<"Name of the student : "<<name<<endl;
        cout<<"Marks of 1st subject : "<<s1<<endl;
        cout<<"Marks of 2nd subject : "<<s2<<endl;
        cout<<"Marks of 3rd subject : "<<s3<<endl;
        cout<<"Total marks : "<<total<<endl;
        cout<<"Average marks  : "<<avg;

    }
};
int main(){
    StudentRecord stdrecord;
    stdrecord.getrecord();
    stdrecord.displayrecord();
    return 0;
}



#include<iostream>
using namespace std;
class StudentRecord
{
    private:
        char name[15];
        float s1,s2,s3,total,avg;

    public:
        void getrecord();
        void displayrecord();





};


void StudentRecord::getrecord(){
    cout<<"Enter Name Of The student : ";
            cin>>name;
            cout<<"Enter Marks of 1st subject : ";
            cin>>s1;
            cout<<"Enter Marks of 2nd subject : ";
            cin>>s2;
            cout<<"Enter Marks of 3rd subject : ";
            cin>>s3;
            total=s1+s2+s3;
            avg=total/3.0;

}
void StudentRecord::displayrecord(){
        cout<<"Name of the student : "<<name<<endl;
        cout<<"Marks of 1st subject : "<<s1<<endl;
        cout<<"Marks of 2nd subject : "<<s2<<endl;
        cout<<"Marks of 3rd subject : "<<s3<<endl;
        cout<<"Total marks : "<<total<<endl;
        cout<<"Average marks  : "<<avg<<endl;
}
int main(){
    StudentRecord stdrecord;
    stdrecord.getrecord();
    stdrecord.displayrecord();
    return 0;
}