#include <iostream>
using namespace std;

// Reading 
#include "read_numbers_int_in_array_with_double_msg.h"

// Printing 
#include "print_numbers_int_in_array_with_double_msg.h"
#include "print_number_int_with_double_msg.h"
#include "result.h"

/*
    * Read 2 integers : a,b
        * Read length of array 
        * Reading using for loop 
    
    * Calculation Funcs
       * sum 
       * sub 
       * mul 
       * div 
    
    * Check  and Printing Func
        * if a , b == odd ==> print a * b ==> mul func  
        * if a , b == even ==>  assume b !=0  ==> div func  
        * if a == odd  , b == even ==>  sum func
        * if a == even , b == odd  ==>  sub fun c          
*/

int main(){
    
    // Variabe [to using reading by ref], lengthOfArr in function by ref and  array by ref(by default).
    int numberInArrMain[5];
    int lengthOfArrMain;

    // Reading (void)
    ReadNumberstIntArrayWithDoubleMsg("Enter numbers from arr: ", numberInArrMain, "Enter length of arr: ", lengthOfArrMain);

    //Show enterd values (void)
    //PrintNumbersIntArrayWithDoubleMsg("Number of Arr ", numberInArrMain, "Length of array = ", lengthOfArrMain);

    // Calculation And Print Result (int)
    //int result  = Result(numberInArrMain,lengthOfArrMain);
    //PrintNumberIntWithDoubleMsg("Final Result = ", result,".");

    // Or in one line of code
    PrintNumberIntWithDoubleMsg("Final Result = ", Result(numberInArrMain, lengthOfArrMain), ".");
    
    return 0;
}