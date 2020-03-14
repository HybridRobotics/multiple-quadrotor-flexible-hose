/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mldivide.c
 *
 * Code generation for function 'mldivide'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "afh_dynamics.h"
#include "mldivide.h"
#include "afh_dynamics_emxutil.h"
#include "warning.h"
#include "xgetrf.h"
#include "qrsolve.h"
#include "blas.h"

/* Variable Definitions */
static emlrtRSInfo gb_emlrtRSI = { 36, /* lineNo */
  "mldivide",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/mldivide.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 34, /* lineNo */
  "mldivide",                          /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/mldivide.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 67, /* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 109,/* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 107,/* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 139,/* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 150,/* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 152,/* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 90, /* lineNo */
  "lusolve",                           /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pathName */
};

static emlrtRTEInfo t_emlrtRTEI = { 107,/* lineNo */
  2,                                   /* colNo */
  "lusolve",                           /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/lusolve.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 34,/* lineNo */
  5,                                   /* colNo */
  "mldivide",                          /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/mldivide.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 1, /* lineNo */
  14,                                  /* colNo */
  "mldivide",                          /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/mldivide.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 18,/* lineNo */
  15,                                  /* colNo */
  "mldivide",                          /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/mldivide.m"/* pName */
};

/* Function Definitions */
void mldivide(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *B, emxArray_real_T *Y)
{
  emxArray_real_T *b_A;
  int32_T info;
  int32_T loop_ub;
  emxArray_int32_T *ipiv;
  real_T temp;
  char_T DIAGA1;
  char_T TRANSA1;
  char_T UPLO1;
  char_T SIDE1;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (B->size[0] != A->size[0]) {
    emlrtErrorWithMessageIdR2018a(sp, &yb_emlrtRTEI, "Coder:MATLAB:dimagree",
      "Coder:MATLAB:dimagree", 0);
  }

  if (A->size[1] == 0) {
    Y->size[0] = 0;
  } else if (A->size[0] == A->size[1]) {
    emxInit_real_T(sp, &b_A, 2, &t_emlrtRTEI, true);
    st.site = &hb_emlrtRSI;
    b_st.site = &ib_emlrtRSI;
    info = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&b_st, b_A, info, &t_emlrtRTEI);
    loop_ub = A->size[0] * A->size[1];
    for (info = 0; info < loop_ub; info++) {
      b_A->data[info] = A->data[info];
    }

    emxInit_int32_T(&b_st, &ipiv, 2, &v_emlrtRTEI, true);
    c_st.site = &kb_emlrtRSI;
    xgetrf(&c_st, A->size[1], A->size[1], b_A, A->size[1], ipiv, &info);
    if (info > 0) {
      c_st.site = &jb_emlrtRSI;
      d_st.site = &gc_emlrtRSI;
      warning(&d_st);
    }

    info = Y->size[0];
    Y->size[0] = B->size[0];
    emxEnsureCapacity_real_T(&b_st, Y, info, &u_emlrtRTEI);
    loop_ub = B->size[0];
    for (info = 0; info < loop_ub; info++) {
      Y->data[info] = B->data[info];
    }

    info = A->size[1];
    c_st.site = &lb_emlrtRSI;
    for (loop_ub = 0; loop_ub <= info - 2; loop_ub++) {
      if (ipiv->data[loop_ub] != loop_ub + 1) {
        temp = Y->data[loop_ub];
        Y->data[loop_ub] = Y->data[ipiv->data[loop_ub] - 1];
        Y->data[ipiv->data[loop_ub] - 1] = temp;
      }
    }

    emxFree_int32_T(&ipiv);
    c_st.site = &mb_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'U';
    TRANSA1 = 'N';
    UPLO1 = 'L';
    SIDE1 = 'L';
    m_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)1;
    lda_t = (ptrdiff_t)A->size[1];
    ldb_t = (ptrdiff_t)A->size[1];
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &m_t, &n_t, &temp, &b_A->data[0],
          &lda_t, &Y->data[0], &ldb_t);
    c_st.site = &nb_emlrtRSI;
    temp = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'L';
    m_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)1;
    lda_t = (ptrdiff_t)A->size[1];
    ldb_t = (ptrdiff_t)A->size[1];
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &m_t, &n_t, &temp, &b_A->data[0],
          &lda_t, &Y->data[0], &ldb_t);
    emxFree_real_T(&b_A);
  } else {
    st.site = &gb_emlrtRSI;
    qrsolve(&st, A, B, Y);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (mldivide.c) */
