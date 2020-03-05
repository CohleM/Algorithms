#include <bits/stc++.h>
using namespace std;

void merge(int left[],int right[],int A[]){
    int nL =  sizeof(left) / sizeof(left[0]); // gives the length of our array left[].
    int nR = sizeof(right) / sizeof(right[0]);  // gives the length of our array right[].
    int i = 0,j=0,k=0;
    while(i < nL && j < nR) {
        if(left[i] <= right[j]) {
            A[k] = left[i];
            i++;
            k++;
        }
        else {
            A[k] = right[j];
            j++;
            k++;
        }
    }

    while (i < nL)
    {
        A[k] = left[i];
        k++;
        i++;
    }
    while (j < nR)
    {
        A[k] = right[j];
        k++;
        j++;
    }
}
void mergeSort(int A[]){
    int n = sizeof(A) / sizeof(A[0]); // gives the length of our array A[].
    if (n < 2) return;
    int mid = floor(n / 2);
    int left[mid];
    int right[n - mid];
    mergeSort(left);
    mergeSort(right);
    merge(left,right,A);
}
int main() {
    int a[] = {2, 7, 4, 1, 5, 3};
    mergeSort(a);
    for(auto b:a) cout << b<<"<"
    return 0;
}