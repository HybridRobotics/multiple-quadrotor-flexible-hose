/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_getNormDerivatives14_mex.c
 *
 * Code generation for function '_coder_getNormDerivatives14_mex'
 *
 */

/* Include files */
#include "getNormDerivatives14.h"
#include "_coder_getNormDerivatives14_mex.h"
#include "getNormDerivatives14_terminate.h"
#include "_coder_getNormDerivatives14_api.h"
#include "getNormDerivatives14_initialize.h"
#include "getNormDerivatives14_data.h"

/* Function Declarations */
static void c_getNormDerivatives14_mexFunct(int32_T nlhs, mxArray *plhs[2],
  int32_T nrhs, const mxArray *prhs[2]);

/* Function Definitions */
static void c_getNormDerivatives14_mexFunct(int32_T nlhs, mxArray *plhs[2],
  int32_T nrhs, const mxArray *prhs[2])
{
  const mxArray *outputs[2];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4,
                        20, "getNormDerivatives14");
  }

  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 20,
                        "getNormDerivatives14");
  }

  /* Call the function. */
  getNormDerivatives14_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(getNormDerivatives14_atexit);

  /* Module initialization. */
  getNormDerivatives14_initialize();

  /* Dispatch the entry-point. */
  c_getNormDerivatives14_mexFunct(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  getNormDerivatives14_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_getNormDerivatives14_mex.c) */
