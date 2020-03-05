#include <iostream>
using namespace std;

int main(){
    int a[] = {2,7,4,1,5,3};
    int lengthOfArray = sizeof(a)/sizeof(a[0]); // gives the length of our array a[].

    for(int i=0; i < lengthOfArray - 1; i++ ){
        int min = i;
        for(int j = i+1; i<6; j++){
            if(a[j] < a[min]) min = j;
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    for(auto b: a) cout <<b <<" < "<<endl;
    return 0;
}