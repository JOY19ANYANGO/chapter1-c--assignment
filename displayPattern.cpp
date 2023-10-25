#include <iostream>
using namespace std;
// function to print triangle1
void printTriangle1(int n){
	// outer for loop which deals with number of rows
	for(int i=1; i<n;i++){
		// prints spaces on the sides of the triangle
		for(int k=n-i; k>0;k--)
			cout <<" ";
		
		// prints the stars in the triangle
        for(int j=i; j>0; j--)
			cout <<"* ";
		cout<<endl;
			

	}
}
void printTriangle2(int n){
	//outer loop which deals with number of rows
	for(int i=n; i>=1;i--){
		// prints spaces on the sides of the triangle
		for(int k=n-i; k>0; k--)
		   cout <<" ";
		// prints the stars in the triangle
        for(int j=i; j>0; j--)
			cout <<"* ";
		cout<<endl;  
	}
}
int main(){
	printTriangle2(5);
	printTriangle1(5);
	
	return 0;
}