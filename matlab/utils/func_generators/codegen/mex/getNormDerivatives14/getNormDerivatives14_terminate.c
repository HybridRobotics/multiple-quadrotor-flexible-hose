/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * getNormDerivatives14_terminate.c
 *
 * Code generation for function 'getNormDerivatives14_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getNormDerivatives14.h"
#include "getNormDerivatives14_terminate.h"
#include "_coder_getNormDerivatives14_mex.h"
#include "getNormDerivatives14_data.h"

/* Function Definitions */
void getNormDerivatives14_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void getNormDerivatives14_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (getNormDerivatives14_terminate.c) */
