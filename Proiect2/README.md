# DoubleLL

- The class doubleLL is a template implemented [double linked list](https://www.geeksforgeeks.org/doubly-linked-list/) 
To implement this class i also created the nod class that is used to store a node in the list and the "nodDublu" that is used for a double node (used inheritance from the simple node) and it also stores a pointer to the previous element.
- The doubleLL class has the following functions implemented:
> 1. operators << and >> used for input and output of the list
>> ```c++
>>       doubleLL<int> t;
>>       cin >> t;
>>       cout << t;
> 2. push_back(parameter of the type of the list)
>> ```c++ 
>>       doubleLL<int> t;
>>       int x = 5;
>>       t.push_back(x); 
>>       cout << t; // this will print 5
>>       t.push_back(x);
>>       cout << t; // this will print 5 5
> 3. pop_back()
>> ```c++
>>      doubleLL<int>t;
>>      int x = 5;
>>      t.push_back(x);
>>      t.push_back(6);
>>      cout << t; //this will print 5 6
>>      t.pop_back();
>>      cout << t; //this will print 5
>>    
