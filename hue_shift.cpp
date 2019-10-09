#include "hue_shift.h"
#include "hsv_to_rgb.h"
#include "rgb_to_hsv.h"

void hue_shift(
  const std::vector<unsigned char> & rgb,
  const int width,
  const int height,
  const double shift,
  std::vector<unsigned char> & shifted) {
    shifted.resize(rgb.size());
    ////////////////////////////////////////////////////////////////////////////
    for (int i = 0; i < width * height * 3; i += 3) {
        double h;
        double s;
        double v;
        double r;
        double g;
        double b;
        rgb_to_hsv(rgb[i], rgb[i + 1], rgb[i + 2], h, s, v);
        h = h + shift;
        if (h > 360) {
            h = h - 360;
        }
        if (h < 0) {
            h = +360;
        }
        hsv_to_rgb(h, s, v, r, g, b);
        shifted[i] = r;
        shifted[i + 1] = g;
        shifted[i + 2] = b;
        ////////////////////////////////////////////////////////////////////////////
    }
}
