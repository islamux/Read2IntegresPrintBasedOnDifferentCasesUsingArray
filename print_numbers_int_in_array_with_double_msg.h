#include <iostream>
using namespace std;

// Printing array [using for loop]
void PrintNumbersIntArrayWithDoubleMsg( string msgToPrintForArr,int numberIntInArr[5], string msgToPrintForLengthOfArr, int lengthOfArr){

    int i = 0;

    // Length of array 
    cout << msgToPrintForLengthOfArr <<  lengthOfArr << "\n";

    for (  i = 0; i < lengthOfArr; i++)
    {
        cout << msgToPrintForArr << i+1  << " = "<< numberIntInArr[i] << "\n";
    }
    

}