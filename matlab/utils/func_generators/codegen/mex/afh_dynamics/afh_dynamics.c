/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * afh_dynamics.c
 *
 * Code generation for function 'afh_dynamics'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "afh_dynamics.h"
#include "sum.h"
#include "afh_dynamics_emxutil.h"
#include "cross.h"
#include "mldivide.h"
#include "norm.h"
#include "repmat.h"
#include "toLogicalCheck.h"
#include "error.h"
#include "assertValidSizeArg.h"
#include "indexShapeCheck.h"
#include "afh_dynamics_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 11,    /* lineNo */
  "afh_dynamics",                      /* fcnName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 12,  /* lineNo */
  "afh_dynamics",                      /* fcnName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 13,  /* lineNo */
  "afh_dynamics",                      /* fcnName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 14,  /* lineNo */
  "afh_dynamics",                      /* fcnName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 15,  /* lineNo */
  "afh_dynamics",                      /* fcnName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 16,  /* lineNo */
  "afh_dynamics",                      /* fcnName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 17,  /* lineNo */
  "afh_dynamics",                      /* fcnName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 18,  /* lineNo */
  "afh_dynamics",                      /* fcnName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 19,  /* lineNo */
  "afh_dynamics",                      /* fcnName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 24,  /* lineNo */
  "afh_dynamics",                      /* fcnName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 34,  /* lineNo */
  "afh_dynamics",                      /* fcnName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 49,  /* lineNo */
  "afh_dynamics",                      /* fcnName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 51,  /* lineNo */
  "afh_dynamics",                      /* fcnName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 54,  /* lineNo */
  "afh_dynamics",                      /* fcnName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 66,  /* lineNo */
  "afh_dynamics",                      /* fcnName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 71,  /* lineNo */
  "afh_dynamics",                      /* fcnName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 27,  /* lineNo */
  "reshapeSizeChecks",                 /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/reshapeSizeChecks.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 48,  /* lineNo */
  "reshapeSizeChecks",                 /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/reshapeSizeChecks.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 105, /* lineNo */
  "reshapeSizeChecks",                 /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/reshapeSizeChecks.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 40, /* lineNo */
  "mpower",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/mpower.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 25, /* lineNo */
  "cat",                               /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 100,/* lineNo */
  "cat",                               /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 17,  /* lineNo */
  11,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 17,/* lineNo */
  5,                                   /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 17,/* lineNo */
  9,                                   /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 29,/* lineNo */
  5,                                   /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 30,/* lineNo */
  5,                                   /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 31,/* lineNo */
  5,                                   /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 49,/* lineNo */
  21,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 51,/* lineNo */
  5,                                   /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 52,/* lineNo */
  14,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 66,/* lineNo */
  24,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 1, /* lineNo */
  17,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 301,/* lineNo */
  14,                                  /* colNo */
  "cat",                               /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 75,/* lineNo */
  5,                                   /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 85,/* lineNo */
  5,                                   /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 56,/* lineNo */
  14,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 56,/* lineNo */
  9,                                   /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 52,/* lineNo */
  5,                                   /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 71,/* lineNo */
  5,                                   /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  11,                                  /* colNo */
  "x",                                 /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 11,    /* lineNo */
  13,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  13,                                  /* colNo */
  "x",                                 /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 12,  /* lineNo */
  12,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  12,                                  /* colNo */
  "x",                                 /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 12,  /* lineNo */
  17,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  17,                                  /* colNo */
  "x",                                 /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  21,                                  /* colNo */
  "ds",                                /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  16,                                  /* lineNo */
  23,                                  /* colNo */
  "ds",                                /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 19,  /* lineNo */
  20,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  20,                                  /* colNo */
  "x",                                 /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  30,                                  /* colNo */
  "x",                                 /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo mb_emlrtRTEI = { 33,/* lineNo */
  13,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  19,                                  /* colNo */
  "data.I",                            /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  27,                                  /* colNo */
  "f",                                 /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  43,                                  /* colNo */
  "moments",                           /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  35,                                  /* colNo */
  "R",                                 /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  24,                                  /* colNo */
  "Re3Array",                          /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  49,                                  /* lineNo */
  21,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { 2,   /* nDims */
  49,                                  /* lineNo */
  10,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 53,/* lineNo */
  13,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  81,                                  /* colNo */
  "q",                                 /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  93,                                  /* colNo */
  "data.l",                            /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  104,                                 /* colNo */
  "q",                                 /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  119,                                 /* colNo */
  "uk",                                /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  123,                                 /* colNo */
  "uk",                                /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  27,                                  /* colNo */
  "q",                                 /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo ob_emlrtRTEI = { 57,/* lineNo */
  17,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  51,                                  /* colNo */
  "q",                                 /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo pb_emlrtRTEI = { 77,/* lineNo */
  13,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m"/* pName */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  78,                                  /* lineNo */
  26,                                  /* colNo */
  "R",                                 /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  78,                                  /* lineNo */
  38,                                  /* colNo */
  "Om",                                /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  33,                                  /* colNo */
  "data.Jinv",                         /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  47,                                  /* colNo */
  "moments",                           /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  61,                                  /* colNo */
  "Om",                                /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  76,                                  /* colNo */
  "data.J",                            /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  84,                                  /* colNo */
  "Om",                                /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  28,                                  /* colNo */
  "MomentsArray",                      /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  28,                                  /* colNo */
  "MomentsArray",                      /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo qb_emlrtRTEI = { 53,/* lineNo */
  23,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/reshapeSizeChecks.m"/* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 55,/* lineNo */
  23,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/reshapeSizeChecks.m"/* pName */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  24,                                  /* colNo */
  "Re3Array",                          /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo sb_emlrtRTEI = { 281,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  78,                                  /* lineNo */
  15,                                  /* colNo */
  "dR",                                /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  14,                                  /* colNo */
  "dOm",                               /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 29,  /* lineNo */
  23,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 29,  /* lineNo */
  23,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 30,  /* lineNo */
  29,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 31,  /* lineNo */
  24,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 52,  /* lineNo */
  25,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 52,  /* lineNo */
  25,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 52,  /* lineNo */
  34,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 52,  /* lineNo */
  34,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 17,  /* lineNo */
  11,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  17,                                  /* lineNo */
  11,                                  /* colNo */
  "x",                                 /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 29,  /* lineNo */
  5,                                   /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 30,  /* lineNo */
  5,                                   /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 31,  /* lineNo */
  5,                                   /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  13,                                  /* colNo */
  "fArray",                            /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  13,                                  /* colNo */
  "fArray",                            /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 52,  /* lineNo */
  14,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 52,  /* lineNo */
  14,                                  /* colNo */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  66,                                  /* colNo */
  "dq",                                /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  17,                                  /* colNo */
  "M2",                                /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  12,                                  /* colNo */
  "s",                                 /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  13,                                  /* colNo */
  "ds",                                /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  24,                                  /* colNo */
  "data.M",                            /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  42,                                  /* colNo */
  "data.M",                            /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  40,                                  /* colNo */
  "data.M",                            /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  58,                                  /* colNo */
  "data.M",                            /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  17,                                  /* colNo */
  "M2",                                /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  51,                                  /* colNo */
  "data.M",                            /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  69,                                  /* colNo */
  "data.M",                            /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  64,                                  /* colNo */
  "data.M",                            /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  82,                                  /* colNo */
  "data.M",                            /* aName */
  "afh_dynamics",                      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/afh_dynamics.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void afh_dynamics(const emlrtStack *sp, const struct0_T *data, const real_T
                  x_data[], const int32_T x_size[1], const real_T u_data[],
                  const int32_T u_size[2], emxArray_real_T *dx)
{
  real_T ns;
  real_T nr;
  int32_T i0;
  int32_T Re3Array[2];
  real_T d0;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  int32_T i3;
  real_T ds_data[918];
  int32_T i4;
  int32_T b_loop_ub;
  real_T b_x_data[918];
  real_T varargin_2;
  int32_T n;
  int32_T maxdimlen;
  int32_T c_loop_ub;
  real_T c_x_data[918];
  emxArray_int16_T *r0;
  emxArray_real_T *r;
  real_T d1;
  int16_T i5;
  emxArray_int32_T *r1;
  real_T varargin_3;
  int32_T d_loop_ub;
  real_T d_x_data[918];
  real_T b_varargin_2;
  emxArray_real_T *fArray;
  int32_T j;
  real_T moments_data[612];
  emxArray_real_T *MomentsArray;
  emxArray_real_T *b_Re3Array;
  int32_T i;
  int32_T b_MomentsArray[2];
  int32_T i6;
  int32_T i7;
  int32_T uk_size[2];
  real_T uk_data[153];
  emxArray_real_T *U;
  real_T b[3];
  emxArray_real_T *M1;
  emxArray_real_T *M2;
  emxArray_real_T *b_M1;
  int32_T b_uk_size;
  uint32_T u0;
  int32_T result;
  real_T U_tmp[3];
  boolean_T empty_non_axis_sizes;
  int8_T input_sizes_idx_1;
  emxArray_real_T *c_varargin_2;
  real_T ahat[9];
  real_T d2;
  int32_T c_uk_size[2];
  emxArray_real_T *ddtrans;
  real_T b_uk_data[153];
  emxArray_real_T *dR;
  real_T b_ahat[9];
  real_T b_data[9];
  real_T c_data[3];
  real_T d_data[3];
  real_T dOm_data[2754];
  int32_T e_data;
  real_T d3;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  using 'q' and 'dq' for link states */
  /*  unpacking states */
  /*  ------------------- */
  /*  [~, q, v0, dq, R, Om] = obj.unzipState(x); */
  ns = 3.0 + data->n * 3.0;
  nr = data->nQ * 9.0;
  if (1.0 > ns) {
    i0 = 0;
  } else {
    if (1 > x_size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, x_size[0], &emlrtBCI, sp);
    }

    if (ns != (int32_T)muDoubleScalarFloor(ns)) {
      emlrtIntegerCheckR2012b(ns, &emlrtDCI, sp);
    }

    i0 = (int32_T)ns;
    if ((i0 < 1) || (i0 > x_size[0])) {
      emlrtDynamicBoundsCheckR2012b(i0, 1, x_size[0], &b_emlrtBCI, sp);
    }
  }

  Re3Array[0] = 1;
  Re3Array[1] = i0;
  st.site = &emlrtRSI;
  indexShapeCheck(&st, x_size[0], Re3Array);
  d0 = 2.0 * ns;
  if (ns + 1.0 > d0) {
    i1 = 1;
    i2 = 1;
  } else {
    if (ns + 1.0 != (int32_T)muDoubleScalarFloor(ns + 1.0)) {
      emlrtIntegerCheckR2012b(ns + 1.0, &b_emlrtDCI, sp);
    }

    i1 = (int32_T)(ns + 1.0);
    if ((i1 < 1) || (i1 > x_size[0])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, x_size[0], &c_emlrtBCI, sp);
    }

    if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
      emlrtIntegerCheckR2012b(d0, &c_emlrtDCI, sp);
    }

    i2 = (int32_T)d0;
    if ((i2 < 1) || (i2 > x_size[0])) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, x_size[0], &d_emlrtBCI, sp);
    }

    i2++;
  }

  Re3Array[0] = 1;
  loop_ub = i2 - i1;
  Re3Array[1] = loop_ub;
  st.site = &b_emlrtRSI;
  indexShapeCheck(&st, x_size[0], Re3Array);
  for (i3 = 0; i3 < loop_ub; i3++) {
    ds_data[i3] = x_data[(i1 + i3) - 1];
  }

  st.site = &c_emlrtRSI;
  b_indexShapeCheck(&st, i0);
  if (1 > i0) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &mb_emlrtBCI, sp);
  }

  if (2 > i0) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i0, &mb_emlrtBCI, sp);
  }

  if (3 > i0) {
    emlrtDynamicBoundsCheckR2012b(3, 1, i0, &mb_emlrtBCI, sp);
  }

  if (4 > i0) {
    i3 = 1;
    i4 = 1;
  } else {
    i3 = 4;
    i4 = i0 + 1;
  }

  Re3Array[0] = 1;
  b_loop_ub = i4 - i3;
  Re3Array[1] = b_loop_ub;
  st.site = &d_emlrtRSI;
  indexShapeCheck(&st, i0, Re3Array);
  for (i0 = 0; i0 < b_loop_ub; i0++) {
    b_x_data[i0] = x_data[(i3 + i0) - 1];
  }

  st.site = &d_emlrtRSI;
  varargin_2 = data->n;
  b_st.site = &r_emlrtRSI;
  c_st.site = &t_emlrtRSI;
  assertValidSizeArg(&c_st, data->n);
  n = b_loop_ub;
  if (1 > b_loop_ub) {
    n = 1;
  }

  maxdimlen = muIntScalarMax_sint32(b_loop_ub, n);
  if (3 > maxdimlen) {
    b_st.site = &s_emlrtRSI;
    error(&b_st);
  }

  i0 = (int32_T)data->n;
  if (i0 > maxdimlen) {
    b_st.site = &s_emlrtRSI;
    error(&b_st);
  }

  if (i0 < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &qb_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  c_loop_ub = 3 * i0;
  if (c_loop_ub != b_loop_ub) {
    emlrtErrorWithMessageIdR2018a(&st, &rb_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  st.site = &e_emlrtRSI;
  b_indexShapeCheck(&st, i2 - i1);
  if (1 > loop_ub) {
    emlrtDynamicBoundsCheckR2012b(1, 1, loop_ub, &nb_emlrtBCI, sp);
  }

  if (2 > loop_ub) {
    emlrtDynamicBoundsCheckR2012b(2, 1, loop_ub, &nb_emlrtBCI, sp);
  }

  if (3 > loop_ub) {
    emlrtDynamicBoundsCheckR2012b(3, 1, loop_ub, &nb_emlrtBCI, sp);
  }

  if (4 > loop_ub) {
    i3 = 1;
    i4 = 1;
  } else {
    if (4 > loop_ub) {
      emlrtDynamicBoundsCheckR2012b(4, 1, loop_ub, &e_emlrtBCI, sp);
    }

    i3 = 4;
    if (loop_ub < 1) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, loop_ub, &f_emlrtBCI, sp);
    }

    i4 = loop_ub + 1;
  }

  Re3Array[0] = 1;
  loop_ub = i4 - i3;
  Re3Array[1] = loop_ub;
  st.site = &f_emlrtRSI;
  indexShapeCheck(&st, i2 - i1, Re3Array);
  for (i1 = 0; i1 < loop_ub; i1++) {
    c_x_data[i1] = ds_data[(i3 + i1) - 1];
  }

  st.site = &f_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  c_st.site = &t_emlrtRSI;
  assertValidSizeArg(&c_st, data->n);
  n = loop_ub;
  if (1 > loop_ub) {
    n = 1;
  }

  maxdimlen = muIntScalarMax_sint32(loop_ub, n);
  if (3 > maxdimlen) {
    b_st.site = &s_emlrtRSI;
    error(&b_st);
  }

  if (i0 > maxdimlen) {
    b_st.site = &s_emlrtRSI;
    error(&b_st);
  }

  if (i0 < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &qb_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if (c_loop_ub != loop_ub) {
    emlrtErrorWithMessageIdR2018a(&st, &rb_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  emxInit_int16_T(&st, &r0, 2, &k_emlrtRTEI, true);
  d0 = 2.0 * ns;
  i1 = r0->size[0] * r0->size[1];
  r0->size[0] = 1;
  loop_ub = (int32_T)muDoubleScalarFloor(nr - 1.0);
  r0->size[1] = loop_ub + 1;
  emxEnsureCapacity_int16_T(sp, r0, i1, &emlrtRTEI);
  for (i1 = 0; i1 <= loop_ub; i1++) {
    d1 = d0 + (1.0 + (real_T)i1);
    if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
      emlrtIntegerCheckR2012b(d1, &m_emlrtDCI, sp);
    }

    i5 = (int16_T)d1;
    if ((i5 < 1) || (i5 > x_size[0])) {
      emlrtDynamicBoundsCheckR2012b((int16_T)d1, 1, x_size[0], &hb_emlrtBCI, sp);
    }

    r0->data[i1] = i5;
  }

  emxInit_real_T(sp, &r, 1, &b_emlrtRTEI, true);
  st.site = &g_emlrtRSI;
  indexShapeCheck(&st, x_size[0], *(int32_T (*)[2])r0->size);
  i1 = r->size[0];
  r->size[0] = r0->size[1];
  emxEnsureCapacity_real_T(sp, r, i1, &b_emlrtRTEI);
  loop_ub = r0->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    r->data[i1] = x_data[r0->data[i1] - 1];
  }

  emxInit_int32_T(sp, &r1, 1, &c_emlrtRTEI, true);
  st.site = &h_emlrtRSI;
  varargin_3 = data->nQ;
  i1 = r1->size[0];
  r1->size[0] = r0->size[1];
  emxEnsureCapacity_int32_T(&st, r1, i1, &c_emlrtRTEI);
  loop_ub = r0->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    r1->data[i1] = r0->data[i1];
  }

  maxdimlen = r1->size[0];
  b_st.site = &r_emlrtRSI;
  c_st.site = &t_emlrtRSI;
  assertValidSizeArg(&c_st, data->nQ);
  i1 = r1->size[0];
  r1->size[0] = r0->size[1];
  emxEnsureCapacity_int32_T(&st, r1, i1, &c_emlrtRTEI);
  loop_ub = r0->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    r1->data[i1] = r0->data[i1];
  }

  n = r1->size[0];
  i1 = r1->size[0];
  r1->size[0] = r0->size[1];
  emxEnsureCapacity_int32_T(&st, r1, i1, &c_emlrtRTEI);
  loop_ub = r0->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    r1->data[i1] = r0->data[i1];
  }

  if (1 > r1->size[0]) {
    n = 1;
  }

  maxdimlen = muIntScalarMax_sint32(maxdimlen, n);
  if (3 > maxdimlen) {
    b_st.site = &s_emlrtRSI;
    error(&b_st);
  }

  loop_ub = (int32_T)data->nQ;
  if (loop_ub > maxdimlen) {
    b_st.site = &s_emlrtRSI;
    error(&b_st);
  }

  if (loop_ub < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &qb_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  i1 = r1->size[0];
  r1->size[0] = r0->size[1];
  emxEnsureCapacity_int32_T(&st, r1, i1, &c_emlrtRTEI);
  b_loop_ub = r0->size[1];
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    r1->data[i1] = r0->data[i1];
  }

  emxFree_int16_T(&r0);
  b_loop_ub = 9 * loop_ub;
  if (b_loop_ub != r1->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &rb_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  emxFree_int32_T(&r1);
  d0 = (2.0 * ns + nr) + 1.0;
  if (d0 > x_size[0]) {
    i1 = 1;
    i2 = 1;
  } else {
    if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
      emlrtIntegerCheckR2012b(d0, &d_emlrtDCI, sp);
    }

    i1 = (int32_T)d0;
    if ((i1 < 1) || (i1 > x_size[0])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, x_size[0], &g_emlrtBCI, sp);
    }

    if (x_size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(x_size[0], 1, x_size[0], &h_emlrtBCI, sp);
    }

    i2 = x_size[0] + 1;
  }

  Re3Array[0] = 1;
  d_loop_ub = i2 - i1;
  Re3Array[1] = d_loop_ub;
  st.site = &i_emlrtRSI;
  indexShapeCheck(&st, x_size[0], Re3Array);
  for (i2 = 0; i2 < d_loop_ub; i2++) {
    d_x_data[i2] = x_data[(i1 + i2) - 1];
  }

  st.site = &i_emlrtRSI;
  b_varargin_2 = data->nQ;
  b_st.site = &r_emlrtRSI;
  c_st.site = &t_emlrtRSI;
  assertValidSizeArg(&c_st, data->nQ);
  n = d_loop_ub;
  if (1 > d_loop_ub) {
    n = 1;
  }

  maxdimlen = muIntScalarMax_sint32(d_loop_ub, n);
  if (3 > maxdimlen) {
    b_st.site = &s_emlrtRSI;
    error(&b_st);
  }

  if (loop_ub > maxdimlen) {
    b_st.site = &s_emlrtRSI;
    error(&b_st);
  }

  if (loop_ub < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &qb_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if (3 * loop_ub != d_loop_ub) {
    emlrtErrorWithMessageIdR2018a(&st, &rb_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  /*  extracting inputs */
  /*  ------------------- */
  /*  [f, moments] = data.unzipInputs(u); */
  st.site = &j_emlrtRSI;
  maxdimlen = u_size[1] << 2;
  b_st.site = &r_emlrtRSI;
  c_st.site = &t_emlrtRSI;
  assertValidSizeArg(&c_st, data->nQ);
  n = 4;
  if (u_size[1] > 4) {
    n = u_size[1];
  }

  if (loop_ub > muIntScalarMax_sint32(maxdimlen, n)) {
    b_st.site = &s_emlrtRSI;
    error(&b_st);
  }

  if (loop_ub < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &qb_emlrtRTEI,
      "MATLAB:checkDimCommon:nonnegativeSize",
      "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }

  if (loop_ub << 2 != maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &rb_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  for (i1 = 0; i1 < loop_ub; i1++) {
    maxdimlen = i1 << 2;
    moments_data[3 * i1] = u_data[maxdimlen + 1];
    moments_data[1 + 3 * i1] = u_data[maxdimlen + 2];
    moments_data[2 + 3 * i1] = u_data[maxdimlen + 3];
  }

  emxInit_real_T(sp, &fArray, 2, &d_emlrtRTEI, true);
  j = 1;
  i1 = fArray->size[0] * fArray->size[1];
  fArray->size[0] = 1;
  if (!(data->nvert >= 0.0)) {
    emlrtNonNegativeCheckR2012b(data->nvert, &f_emlrtDCI, sp);
  }

  if (data->nvert != (int32_T)muDoubleScalarFloor(data->nvert)) {
    emlrtIntegerCheckR2012b(data->nvert, &e_emlrtDCI, sp);
  }

  fArray->size[1] = (int32_T)data->nvert;
  emxEnsureCapacity_real_T(sp, fArray, i1, &d_emlrtRTEI);
  if (data->nvert != (int32_T)muDoubleScalarFloor(data->nvert)) {
    emlrtIntegerCheckR2012b(data->nvert, &n_emlrtDCI, sp);
  }

  d_loop_ub = (int32_T)data->nvert;
  for (i1 = 0; i1 < d_loop_ub; i1++) {
    fArray->data[i1] = 0.0;
  }

  emxInit_real_T(sp, &MomentsArray, 2, &e_emlrtRTEI, true);
  i1 = MomentsArray->size[0] * MomentsArray->size[1];
  MomentsArray->size[0] = 3;
  if (data->nvert != (int32_T)muDoubleScalarFloor(data->nvert)) {
    emlrtIntegerCheckR2012b(data->nvert, &g_emlrtDCI, sp);
  }

  MomentsArray->size[1] = (int32_T)data->nvert;
  emxEnsureCapacity_real_T(sp, MomentsArray, i1, &e_emlrtRTEI);
  if (data->nvert != (int32_T)muDoubleScalarFloor(data->nvert)) {
    emlrtIntegerCheckR2012b(data->nvert, &o_emlrtDCI, sp);
  }

  d_loop_ub = 3 * (int32_T)data->nvert;
  for (i1 = 0; i1 < d_loop_ub; i1++) {
    MomentsArray->data[i1] = 0.0;
  }

  emxInit_real_T(sp, &b_Re3Array, 2, &f_emlrtRTEI, true);
  i1 = b_Re3Array->size[0] * b_Re3Array->size[1];
  b_Re3Array->size[0] = 3;
  if (data->nvert != (int32_T)muDoubleScalarFloor(data->nvert)) {
    emlrtIntegerCheckR2012b(data->nvert, &h_emlrtDCI, sp);
  }

  b_Re3Array->size[1] = (int32_T)data->nvert;
  emxEnsureCapacity_real_T(sp, b_Re3Array, i1, &f_emlrtRTEI);
  if (data->nvert != (int32_T)muDoubleScalarFloor(data->nvert)) {
    emlrtIntegerCheckR2012b(data->nvert, &p_emlrtDCI, sp);
  }

  d_loop_ub = 3 * (int32_T)data->nvert;
  for (i1 = 0; i1 < d_loop_ub; i1++) {
    b_Re3Array->data[i1] = 0.0;
  }

  i1 = (int32_T)data->nvert;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, data->nvert, mxDOUBLE_CLASS, (int32_T)
    data->nvert, &mb_emlrtRTEI, sp);
  for (i = 0; i < i1; i++) {
    i2 = 1 + i;
    if ((i2 < 1) || (i2 > data->b_I.size[0])) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, data->b_I.size[0], &i_emlrtBCI, sp);
    }

    st.site = &k_emlrtRSI;
    toLogicalCheck(&st, data->b_I.data[i]);
    if (data->b_I.data[i] != 0.0) {
      if ((j < 1) || (j > loop_ub)) {
        emlrtDynamicBoundsCheckR2012b(j, 1, loop_ub, &j_emlrtBCI, sp);
      }

      i2 = fArray->size[1];
      i3 = (int32_T)(1U + i);
      if ((i3 < 1) || (i3 > i2)) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &jb_emlrtBCI, sp);
      }

      fArray->data[i3 - 1] = u_data[(j - 1) << 2];
      i2 = MomentsArray->size[1];
      if (j > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(j, 1, loop_ub, &k_emlrtBCI, sp);
      }

      i3 = (int32_T)(1U + i);
      if ((i3 < 1) || (i3 > i2)) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &cb_emlrtBCI, sp);
      }

      i2 = 3 * (j - 1);
      MomentsArray->data[3 * i] = moments_data[i2];
      MomentsArray->data[1 + 3 * i] = moments_data[1 + i2];
      MomentsArray->data[2 + 3 * i] = moments_data[2 + i2];
      i2 = (int32_T)varargin_3;
      if (j > i2) {
        emlrtDynamicBoundsCheckR2012b(j, 1, i2, &l_emlrtBCI, sp);
      }

      i2 = b_Re3Array->size[1];
      i3 = (int32_T)(1U + i);
      if ((i3 < 1) || (i3 > i2)) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &eb_emlrtBCI, sp);
      }

      for (i2 = 0; i2 < 3; i2++) {
        i3 = i2 + 3 * i;
        b_Re3Array->data[i3] = 0.0;
        i4 = i2 + 9 * (j - 1);
        b_Re3Array->data[i3] += r->data[i4] * 0.0;
        b_Re3Array->data[i3] += r->data[i4 + 3] * 0.0;
        b_Re3Array->data[i3] += r->data[i4 + 6];
      }

      j++;
    } else {
      i2 = fArray->size[1];
      i3 = (int32_T)(1U + i);
      if ((i3 < 1) || (i3 > i2)) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ib_emlrtBCI, sp);
      }

      fArray->data[i3 - 1] = 0.0;
      i2 = MomentsArray->size[1];
      if ((i3 < 1) || (i3 > i2)) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &db_emlrtBCI, sp);
      }

      i2 = 3 * i;
      MomentsArray->data[i2] = 0.0;
      i4 = 1 + i2;
      MomentsArray->data[i4] = 0.0;
      i6 = 2 + i2;
      MomentsArray->data[i6] = 0.0;
      i7 = b_Re3Array->size[1];
      if ((i3 < 1) || (i3 > i7)) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, i7, &m_emlrtBCI, sp);
      }

      b_Re3Array->data[i2] = 0.0;
      b_Re3Array->data[i4] = 0.0;
      b_Re3Array->data[i6] = 0.0;
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /*  compute net translation forces */
  /*  ------------------- */
  st.site = &l_emlrtRSI;
  repmat(&st, fArray, MomentsArray);
  emxFree_real_T(&fArray);
  b_MomentsArray[0] = MomentsArray->size[0];
  b_MomentsArray[1] = MomentsArray->size[1];
  Re3Array[0] = b_Re3Array->size[0];
  Re3Array[1] = b_Re3Array->size[1];
  if ((b_MomentsArray[0] != Re3Array[0]) || (b_MomentsArray[1] != Re3Array[1]))
  {
    emlrtSizeEqCheckNDR2012b(&b_MomentsArray[0], &Re3Array[0], &emlrtECI, sp);
  }

  i1 = MomentsArray->size[0] * MomentsArray->size[1];
  i2 = MomentsArray->size[0] * MomentsArray->size[1];
  MomentsArray->size[0] = 3;
  emxEnsureCapacity_real_T(sp, MomentsArray, i2, &g_emlrtRTEI);
  d_loop_ub = i1 - 1;
  for (i1 = 0; i1 <= d_loop_ub; i1++) {
    MomentsArray->data[i1] *= b_Re3Array->data[i1];
  }

  emxFree_real_T(&b_Re3Array);
  Re3Array[0] = data->mge3.size[0];
  Re3Array[1] = data->mge3.size[1];
  b_MomentsArray[0] = MomentsArray->size[0];
  b_MomentsArray[1] = MomentsArray->size[1];
  if ((data->mge3.size[0] != b_MomentsArray[0]) || (data->mge3.size[1] !=
       b_MomentsArray[1])) {
    emlrtSizeEqCheckNDR2012b(&Re3Array[0], &b_MomentsArray[0], &b_emlrtECI, sp);
  }

  uk_size[0] = 3;
  uk_size[1] = data->mge3.size[1];
  d_loop_ub = data->mge3.size[0] * data->mge3.size[1];
  for (i1 = 0; i1 < d_loop_ub; i1++) {
    uk_data[i1] = data->mge3.data[i1] + MomentsArray->data[i1];
  }

  emxFree_real_T(&MomentsArray);
  emxInit_real_T(sp, &U, 1, &h_emlrtRTEI, true);
  st.site = &m_emlrtRSI;
  sum(uk_data, uk_size, b);
  i1 = U->size[0];
  U->size[0] = 3;
  emxEnsureCapacity_real_T(sp, U, i1, &h_emlrtRTEI);
  U->data[0] = b[0];
  U->data[1] = b[1];
  U->data[2] = b[2];
  emxInit_real_T(sp, &M1, 2, &q_emlrtRTEI, true);
  emxInit_real_T(sp, &M2, 2, &i_emlrtRTEI, true);
  M1->size[0] = 0;
  M1->size[1] = 3;
  i1 = M2->size[0] * M2->size[1];
  d0 = 3.0 * data->n;
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &j_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &i_emlrtDCI, sp);
  }

  M2->size[0] = (int32_T)d0;
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &l_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &k_emlrtDCI, sp);
  }

  M2->size[1] = (int32_T)d0;
  emxEnsureCapacity_real_T(sp, M2, i1, &i_emlrtRTEI);
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &r_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &q_emlrtDCI, sp);
  }

  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &r_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &q_emlrtDCI, sp);
  }

  d_loop_ub = (int32_T)d0 * (int32_T)d0;
  for (i1 = 0; i1 < d_loop_ub; i1++) {
    M2->data[i1] = 0.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, data->n, mxDOUBLE_CLASS, (int32_T)
    data->n, &nb_emlrtRTEI, sp);
  emxInit_real_T(sp, &b_M1, 2, &o_emlrtRTEI, true);
  b_uk_size = data->mge3.size[1];
  for (i = 0; i < i0; i++) {
    u0 = i + 2U;
    if (u0 > (uint32_T)b_uk_size) {
      i1 = 0;
      i2 = 0;
    } else {
      i1 = (int32_T)u0;
      if ((i1 < 1) || (i1 > b_uk_size)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, b_uk_size, &q_emlrtBCI, sp);
      }

      i1--;
      if (b_uk_size < 1) {
        emlrtDynamicBoundsCheckR2012b(b_uk_size, 1, b_uk_size, &r_emlrtBCI, sp);
      }

      i2 = b_uk_size;
    }

    i3 = (int32_T)(1U + i);
    if ((i3 < 1) || (i3 > i0)) {
      emlrtDynamicBoundsCheckR2012b(i3, 1, i0, &kb_emlrtBCI, sp);
    }

    ns = b_norm(*(real_T (*)[3])&c_x_data[3 * (i3 - 1)]);
    d0 = 3.0 * ((1.0 + (real_T)i) + 1.0);
    U_tmp[0] = d0 + -2.0;
    U_tmp[1] = d0 + -1.0;
    U_tmp[2] = d0;
    st.site = &n_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    ns *= ns;
    maxdimlen = data->M->size[0];
    i3 = (int32_T)(d0 + -2.0);
    if ((i3 < 1) || (i3 > maxdimlen)) {
      emlrtDynamicBoundsCheckR2012b(i3, 1, maxdimlen, &ob_emlrtBCI, sp);
    }

    i4 = (int32_T)(d0 + -1.0);
    if ((i4 < 1) || (i4 > maxdimlen)) {
      emlrtDynamicBoundsCheckR2012b(i4, 1, maxdimlen, &ob_emlrtBCI, sp);
    }

    i6 = (int32_T)d0;
    if ((i6 < 1) || (i6 > maxdimlen)) {
      emlrtDynamicBoundsCheckR2012b(i6, 1, maxdimlen, &ob_emlrtBCI, sp);
    }

    maxdimlen = data->M->size[1];
    if ((i3 < 1) || (i3 > maxdimlen)) {
      emlrtDynamicBoundsCheckR2012b(i3, 1, maxdimlen, &pb_emlrtBCI, sp);
    }

    if ((i4 < 1) || (i4 > maxdimlen)) {
      emlrtDynamicBoundsCheckR2012b(i4, 1, maxdimlen, &pb_emlrtBCI, sp);
    }

    if ((i6 < 1) || (i6 > maxdimlen)) {
      emlrtDynamicBoundsCheckR2012b(i6, 1, maxdimlen, &pb_emlrtBCI, sp);
    }

    i7 = (int32_T)varargin_2;
    n = 1 + i;
    if ((n < 1) || (n > i7)) {
      emlrtDynamicBoundsCheckR2012b(n, 1, i7, &n_emlrtBCI, sp);
    }

    i7 = (int32_T)varargin_2;
    n = 1 + i;
    if ((n < 1) || (n > i7)) {
      emlrtDynamicBoundsCheckR2012b(n, 1, i7, &p_emlrtBCI, sp);
    }

    ahat[0] = 0.0;
    d0 = b_x_data[2 + 3 * i];
    ahat[3] = -d0;
    d1 = b_x_data[1 + 3 * i];
    ahat[6] = d1;
    ahat[1] = d0;
    ahat[4] = 0.0;
    d2 = b_x_data[3 * i];
    ahat[7] = -d2;
    ahat[2] = -d1;
    ahat[5] = d2;
    ahat[8] = 0.0;
    i7 = 1 + i;
    if ((i7 < 1) || (i7 > data->l.size[0])) {
      emlrtDynamicBoundsCheckR2012b(i7, 1, data->l.size[0], &o_emlrtBCI, sp);
    }

    c_uk_size[0] = 3;
    maxdimlen = i2 - i1;
    c_uk_size[1] = maxdimlen;
    for (i2 = 0; i2 < maxdimlen; i2++) {
      n = 3 * (i1 + i2);
      b_uk_data[3 * i2] = uk_data[n];
      b_uk_data[1 + 3 * i2] = uk_data[1 + n];
      b_uk_data[2 + 3 * i2] = uk_data[2 + n];
    }

    st.site = &n_emlrtRSI;
    sum(b_uk_data, c_uk_size, b);
    i1 = U->size[0];
    i2 = U->size[0];
    U->size[0] = i1 + 3;
    emxEnsureCapacity_real_T(sp, U, i2, &k_emlrtRTEI);
    for (i2 = 0; i2 < 3; i2++) {
      for (i7 = 0; i7 < 3; i7++) {
        b_data[i7 + 3 * i2] = data->M->data[((int32_T)U_tmp[i7] + data->M->size
          [0] * ((int32_T)U_tmp[i2] - 1)) - 1] * ns;
        maxdimlen = i2 + 3 * i7;
        b_ahat[maxdimlen] = 0.0;
        b_ahat[maxdimlen] = (ahat[i2] * ahat[3 * i7] + ahat[i2 + 3] * ahat[1 + 3
                             * i7]) + ahat[i2 + 6] * ahat[2 + 3 * i7];
      }
    }

    for (i2 = 0; i2 < 9; i2++) {
      b_ahat[i2] *= data->l.data[i];
    }

    for (i2 = 0; i2 < 3; i2++) {
      c_data[i2] = 0.0;
      d_data[i2] = 0.0;
      d_data[i2] = (b_ahat[i2] * b[0] + b_ahat[i2 + 3] * b[1]) + b_ahat[i2 + 6] *
        b[2];
      c_data[i2] = (b_data[i2] * d2 + b_data[i2 + 3] * d1) + b_data[i2 + 6] * d0;
    }

    U->data[i1] = c_data[0] + d_data[0];
    U->data[i1 + 1] = c_data[1] + d_data[1];
    U->data[i1 + 2] = c_data[2] + d_data[2];

    /*              U = [U; (obj.l(i)^2*sum(obj.mbar(i:end))*norm(dq(:,i))^2*q(:,i))+(obj.l(i)*hat(q(:,i))^2*sum(uk(:,i:end),2))]; */
    i1 = (int32_T)varargin_2;
    i2 = 1 + i;
    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &s_emlrtBCI, sp);
    }

    ahat[0] = 0.0;
    ahat[3] = -d0;
    ahat[6] = d1;
    ahat[1] = d0;
    ahat[4] = 0.0;
    ahat[7] = -d2;
    ahat[2] = -d1;
    ahat[5] = d2;
    ahat[8] = 0.0;
    maxdimlen = data->M->size[0];
    if ((i3 < 1) || (i3 > maxdimlen)) {
      emlrtDynamicBoundsCheckR2012b(i3, 1, maxdimlen, &qb_emlrtBCI, sp);
    }

    if ((i4 < 1) || (i4 > maxdimlen)) {
      emlrtDynamicBoundsCheckR2012b(i4, 1, maxdimlen, &qb_emlrtBCI, sp);
    }

    if ((i6 < 1) || (i6 > maxdimlen)) {
      emlrtDynamicBoundsCheckR2012b(i6, 1, maxdimlen, &qb_emlrtBCI, sp);
    }

    maxdimlen = data->M->size[1];
    if (1 > maxdimlen) {
      emlrtDynamicBoundsCheckR2012b(1, 1, maxdimlen, &rb_emlrtBCI, sp);
    }

    if (2 > maxdimlen) {
      emlrtDynamicBoundsCheckR2012b(2, 1, maxdimlen, &rb_emlrtBCI, sp);
    }

    if (3 > maxdimlen) {
      emlrtDynamicBoundsCheckR2012b(3, 1, maxdimlen, &rb_emlrtBCI, sp);
    }

    for (i1 = 0; i1 < 3; i1++) {
      for (i2 = 0; i2 < 3; i2++) {
        maxdimlen = i1 + 3 * i2;
        b_ahat[maxdimlen] = 0.0;
        b_ahat[maxdimlen] = (ahat[i1] * ahat[3 * i2] + ahat[i1 + 3] * ahat[1 + 3
                             * i2]) + ahat[i1 + 6] * ahat[2 + 3 * i2];
        b_data[i2 + 3 * i1] = data->M->data[((int32_T)U_tmp[i2] + data->M->size
          [0] * i1) - 1];
      }
    }

    for (i1 = 0; i1 < 3; i1++) {
      for (i2 = 0; i2 < 3; i2++) {
        maxdimlen = i1 + 3 * i2;
        ahat[maxdimlen] = 0.0;
        ahat[maxdimlen] = (b_ahat[i1] * b_data[3 * i2] + b_ahat[i1 + 3] *
                           b_data[1 + 3 * i2]) + b_ahat[i1 + 6] * b_data[2 + 3 *
          i2];
      }
    }

    i1 = b_M1->size[0] * b_M1->size[1];
    b_M1->size[0] = M1->size[0] + 3;
    b_M1->size[1] = 3;
    emxEnsureCapacity_real_T(sp, b_M1, i1, &o_emlrtRTEI);
    for (i1 = 0; i1 < 3; i1++) {
      d_loop_ub = M1->size[0];
      for (i2 = 0; i2 < d_loop_ub; i2++) {
        b_M1->data[i2 + b_M1->size[0] * i1] = M1->data[i2 + M1->size[0] * i1];
      }
    }

    for (i1 = 0; i1 < 3; i1++) {
      b_M1->data[M1->size[0] + b_M1->size[0] * i1] = ahat[3 * i1];
      b_M1->data[(M1->size[0] + b_M1->size[0] * i1) + 1] = ahat[1 + 3 * i1];
      b_M1->data[(M1->size[0] + b_M1->size[0] * i1) + 2] = ahat[2 + 3 * i1];
    }

    i1 = M1->size[0] * M1->size[1];
    M1->size[0] = b_M1->size[0];
    M1->size[1] = 3;
    emxEnsureCapacity_real_T(sp, M1, i1, &p_emlrtRTEI);
    d_loop_ub = b_M1->size[0] * b_M1->size[1];
    for (i1 = 0; i1 < d_loop_ub; i1++) {
      M1->data[i1] = b_M1->data[i1];
    }

    emlrtForLoopVectorCheckR2012b(1.0, 1.0, data->n, mxDOUBLE_CLASS, (int32_T)
      data->n, &ob_emlrtRTEI, sp);
    for (j = 0; j < i0; j++) {
      if ((uint32_T)i == (uint32_T)j) {
        maxdimlen = data->M->size[0];
        ns = 3.0 * ((1.0 + (real_T)j) + 1.0);
        e_data = data->M->size[1];
        nr = 3.0 * (1.0 + (real_T)i);
        i1 = M2->size[0];
        d3 = 3.0 * (1.0 + (real_T)j);
        i2 = M2->size[1];
        for (i7 = 0; i7 < 3; i7++) {
          n = (int32_T)nr + -2;
          if ((n < 1) || (n > i1)) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i1, &sb_emlrtBCI, sp);
          }

          result = ((int32_T)d3 + i7) - 2;
          if ((result < 1) || (result > i2)) {
            emlrtDynamicBoundsCheckR2012b(result, 1, i2, &sb_emlrtBCI, sp);
          }

          if ((i3 < 1) || (i3 > maxdimlen)) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, maxdimlen, &tb_emlrtBCI, sp);
          }

          d_loop_ub = ((int32_T)ns + i7) - 2;
          if ((d_loop_ub < 1) || (d_loop_ub > e_data)) {
            emlrtDynamicBoundsCheckR2012b(d_loop_ub, 1, e_data, &ub_emlrtBCI, sp);
          }

          M2->data[(n + M2->size[0] * (result - 1)) - 1] = -data->M->data[(i3 +
            data->M->size[0] * (d_loop_ub - 1)) - 1];
          n = (int32_T)nr + -1;
          if ((n < 1) || (n > i1)) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i1, &sb_emlrtBCI, sp);
          }

          if ((result < 1) || (result > i2)) {
            emlrtDynamicBoundsCheckR2012b(result, 1, i2, &sb_emlrtBCI, sp);
          }

          if ((i4 < 1) || (i4 > maxdimlen)) {
            emlrtDynamicBoundsCheckR2012b(i4, 1, maxdimlen, &tb_emlrtBCI, sp);
          }

          if ((d_loop_ub < 1) || (d_loop_ub > e_data)) {
            emlrtDynamicBoundsCheckR2012b(d_loop_ub, 1, e_data, &ub_emlrtBCI, sp);
          }

          M2->data[(n + M2->size[0] * (result - 1)) - 1] = -data->M->data[(i4 +
            data->M->size[0] * (d_loop_ub - 1)) - 1];
          n = (int32_T)nr;
          if ((n < 1) || (n > i1)) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i1, &sb_emlrtBCI, sp);
          }

          if ((result < 1) || (result > i2)) {
            emlrtDynamicBoundsCheckR2012b(result, 1, i2, &sb_emlrtBCI, sp);
          }

          if ((i6 < 1) || (i6 > maxdimlen)) {
            emlrtDynamicBoundsCheckR2012b(i6, 1, maxdimlen, &tb_emlrtBCI, sp);
          }

          if ((d_loop_ub < 1) || (d_loop_ub > e_data)) {
            emlrtDynamicBoundsCheckR2012b(d_loop_ub, 1, e_data, &ub_emlrtBCI, sp);
          }

          M2->data[(n + M2->size[0] * (result - 1)) - 1] = -data->M->data[(i6 +
            data->M->size[0] * (d_loop_ub - 1)) - 1];
        }
      } else {
        ns = 3.0 * ((1.0 + (real_T)j) + 1.0);
        b[0] = ns + -2.0;
        b[1] = ns + -1.0;
        b[2] = ns;
        i1 = (int32_T)varargin_2;
        i2 = 1 + i;
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &t_emlrtBCI, sp);
        }

        ahat[0] = 0.0;
        ahat[3] = -d0;
        ahat[6] = d1;
        ahat[1] = d0;
        ahat[4] = 0.0;
        ahat[7] = -d2;
        ahat[2] = -d1;
        ahat[5] = d2;
        ahat[8] = 0.0;
        maxdimlen = data->M->size[0];
        if ((i3 < 1) || (i3 > maxdimlen)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, maxdimlen, &vb_emlrtBCI, sp);
        }

        if ((i4 < 1) || (i4 > maxdimlen)) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, maxdimlen, &vb_emlrtBCI, sp);
        }

        if ((i6 < 1) || (i6 > maxdimlen)) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, maxdimlen, &vb_emlrtBCI, sp);
        }

        maxdimlen = data->M->size[1];
        i1 = (int32_T)(ns + -2.0);
        if ((i1 < 1) || (i1 > maxdimlen)) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, maxdimlen, &wb_emlrtBCI, sp);
        }

        i1 = (int32_T)(ns + -1.0);
        if ((i1 < 1) || (i1 > maxdimlen)) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, maxdimlen, &wb_emlrtBCI, sp);
        }

        i1 = (int32_T)ns;
        if ((i1 < 1) || (i1 > maxdimlen)) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, maxdimlen, &wb_emlrtBCI, sp);
        }

        for (i1 = 0; i1 < 3; i1++) {
          for (i2 = 0; i2 < 3; i2++) {
            maxdimlen = i1 + 3 * i2;
            b_ahat[maxdimlen] = 0.0;
            b_ahat[maxdimlen] = (ahat[i1] * ahat[3 * i2] + ahat[i1 + 3] * ahat[1
                                 + 3 * i2]) + ahat[i1 + 6] * ahat[2 + 3 * i2];
            b_data[i2 + 3 * i1] = data->M->data[((int32_T)U_tmp[i2] + data->
              M->size[0] * ((int32_T)b[i1] - 1)) - 1];
          }
        }

        ns = 3.0 * (1.0 + (real_T)i);
        i1 = M2->size[0];
        nr = 3.0 * (1.0 + (real_T)j);
        i2 = M2->size[1];
        for (i7 = 0; i7 < 3; i7++) {
          for (n = 0; n < 3; n++) {
            result = ((int32_T)ns + i7) - 2;
            if ((result < 1) || (result > i1)) {
              emlrtDynamicBoundsCheckR2012b(result, 1, i1, &lb_emlrtBCI, sp);
            }

            d_loop_ub = ((int32_T)nr + n) - 2;
            if ((d_loop_ub < 1) || (d_loop_ub > i2)) {
              emlrtDynamicBoundsCheckR2012b(d_loop_ub, 1, i2, &lb_emlrtBCI, sp);
            }

            M2->data[(result + M2->size[0] * (d_loop_ub - 1)) - 1] = 0.0;
            if ((result < 1) || (result > i1)) {
              emlrtDynamicBoundsCheckR2012b(result, 1, i1, &lb_emlrtBCI, sp);
            }

            if ((d_loop_ub < 1) || (d_loop_ub > i2)) {
              emlrtDynamicBoundsCheckR2012b(d_loop_ub, 1, i2, &lb_emlrtBCI, sp);
            }

            if ((result < 1) || (result > i1)) {
              emlrtDynamicBoundsCheckR2012b(result, 1, i1, &lb_emlrtBCI, sp);
            }

            if ((d_loop_ub < 1) || (d_loop_ub > i2)) {
              emlrtDynamicBoundsCheckR2012b(d_loop_ub, 1, i2, &lb_emlrtBCI, sp);
            }

            M2->data[(result + M2->size[0] * (d_loop_ub - 1)) - 1] += b_ahat[i7]
              * b_data[3 * n];
            if ((result < 1) || (result > i1)) {
              emlrtDynamicBoundsCheckR2012b(result, 1, i1, &lb_emlrtBCI, sp);
            }

            if ((d_loop_ub < 1) || (d_loop_ub > i2)) {
              emlrtDynamicBoundsCheckR2012b(d_loop_ub, 1, i2, &lb_emlrtBCI, sp);
            }

            if ((result < 1) || (result > i1)) {
              emlrtDynamicBoundsCheckR2012b(result, 1, i1, &lb_emlrtBCI, sp);
            }

            if ((d_loop_ub < 1) || (d_loop_ub > i2)) {
              emlrtDynamicBoundsCheckR2012b(d_loop_ub, 1, i2, &lb_emlrtBCI, sp);
            }

            M2->data[(result + M2->size[0] * (d_loop_ub - 1)) - 1] += b_ahat[i7
              + 3] * b_data[1 + 3 * n];
            if ((result < 1) || (result > i1)) {
              emlrtDynamicBoundsCheckR2012b(result, 1, i1, &lb_emlrtBCI, sp);
            }

            if ((d_loop_ub < 1) || (d_loop_ub > i2)) {
              emlrtDynamicBoundsCheckR2012b(d_loop_ub, 1, i2, &lb_emlrtBCI, sp);
            }

            if ((result < 1) || (result > i1)) {
              emlrtDynamicBoundsCheckR2012b(result, 1, i1, &lb_emlrtBCI, sp);
            }

            if ((d_loop_ub < 1) || (d_loop_ub > i2)) {
              emlrtDynamicBoundsCheckR2012b(d_loop_ub, 1, i2, &lb_emlrtBCI, sp);
            }

            M2->data[(result + M2->size[0] * (d_loop_ub - 1)) - 1] += b_ahat[i7
              + 6] * b_data[2 + 3 * n];
          }
        }
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_M1);
  st.site = &o_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  if (M1->size[0] != 0) {
    result = M1->size[0];
  } else if ((M2->size[0] != 0) && (M2->size[1] != 0)) {
    result = M2->size[0];
  } else {
    result = 0;
    if (M2->size[0] > 0) {
      result = M2->size[0];
    }
  }

  c_st.site = &fb_emlrtRSI;
  if ((M1->size[0] == result) || (M1->size[0] == 0)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&c_st, &sb_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((M2->size[0] == result) || ((M2->size[0] == 0) || (M2->size[1] == 0))) {
  } else {
    emlrtErrorWithMessageIdR2018a(&c_st, &sb_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || (M1->size[0] != 0)) {
    input_sizes_idx_1 = 3;
  } else {
    input_sizes_idx_1 = 0;
  }

  if (empty_non_axis_sizes || ((M2->size[0] != 0) && (M2->size[1] != 0))) {
    maxdimlen = M2->size[1];
  } else {
    maxdimlen = 0;
  }

  emxInit_real_T(&b_st, &c_varargin_2, 2, &j_emlrtRTEI, true);
  i0 = c_varargin_2->size[0] * c_varargin_2->size[1];
  c_varargin_2->size[0] = result;
  c_varargin_2->size[1] = input_sizes_idx_1 + maxdimlen;
  emxEnsureCapacity_real_T(&b_st, c_varargin_2, i0, &j_emlrtRTEI);
  d_loop_ub = input_sizes_idx_1;
  for (i0 = 0; i0 < d_loop_ub; i0++) {
    for (i1 = 0; i1 < result; i1++) {
      c_varargin_2->data[i1 + c_varargin_2->size[0] * i0] = M1->data[i1 +
        M1->size[0] * i0];
    }
  }

  emxFree_real_T(&M1);
  for (i0 = 0; i0 < maxdimlen; i0++) {
    for (i1 = 0; i1 < result; i1++) {
      c_varargin_2->data[i1 + c_varargin_2->size[0] * (i0 + input_sizes_idx_1)] =
        M2->data[i1 + result * i0];
    }
  }

  st.site = &o_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  if (data->Mtop.size[1] != 0) {
    result = data->Mtop.size[1];
  } else if ((c_varargin_2->size[0] != 0) && (c_varargin_2->size[1] != 0)) {
    result = c_varargin_2->size[1];
  } else {
    result = 0;
    if (c_varargin_2->size[1] > 0) {
      result = c_varargin_2->size[1];
    }
  }

  c_st.site = &fb_emlrtRSI;
  if ((data->Mtop.size[1] == result) || (data->Mtop.size[1] == 0)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&c_st, &sb_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((c_varargin_2->size[1] == result) || ((c_varargin_2->size[0] == 0) ||
       (c_varargin_2->size[1] == 0))) {
  } else {
    emlrtErrorWithMessageIdR2018a(&c_st, &sb_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || (data->Mtop.size[1] != 0)) {
    input_sizes_idx_1 = 3;
  } else {
    input_sizes_idx_1 = 0;
  }

  if (empty_non_axis_sizes || ((c_varargin_2->size[0] != 0) &&
       (c_varargin_2->size[1] != 0))) {
    maxdimlen = c_varargin_2->size[0];
  } else {
    maxdimlen = 0;
  }

  /*  ddtrans = [dv0, d2q] */
  /*  Mmat*[ddtrans] = U */
  /*  ------------------- */
  n = input_sizes_idx_1;
  i0 = M2->size[0] * M2->size[1];
  M2->size[0] = input_sizes_idx_1 + maxdimlen;
  M2->size[1] = result;
  emxEnsureCapacity_real_T(sp, M2, i0, &l_emlrtRTEI);
  for (i0 = 0; i0 < result; i0++) {
    for (i1 = 0; i1 < n; i1++) {
      M2->data[i1 + M2->size[0] * i0] = data->Mtop.data[i1 + input_sizes_idx_1 *
        i0];
    }
  }

  for (i0 = 0; i0 < result; i0++) {
    for (i1 = 0; i1 < maxdimlen; i1++) {
      M2->data[(i1 + input_sizes_idx_1) + M2->size[0] * i0] = c_varargin_2->
        data[i1 + maxdimlen * i0];
    }
  }

  emxFree_real_T(&c_varargin_2);
  emxInit_real_T(sp, &ddtrans, 1, &r_emlrtRTEI, true);
  emxInit_real_T(sp, &dR, 3, &m_emlrtRTEI, true);
  st.site = &p_emlrtRSI;
  mldivide(&st, M2, U, ddtrans);

  /*  rotational dynamics */
  /*  ------------------- */
  i0 = dR->size[0] * dR->size[1] * dR->size[2];
  dR->size[0] = 3;
  dR->size[1] = 3;
  dR->size[2] = loop_ub;
  emxEnsureCapacity_real_T(sp, dR, i0, &m_emlrtRTEI);
  emxFree_real_T(&M2);
  emxFree_real_T(&U);
  for (i0 = 0; i0 < b_loop_ub; i0++) {
    dR->data[i0] = 0.0;
  }

  result = (int16_T)loop_ub;
  d_loop_ub = 3 * result;
  if (0 <= d_loop_ub - 1) {
    memset(&dOm_data[0], 0, (uint32_T)(d_loop_ub * (int32_T)sizeof(real_T)));
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, data->nQ, mxDOUBLE_CLASS, (int32_T)
    data->nQ, &pb_emlrtRTEI, sp);
  for (i = 0; i < loop_ub; i++) {
    i0 = (int32_T)b_varargin_2;
    i1 = 1 + i;
    if ((i1 < 1) || (i1 > i0)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &v_emlrtBCI, sp);
    }

    i0 = (int32_T)varargin_3;
    i1 = 1 + i;
    if ((i1 < 1) || (i1 > i0)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &u_emlrtBCI, sp);
    }

    ahat[0] = 0.0;
    maxdimlen = 2 + 3 * i;
    ahat[3] = -d_x_data[maxdimlen];
    n = 1 + 3 * i;
    ahat[6] = d_x_data[n];
    ahat[1] = d_x_data[maxdimlen];
    ahat[4] = 0.0;
    ns = d_x_data[3 * i];
    ahat[7] = -ns;
    ahat[2] = -d_x_data[n];
    ahat[5] = ns;
    ahat[8] = 0.0;
    i0 = dR->size[2];
    i1 = (int32_T)(1U + i);
    if ((i1 < 1) || (i1 > i0)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &fb_emlrtBCI, sp);
    }

    for (i0 = 0; i0 < 3; i0++) {
      for (i2 = 0; i2 < 3; i2++) {
        i3 = (i0 + 3 * i2) + 9 * i;
        dR->data[i3] = 0.0;
        i4 = i0 + 9 * i;
        dR->data[i3] += r->data[i4] * ahat[3 * i2];
        dR->data[i3] += r->data[i4 + 3] * ahat[1 + 3 * i2];
        dR->data[i3] += r->data[i4 + 6] * ahat[2 + 3 * i2];
      }
    }

    i0 = 1 + i;
    if ((i0 < 1) || (i0 > data->J.size[2])) {
      emlrtDynamicBoundsCheckR2012b(i0, 1, data->J.size[2], &ab_emlrtBCI, sp);
    }

    i0 = (int32_T)b_varargin_2;
    i2 = 1 + i;
    if ((i2 < 1) || (i2 > i0)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &bb_emlrtBCI, sp);
    }

    i0 = 1 + i;
    if ((i0 < 1) || (i0 > data->Jinv.size[2])) {
      emlrtDynamicBoundsCheckR2012b(i0, 1, data->Jinv.size[2], &w_emlrtBCI, sp);
    }

    i0 = 1 + i;
    if ((i0 < 1) || (i0 > loop_ub)) {
      emlrtDynamicBoundsCheckR2012b(i0, 1, loop_ub, &x_emlrtBCI, sp);
    }

    i0 = (int32_T)b_varargin_2;
    i2 = 1 + i;
    if ((i2 < 1) || (i2 > i0)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &y_emlrtBCI, sp);
    }

    for (i0 = 0; i0 < 3; i0++) {
      c_data[i0] = 0.0;
      i2 = i0 + 9 * i;
      c_data[i0] = (data->J.data[i2] * ns + data->J.data[i2 + 3] * d_x_data[n])
        + data->J.data[i2 + 6] * d_x_data[maxdimlen];
    }

    cross(*(real_T (*)[3])&d_x_data[3 * i], c_data, b);
    b[0] = moments_data[3 * i] - b[0];
    b[1] = moments_data[n] - b[1];
    b[2] = moments_data[maxdimlen] - b[2];
    if ((i1 < 1) || (i1 > result)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, (int16_T)(int32_T)data->nQ,
        &gb_emlrtBCI, sp);
    }

    for (i0 = 0; i0 < 3; i0++) {
      maxdimlen = i0 + 3 * i;
      dOm_data[maxdimlen] = 0.0;
      n = i0 + 9 * i;
      dOm_data[maxdimlen] += data->Jinv.data[n] * b[0];
      dOm_data[maxdimlen] += data->Jinv.data[n + 3] * b[1];
      dOm_data[maxdimlen] += data->Jinv.data[n + 6] * b[2];
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&r);

  /*  packing the state */
  /*  ----------------- */
  i0 = dx->size[0];
  dx->size[0] = (((c_loop_ub + ddtrans->size[0]) + 9 * dR->size[2]) + d_loop_ub)
    + 3;
  emxEnsureCapacity_real_T(sp, dx, i0, &n_emlrtRTEI);
  dx->data[0] = ds_data[0];
  dx->data[1] = ds_data[1];
  dx->data[2] = ds_data[2];
  for (i0 = 0; i0 < c_loop_ub; i0++) {
    dx->data[i0 + 3] = c_x_data[i0];
  }

  loop_ub = ddtrans->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    dx->data[(i0 + c_loop_ub) + 3] = ddtrans->data[i0];
  }

  loop_ub = 9 * dR->size[2];
  for (i0 = 0; i0 < loop_ub; i0++) {
    dx->data[((i0 + c_loop_ub) + ddtrans->size[0]) + 3] = dR->data[i0];
  }

  for (i0 = 0; i0 < d_loop_ub; i0++) {
    dx->data[(((i0 + c_loop_ub) + ddtrans->size[0]) + 9 * dR->size[2]) + 3] =
      dOm_data[i0];
  }

  emxFree_real_T(&dR);
  emxFree_real_T(&ddtrans);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (afh_dynamics.c) */
