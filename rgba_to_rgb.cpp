#include "rgba_to_rgb.h"

void rgba_to_rgb(
  const std::vector<unsigned char> & rgba,
  const int & width,
  const int & height,
  std::vector<unsigned char> & rgb)
{
  rgb.resize(height*width*3);
  ////////////////////////////////////////////////////////////////////////////
    int i = 0;
    for(int j = 0 ;j < height*width*4;j++) {
        if((j+1)%4 == 0){
            j = j;
        }else{
            rgb[i] = rgba[j];
            i++;
        }

      ////////////////////////////////////////////////////////////////////////////
    }
}
