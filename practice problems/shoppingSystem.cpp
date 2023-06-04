#include<iostream>
using namespace std;
class product{
	public:
		product() // constructor
			{
		cout<<"We products are available select your desired product: " << endl;
	}
};
class Book:public product{
	private:
    string nameOfBook, writerOfBook;
	public:
	void getdata()
{
    cout << "Please Enter the Name of BOOK & BOOK WRITER: " << endl;
    cin >> nameOfBook >> writerOfBook ;
}
void  setdata()
{
    cout << "BOOK NAME : " << nameOfBook << " BOOK WRITER : "<< writerOfBook;
}

};
class Electronics: public product{
	private:
    	string things;
	public:
    	void display(){
        cout<<"WE HAVE DIFFERENT ELECTRONIC GADGETS CHECK THEM: " << endl;
    }

};
class TV:public Electronics{
	private:
		int sizeOfTv;
		int priceOfTv;
		int discountOfTv;
	public:
		void getdata(){
    cout << "Enter a SIZE, PRICE, & DISCOUNT of TV:" << endl;
    cin >> sizeOfTv >> priceOfTv >> discountOfTv;
}
void  setdata()
{
    cout<<"Size of television : "<< sizeOfTv;
    cout << "PRICE of television : " << priceOfTv;
    cout << "DISCOUNT for you: "<< discountOfTv;
}

};
class MPplayer: public Electronics{
	private:
    	string color;
    	long gigaByte;
	public:
    	void getdata(){
    			cout << "Please enter COLOR & Giga bytes: " << endl;
    			cin >> color >> gigaByte ;
    }
		void  setdata(){
    cout << "color : " << color << " Giga bytes: " << gigaByte <<endl;
}
};
int main(){
	MPplayer M;
	M.getdata();
	M.setdata();
	Book B;
	B.getdata();
	B.setdata();
    TV tv;
    tv.getdata();
    tv.setdata();
   
    return 0;
}