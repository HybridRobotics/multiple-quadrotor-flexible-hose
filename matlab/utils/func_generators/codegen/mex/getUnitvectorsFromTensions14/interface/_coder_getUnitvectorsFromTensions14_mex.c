/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_getUnitvectorsFromTensions14_mex.c
 *
 * Code generation for function '_coder_getUnitvectorsFromTensions14_mex'
 *
 */

/* Include files */
#include "getUnitvectorsFromTensions14.h"
#include "_coder_getUnitvectorsFromTensions14_mex.h"
#include "getUnitvectorsFromTensions14_terminate.h"
#include "_coder_getUnitvectorsFromTensions14_api.h"
#include "getUnitvectorsFromTensions14_initialize.h"
#include "getUnitvectorsFromTensions14_data.h"

/* Function Declarations */
static void c_getUnitvectorsFromTensions14_(int32_T nlhs, mxArray *plhs[2],
  int32_T nrhs, const mxArray *prhs[4]);

/* Function Definitions */
static void c_getUnitvectorsFromTensions14_(int32_T nlhs, mxArray *plhs[2],
  int32_T nrhs, const mxArray *prhs[4])
{
  const mxArray *outputs[2];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 4, 4,
                        28, "getUnitvectorsFromTensions14");
  }

  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 28,
                        "getUnitvectorsFromTensions14");
  }

  /* Call the function. */
  getUnitvectorsFromTensions14_api(prhs, nlhs, outputs);

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
  mexAtExit(getUnitvectorsFromTensions14_atexit);

  /* Module initialization. */
  getUnitvectorsFromTensions14_initialize();

  /* Dispatch the entry-point. */
  c_getUnitvectorsFromTensions14_(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  getUnitvectorsFromTensions14_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_getUnitvectorsFromTensions14_mex.c) */
