#include "over.h"

void over(
  const std::vector<unsigned char> & A,
  const std::vector<unsigned char> & B,
  const int & width,
  const int & height,
  std::vector<unsigned char> & C)
{
  C.resize(A.size());
  ////////////////////////////////////////////////////////////////////////////
    for (int i = 0; i < width*height*4; i+=4) {
        double alpha = A[i+3]/255.0;
        C[i] = alpha*A[i] + (1-alpha)*B[i];
        C[i+1] = alpha*A[i+1] + (1-alpha)*B[i+1];
        C[i+2] = alpha*A[i+2] + (1-alpha)*B[i+2];
    }
  ////////////////////////////////////////////////////////////////////////////
}
