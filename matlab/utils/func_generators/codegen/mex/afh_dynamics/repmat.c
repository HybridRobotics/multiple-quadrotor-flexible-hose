/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "afh_dynamics.h"
#include "repmat.h"
#include "afh_dynamics_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "afh_dynamics_data.h"

/* Variable Definitions */
static emlrtRSInfo v_emlrtRSI = { 65,  /* lineNo */
  "repmat",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elmat/repmat.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 46,    /* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elmat/repmat.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 1, /* lineNo */
  14,                                  /* colNo */
  "repmat",                            /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elmat/repmat.m"/* pName */
};

static emlrtRSInfo hd_emlrtRSI = { 46, /* lineNo */
  "repmat",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elmat/repmat.m"/* pathName */
};

/* Function Declarations */
static void g_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);

/* Function Definitions */
static void g_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

void repmat(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *b)
{
  int32_T outsize_idx_1;
  int32_T jcol;
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 15 };

  static const char_T u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
    'x', 's', 'i', 'z', 'e' };

  boolean_T overflow;
  int32_T ibmat;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  outsize_idx_1 = a->size[1];
  if (outsize_idx_1 != a->size[1]) {
    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(sp, 15, m0, &u[0]);
    emlrtAssign(&y, m0);
    st.site = &hd_emlrtRSI;
    g_error(&st, y, &emlrtMCI);
  }

  jcol = b->size[0] * b->size[1];
  b->size[0] = 3;
  b->size[1] = outsize_idx_1;
  emxEnsureCapacity_real_T(sp, b, jcol, &s_emlrtRTEI);
  outsize_idx_1 = a->size[1];
  st.site = &v_emlrtRSI;
  overflow = ((1 <= a->size[1]) && (a->size[1] > 2147483646));
  if (overflow) {
    b_st.site = &w_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (jcol = 0; jcol < outsize_idx_1; jcol++) {
    ibmat = jcol * 3;
    b->data[ibmat] = a->data[jcol];
    b->data[ibmat + 1] = a->data[jcol];
    b->data[ibmat + 2] = a->data[jcol];
  }
}

/* End of code generation (repmat.c) */
