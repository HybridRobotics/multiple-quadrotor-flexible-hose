/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * getUnitvectorsFromTensions14_terminate.c
 *
 * Code generation for function 'getUnitvectorsFromTensions14_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "getUnitvectorsFromTensions14.h"
#include "getUnitvectorsFromTensions14_terminate.h"
#include "_coder_getUnitvectorsFromTensions14_mex.h"
#include "getUnitvectorsFromTensions14_data.h"

/* Function Definitions */
void getUnitvectorsFromTensions14_atexit(void)
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

void getUnitvectorsFromTensions14_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (getUnitvectorsFromTensions14_terminate.c) */
