/* DESCRIPTION: 
Complete the solution so that it reverses the string passed into it. 
'world'  =>  'dlrow'
'word'   =>  'drow' */
// My solution:
#include<string.h>

char *strrev (char *string)
{
  int i=0;
   
  int f_l = strlen(string)-1;  // Full length of string
  int h_l = strlen(string)/2;  // Half length of string
  char temp;
  
  while(i<h_l && f_l>h_l-1){   // Ascending & descending looping for string.
        if(i == ' '){          // Breaking looop if there is ' '(space) in a string.
            break;
        }
        else{
          temp = string[i];               
          string[i] = string[f_l];      // Switching value of string of both opposite side.
          string[f_l] = temp;
          i++;
          f_l--;
        }
    }
  return string;            // returning string.
}
