/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * qrsolve.c
 *
 * Code generation for function 'qrsolve'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "afh_dynamics.h"
#include "qrsolve.h"
#include "afh_dynamics_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "error.h"
#include "warning.h"
#include "xgeqp3.h"
#include "afh_dynamics_data.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo jc_emlrtRSI = { 29, /* lineNo */
  "qrsolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 33, /* lineNo */
  "qrsolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 40, /* lineNo */
  "qrsolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 124,/* lineNo */
  "qrsolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 123,/* lineNo */
  "qrsolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 73, /* lineNo */
  "qrsolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 80, /* lineNo */
  "qrsolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 90, /* lineNo */
  "qrsolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 31, /* lineNo */
  "xunormqr",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 102,/* lineNo */
  "xunormqr",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 93, /* lineNo */
  "xunormqr",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 80, /* lineNo */
  "xunormqr",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 79, /* lineNo */
  "xunormqr",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 59, /* lineNo */
  "xunormqr",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/+lapack/xunormqr.m"/* pathName */
};

static emlrtMCInfo d_emlrtMCI = { 53,  /* lineNo */
  19,                                  /* colNo */
  "flt2str",                           /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/flt2str.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 29,/* lineNo */
  2,                                   /* colNo */
  "qrsolve",                           /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 40,/* lineNo */
  26,                                  /* colNo */
  "qrsolve",                           /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = { 40,/* lineNo */
  1,                                   /* colNo */
  "qrsolve",                           /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 73,/* lineNo */
  5,                                   /* colNo */
  "qrsolve",                           /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 29,/* lineNo */
  4,                                   /* colNo */
  "qrsolve",                           /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pName */
};

static emlrtRTEInfo db_emlrtRTEI = { 29,/* lineNo */
  8,                                   /* colNo */
  "qrsolve",                           /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/qrsolve.m"/* pName */
};

static emlrtRSInfo jd_emlrtRSI = { 53, /* lineNo */
  "flt2str",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/flt2str.m"/* pathName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_sprintf,
  const char_T *identifier, char_T y[14]);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m13;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m13, 2, pArrays, "sprintf", true,
    location);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_sprintf,
  const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(c_sprintf), &thisId, y);
  emlrtDestroyArray(&c_sprintf);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = { 1, 14 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

void qrsolve(const emlrtStack *sp, const emxArray_real_T *A, const
             emxArray_real_T *B, emxArray_real_T *Y)
{
  emxArray_real_T *b_A;
  int32_T maxmn;
  int32_T minmn;
  emxArray_real_T *tau;
  emxArray_int32_T *jpvt;
  int32_T rankR;
  real_T tol;
  emxArray_real_T *b_B;
  const mxArray *y;
  const mxArray *m4;
  static const int32_T iv4[2] = { 1, 6 };

  static const char_T rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  const mxArray *b_y;
  const mxArray *m5;
  char_T cv0[14];
  ptrdiff_t nrc_t;
  ptrdiff_t info_t;
  boolean_T p;
  boolean_T b_p;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_A, 2, &x_emlrtRTEI, true);
  maxmn = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(sp, b_A, maxmn, &x_emlrtRTEI);
  minmn = A->size[0] * A->size[1];
  for (maxmn = 0; maxmn < minmn; maxmn++) {
    b_A->data[maxmn] = A->data[maxmn];
  }

  emxInit_real_T(sp, &tau, 1, &cb_emlrtRTEI, true);
  emxInit_int32_T(sp, &jpvt, 2, &db_emlrtRTEI, true);
  st.site = &jc_emlrtRSI;
  xgeqp3(&st, b_A, tau, jpvt);
  st.site = &kc_emlrtRSI;
  rankR = 0;
  tol = 0.0;
  if (b_A->size[0] < b_A->size[1]) {
    minmn = b_A->size[0];
    maxmn = b_A->size[1];
  } else {
    minmn = b_A->size[1];
    maxmn = b_A->size[0];
  }

  if (minmn > 0) {
    tol = muDoubleScalarMin(1.4901161193847656E-8, 2.2204460492503131E-15 *
      (real_T)maxmn) * muDoubleScalarAbs(b_A->data[0]);
    while ((rankR < minmn) && (!(muDoubleScalarAbs(b_A->data[rankR + b_A->size[0]
              * rankR]) <= tol))) {
      rankR++;
    }
  }

  if (rankR < minmn) {
    b_st.site = &vc_emlrtRSI;
    y = NULL;
    m4 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(&b_st, 6, m4, &rfmt[0]);
    emlrtAssign(&y, m4);
    b_y = NULL;
    m5 = emlrtCreateDoubleScalar(tol);
    emlrtAssign(&b_y, m5);
    c_st.site = &jd_emlrtRSI;
    emlrt_marshallIn(&c_st, b_sprintf(&c_st, y, b_y, &d_emlrtMCI), "sprintf",
                     cv0);
    b_st.site = &wc_emlrtRSI;
    b_warning(&b_st, rankR, cv0);
  }

  emxInit_real_T(&st, &b_B, 1, &y_emlrtRTEI, true);
  st.site = &lc_emlrtRSI;
  maxmn = b_B->size[0];
  b_B->size[0] = B->size[0];
  emxEnsureCapacity_real_T(&st, b_B, maxmn, &y_emlrtRTEI);
  minmn = B->size[0];
  for (maxmn = 0; maxmn < minmn; maxmn++) {
    b_B->data[maxmn] = B->data[maxmn];
  }

  minmn = b_A->size[1];
  maxmn = Y->size[0];
  Y->size[0] = minmn;
  emxEnsureCapacity_real_T(&st, Y, maxmn, &ab_emlrtRTEI);
  for (maxmn = 0; maxmn < minmn; maxmn++) {
    Y->data[maxmn] = 0.0;
  }

  b_st.site = &xc_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  minmn = muIntScalarMin_sint32(b_A->size[0], b_A->size[1]);
  d_st.site = &gd_emlrtRSI;
  if (b_A->size[1] != 0) {
    d_st.site = &fd_emlrtRSI;
    d_st.site = &ed_emlrtRSI;
    nrc_t = (ptrdiff_t)b_B->size[0];
    d_st.site = &dd_emlrtRSI;
    info_t = LAPACKE_dormqr(102, 'L', 'T', nrc_t, (ptrdiff_t)1, (ptrdiff_t)minmn,
      &b_A->data[0], (ptrdiff_t)b_A->size[0], &tau->data[0], &b_B->data[0],
      nrc_t);
    minmn = (int32_T)info_t;
    d_st.site = &cd_emlrtRSI;
    if (minmn != 0) {
      p = true;
      b_p = false;
      if (minmn == -7) {
        b_p = true;
      } else if (minmn == -9) {
        b_p = true;
      } else {
        if (minmn == -10) {
          b_p = true;
        }
      }

      if (!b_p) {
        if (minmn == -1010) {
          e_st.site = &ac_emlrtRSI;
          c_error(&e_st);
        } else {
          e_st.site = &bc_emlrtRSI;
          f_error(&e_st, minmn);
        }
      }
    } else {
      p = false;
    }

    if (p) {
      minmn = b_B->size[0];
      maxmn = b_B->size[0];
      b_B->size[0] = minmn;
      emxEnsureCapacity_real_T(&c_st, b_B, maxmn, &bb_emlrtRTEI);
      for (maxmn = 0; maxmn < minmn; maxmn++) {
        b_B->data[maxmn] = rtNaN;
      }
    }
  }

  emxFree_real_T(&tau);
  b_st.site = &yc_emlrtRSI;
  if ((1 <= rankR) && (rankR > 2147483646)) {
    c_st.site = &w_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (minmn = 0; minmn < rankR; minmn++) {
    Y->data[jpvt->data[minmn] - 1] = b_B->data[minmn];
  }

  emxFree_real_T(&b_B);
  for (maxmn = rankR; maxmn >= 1; maxmn--) {
    Y->data[jpvt->data[maxmn - 1] - 1] /= b_A->data[(maxmn + b_A->size[0] *
      (maxmn - 1)) - 1];
    b_st.site = &ad_emlrtRSI;
    for (minmn = 0; minmn <= maxmn - 2; minmn++) {
      Y->data[jpvt->data[minmn] - 1] -= Y->data[jpvt->data[maxmn - 1] - 1] *
        b_A->data[minmn + b_A->size[0] * (maxmn - 1)];
    }
  }

  emxFree_int32_T(&jpvt);
  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (qrsolve.c) */
