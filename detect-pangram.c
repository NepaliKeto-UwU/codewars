#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#define sizeA 26


bool is_pangram(const char *str_in) {

  // Variable declaration for looping & for changing to lowercase alphabets.  
   int i, index;
  
  // Assigning the size of str_in & alphabtes to sizeS & sizeA.
   int sizeS = strlen(str_in);
  
  // Assigning array size for storing alphabets
   int storage[sizeA] = {0};
  
  char lowercase[sizeS];
  
   for(i=0; i<sizeS; i++){
     lowercase[i] = tolower(str_in[i]);            // Converting Uppercase Alphabets into lowercase.    
   }
  
   for(i=0; i<sizeS; i++){
     if(lowercase[i] >= 'a' && lowercase[i] <='z'){   // Specified range from 'a' - 'z' of lowercase alphabets.
       index = lowercase[i] - 'a';             // Evaluate distance position of a character from 'a'.
       storage[index] = 1;                 // Incrementing 1 value in array if given alphabet is detected.
     }   
    }
   
  
  
 // Return false if any value in array is equal 0 and vise versa.
  for(i=0; i<sizeA; i++){
    if(storage[i] == 0){
      return false; 
    }
  }
  return true;
}
