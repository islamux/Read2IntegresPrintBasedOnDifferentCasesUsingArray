#include <iostream>
using namespace std;

// Calculation func
#include "multiple_2_numbers.h"
#include "div_2_numbers.h"
#include "sum_2_numbers.h"
#include "sub_2_numbers.h"


/*
    Check  and Printing Func
         * if a , b == odd ==> print a * b ==> mul func
        * if a , b == even ==>  assume b !=0  ==> div func  
        * if a == odd  , b == even ==>  sum func
        * if a == even , b == odd  ==>  sub fun c    
*/  

int Result(int numberArr[5], int lengthOfArr){
    
    // Global Variableks
    int i = 0;
    int Ab_OddEven;

    // For loop if i used return insid if it will break statement and dosnt print other cases so i used cout 
    for ( i = 0; i < lengthOfArr; i++)
    {
        // FIrst condition  a,b = odd
            if (numberArr[0] % 2 !=0 && numberArr[1]  % 2 != 0)
        {
            cout <<  "Value number [" << i + 1 << "] = "<< numberArr[i] << "\n";
            //Ab_OddEven = numberArr[0] * numberArr[1];
            Ab_OddEven = Multipe2Numbers(numberArr[0],numberArr[1]);
            cout << "\n+++++++++++++++++++++\n";
        
        // Second Condition a,b = even
        }else if (numberArr[0] % 2 == 0 && numberArr[1] % 2 == 0 )
          {
             cout <<  "Value Number [" << i + 1 << "] = "<< numberArr[i] << "\n";
             //Ab_OddEven = numberArr[0] /numberArr[1];
             Ab_OddEven = Div2Numbers(numberArr[0], numberArr[1]);
            cout << "\n+++++++++++++++++++++\n";
          
          // Third Condition a = odd , b = even
          }else if (numberArr[0]  % 2 != 0 && numberArr[1] % 2 == 0){
            cout <<  "Value number [" << i + 1 << "] = "<< numberArr[i] << "\n";
            //Ab_OddEven = numberArr[0] + numberArr[1];
            Ab_OddEven = Sum2Numbers(numberArr[0], numberArr[1]);
            cout << "\n+++++++++++++++++++++\n";
         
         // Fourth Conditon a = even , b = odd
          }else if(numberArr[0] % 2 == 0 && numberArr[1] % 2 !=0){
             cout <<  "Value number [" << i + 1 << "] = "<< numberArr[i] <<"\n";
            //Ab_OddEven = numberArr[0] - numberArr[1];
            Ab_OddEven = Sub2Numbers(numberArr[0], numberArr[1]);
            cout << "\n+++++++++++++++++++++\n";
          }
        
    }
   return  Ab_OddEven;
}