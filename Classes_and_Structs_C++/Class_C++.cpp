//
//  Class_C++.cpp
//  Classes_and_Structs_C++
//
//  Created by Raymond Donkemezuo on 11/8/21.
//

//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//// declaring a class
//class customer {
//    // Member variables
//public: int cust_id;
//public: double acct_balance;
//
//    // Member functions
//public:
//    void print_customer_details() {
//        cout << cust_id << endl;
//        cout << acct_balance << endl;
//    }
//};

//int main() {
//    customer c1, c2;
//    c1.cust_id = 123;
//    c1.acct_balance = 5000;
//
//    c2.cust_id = 345;
//    c2.acct_balance = 100000;
//    c1.print_customer_details();
//    cout << endl;
//    c2.print_customer_details();
//
//}

#include <stdio.h>
#include <iostream>
using namespace std;

class managed_array
{
    int* vals;
    int size;

public:
    managed_array()
    {
        vals = nullptr;
        size = 0;
    }

    void insert(int insert_val, int index = -1)    ///[2,4,5,6] = > insert(10) =>    [#,#,#,#,#] => [2,4,5,6,#] => [2,4,5,6,10]
    {
        if(index == -1)
            index = size;        //4

        //code here
         int *temp = new int[size + 1];
        
        //copy all elements before index
        for(int i = 0; i<index; i++)
            temp[i] = vals[i];

        //copy element at index
        temp[index] = insert_val;
    
        //copy all elements after index
        for(int i = index + 1; i<size+1; i++)
            temp[i] = vals[i-1];

        //delete vals
        delete[] vals;

        //assign temp to vals
        vals = temp;

        //set size
        size++;
    }
    
    void deleteItem(int index)
    {

        //code here
    }

    void print()
    {
        for(int i = 0; i<size; i++)
            cout<<vals[i]<<", ";
        cout<<endl;
    }


};





int main()
{
    managed_array arr;

    arr.insert(5);
    arr.insert(10);
    
    arr.print();

    arr.deleteItem(1);
    arr.print();


    return 0;
}
