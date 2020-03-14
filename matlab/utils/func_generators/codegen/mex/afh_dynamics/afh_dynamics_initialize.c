/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * afh_dynamics_initialize.c
 *
 * Code generation for function 'afh_dynamics_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "afh_dynamics.h"
#include "afh_dynamics_initialize.h"
#include "_coder_afh_dynamics_mex.h"
#include "afh_dynamics_data.h"

/* Function Definitions */
void afh_dynamics_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (afh_dynamics_initialize.c) */
