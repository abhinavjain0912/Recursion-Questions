//Check whether a given String S is a palindrome using recursion.
// Return true or false.

#include <iostream>
#include <cstring>
using namespace std;

bool helper(char input[] ,int start, int end){
  if(start>=end){
    return true;
  } 
  
  if(input[start]!= input[end]){
     return false;
   }
  bool smallCheck = helper(input, start+1,end-1);
  return smallCheck;
}

bool checkPalindrome(char input[]){
  int start = 0;
  int end = strlen(input)-1;
  bool result = helper(input,start,end);
  return result;
}

int main(){
  
  char input[] = "abab";
  cout<< checkPalindrome(input) <<endl ;
  

}