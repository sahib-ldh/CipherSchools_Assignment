//Qestion num 3 
/*      1)You are given a number n.
        2. You've to create a pattern of * and separated by tab as shown in output format.
        INPUT: 5
        OUTPUT: 			*	
                        *	*	
                    *	*	*	
                *	*	*	*	
            *	*	*	*	*
*/
#include <bits/stdc++.h>
using namespace std;
 
// Function to demonstrate printing pattern
void piramid(int n)
{
    // number of spaces
    int k = 2 * n - 2;
 
    // Outer loop to handle number of rows
    
    for (int i = 0; i < n; i++) {
 
        // Inner loop to handle number spaces
        // values changing acc. to requirement
        for (int j = 0; j < k; j++)
            cout << " ";
 
        // Decrementing k after each loop
        k = k - 2;
 
        // Inner loop to handle number of columns
        // values changing acc. to outer loop
        for (int j = 0; j <= i; j++) {
            // Printing stars
            cout << "* ";
        }
 
        // Ending line after each row
        cout << endl;
    }
}
 
// Driver Code
int main()
{
    int n;
    cout<<"Enter any value ";
    cin>>n;
   
      // Function Call
    piramid(n);
    return 0;
}