/*
Q.4 1. You've to print all prime numbers between a range.
        2. Take as input "low", the lower limit of range.
        3. Take as input "high", the higher limit of range.
        4. For the range print all the primes numbers between low and high (both included).

Input:  low : 6
        High: 24
*/
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Declare the variables
    int a, b, i, j, flag;
 
    // Ask user to enter lower value of interval
    cout << "Enter lower bound of the interval: ";
    cin >> a; // Take input
 
    // Ask user to enter upper value of interval
    cout << "\nEnter upper bound of the interval: ";
    cin >> b; // Take input
 
    // Print display message
    cout << "\nPrime numbers between "
         << a << " and " << b << " are: "<<endl;
 
    // Traverse each number in the interval
    // with the help of for loop
    for (i = a; i <= b; i++) {
        // Skip 0 and 1 as they are
        // neither prime nor composite
        if (i == 1 || i == 0)
            continue;
 
        // flag variable to tell
        // if i is prime or not
        flag = 1;
 
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
 
        // flag = 1 means i is prime
        // and flag = 0 means i is not prime
        if (flag == 1)
            cout << i << " "<<endl; 
            
    }
 
    return 0;
}