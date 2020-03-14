/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * getNormDerivatives14.h
 *
 * Code generation for function 'getNormDerivatives14'
 *
 */

#ifndef GETNORMDERIVATIVES14_H
#define GETNORMDERIVATIVES14_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "getNormDerivatives14_types.h"

/* Function Declarations */
extern void getNormDerivatives14(const emlrtStack *sp, const real_T T[3], const
  real_T dT_data[], const int32_T dT_size[2], real_T *normT, real_T dnormT_data[],
  int32_T dnormT_size[2]);

#endif

/* End of code generation (getNormDerivatives14.h) */
