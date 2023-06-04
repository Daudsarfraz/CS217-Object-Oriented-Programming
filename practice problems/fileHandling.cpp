#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int count = 0;
void number()
{
  count--;
    cout<<"The number of lines in this file are: " << count << endl;
};
int main()
{
    string line;
    ifstream file("Dawood.txt");
    if(file.is_open())
  {
        while(!file.eof())
    {
            getline(file,line);
            count++;
        }
        file.close();
    }
    number();
}
