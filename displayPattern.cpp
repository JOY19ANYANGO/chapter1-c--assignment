// display a pattern
// C++ Program to print the inverted triangle pattern
#include <iostream>
using namespace std;

// function to print inverted triangle
void printInvTriangle(int n)
{

	// outer loop to go thruough every row
	for (int i = 0; i < n; i++) {

		// leading space counter
		int space = i;

		// inner loop to print space and star * in each row
		for (int j = 0; j < 2 * n - i - 1; j++) {

			// condition to check weather the star * or
			// whitespace is to be printed
			if (space) {
				cout << " ";
				space--;
			}
			else {
				cout << "* ";
			}
		}
		cout << endl;
	}
}
// Function to demonstrate printing pattern
void pypart2(int n)
{
    // Number of spaces
    int i, j, k = n;
 
    // Outer loop to handle number of rows
    // n in this case
    for (i = 1; i <= n; i++) {
 
        // Inner loop for columns
        for (j = 1; j <= n; j++) {
 
            // Condition to print star pattern
            if (j >= k)
                cout << "* ";
            else
                cout << " ";
        }
        k--;
        cout << "\n";
    }
}

// driver code
int main()
{
	printInvTriangle(5);
    pypart2(5);
	return 0;
}
