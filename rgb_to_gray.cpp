#include "rgb_to_gray.h"

void rgb_to_gray(
  const std::vector<unsigned char> & rgb,
  const int width,
  const int height,
  std::vector<unsigned char> & gray)
{
  gray.resize(height*width);
  ////////////////////////////////////////////////////////////////////////////
  int j = 0;
  for(int i =0; i<width*height*3;  i+=3){
      gray[j] = 0.2126 * rgb[i] + 0.7152 * rgb[i+1] + 0.0722 * rgb[i+2];
      j++;
  }


  ////////////////////////////////////////////////////////////////////////////
}


