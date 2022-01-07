//
//  Structs_C++.cpp
//  Classes_and_Structs_C++
//
//  Created by Raymond Donkemezuo on 11/8/21.
//

#include <stdio.h>
#include <iostream>
using namespace std;

// declaring a struct
struct customer {
    char name[100];
    double acct_balance;
    double loan_amount;
    
public:
    void print_customer() {
        cout << name << endl;
        cout << acct_balance << endl;
    }
};


//int main() {
//
//    // Making instances of an object
//    customer c1;
//    customer c2;
//    c1.acct_balance = 1000.50;
//    c1.loan_amount = 0;
//    strcpy(c1.name, "Raymond");
//    c1.print_customer();
////    c2.acct_balance = 0.23;
////    cout << c1.acct_balance << endl;
//    return 0;
//}
//
