/*

Description:

In this simple assignment you are given a number and have to make it negative. But maybe the number is already negative? */

// My solution
int makeNegative(int num)
{
  if(num<0){
    return num;
  }
  return num = num-num-num;
}
