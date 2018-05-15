/*multiple inheritance problem */
/*https://www.hackerrank.com/challenges/ctci-making-anagrams/problem */

/*
Alice is taking a cryptography class and finding anagrams to be very useful. We consider two strings to be anagrams of each other if the first string's letters can be rearranged to form the second string. In other words, both strings must contain the same exact letters in the same exact frequency For example, bacdc and dcbac are anagrams, but bacdc and dcbad are not.

Alice decides on an encryption scheme involving two large strings where encryption is dependent on the minimum number of character deletions required to make the two strings anagrams. Can you help her find this number?

Given two strings,  and , that may or may not be of the same length, determine the minimum number of character deletions required to make  and  anagrams. Any characters can be deleted from either of the strings.

This challenge is also available in the following translations:

Chinese
Russian
Input Format

The first line contains a single string, . 
The second line contains a single string, .

Constraints

It is guaranteed that  and  consist of lowercase English alphabetic letters (i.e.,  through ).
Output Format

Print a single integer denoting the number of characters you must delete to make the two strings anagrams of each other.


*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle{
   public:
      void triangle(){
         cout<<"I am a triangle\n";
      }
};

class Isosceles : public Triangle{
     public:
        void isosceles(){
          cout<<"I am an isosceles triangle\n";
        }
};
class Equilateral : public Isosceles{
    public:
    void equilateral()
    {
        cout<<"I am an equilateral triangle"<<endl;
    }
};
   
//Write your code here.
int main(){
  
    Equilateral eqr;
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    return 0;
}
