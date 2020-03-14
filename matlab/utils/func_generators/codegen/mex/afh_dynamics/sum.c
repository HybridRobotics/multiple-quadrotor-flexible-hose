/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "afh_dynamics.h"
#include "sum.h"

/* Function Definitions */
void sum(const real_T x_data[], const int32_T x_size[2], real_T y[3])
{
  int32_T vlen;
  int32_T k;
  int32_T xoffset;
  vlen = x_size[1];
  if (x_size[1] == 0) {
    y[0] = 0.0;
    y[1] = 0.0;
    y[2] = 0.0;
  } else {
    y[0] = x_data[0];
    y[1] = x_data[1];
    y[2] = x_data[2];
    for (k = 2; k <= vlen; k++) {
      xoffset = (k - 1) * 3;
      y[0] += x_data[xoffset];
      y[1] += x_data[xoffset + 1];
      y[2] += x_data[xoffset + 2];
    }
  }
}

/* End of code generation (sum.c) */
