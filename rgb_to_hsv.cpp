#include "rgb_to_hsv.h"
#include  <cmath>
#include "algorithm"
void rgb_to_hsv(
  const double r,
  const double g,
  const double b,
  double & h,
  double & s,
  double & v)
{
  ////////////////////////////////////////////////////////////////////////////
  // Replace with your code here:
  h = 0;
  s = 0;
  v = 0;
  double c_max = std::max(r,std::max(g,b));
  double c_min = std::min(r,std::min(g,b));
  double delta = c_max - c_min;
  if(delta == 0){
      h = 0;
  }
  if (c_max == r){
      h = 60 * (std::fmod((g-b)/delta, 6));
  }
  if (c_max == g){
      h = 60 * ((b-r)/delta + 2);
  }
  if (c_max == b){
      h = 60 * ((r-g)/delta + 4);
  }
  if(c_max == 0){
      s = 0;
  }else{
      s = delta/c_max;
  }
  v = c_max;
  ////////////////////////////////////////////////////////////////////////////
}
