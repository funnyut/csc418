#include "rotate.h"
#include "reflect.h"
void rotate(
  const std::vector<unsigned char> & input,
  const int width,
  const int height,
  const int num_channels,
  std::vector<unsigned char> & rotated)

{
  rotated.resize(height*width*num_channels);
  ////////////////////////////////////////////////////////////////////////////
    rotated.resize(height*width*num_channels);

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            double r_in = (i * width +width-j) * num_channels;
            double g_in = (i * width +width-j) * num_channels + 1;
            double b_in = (i * width +width-j) * num_channels + 2;
            double r_ro = (j * height +i) * num_channels;
            double g_ro = (j * height +i) * num_channels+1;
            double b_ro = (j * height +i) * num_channels+2;
            rotated[r_ro] = input[r_in];
            rotated[g_ro] = input[g_in];
            rotated[b_ro] = input[b_in];
        }
    }


  ////////////////////////////////////////////////////////////////////////////
}
