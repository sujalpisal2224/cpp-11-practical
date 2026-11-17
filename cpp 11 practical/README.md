# Practical Assignment 11 -- Standard Template Library (STL)

## Student Details

  Field          Details
  -------------- -----------------------------------------------------
  Student Name   Sujal Pisal
  PRN            202501110013
  Branch         Artificial Intelligence and Machine Learning (AIML)
  Class          SY AIML
  Division       A
  Batch          A1

## Practical Details

-   **Practical No.:** 11
-   **Practical Title:** STANDARD TEMPLATE LIBRARY (STL)
-   **Faculty Name:** Khushal Khairnar
-   **Programming Language:** C++
-   **IDE / Platform:** Dev-C++

## Problem Statement

a)  Assignment based on list class as a container of Standard Template
    Library.

b)  Assignment based on vector class as a container of the Standard
    Template Library.

## Objectives

1.  To understand the concept of the Standard Template Library (STL) in
    C++.
2.  To understand and implement the vector container.
3.  To understand and implement the list container.
4.  To accept user input and store product information using STL
    containers.
5.  To understand the differences between vector and list containers.
6.  To implement a simple real-world inventory management application.

## Theory / Concepts

### Standard Template Library (STL)

The Standard Template Library (STL) is a part of the C++ Standard
Library that provides reusable components such as containers,
algorithms, and iterators. Containers are used to store and manage
collections of data efficiently.

### 1. Vector Container

A vector is a sequence container that stores elements in contiguous
memory locations. It can dynamically increase or decrease its size.

**Header file:** `<vector>`

**Syntax:**

``` cpp
vector<int> numbers;
```

**Common operations:** - `push_back()` -- Adds an element at the end. -
`size()` -- Returns the number of elements. - `begin()` -- Returns an
iterator to the first element. - `end()` -- Returns an iterator to the
position after the last element. - `at()` -- Accesses an element with
bounds checking.

**Advantages:** - Supports fast random access. - Automatically manages
its size. - Efficient for adding elements at the end. - Suitable for
maintaining an inventory of product records.

### 2. List Container

A list is a sequence container generally implemented as a doubly linked
list. Its elements are stored in separate nodes connected through links.

**Header file:** `<list>`

**Syntax:**

``` cpp
list<string> products;
```

**Common operations:** - `push_back()` -- Adds an element at the end. -
`push_front()` -- Adds an element at the beginning. - `size()` --
Returns the number of elements. - `begin()` -- Returns an iterator to
the first element. - `end()` -- Returns the position after the last
element. - `remove()` -- Removes matching elements from the list.

**Advantages:** - Supports efficient insertion and deletion at known
positions. - Supports insertion at both the beginning and end. - Does
not require elements to occupy contiguous memory locations. - Suitable
for maintaining a dynamic collection, such as a restocking list.

## Algorithm / Pseudocode

**START**

1.  Include the required header files: `<iostream>`, `<vector>`,
    `<list>`, and `<string>`.
2.  Define a structure to store product name, quantity, and price.
3.  Declare a vector to store all product records.
4.  Declare a list to store names of products requiring restocking.
5.  Accept the number of products from the user.
6.  For each product:
    -   Accept its name, quantity, and price.
    -   Store the product record in the vector.
    -   If the quantity is 5 or less, add its name to the restocking
        list.
7.  Display all product records from the vector.
8.  Display products requiring restocking from the list.

**STOP**

## Source Code

``` cpp
#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

struct Product
{
    string name;
    int quantity;
    float price;
};

int main()
{
    vector<Product> inventory;
    list<string> restocking;

    int n;

    cout << "Enter number of products: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        Product p;

        cout << "Enter product name: ";
        cin >> ws;
        getline(cin, p.name);

        cout << "Enter quantity: ";
        cin >> p.quantity;

        cout << "Enter price: ";
        cin >> p.price;

        inventory.push_back(p);

        if (p.quantity <= 5)
        {
            restocking.push_back(p.name);
        }
    }

    cout << "\\n--- Complete Inventory ---\\n";

    for (int i = 0; i < inventory.size(); i++)
    {
        cout << "Product: " << inventory[i].name << endl;
        cout << "Quantity: " << inventory[i].quantity << endl;
        cout << "Price Rs: " << inventory[i].price << endl;
    }

    cout << "\\n--- Products Requiring Restocking ---\\n";

    if (restocking.empty())
    {
        cout << "No products require restocking.\\n";
    }
    else
    {
        for (list<string>::iterator it = restocking.begin();
             it != restocking.end(); it++)
        {
            cout << *it << endl;
        }
    }

    return 0;
}
```

## Sample Input

``` text
Enter number of products: 4

Enter product name: Mouse
Enter quantity: 20
Enter price: 500

Enter product name: Keyboard
Enter quantity: 3
Enter price: 800

Enter product name: USB Cable
Enter quantity: 5
Enter price: 200

Enter product name: Monitor
Enter quantity: 10
Enter price: 6000
```

## Sample Output

``` text
--- Complete Inventory ---
Product: Mouse
Quantity: 20
Price Rs: 500
Product: Keyboard
Quantity: 3
Price Rs: 800
Product: USB Cable
Quantity: 5
Price Rs: 200
Product: Monitor
Quantity: 10
Price Rs: 6000

--- Products Requiring Restocking ---
Keyboard
USB Cable
```

## Test Cases

  -----------------------------------------------------------------------
  Test Case         Input             Expected Output   Status
  ----------------- ----------------- ----------------- -----------------
  1                 Mouse, quantity   Mouse displayed   Pass
                    20, price 500     in inventory; no  
                                      restocking        
                                      required.         

  2                 Keyboard,         Keyboard          Pass
                    quantity 3, price displayed in      
                    800               inventory and     
                                      restocking list.  

  3                 USB Cable,        USB Cable         Pass
                    quantity 5, price displayed in      
                    200               inventory and     
                                      restocking list.  

  4                 Monitor, quantity Monitor displayed Pass
                    10, price 6000    in inventory; no  
                                      restocking        
                                      required.         
  -----------------------------------------------------------------------

For ML practicals, include appropriate performance metrics, graphs,
tables, or model outputs wherever applicable.

## Results / Observations

The Inventory Management System was implemented using the vector and
list containers of the C++ Standard Template Library.

The vector successfully stored and displayed complete product records,
including product names, quantities, and prices. The list maintained the
names of products with stock quantities of 5 or less.

The practical demonstrated the insertion and traversal operations of
both containers and showed how different STL containers can be used
together to solve a real-world problem.

## Conclusion

The practical successfully demonstrates the implementation of vector and
list containers in C++ using a simple Inventory Management System.

The vector was used to maintain the complete inventory, while the list
was used to maintain the restocking list. The program accepted user
input, stored product information, and displayed the results according
to the stock quantity.

Thus, the practical helped develop an understanding of STL containers,
their operations, and their applications in real-world software
development.

## Assignment Questions and Answers

**Q1. What is the Standard Template Library (STL)?**

Answer: STL is a part of the C++ Standard Library that provides reusable
containers, algorithms, and iterators for managing data.

**Q2. What is a vector in C++?**

Answer: A vector is a dynamic sequence container that stores elements in
contiguous memory locations and supports fast random access.

**Q3. What is a list in C++?**

Answer: A list is a sequence container generally implemented as a doubly
linked list that supports efficient insertion and deletion at known
positions.

**Q4. Which header file is required for vector?**

Answer: The `<vector>` header file.

**Q5. Which header file is required for list?**

Answer: The `<list>` header file.

**Q6. What is the difference between vector and list?**

Answer: A vector stores elements contiguously and supports fast random
access, whereas a list stores elements in linked nodes and supports
efficient insertion and deletion at known positions.

**Q7. What is the purpose of push_back()?**

Answer: The `push_back()` function adds a new element to the end of a
vector or list.

**Q8. What is an iterator in STL?**

Answer: An iterator is an object that provides a way to access and
traverse elements in a container.

**Q9. Why is vector used for the inventory in this program?**

Answer: Vector stores the complete product records and allows convenient
indexed access to product information.

**Q10. Why is list used for the restocking records?**

Answer: List maintains the names of products that require restocking and
supports efficient insertion and deletion at known positions.

## Compilation and Execution

1.  Open the C++ program in Dev-C++ or another C++ compiler.
2.  Save the source file with a `.cpp` extension.
3.  Compile and run the program.
4.  Enter the number of products and then enter each product's name,
    quantity, and price.
5.  Check the complete inventory and the products requiring restocking.

**Compile using g++:**

``` bash
g++ main.cpp -o practical11
```

**Run:**

``` bash
./practical11
```

## Student Declaration

I hereby declare that the above practical work has been completed by me
and that the implementation, analysis, and answers are my own work.

-   **Student Name:** Sujal Pisal
-   **PRN:** 202501110013
-   **Signature:** \_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_
