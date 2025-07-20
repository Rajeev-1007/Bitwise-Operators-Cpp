# Bitwise-Operators-Cpp
# Name: Rajeev Ramesh Reddy E
# PRN: 24070123081
Aim: To study and implement bitwise operators.

Software used: VS Code.

Theory: 


Bitwise operators in C++ allow direct manipulation of bits within integers, making them powerful tools for low-level programming, embedded systems, and performance-critical tasks. The primary bitwise operators include `&` (AND), `|` (OR), `^` (XOR), `~` (NOT), `<<` (left shift), and `>>` (right shift). These operators work by comparing or transforming individual bits in binary representations of numbers.

- `&` sets bits to 1 only if both operands have 1 in that position.
- `|` sets bits to 1 if at least one operand has 1.
- `^` sets bits to 1 if operands differ at that position.
- `~` inverts all bits.
- `<<` shifts bits left, multiplying the number by powers of two.
- `>>` shifts bits right, dividing by powers of two.

Bitwise logic is often used for setting flags, masking values, optimizing calculations, and performing efficient encryption or compression algorithms.

CODE: Here's a C++ code to perform various bitwise operations and calculations.

    #include<iostream>
    using namespace std;
    int main()
    {
    int a;
    int b;
    cout<<"Enter number a: ";
    cin>>a;
    cout<<"Enter number b: ";
    cin>>b;
    int bitwise_and=a&b;
    int bitwise_or=a|b;
    int bitwise_not=~a;
    int bitwise_xor=a^b;
    int bitwise_rightshift=a>>1;
    int bitwise_leftshift=a<<1;
    
    cout<<"AND: " <<bitwise_and<<endl;
    cout<<"OR: " <<bitwise_or<<endl;
    cout<<"NOT: " <<bitwise_not<<endl;
    cout<<"XOR: " <<bitwise_xor<<endl;
    cout<<"Right Shift: " <<bitwise_rightshift<<endl;
    cout<<"Left Shift: " <<bitwise_leftshift<<endl;
    }

Conclusion: Bitwise operators in C++ offer fast, low-level data manipulation, enabling efficient computation, flag handling, and control over individual bits for powerful programming techniques.
