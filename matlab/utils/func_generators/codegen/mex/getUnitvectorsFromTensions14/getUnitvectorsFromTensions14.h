/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * getUnitvectorsFromTensions14.h
 *
 * Code generation for function 'getUnitvectorsFromTensions14'
 *
 */

#ifndef GETUNITVECTORSFROMTENSIONS14_H
#define GETUNITVECTORSFROMTENSIONS14_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "getUnitvectorsFromTensions14_types.h"

/* Function Declarations */
extern void getUnitvectorsFromTensions14(const emlrtStack *sp, const real_T T[3],
  const real_T dT_data[], const int32_T dT_size[2], real_T normT, const real_T
  dnormT_data[], const int32_T dnormT_size[2], real_T q[3], real_T dq_data[],
  int32_T dq_size[2]);

#endif

/* End of code generation (getUnitvectorsFromTensions14.h) */
