#include "hsv_to_rgb.h"
#include  <cmath>
void hsv_to_rgb(
  const double h,
  const double s,
  const double v,
  double & r,
  double & g,
  double & b)
{
  ////////////////////////////////////////////////////////////////////////////
  // Replace with your code here:
  r = 0;
  g = 0;
  b = 0;
  double c = v*s;
  double x = c * (1 - std::fabs(std::fmod((h/60), 2) - 1));
  double m = v-c;
  if(h >= 0 && h < 60 ){
      r = c;
      g = x;
  }
  if(h >= 60 && h < 120){
      r = x;
      g = c;
  }
  if(h >= 120 && h < 180){
      g = c;
      b = x;
  }
  if(h >= 180 && h < 240){
      g = x;
      b = c;
  }
  if(h >= 240 && h < 300){
      r = x;
      b = c;
  }
  if(h >= 300 && h < 360){
      r = c;
      b = x;
  }
  r = (r+m);
  g = (g+m);
  b = (b+m);
  ////////////////////////////////////////////////////////////////////////////
}
