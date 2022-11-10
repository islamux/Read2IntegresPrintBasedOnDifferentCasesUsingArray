#include <iostream>
using namespace std; 


void ReadNumberstIntArrayWithDoubleMsg( string msgToUsrArr, int numberFromArr[5], string msgToUsrLengthArr  ,int& lengthOfArr){

    // Reading length of array 
    cout << msgToUsrLengthArr << "\n";
    cin >> lengthOfArr;
  
    // Reading From Array using for loop
    for (int i = 0; i < lengthOfArr; i++)
    {
        cout << msgToUsrArr << "\n";
        cin >> numberFromArr[i] ;
    }
 }