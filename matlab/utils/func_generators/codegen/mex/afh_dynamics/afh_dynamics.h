/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * afh_dynamics.h
 *
 * Code generation for function 'afh_dynamics'
 *
 */

#ifndef AFH_DYNAMICS_H
#define AFH_DYNAMICS_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "afh_dynamics_types.h"

/* Function Declarations */
extern void afh_dynamics(const emlrtStack *sp, const struct0_T *data, const
  real_T x_data[], const int32_T x_size[1], const real_T u_data[], const int32_T
  u_size[2], emxArray_real_T *dx);

#endif

/* End of code generation (afh_dynamics.h) */
