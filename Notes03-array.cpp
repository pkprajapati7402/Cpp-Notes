// An array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by adding an index to a unique identifier.

// For arrays of a known size,  in this case, use the following declaration:

// int arr[10]; //Declares an array named arr of size 10, i.e, you can 
// store 10 integers.
// Note Unlike C, C++ allows dynamic allocation of arrays at runtime without special calls like malloc(). If , int arr[n] will create an array with space for  integers.

// Accessing elements of an array:

// Indexing in arrays starts from 0.So the first element is stored at 
// arr[0],the second element at arr[1] and so on through arr[9].
// You will be given an array of  integers and you have to print the integers in the reverse order.

// Input Format

// The first line of the input contains ,where  is the number of integers.The next line contains  space-separated integers.

// Constraints


// , where  is the  integer in the array.

// Output Format

// Print the  integers of the array in the reverse order, space-separated on a single line.

// Sample Input

// 4
// 1 4 3 2
// Sample Output

// 2 3 4 1


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a[200000], n, i;
    cin >> n;
    for(i = 0; i < n; i++){
       scanf("%d", &a[i]);
    }
    for(i = n - 1; i >= 0; i--){
        printf("%d ", a[i]);
    }
    return 0;
}
