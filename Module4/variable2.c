/*
AerE 361 Demos for Module 4
Matthew E. Nelson
*/
#include <stdio.h>

int main(void)
{
  //Measurements are in feet
  float plank_length = 10.0f;
  float piece_count = 4.0f;
  float piece_length = 0.0f;

  piece_length = plank_length/piece_count;

  printf("A plank %f feet long can be cut into %f pieces %f feet long. \n",plank_length,piece_count,piece_length);

  return 0;
}
