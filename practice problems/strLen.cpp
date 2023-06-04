#include<iostream>
using namespace std;
int FindLength(char str[]);
int main() {
   char str[100];
   int length;
   cout<<"\nEnter the String = ";
   cin>>str;
   length = FindLength(str);
   cout<<"\nLength of the String is = " << length;
   return length;
}
int FindLength(char str[]) {
   int len = 0;
   while (str[len] != '\0')
      len++;
   return (len);
}