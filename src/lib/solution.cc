#include "solution.h"
#include <iostream>
#include <stdlib.h> 
#include <vector>

std::string Room::Allocate_room(std::vector<std::vector<int>> &room1)
{
  //Below is a good coding style O(1) copmared to O(n2)-cased by the 2 for loops 
  int i,j;
  i=rand() % 20 + 1; 
  j=rand() % 15 + 1; 
  if (!(room1[i][j]))
  {
    room1[i][j]=1;
    if (((i>=1)&&(i<=9)) && (j>9))
    {
      return ("0"+(std::to_string(i))+(std::to_string(j)));
    }
    else if (((j>=1)&&(j<=9)) && (i>9))
    {
      return ((std::to_string(i))+"0"+(std::to_string(j)));
    }
    else if (((j>=1)&&(j<=9)) && ((i>=1)&&(i<=9)))
    {
      return ("0"+(std::to_string(i))+"0"+(std::to_string(j)));
    }
    else
      return ((std::to_string(i))+(std::to_string(j)));
  }
  else
    return 0;
}

