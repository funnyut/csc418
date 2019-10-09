#include "reflect.h"

void reflect(
  const std::vector<unsigned char> & input,
  const int width,
  const int height,
  const int num_channels,
  std::vector<unsigned char> & reflected)
{
  reflected.resize(width*height*num_channels);
  ////////////////////////////////////////////////////////////////////////////
    reflected.resize(width*height*num_channels);
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            double r_in = (i * width +j) * num_channels;
            double g_in = (i * width + j) * num_channels + 1;
            double b_in = (i * width + j) * num_channels + 2;
            double r_re = (i) * width * num_channels + ((width-j) - 1) *  num_channels;
            double g_re = (i) * width * num_channels + ((width-j) - 1) *  num_channels + 1;
            double b_re = (i) * width * num_channels + ((width-j) - 1) *  num_channels + 2;
            reflected[r_re] = input[r_in];
            reflected[g_re] = input[g_in];
            reflected[b_re] = input[b_in];
        }
    }
  ////////////////////////////////////////////////////////////////////////////
}
