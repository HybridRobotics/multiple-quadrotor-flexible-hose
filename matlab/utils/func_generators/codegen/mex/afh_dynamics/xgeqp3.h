/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xgeqp3.h
 *
 * Code generation for function 'xgeqp3'
 *
 */

#ifndef XGEQP3_H
#define XGEQP3_H

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
extern void xgeqp3(const emlrtStack *sp, emxArray_real_T *A, emxArray_real_T
                   *tau, emxArray_int32_T *jpvt);

#endif

/* End of code generation (xgeqp3.h) */
