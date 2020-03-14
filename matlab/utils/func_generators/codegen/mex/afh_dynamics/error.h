/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * error.h
 *
 * Code generation for function 'error'
 *
 */

#ifndef ERROR_H
#define ERROR_H

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
extern void b_error(const emlrtStack *sp);
extern void c_error(const emlrtStack *sp);
extern void d_error(const emlrtStack *sp, int32_T varargin_2);
extern void e_error(const emlrtStack *sp, int32_T varargin_2);
extern void error(const emlrtStack *sp);
extern void f_error(const emlrtStack *sp, int32_T varargin_2);

#endif

/* End of code generation (error.h) */
