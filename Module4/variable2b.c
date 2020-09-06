#include <stdio.h>

int main(void)
{
  float plank_length = 18.0f;
  float piece_count = 4.0f;
  //int piece_count = 4;
  float piece_length = 0.0f;

  piece_length = plank_length/piece_count;

  printf("A plank %.2f feet long can be cut into %.0f pieces %.2f feet long. \n",plank_length,piece_count,piece_length);

  return 0;
}
