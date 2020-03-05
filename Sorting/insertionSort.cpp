//insertionSort
/*
Basic Algorithm
- Divide the dataStructure in this case an array into two parts . Sorted and unsorted.
- let initially the sorted part be 0(hole - 1) and unsorted part be > 0 (greater than 0) (hole =<).
- for each iteration set the hole to that iteration step and save that hole's value.
- compare that value with the unsorted parts(hole - 1)
-  
*/
#include <iostream>
using namespace std;

int main() {
    int a[] = {2, 7, 4, 1, 5, 3};
    int lengthOfArray = sizeof(a) / sizeof(a[0]); // gives the length of our array a[].

    for(int i=1; i<lengthOfArray ; i++){
        int hole = i;
        int value = a[i];
        while(hole >0 && a[hole-1] > value){
            a[hole] = a[hole-1];
            hole--;
        }
        a[hole] = value;
    }
    for(auto b:a) cout <<b<< "<";
    return 0;
}