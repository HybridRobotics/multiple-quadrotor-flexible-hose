/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_afh_dynamics_mex.c
 *
 * Code generation for function '_coder_afh_dynamics_mex'
 *
 */

/* Include files */
#include "afh_dynamics.h"
#include "_coder_afh_dynamics_mex.h"
#include "afh_dynamics_terminate.h"
#include "_coder_afh_dynamics_api.h"
#include "afh_dynamics_initialize.h"
#include "afh_dynamics_data.h"

/* Function Declarations */
static void afh_dynamics_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T
  nrhs, const mxArray *prhs[3]);

/* Function Definitions */
static void afh_dynamics_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T
  nrhs, const mxArray *prhs[3])
{
  const mxArray *outputs[1];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        12, "afh_dynamics");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 12,
                        "afh_dynamics");
  }

  /* Call the function. */
  afh_dynamics_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(afh_dynamics_atexit);

  /* Module initialization. */
  afh_dynamics_initialize();

  /* Dispatch the entry-point. */
  afh_dynamics_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  afh_dynamics_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_afh_dynamics_mex.c) */
