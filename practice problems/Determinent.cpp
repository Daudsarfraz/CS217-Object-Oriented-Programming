#include<iostream> 
using namespace std;
int main(){
	int mat[2][2], i, j;
	float determinant = 0;
	cout<<"Enter elements of matrix row wise:\n";
	for(i = 0; i < 2; i++)
		for(j = 0; j < 2; j++)
           cin>>mat[i][j];
	printf("\nThe Given matrix is:");
	for(i = 0; i < 2; i++){
		cout<<"\n";
		
		for(j = 0; j < 2; j++)
			cout<<mat[i][j]<<"\t";
	}
	for(i = 0; i < 2; i++)
		determinant = determinant + (mat[0][i] * (mat[1][(i+1)%2] * mat[2][(i+2)%2] - mat[1][(i+2)%2] * mat[2][(i+1)%3]));	
	cout<<"\n\ndeterminant of given Matix is: "<<determinant;	
	cout<<"\n\nInverse of matrix is: \n";
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++)
			cout<<((mat[(j+1)%2][(i+1)%2] * mat[(j+2)%2][(i+2)%2]) - (mat[(j+1)%2][(i+2)%2] * mat[(j+2)%2][(i+1)%2]))/ determinant<<"\t";	
		cout<<"\n";
	}
   return 0;
}