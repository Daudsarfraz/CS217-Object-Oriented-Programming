#include<iostream>
#include<string>
using namespace std;
struct Record{
    string firstName,lastName,favoriteSport,favoritefood;
    float GPA;
    int ID,age;
};
int main(){
    Record obj1,obj2,obj3,obj4,obj5,obj6;
    int choice;
    char opt;
    obj1.firstName = "Muhammad";
    obj1.lastName = "Ali";
    obj1.age = 18;
    obj1.ID = 1234;
    obj1.GPA = 3.5;
    obj1.favoritefood = "Biryani";
    obj1.favoriteSport = "Vollyball";
    
    obj2.firstName = "Dawood";
    obj2.lastName = "Sarfraz";
    obj2.age = 19;
    obj2.ID = 3498;
    obj2.GPA = 3.10;
    obj2.favoritefood = "Shawarma";
    obj2.favoriteSport = "E-Gaming";
    
    obj3.firstName = "Usman";
    obj3.lastName = "Ali";
    obj3.age = 21;
    obj3.ID = 1421;
    obj3.GPA = 3.2;
    obj3.favoritefood = "Pizza";
    obj3.favoriteSport = "Football";

    obj4.firstName = "Tayyab";
    obj4.lastName = "Ali";
    obj4.age = 18;
    obj4.ID = 1091;
    obj4.GPA = 1.5;
    obj4.favoritefood = "Plaoo";
    obj4.favoriteSport = "Cricket";

    obj5.firstName = "Mohsin";
    obj5.lastName = "Azam";
    obj5.age = 22;
    obj5.ID = 4065;
    obj5.GPA = 4.0;
    obj5.favoritefood = "Chicken";
    obj5.favoriteSport = "Cricket";

    obj6.firstName = "Muhammad";
    obj6.lastName = "Ali";
    obj6.age = 24;
    obj6.ID = 6789;
    obj6.GPA = 3.6;
    obj6.favoritefood = "pasta";
    obj6.favoriteSport = "Cricket";
    do{
        cout<<"1.Search by first name"<<endl;
        cout<<"2.Search by second name"<<endl;
        cout<<"3.Search by age"<<endl;
        cout<<"4.Search by ID"<<endl;
        cout<<"5.Search by favorite sport"<<endl;
        cout<<"6.Search by favorite food"<<endl;
        cout<<"7.Search by current GPA"<<endl;
        cout << endl;
        cout<<"Enter your choice(1,2,3,4,5,6,7)? ";
        cin>>choice;    
        if(choice == 1){
            string name;
            cout << endl <<"Enter first name to search the records : ";
            cin>>name;
            if(name == obj1.firstName){
                cout << "First Name : "<< obj1.firstName << endl;
                cout << "Last Name :"<< obj1.lastName << endl;
                cout << "Age : "<< obj1.age << endl;
                cout << "ID : "<<obj1.ID << endl;
                cout << "GPA : "<< obj1.GPA << endl;
                cout << "Favorite Food : " << obj1.favoritefood << endl;
                cout << "Favorite Sport : " <<obj1.favoriteSport << endl;
            }else if(name == obj2.firstName){
                cout << "First Name : "<< obj2.firstName << endl;
                cout << "Last Name :"<< obj2.lastName << endl;
                cout << "Age : "<< obj2.age << endl;
                cout << "ID : "<<obj2.ID << endl;
                cout << "GPA : "<< obj2.GPA << endl;
                cout << "Favorite Food : " << obj2.favoritefood << endl;
                cout << "Favorite Sport : " <<obj2.favoriteSport << endl;
            }else if(name == obj3.firstName){
                cout << "First Name : "<< obj3.firstName << endl;
                cout << "Last Name :"<< obj3.lastName << endl;
                cout << "Age : "<< obj3.age << endl;
                cout << "ID : "<<obj3.ID << endl;
                cout << "GPA : "<< obj3.GPA << endl;
                cout << "Favorite Food : " << obj3.favoritefood << endl;
                cout << "Favorite Sport : " <<obj3.favoriteSport << endl;
            }else if(name == obj4.firstName){
                cout << "First Name : "<< obj4.firstName << endl;
                cout << "Last Name :"<< obj4.lastName << endl;
                cout << "Age : "<< obj4.age << endl;
                cout << "ID : "<<obj4.ID << endl;
                cout << "GPA : "<< obj4.GPA << endl;
                cout << "Favorite Food : " << obj4.favoritefood << endl;
                cout << "Favorite Sport : " <<obj4.favoriteSport << endl;
            }else if(name == obj5.firstName){
                cout << "First Name : "<< obj5.firstName << endl;
                cout << "Last Name :"<< obj5.lastName << endl;
                cout << "Age : "<< obj5.age << endl;
                cout << "ID : "<<obj5.ID << endl;
                cout << "GPA : "<< obj5.GPA << endl;
                cout << "Favorite Food : " << obj5.favoritefood << endl;
                cout << "Favorite Sport : " <<obj5.favoriteSport << endl;
            }else if(name == obj6.firstName){
                cout << "First Name : "<< obj6.firstName << endl;
                cout << "Last Name :"<< obj6.lastName << endl;
                cout << "Age : "<< obj6.age << endl;
                cout << "ID : "<<obj6.ID << endl;
                cout << "GPA : "<< obj6.GPA << endl;
                cout << "Favorite Food : " << obj6.favoritefood << endl;
                cout << "Favorite Sport : " <<obj6.favoriteSport << endl;
            }else{
                cout<<"No records found with first name " << name << endl;
            }
        }else if(choice == 2){
            string name;
            cout<< endl <<"Enter Last name to search the records : ";
            cin>>name;
            if(name == obj1.lastName){
                cout << "First Name : "<< obj1.firstName << endl;
                cout << "Last Name :"<< obj1.lastName << endl;
                cout << "Age : "<< obj1.age << endl;
                cout << "ID : "<<obj1.ID << endl;
                cout << "GPA : "<< obj1.GPA << endl;
                cout << "Favorite Food : " << obj1.favoritefood << endl;
                cout << "Favorite Sport : " <<obj1.favoriteSport << endl;
            }else if(name == obj2.lastName){
                cout << "First Name : "<< obj2.firstName << endl;
                cout << "Last Name :"<< obj2.lastName << endl;
                cout << "Age : "<< obj2.age << endl;
                cout << "ID : "<<obj2.ID << endl;
                cout << "GPA : "<< obj2.GPA << endl;
                cout << "Favorite Food : " << obj2.favoritefood << endl;
                cout << "Favorite Sport : " <<obj2.favoriteSport << endl;
            }else if(name == obj3.lastName){
                cout << "First Name : "<< obj3.firstName << endl;
                cout << "Last Name :"<< obj3.lastName << endl;
                cout << "Age : "<< obj3.age << endl;
                cout << "ID : "<<obj3.ID << endl;
                cout << "GPA : "<< obj3.GPA << endl;
                cout << "Favorite Food : " << obj3.favoritefood << endl;
                cout << "Favorite Sport : " <<obj3.favoriteSport << endl;
            }else if(name == obj4.lastName){
                cout << "First Name : "<< obj4.firstName << endl;
                cout << "Last Name :"<< obj4.lastName << endl;
                cout << "Age : "<< obj4.age << endl;
                cout << "ID : "<<obj4.ID << endl;
                cout << "GPA : "<< obj4.GPA << endl;
                cout << "Favorite Food : " << obj4.favoritefood << endl;
                cout << "Favorite Sport : " <<obj4.favoriteSport << endl;
            }else if(name == obj5.lastName){
                cout << "First Name : "<< obj5.firstName << endl;
                cout << "Last Name :"<< obj5.lastName << endl;
                cout << "Age : "<< obj5.age << endl;
                cout << "ID : "<<obj5.ID << endl;
                cout << "GPA : "<< obj5.GPA << endl;
                cout << "Favorite Food : " << obj5.favoritefood << endl;
                cout << "Favorite Sport : " <<obj5.favoriteSport << endl;
            }else if(name == obj6.lastName){
                cout << "First Name : "<< obj6.firstName << endl;
                cout << "Last Name :"<< obj6.lastName << endl;
                cout << "Age : "<< obj6.age << endl;
                cout << "ID : "<<obj6.ID << endl;
                cout << "GPA : "<< obj6.GPA << endl;
                cout << "Favorite Food : " << obj6.favoritefood << endl;
                cout << "Favorite Sport : " <<obj6.favoriteSport << endl;
            }else{
                cout<<"No records found with last name " << name << endl;
            }
        }else if(choice == 3){
            int age;
            cout<< endl <<"Enter age to search the records : ";
            cin>>age;
            if(age == obj1.age){
                cout << "First Name : "<< obj1.firstName << endl;
                cout << "Last Name :"<< obj1.lastName << endl;
                cout << "Age : "<< obj1.age << endl;
                cout << "ID : "<<obj1.ID << endl;
                cout << "GPA : "<< obj1.GPA << endl;
                cout << "Favorite Food : " << obj1.favoritefood << endl;
                cout << "Favorite Sport : " <<obj1.favoriteSport << endl;
            }else if(age == obj2.age){
                cout << "First Name : "<< obj2.firstName << endl;
                cout << "Last Name :"<< obj2.lastName << endl;
                cout << "Age : "<< obj2.age << endl;
                cout << "ID : "<<obj2.ID << endl;
                cout << "GPA : "<< obj2.GPA << endl;
                cout << "Favorite Food : " << obj2.favoritefood << endl;
                cout << "Favorite Sport : " <<obj2.favoriteSport << endl;
            }else if(age == obj3.age){
                cout << "First Name : "<< obj3.firstName << endl;
                cout << "Last Name :"<< obj3.lastName << endl;
                cout << "Age : "<< obj3.age << endl;
                cout << "ID : "<<obj3.ID << endl;
                cout << "GPA : "<< obj3.GPA << endl;
                cout << "Favorite Food : " << obj3.favoritefood << endl;
                cout << "Favorite Sport : " <<obj3.favoriteSport << endl;
            }else if(age == obj4.age){
                cout << "First Name : "<< obj4.firstName << endl;
                cout << "Last Name :"<< obj4.lastName << endl;
                cout << "Age : "<< obj4.age << endl;
                cout << "ID : "<<obj4.ID << endl;
                cout << "GPA : "<< obj4.GPA << endl;
                cout << "Favorite Food : " << obj4.favoritefood << endl;
                cout << "Favorite Sport : " <<obj4.favoriteSport << endl;
            }else if(age == obj5.age){
                cout << "First Name : "<< obj5.firstName << endl;
                cout << "Last Name :"<< obj5.lastName << endl;
                cout << "Age : "<< obj5.age << endl;
                cout << "ID : "<<obj5.ID << endl;
                cout << "GPA : "<< obj5.GPA << endl;
                cout << "Favorite Food : " << obj5.favoritefood << endl;
                cout << "Favorite Sport : " <<obj5.favoriteSport << endl;
            }else if(age == obj6.age){
                cout << "First Name : "<< obj6.firstName << endl;
                cout << "Last Name :"<< obj6.lastName << endl;
                cout << "Age : "<< obj6.age << endl;
                cout << "ID : "<<obj6.ID << endl;
                cout << "GPA : "<< obj6.GPA << endl;
                cout << "Favorite Food : " << obj6.favoritefood << endl;
                cout << "Favorite Sport : " <<obj6.favoriteSport << endl;
            }else{
                cout<<"No records found with age of " << age << endl;
            }
        }else if(choice == 4){
            int id;
            cout<< endl <<"Enter ID to search the records : ";
            cin>>id;        
            if(id == obj1.ID){
                cout << "First Name : "<< obj1.firstName << endl;
                cout << "Last Name :"<< obj1.lastName << endl;
                cout << "Age : "<< obj1.age << endl;
                cout << "ID : "<<obj1.ID << endl;
                cout << "GPA : "<< obj1.GPA << endl;
                cout << "Favorite Food : " << obj1.favoritefood << endl;
                cout << "Favorite Sport : " <<obj1.favoriteSport << endl;
            }else if(id == obj2.ID){
                cout << "First Name : "<< obj2.firstName << endl;
                cout << "Last Name :"<< obj2.lastName << endl;
                cout << "Age : "<< obj2.age << endl;
                cout << "ID : "<<obj2.ID << endl;
                cout << "GPA : "<< obj2.GPA << endl;
                cout << "Favorite Food : " << obj2.favoritefood << endl;
                cout << "Favorite Sport : " <<obj2.favoriteSport << endl;
            }else if(id == obj3.ID){
                cout << "First Name : "<< obj3.firstName << endl;
                cout << "Last Name :"<< obj3.lastName << endl;
                cout << "Age : "<< obj3.age << endl;
                cout << "ID : "<<obj3.ID << endl;
                cout << "GPA : "<< obj3.GPA << endl;
                cout << "Favorite Food : " << obj3.favoritefood << endl;
                cout << "Favorite Sport : " <<obj3.favoriteSport << endl;
            }else if(id == obj4.ID){
                cout << "First Name : "<< obj4.firstName << endl;
                cout << "Last Name :"<< obj4.lastName << endl;
                cout << "Age : "<< obj4.age << endl;
                cout << "ID : "<<obj4.ID << endl;
                cout << "GPA : "<< obj4.GPA << endl;
                cout << "Favorite Food : " << obj4.favoritefood << endl;
                cout << "Favorite Sport : " <<obj4.favoriteSport << endl;
            }else if(id == obj5.ID){
                cout << "First Name : "<< obj5.firstName << endl;
                cout << "Last Name :"<< obj5.lastName << endl;
                cout << "Age : "<< obj5.age << endl;
                cout << "ID : "<<obj5.ID << endl;
                cout << "GPA : "<< obj5.GPA << endl;
                cout << "Favorite Food : " << obj5.favoritefood << endl;
                cout << "Favorite Sport : " <<obj5.favoriteSport << endl;
            }else if(id == obj6.ID){
                cout << "First Name : "<< obj6.firstName << endl;
                cout << "Last Name :"<< obj6.lastName << endl;
                cout << "Age : "<< obj6.age << endl;
                cout << "ID : "<<obj6.ID << endl;
                cout << "GPA : "<< obj6.GPA << endl;
                cout << "Favorite Food : " << obj6.favoritefood << endl;
                cout << "Favorite Sport : " <<obj6.favoriteSport << endl;
            }else{
                cout<<"No records found with id " << id << endl;
            }
        }else if(choice == 5){
            string sport;
            cout<< endl <<"Enter favorite sport to search the records : ";
            cin>>sport;
            if(sport == obj1.favoriteSport){
                cout << "First Name : "<< obj1.firstName << endl;
                cout << "Last Name :"<< obj1.lastName << endl;
                cout << "Age : "<< obj1.age << endl;
                cout << "ID : "<<obj1.ID << endl;
                cout << "GPA : "<< obj1.GPA << endl;
                cout << "Favorite Food : " << obj1.favoritefood << endl;
                cout << "Favorite Sport : " <<obj1.favoriteSport << endl;
            }else if(sport == obj2.favoriteSport){
                cout << "First Name : "<< obj2.firstName << endl;
                cout << "Last Name :"<< obj2.lastName << endl;
                cout << "Age : "<< obj2.age << endl;
                cout << "ID : "<<obj2.ID << endl;
                cout << "GPA : "<< obj2.GPA << endl;
                cout << "Favorite Food : " << obj2.favoritefood << endl;
                cout << "Favorite Sport : " <<obj2.favoriteSport << endl;
            }else if(sport == obj3.favoriteSport){
                cout << "First Name : "<< obj3.firstName << endl;
                cout << "Last Name :"<< obj3.lastName << endl;
                cout << "Age : "<< obj3.age << endl;
                cout << "ID : "<<obj3.ID << endl;
                cout << "GPA : "<< obj3.GPA << endl;
                cout << "Favorite Food : " << obj3.favoritefood << endl;
                cout << "Favorite Sport : " <<obj3.favoriteSport << endl;
            }else if(sport == obj4.favoriteSport){
                cout << "First Name : "<< obj4.firstName << endl;
                cout << "Last Name :"<< obj4.lastName << endl;
                cout << "Age : "<< obj4.age << endl;
                cout << "ID : "<<obj4.ID << endl;
                cout << "GPA : "<< obj4.GPA << endl;
                cout << "Favorite Food : " << obj4.favoritefood << endl;
                cout << "Favorite Sport : " <<obj4.favoriteSport << endl;
            }else if(sport == obj5.favoriteSport){
                cout << "First Name : "<< obj5.firstName << endl;
                cout << "Last Name :"<< obj5.lastName << endl;
                cout << "Age : "<< obj5.age << endl;
                cout << "ID : "<<obj5.ID << endl;
                cout << "GPA : "<< obj5.GPA << endl;
                cout << "Favorite Food : " << obj5.favoritefood << endl;
                cout << "Favorite Sport : " <<obj5.favoriteSport << endl;
            }else if(sport == obj6.favoriteSport){
                cout << "First Name : "<< obj6.firstName << endl;
                cout << "Last Name :"<< obj6.lastName << endl;
                cout << "Age : "<< obj6.age << endl;
                cout << "ID : "<<obj6.ID << endl;
                cout << "GPA : "<< obj6.GPA << endl;
                cout << "Favorite Food : " << obj6.favoritefood << endl;
                cout << "Favorite Sport : " <<obj6.favoriteSport << endl;
            }else{
                cout<<"No records found with favorite sport " << sport << endl;
            }
        }else if(choice == 6){
            string food;
            cout<< endl <<"Enter favorite food to search the records : ";
            cin>>food;
            if(food == obj1.favoritefood){
                cout << "First Name : "<< obj1.firstName << endl;
                cout << "Last Name :"<< obj1.lastName << endl;
                cout << "Age : "<< obj1.age << endl;
                cout << "ID : "<<obj1.ID << endl;
                cout << "GPA : "<< obj1.GPA << endl;
                cout << "Favorite Food : " << obj1.favoritefood << endl;
                cout << "Favorite Sport : " <<obj1.favoriteSport << endl;
            }else if(food == obj2.favoritefood){
                cout << "First Name : "<< obj2.firstName << endl;
                cout << "Last Name :"<< obj2.lastName << endl;
                cout << "Age : "<< obj2.age << endl;
                cout << "ID : "<<obj2.ID << endl;
                cout << "GPA : "<< obj2.GPA << endl;
                cout << "Favorite Food : " << obj2.favoritefood << endl;
                cout << "Favorite Sport : " <<obj2.favoriteSport << endl;
            }else if(food == obj3.favoritefood){
                cout << "First Name : "<< obj3.firstName << endl;
                cout << "Last Name :"<< obj3.lastName << endl;
                cout << "Age : "<< obj3.age << endl;
                cout << "ID : "<<obj3.ID << endl;
                cout << "GPA : "<< obj3.GPA << endl;
                cout << "Favorite Food : " << obj3.favoritefood << endl;
                cout << "Favorite Sport : " <<obj3.favoriteSport << endl;
            }else if(food == obj4.favoritefood){
                cout << "First Name : "<< obj4.firstName << endl;
                cout << "Last Name :"<< obj4.lastName << endl;
                cout << "Age : "<< obj4.age << endl;
                cout << "ID : "<<obj4.ID << endl;
                cout << "GPA : "<< obj4.GPA << endl;
                cout << "Favorite Food : " << obj4.favoritefood << endl;
                cout << "Favorite Sport : " <<obj4.favoriteSport << endl;
            }else if(food == obj5.favoritefood){
                cout << "First Name : "<< obj5.firstName << endl;
                cout << "Last Name :"<< obj5.lastName << endl;
                cout << "Age : "<< obj5.age << endl;
                cout << "ID : "<<obj5.ID << endl;
                cout << "GPA : "<< obj5.GPA << endl;
                cout << "Favorite Food : " << obj5.favoritefood << endl;
                cout << "Favorite Sport : " <<obj5.favoriteSport << endl;
            }else if(food == obj6.favoritefood){
                cout << "First Name : "<< obj6.firstName << endl;
                cout << "Last Name :"<< obj6.lastName << endl;
                cout << "Age : "<< obj6.age << endl;
                cout << "ID : "<<obj6.ID << endl;
                cout << "GPA : "<< obj6.GPA << endl;
                cout << "Favorite Food : " << obj6.favoritefood << endl;
                cout << "Favorite Sport : " <<obj6.favoriteSport << endl;
            }else{
                cout<<"No records found with favorite food " << food << endl;
            }
        }else if(choice == 7){
            float gpa;
            cout<< endl <<"Enter current gpa to search the records : ";
            cin>>gpa;
            if(gpa == obj1.GPA){
                cout << "First Name : "<< obj1.firstName << endl;
                cout << "Last Name :"<< obj1.lastName << endl;
                cout << "Age : "<< obj1.age << endl;
                cout << "ID : "<<obj1.ID << endl;
                cout << "GPA : "<< obj1.GPA << endl;
                cout << "Favorite Food : " << obj1.favoritefood << endl;
                cout << "Favorite Sport : " <<obj1.favoriteSport << endl;
            }else if(gpa == obj2.GPA){
                cout << "First Name : "<< obj2.firstName << endl;
                cout << "Last Name :"<< obj2.lastName << endl;
                cout << "Age : "<< obj2.age << endl;
                cout << "ID : "<<obj2.ID << endl;
                cout << "GPA : "<< obj2.GPA << endl;
                cout << "Favorite Food : " << obj2.favoritefood << endl;
                cout << "Favorite Sport : " <<obj2.favoriteSport << endl;
            }else if(gpa == obj3.GPA){
                cout << "First Name : "<< obj3.firstName << endl;
                cout << "Last Name :"<< obj3.lastName << endl;
                cout << "Age : "<< obj3.age << endl;
                cout << "ID : "<<obj3.ID << endl;
                cout << "GPA : "<< obj3.GPA << endl;
                cout << "Favorite Food : " << obj3.favoritefood << endl;
                cout << "Favorite Sport : " <<obj3.favoriteSport << endl;
            }else if(gpa == obj4.GPA){
                cout << "First Name : "<< obj4.firstName << endl;
                cout << "Last Name :"<< obj4.lastName << endl;
                cout << "Age : "<< obj4.age << endl;
                cout << "ID : "<<obj4.ID << endl;
                cout << "GPA : "<< obj4.GPA << endl;
                cout << "Favorite Food : " << obj4.favoritefood << endl;
                cout << "Favorite Sport : " <<obj4.favoriteSport << endl;
            }else if(gpa == obj5.GPA){
                cout << "First Name : "<< obj5.firstName << endl;
                cout << "Last Name :"<< obj5.lastName << endl;
                cout << "Age : "<< obj5.age << endl;
                cout << "ID : "<<obj5.ID << endl;
                cout << "GPA : "<< obj5.GPA << endl;
                cout << "Favorite Food : " << obj5.favoritefood << endl;
                cout << "Favorite Sport : " <<obj5.favoriteSport << endl;
            }else if(gpa == obj6.GPA){
                cout << "First Name : "<< obj6.firstName << endl;
                cout << "Last Name :"<< obj6.lastName << endl;
                cout << "Age : "<< obj6.age << endl;
                cout << "ID : "<<obj6.ID << endl;
                cout << "GPA : "<< obj6.GPA << endl;
                cout << "Favorite Food : " << obj6.favoritefood << endl;
                cout << "Favorite Sport : " <<obj6.favoriteSport << endl;
            }else{
                cout<<"No records found with GPA of " << gpa << endl;
            }
        }else{
            cout<<"Wrong choice!!!"<<endl;
        }
        cout << endl << "Do you want to continue(y,n)? ";
        cin >> opt;
        cout << endl;
    }while(opt != 'n');
    return 0;
}