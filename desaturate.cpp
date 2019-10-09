#include "desaturate.h"
#include "hsv_to_rgb.h"
#include "rgb_to_hsv.h"

void desaturate(
  const std::vector<unsigned char> & rgb,
  const int width,
  const int height,
  const double factor,
  std::vector<unsigned char> & desaturated)
{
  desaturated.resize(rgb.size());
  ////////////////////////////////////////////////////////////////////////////
    desaturated.resize(rgb.size());
    for (int i = 0; i < width*height*3; i+=3) {
       double r;
       double g;
       double b;
       double h;
       double s;
       double v;
       rgb_to_hsv(rgb[i],rgb[i+1],rgb[i+2],h,s,v);
       s = s * factor;
       hsv_to_rgb(h, s, v, r, g, b);
       desaturated[i] = r;
       desaturated[i+1] = g;
       desaturated[i+2] = b;

    }
  ////////////////////////////////////////////////////////////////////////////
}
