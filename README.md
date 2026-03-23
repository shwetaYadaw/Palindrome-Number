# Palindrome Number Checker

## Overview
This C++ program checks whether a given integer is a palindrome or not.  
A palindrome number is a number that remains the same when its digits are reversed.

## How It Works
- The program reads an integer `n`.
- It stores the original number in a variable `org`.
- A variable `rev` is used to store the reversed number.
- A loop runs until `n` becomes 0:
  - The last digit is extracted using `n % 10`.
  - The digit is added to `rev` (`rev = rev * 10 + d`).
  - The last digit is removed from `n` using `n = n / 10`.
- After reversing, the program compares `org` and `rev`:
  - If both are equal, the number is a palindrome.
  - Otherwise, it is not.

## Input
- A single integer value.

## Output
- `true` if the number is a palindrome.
- `false` if the number is not a palindrome.

## Example

Input:
121  

Output:
true  

Input:
123  

Output:
false  

## Code

```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int org = n;
    int rev = 0;

    while(n){
        int d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }

    if(org == rev){
        cout << "true";
    } else {
        cout << "false";
    }
}
