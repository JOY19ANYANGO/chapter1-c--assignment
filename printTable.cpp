// Print a table
#include <iostream>
using namespace std;

int main() {
    // Define the header of the table
    cout << "p p * 5  p * 10  p * 25 p * 50" << endl;
    

    // Define the rows of the table
    for (int p = 1; p <= 5; p++) {
        cout << p * 5 << "     " << p * 10 << "     " << p * 25 << "     " << p * 50 << endl;
    }

    return 0;
}
