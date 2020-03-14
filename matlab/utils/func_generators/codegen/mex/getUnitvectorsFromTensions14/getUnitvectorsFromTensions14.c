/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * getUnitvectorsFromTensions14.c
 *
 * Code generation for function 'getUnitvectorsFromTensions14'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "getUnitvectorsFromTensions14.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  968,                                 /* lineNo */
  17,                                  /* colNo */
  "dnormT",                            /* aName */
  "getUnitvectorsFromTensions14",      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/getUnitvectorsFromTensio"
  "ns14.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  679,                                 /* lineNo */
  17,                                  /* colNo */
  "dnormT",                            /* aName */
  "getUnitvectorsFromTensions14",      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/getUnitvectorsFromTensio"
  "ns14.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  475,                                 /* lineNo */
  17,                                  /* colNo */
  "dnormT",                            /* aName */
  "getUnitvectorsFromTensions14",      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/getUnitvectorsFromTensio"
  "ns14.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  333,                                 /* lineNo */
  17,                                  /* colNo */
  "dnormT",                            /* aName */
  "getUnitvectorsFromTensions14",      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/getUnitvectorsFromTensio"
  "ns14.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  235,                                 /* lineNo */
  17,                                  /* colNo */
  "dnormT",                            /* aName */
  "getUnitvectorsFromTensions14",      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/getUnitvectorsFromTensio"
  "ns14.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  167,                                 /* lineNo */
  16,                                  /* colNo */
  "dnormT",                            /* aName */
  "getUnitvectorsFromTensions14",      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/getUnitvectorsFromTensio"
  "ns14.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  121,                                 /* lineNo */
  16,                                  /* colNo */
  "dnormT",                            /* aName */
  "getUnitvectorsFromTensions14",      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/getUnitvectorsFromTensio"
  "ns14.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  89,                                  /* lineNo */
  16,                                  /* colNo */
  "dnormT",                            /* aName */
  "getUnitvectorsFromTensions14",      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/getUnitvectorsFromTensio"
  "ns14.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  16,                                  /* colNo */
  "dnormT",                            /* aName */
  "getUnitvectorsFromTensions14",      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/getUnitvectorsFromTensio"
  "ns14.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  16,                                  /* colNo */
  "dnormT",                            /* aName */
  "getUnitvectorsFromTensions14",      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/getUnitvectorsFromTensio"
  "ns14.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  16,                                  /* colNo */
  "dnormT",                            /* aName */
  "getUnitvectorsFromTensions14",      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/getUnitvectorsFromTensio"
  "ns14.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  16,                                  /* colNo */
  "dnormT",                            /* aName */
  "getUnitvectorsFromTensions14",      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/getUnitvectorsFromTensio"
  "ns14.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  16,                                  /* colNo */
  "dnormT",                            /* aName */
  "getUnitvectorsFromTensions14",      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/getUnitvectorsFromTensio"
  "ns14.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  16,                                  /* colNo */
  "dnormT",                            /* aName */
  "getUnitvectorsFromTensions14",      /* fName */
  "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/getUnitvectorsFromTensio"
  "ns14.m",                            /* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void getUnitvectorsFromTensions14(const emlrtStack *sp, const real_T T[3], const
  real_T dT_data[], const int32_T dT_size[2], real_T normT, const real_T
  dnormT_data[], const int32_T dnormT_size[2], real_T q[3], real_T dq_data[],
  int32_T dq_size[2])
{
  int32_T loop_ub;
  real_T y;
  real_T dnormT_tmp;
  real_T dnormT;
  real_T b_y;
  real_T c_y;
  real_T d0;
  real_T d_y;
  real_T e_y;
  real_T d1;
  real_T f_y;
  real_T g_y;
  real_T h_y;
  real_T d2;
  real_T d3;
  real_T i_y;
  real_T j_y;
  real_T d4;
  real_T d5;
  real_T k_y;
  real_T l_y;
  real_T m_y;
  real_T d6;
  real_T n_y;
  real_T d7;
  real_T d8;
  real_T d9;
  real_T o_y;
  real_T p_y;
  real_T d10;
  real_T d11;
  real_T d12;
  real_T d13;
  real_T q_y;
  real_T r_y;
  real_T s_y;
  real_T d14;
  real_T d15;
  real_T d16;
  real_T t_y;
  real_T d17;
  real_T d18;
  real_T d19;
  real_T d20;
  real_T u_y;
  real_T v_y;
  real_T w_y;
  real_T d21;
  real_T d22;
  real_T d23;
  real_T d24;
  real_T d25;
  real_T d26;
  real_T d27;
  real_T d28;
  real_T d29;
  real_T d30;
  real_T d31;
  real_T d32;
  real_T x_y;
  real_T y_y;
  real_T ab_y;
  real_T d33;
  real_T d34;
  real_T d35;
  real_T d36;
  real_T d37;
  real_T d38;
  real_T bb_y;
  real_T d39;
  real_T d40;
  real_T d41;
  real_T d42;
  real_T d43;
  real_T cb_y;
  real_T db_y;
  real_T d44;
  real_T d45;
  real_T d46;
  real_T d47;
  real_T d48;
  real_T d49;
  real_T d50;
  real_T d51;
  real_T d52;
  real_T d53;
  real_T d54;
  real_T eb_y;
  real_T fb_y;
  real_T gb_y;
  real_T hb_y;
  real_T d55;
  real_T d56;
  real_T d57;
  real_T d58;
  real_T ib_y;
  real_T d59;
  real_T d60;
  real_T d61;
  real_T d62;
  real_T d63;
  real_T d64;
  real_T d65;
  real_T d66;
  real_T d67;
  real_T d68;
  real_T d69;
  real_T d70;
  real_T d71;
  real_T jb_y;
  real_T d72;
  real_T d73;
  real_T d74;
  real_T d75;
  real_T kb_y;
  real_T lb_y;
  real_T d76;
  real_T d77;
  real_T d78;
  real_T d79;
  real_T d80;
  real_T d81;
  real_T d82;
  real_T d83;
  real_T d84;
  real_T d85;
  real_T d86;
  real_T d87;
  real_T d88;
  real_T d89;
  real_T d90;
  real_T d91;
  real_T d92;
  real_T d93;
  real_T d94;
  real_T d95;
  real_T d96;
  real_T d97;
  real_T d98;
  real_T d99;
  real_T d100;
  real_T d101;
  real_T d102;
  real_T d103;
  real_T d104;
  real_T d105;
  real_T d106;
  real_T d107;
  real_T d108;
  real_T d109;
  real_T d110;
  real_T d111;
  real_T d112;
  real_T d113;
  real_T d114;
  real_T d115;
  real_T d116;
  real_T d117;
  real_T d118;
  real_T d119;
  real_T d120;
  real_T d121;
  real_T d122;
  real_T d123;
  real_T d124;
  real_T d125;
  real_T d126;
  real_T d127;
  real_T d128;
  real_T d129;
  real_T d130;
  real_T d131;
  real_T d132;
  real_T d133;
  real_T d134;
  real_T d135;
  real_T d136;
  real_T d137;
  real_T d138;
  real_T d139;
  real_T d140;
  real_T d141;
  real_T d142;
  real_T d143;

  /*  Function generated using Mathematica on 2019-10-23T15:17:06 */
  /*  */
  /*  Author: prasanth.kotaru@berkeley.edu */
  /*  */
  /*  size(T) = [3,1] Tension vector */
  /*  size(dT) = [3,n] derivatives of the Tension vector */
  /*  size(normT) = [1,1] derivatives of the Tension vector */
  /*  size(dnormT) = [n,1] derivatives of the Tension vector */
  /*  */
  /*  */
  dq_size[0] = 3;
  dq_size[1] = dT_size[1];
  loop_ub = 3 * dT_size[1];
  if (0 <= loop_ub - 1) {
    memset(&dq_data[0], 0, (uint32_T)(loop_ub * (int32_T)sizeof(real_T)));
  }

  /*  computing unit vector */
  /*  -------------------- */
  y = 1.0 / normT;
  q[0] = y * T[0];
  q[1] = y * T[1];
  q[2] = y * T[2];
  if (dT_size[1] > 0) {
    if (1 > dnormT_size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, dnormT_size[1], &n_emlrtBCI, sp);
    }

    y = 1.0 / normT;
    dnormT_tmp = muDoubleScalarPower(normT, -2.0);
    dnormT = -dnormT_data[0] * dnormT_tmp;
    dq_data[0] = dT_data[0] * y + dnormT * T[0];
    dq_data[1] = dT_data[1] * y + dnormT * T[1];
    dq_data[2] = dT_data[2] * y + dnormT * T[2];
    if (dT_size[1] > 1) {
      if (2 > dnormT_size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, dnormT_size[1], &m_emlrtBCI, sp);
      }

      y = 1.0 / normT;
      b_y = dnormT_data[0] * dnormT_data[0];
      c_y = muDoubleScalarPower(normT, -3.0);
      d0 = 2.0 * b_y * c_y;
      dnormT = -dnormT_data[1] * dnormT_tmp;
      dq_data[3] = ((-2.0 * dT_data[0] * dnormT_data[0] * dnormT_tmp + dT_data[3]
                     * y) + d0 * T[0]) + dnormT * T[0];
      dq_data[4] = ((-2.0 * dT_data[1] * dnormT_data[0] * dnormT_tmp + dT_data[4]
                     * y) + d0 * T[1]) + dnormT * T[1];
      dq_data[5] = ((-2.0 * dT_data[2] * dnormT_data[0] * dnormT_tmp + dT_data[5]
                     * y) + d0 * T[2]) + dnormT * T[2];
      if (dT_size[1] > 2) {
        if (3 > dnormT_size[1]) {
          emlrtDynamicBoundsCheckR2012b(3, 1, dnormT_size[1], &l_emlrtBCI, sp);
        }

        y = 1.0 / normT;
        d_y = muDoubleScalarPower(dnormT_data[0], 3.0);
        e_y = muDoubleScalarPower(normT, -4.0);
        d0 = -6.0 * d_y * e_y;
        d1 = 6.0 * dnormT_data[0] * dnormT_data[1] * c_y;
        dnormT = -dnormT_data[2] * dnormT_tmp;
        dq_data[6] = (((((6.0 * dT_data[0] * b_y * c_y + -3.0 * dT_data[3] *
                          dnormT_data[0] * dnormT_tmp) + -3.0 * dT_data[0] *
                         dnormT_data[1] * dnormT_tmp) + dT_data[6] * y) + d0 *
                       T[0]) + d1 * T[0]) + dnormT * T[0];
        dq_data[7] = (((((6.0 * dT_data[1] * b_y * c_y + -3.0 * dT_data[4] *
                          dnormT_data[0] * dnormT_tmp) + -3.0 * dT_data[1] *
                         dnormT_data[1] * dnormT_tmp) + dT_data[7] * y) + d0 *
                       T[1]) + d1 * T[1]) + dnormT * T[1];
        dq_data[8] = (((((6.0 * dT_data[2] * b_y * c_y + -3.0 * dT_data[5] *
                          dnormT_data[0] * dnormT_tmp) + -3.0 * dT_data[2] *
                         dnormT_data[1] * dnormT_tmp) + dT_data[8] * y) + d0 *
                       T[2]) + d1 * T[2]) + dnormT * T[2];
        if (dT_size[1] > 3) {
          if (4 > dnormT_size[1]) {
            emlrtDynamicBoundsCheckR2012b(4, 1, dnormT_size[1], &k_emlrtBCI, sp);
          }

          y = 1.0 / normT;
          f_y = muDoubleScalarPower(dnormT_data[0], 4.0);
          g_y = muDoubleScalarPower(normT, -5.0);
          d0 = 24.0 * f_y * g_y;
          d1 = -36.0 * b_y * dnormT_data[1] * e_y;
          h_y = dnormT_data[1] * dnormT_data[1];
          d2 = 6.0 * h_y * c_y;
          d3 = 8.0 * dnormT_data[0] * dnormT_data[2] * c_y;
          dnormT = -dnormT_data[3] * dnormT_tmp;
          dq_data[9] = ((((((((((-24.0 * dT_data[0] * d_y * e_y + 12.0 *
            dT_data[3] * b_y * c_y) + 24.0 * dT_data[0] * dnormT_data[0] *
                                dnormT_data[1] * c_y) + -4.0 * dT_data[6] *
                               dnormT_data[0] * dnormT_tmp) + -6.0 * dT_data[3] *
                              dnormT_data[1] * dnormT_tmp) + -4.0 * dT_data[0] *
                             dnormT_data[2] * dnormT_tmp) + dT_data[9] * y) + d0
                           * T[0]) + d1 * T[0]) + d2 * T[0]) + d3 * T[0]) +
            dnormT * T[0];
          dq_data[10] = ((((((((((-24.0 * dT_data[1] * d_y * e_y + 12.0 *
            dT_data[4] * b_y * c_y) + 24.0 * dT_data[1] * dnormT_data[0] *
            dnormT_data[1] * c_y) + -4.0 * dT_data[7] * dnormT_data[0] *
                                dnormT_tmp) + -6.0 * dT_data[4] * dnormT_data[1]
                               * dnormT_tmp) + -4.0 * dT_data[1] * dnormT_data[2]
                              * dnormT_tmp) + dT_data[10] * y) + d0 * T[1]) + d1
                           * T[1]) + d2 * T[1]) + d3 * T[1]) + dnormT * T[1];
          dq_data[11] = ((((((((((-24.0 * dT_data[2] * d_y * e_y + 12.0 *
            dT_data[5] * b_y * c_y) + 24.0 * dT_data[2] * dnormT_data[0] *
            dnormT_data[1] * c_y) + -4.0 * dT_data[8] * dnormT_data[0] *
                                dnormT_tmp) + -6.0 * dT_data[5] * dnormT_data[1]
                               * dnormT_tmp) + -4.0 * dT_data[2] * dnormT_data[2]
                              * dnormT_tmp) + dT_data[11] * y) + d0 * T[2]) + d1
                           * T[2]) + d2 * T[2]) + d3 * T[2]) + dnormT * T[2];
          if (dT_size[1] > 4) {
            if (5 > dnormT_size[1]) {
              emlrtDynamicBoundsCheckR2012b(5, 1, dnormT_size[1], &j_emlrtBCI,
                sp);
            }

            y = 1.0 / normT;
            i_y = muDoubleScalarPower(dnormT_data[0], 5.0);
            j_y = muDoubleScalarPower(normT, -6.0);
            d0 = -120.0 * i_y * j_y;
            d1 = 240.0 * d_y * dnormT_data[1] * g_y;
            d2 = -90.0 * dnormT_data[0] * h_y * e_y;
            d3 = -60.0 * b_y * dnormT_data[2] * e_y;
            d4 = 20.0 * dnormT_data[1] * dnormT_data[2] * c_y;
            d5 = 10.0 * dnormT_data[0] * dnormT_data[3] * c_y;
            dnormT = -dnormT_data[4] * dnormT_tmp;
            dq_data[12] = (((((((((((((((((120.0 * dT_data[0] * f_y * g_y +
              -60.0 * dT_data[3] * d_y * e_y) + -180.0 * dT_data[0] * b_y *
              dnormT_data[1] * e_y) + 20.0 * dT_data[6] * b_y * c_y) + 60.0 *
              dT_data[3] * dnormT_data[0] * dnormT_data[1] * c_y) + 30.0 *
              dT_data[0] * h_y * c_y) + 40.0 * dT_data[0] * dnormT_data[0] *
              dnormT_data[2] * c_y) + -5.0 * dT_data[9] * dnormT_data[0] *
              dnormT_tmp) + -10.0 * dT_data[6] * dnormT_data[1] * dnormT_tmp) +
              -10.0 * dT_data[3] * dnormT_data[2] * dnormT_tmp) + -5.0 *
                                  dT_data[0] * dnormT_data[3] * dnormT_tmp) +
                                 dT_data[12] * y) + d0 * T[0]) + d1 * T[0]) + d2
                              * T[0]) + d3 * T[0]) + d4 * T[0]) + d5 * T[0]) +
              dnormT * T[0];
            dq_data[13] = (((((((((((((((((120.0 * dT_data[1] * f_y * g_y +
              -60.0 * dT_data[4] * d_y * e_y) + -180.0 * dT_data[1] * b_y *
              dnormT_data[1] * e_y) + 20.0 * dT_data[7] * b_y * c_y) + 60.0 *
              dT_data[4] * dnormT_data[0] * dnormT_data[1] * c_y) + 30.0 *
              dT_data[1] * h_y * c_y) + 40.0 * dT_data[1] * dnormT_data[0] *
              dnormT_data[2] * c_y) + -5.0 * dT_data[10] * dnormT_data[0] *
              dnormT_tmp) + -10.0 * dT_data[7] * dnormT_data[1] * dnormT_tmp) +
              -10.0 * dT_data[4] * dnormT_data[2] * dnormT_tmp) + -5.0 *
                                  dT_data[1] * dnormT_data[3] * dnormT_tmp) +
                                 dT_data[13] * y) + d0 * T[1]) + d1 * T[1]) + d2
                              * T[1]) + d3 * T[1]) + d4 * T[1]) + d5 * T[1]) +
              dnormT * T[1];
            dq_data[14] = (((((((((((((((((120.0 * dT_data[2] * f_y * g_y +
              -60.0 * dT_data[5] * d_y * e_y) + -180.0 * dT_data[2] * b_y *
              dnormT_data[1] * e_y) + 20.0 * dT_data[8] * b_y * c_y) + 60.0 *
              dT_data[5] * dnormT_data[0] * dnormT_data[1] * c_y) + 30.0 *
              dT_data[2] * h_y * c_y) + 40.0 * dT_data[2] * dnormT_data[0] *
              dnormT_data[2] * c_y) + -5.0 * dT_data[11] * dnormT_data[0] *
              dnormT_tmp) + -10.0 * dT_data[8] * dnormT_data[1] * dnormT_tmp) +
              -10.0 * dT_data[5] * dnormT_data[2] * dnormT_tmp) + -5.0 *
                                  dT_data[2] * dnormT_data[3] * dnormT_tmp) +
                                 dT_data[14] * y) + d0 * T[2]) + d1 * T[2]) + d2
                              * T[2]) + d3 * T[2]) + d4 * T[2]) + d5 * T[2]) +
              dnormT * T[2];
            if (dT_size[1] > 5) {
              if (6 > dnormT_size[1]) {
                emlrtDynamicBoundsCheckR2012b(6, 1, dnormT_size[1], &i_emlrtBCI,
                  sp);
              }

              y = 1.0 / normT;
              k_y = muDoubleScalarPower(dnormT_data[0], 6.0);
              l_y = muDoubleScalarPower(normT, -7.0);
              d0 = 720.0 * k_y * l_y;
              d1 = -1800.0 * f_y * dnormT_data[1] * j_y;
              d2 = 1080.0 * b_y * h_y * g_y;
              d3 = 480.0 * d_y * dnormT_data[2] * g_y;
              m_y = muDoubleScalarPower(dnormT_data[1], 3.0);
              d4 = -90.0 * m_y * e_y;
              d5 = -360.0 * dnormT_data[0] * dnormT_data[1] * dnormT_data[2] *
                e_y;
              d6 = -90.0 * b_y * dnormT_data[3] * e_y;
              n_y = dnormT_data[2] * dnormT_data[2];
              d7 = 20.0 * n_y * c_y;
              d8 = 30.0 * dnormT_data[1] * dnormT_data[3] * c_y;
              d9 = 12.0 * dnormT_data[0] * dnormT_data[4] * c_y;
              dnormT = -dnormT_data[5] * dnormT_tmp;
              dq_data[15] = ((((((((((((((((((((((((((((-720.0 * dT_data[0] *
                i_y * j_y + 360.0 * dT_data[3] * f_y * g_y) + 1440.0 * dT_data[0]
                * d_y * dnormT_data[1] * g_y) + -120.0 * dT_data[6] * d_y * e_y)
                + -540.0 * dT_data[3] * b_y * dnormT_data[1] * e_y) + -540.0 *
                dT_data[0] * dnormT_data[0] * h_y * e_y) + -360.0 * dT_data[0] *
                b_y * dnormT_data[2] * e_y) + 30.0 * dT_data[9] * b_y * c_y) +
                120.0 * dT_data[6] * dnormT_data[0] * dnormT_data[1] * c_y) +
                90.0 * dT_data[3] * h_y * c_y) + 120.0 * dT_data[3] *
                dnormT_data[0] * dnormT_data[2] * c_y) + 120.0 * dT_data[0] *
                dnormT_data[1] * dnormT_data[2] * c_y) + 60.0 * dT_data[0] *
                dnormT_data[0] * dnormT_data[3] * c_y) + -6.0 * dT_data[12] *
                dnormT_data[0] * dnormT_tmp) + -15.0 * dT_data[9] * dnormT_data
                [1] * dnormT_tmp) + -20.0 * dT_data[6] * dnormT_data[2] *
                dnormT_tmp) + -15.0 * dT_data[3] * dnormT_data[3] * dnormT_tmp)
                + -6.0 * dT_data[0] * dnormT_data[4] * dnormT_tmp) + dT_data[15]
                * y) + d0 * T[0]) + d1 * T[0]) + d2 * T[0]) + d3 * T[0]) + d4 *
                                  T[0]) + d5 * T[0]) + d6 * T[0]) + d7 * T[0]) +
                              d8 * T[0]) + d9 * T[0]) + dnormT * T[0];
              dq_data[16] = ((((((((((((((((((((((((((((-720.0 * dT_data[1] *
                i_y * j_y + 360.0 * dT_data[4] * f_y * g_y) + 1440.0 * dT_data[1]
                * d_y * dnormT_data[1] * g_y) + -120.0 * dT_data[7] * d_y * e_y)
                + -540.0 * dT_data[4] * b_y * dnormT_data[1] * e_y) + -540.0 *
                dT_data[1] * dnormT_data[0] * h_y * e_y) + -360.0 * dT_data[1] *
                b_y * dnormT_data[2] * e_y) + 30.0 * dT_data[10] * b_y * c_y) +
                120.0 * dT_data[7] * dnormT_data[0] * dnormT_data[1] * c_y) +
                90.0 * dT_data[4] * h_y * c_y) + 120.0 * dT_data[4] *
                dnormT_data[0] * dnormT_data[2] * c_y) + 120.0 * dT_data[1] *
                dnormT_data[1] * dnormT_data[2] * c_y) + 60.0 * dT_data[1] *
                dnormT_data[0] * dnormT_data[3] * c_y) + -6.0 * dT_data[13] *
                dnormT_data[0] * dnormT_tmp) + -15.0 * dT_data[10] *
                dnormT_data[1] * dnormT_tmp) + -20.0 * dT_data[7] * dnormT_data
                [2] * dnormT_tmp) + -15.0 * dT_data[4] * dnormT_data[3] *
                dnormT_tmp) + -6.0 * dT_data[1] * dnormT_data[4] * dnormT_tmp) +
                dT_data[16] * y) + d0 * T[1]) + d1 * T[1]) + d2 * T[1]) + d3 *
                                   T[1]) + d4 * T[1]) + d5 * T[1]) + d6 * T[1])
                               + d7 * T[1]) + d8 * T[1]) + d9 * T[1]) + dnormT *
                T[1];
              dq_data[17] = ((((((((((((((((((((((((((((-720.0 * dT_data[2] *
                i_y * j_y + 360.0 * dT_data[5] * f_y * g_y) + 1440.0 * dT_data[2]
                * d_y * dnormT_data[1] * g_y) + -120.0 * dT_data[8] * d_y * e_y)
                + -540.0 * dT_data[5] * b_y * dnormT_data[1] * e_y) + -540.0 *
                dT_data[2] * dnormT_data[0] * h_y * e_y) + -360.0 * dT_data[2] *
                b_y * dnormT_data[2] * e_y) + 30.0 * dT_data[11] * b_y * c_y) +
                120.0 * dT_data[8] * dnormT_data[0] * dnormT_data[1] * c_y) +
                90.0 * dT_data[5] * h_y * c_y) + 120.0 * dT_data[5] *
                dnormT_data[0] * dnormT_data[2] * c_y) + 120.0 * dT_data[2] *
                dnormT_data[1] * dnormT_data[2] * c_y) + 60.0 * dT_data[2] *
                dnormT_data[0] * dnormT_data[3] * c_y) + -6.0 * dT_data[14] *
                dnormT_data[0] * dnormT_tmp) + -15.0 * dT_data[11] *
                dnormT_data[1] * dnormT_tmp) + -20.0 * dT_data[8] * dnormT_data
                [2] * dnormT_tmp) + -15.0 * dT_data[5] * dnormT_data[3] *
                dnormT_tmp) + -6.0 * dT_data[2] * dnormT_data[4] * dnormT_tmp) +
                dT_data[17] * y) + d0 * T[2]) + d1 * T[2]) + d2 * T[2]) + d3 *
                                   T[2]) + d4 * T[2]) + d5 * T[2]) + d6 * T[2])
                               + d7 * T[2]) + d8 * T[2]) + d9 * T[2]) + dnormT *
                T[2];
              if (dT_size[1] > 6) {
                if (7 > dnormT_size[1]) {
                  emlrtDynamicBoundsCheckR2012b(7, 1, dnormT_size[1],
                    &h_emlrtBCI, sp);
                }

                y = 1.0 / normT;
                o_y = muDoubleScalarPower(dnormT_data[0], 7.0);
                p_y = muDoubleScalarPower(normT, -8.0);
                d0 = -5040.0 * o_y * p_y;
                d1 = 15120.0 * i_y * dnormT_data[1] * l_y;
                d2 = -12600.0 * d_y * h_y * j_y;
                d3 = -4200.0 * f_y * dnormT_data[2] * j_y;
                d4 = 2520.0 * dnormT_data[0] * m_y * g_y;
                d5 = 5040.0 * b_y * dnormT_data[1] * dnormT_data[2] * g_y;
                d6 = 840.0 * d_y * dnormT_data[3] * g_y;
                d7 = -630.0 * h_y * dnormT_data[2] * e_y;
                d8 = -420.0 * dnormT_data[0] * n_y * e_y;
                d9 = -630.0 * dnormT_data[0] * dnormT_data[1] * dnormT_data[3] *
                  e_y;
                d10 = -126.0 * b_y * dnormT_data[4] * e_y;
                d11 = 70.0 * dnormT_data[2] * dnormT_data[3] * c_y;
                d12 = 42.0 * dnormT_data[1] * dnormT_data[4] * c_y;
                d13 = 14.0 * dnormT_data[0] * dnormT_data[5] * c_y;
                dnormT = -dnormT_data[6] * dnormT_tmp;
                dq_data[18] = (((((((((((((((((((((((((((((((((((((((((((5040.0 *
                  dT_data[0] * k_y * l_y + -2520.0 * dT_data[3] * i_y * j_y) +
                  -12600.0 * dT_data[0] * f_y * dnormT_data[1] * j_y) + 840.0 *
                  dT_data[6] * f_y * g_y) + 5040.0 * dT_data[3] * d_y *
                  dnormT_data[1] * g_y) + 7560.0 * dT_data[0] * b_y * h_y * g_y)
                  + 3360.0 * dT_data[0] * d_y * dnormT_data[2] * g_y) + -210.0 *
                  dT_data[9] * d_y * e_y) + -1260.0 * dT_data[6] * b_y *
                  dnormT_data[1] * e_y) + -1890.0 * dT_data[3] * dnormT_data[0] *
                  h_y * e_y) + -630.0 * dT_data[0] * m_y * e_y) + -1260.0 *
                  dT_data[3] * b_y * dnormT_data[2] * e_y) + -2520.0 * dT_data[0]
                  * dnormT_data[0] * dnormT_data[1] * dnormT_data[2] * e_y) +
                  -630.0 * dT_data[0] * b_y * dnormT_data[3] * e_y) + 42.0 *
                  dT_data[12] * b_y * c_y) + 210.0 * dT_data[9] * dnormT_data[0]
                  * dnormT_data[1] * c_y) + 210.0 * dT_data[6] * h_y * c_y) +
                  280.0 * dT_data[6] * dnormT_data[0] * dnormT_data[2] * c_y) +
                  420.0 * dT_data[3] * dnormT_data[1] * dnormT_data[2] * c_y) +
                  140.0 * dT_data[0] * n_y * c_y) + 210.0 * dT_data[3] *
                  dnormT_data[0] * dnormT_data[3] * c_y) + 210.0 * dT_data[0] *
                  dnormT_data[1] * dnormT_data[3] * c_y) + 84.0 * dT_data[0] *
                  dnormT_data[0] * dnormT_data[4] * c_y) + -7.0 * dT_data[15] *
                  dnormT_data[0] * dnormT_tmp) + -21.0 * dT_data[12] *
                  dnormT_data[1] * dnormT_tmp) + -35.0 * dT_data[9] *
                  dnormT_data[2] * dnormT_tmp) + -35.0 * dT_data[6] *
                  dnormT_data[3] * dnormT_tmp) + -21.0 * dT_data[3] *
                  dnormT_data[4] * dnormT_tmp) + -7.0 * dT_data[0] *
                  dnormT_data[5] * dnormT_tmp) + dT_data[18] * y) + d0 * T[0]) +
                  d1 * T[0]) + d2 * T[0]) + d3 * T[0]) + d4 * T[0]) + d5 * T[0])
                                      + d6 * T[0]) + d7 * T[0]) + d8 * T[0]) +
                                   d9 * T[0]) + d10 * T[0]) + d11 * T[0]) + d12 *
                                T[0]) + d13 * T[0]) + dnormT * T[0];
                dq_data[19] = (((((((((((((((((((((((((((((((((((((((((((5040.0 *
                  dT_data[1] * k_y * l_y + -2520.0 * dT_data[4] * i_y * j_y) +
                  -12600.0 * dT_data[1] * f_y * dnormT_data[1] * j_y) + 840.0 *
                  dT_data[7] * f_y * g_y) + 5040.0 * dT_data[4] * d_y *
                  dnormT_data[1] * g_y) + 7560.0 * dT_data[1] * b_y * h_y * g_y)
                  + 3360.0 * dT_data[1] * d_y * dnormT_data[2] * g_y) + -210.0 *
                  dT_data[10] * d_y * e_y) + -1260.0 * dT_data[7] * b_y *
                  dnormT_data[1] * e_y) + -1890.0 * dT_data[4] * dnormT_data[0] *
                  h_y * e_y) + -630.0 * dT_data[1] * m_y * e_y) + -1260.0 *
                  dT_data[4] * b_y * dnormT_data[2] * e_y) + -2520.0 * dT_data[1]
                  * dnormT_data[0] * dnormT_data[1] * dnormT_data[2] * e_y) +
                  -630.0 * dT_data[1] * b_y * dnormT_data[3] * e_y) + 42.0 *
                  dT_data[13] * b_y * c_y) + 210.0 * dT_data[10] * dnormT_data[0]
                  * dnormT_data[1] * c_y) + 210.0 * dT_data[7] * h_y * c_y) +
                  280.0 * dT_data[7] * dnormT_data[0] * dnormT_data[2] * c_y) +
                  420.0 * dT_data[4] * dnormT_data[1] * dnormT_data[2] * c_y) +
                  140.0 * dT_data[1] * n_y * c_y) + 210.0 * dT_data[4] *
                  dnormT_data[0] * dnormT_data[3] * c_y) + 210.0 * dT_data[1] *
                  dnormT_data[1] * dnormT_data[3] * c_y) + 84.0 * dT_data[1] *
                  dnormT_data[0] * dnormT_data[4] * c_y) + -7.0 * dT_data[16] *
                  dnormT_data[0] * dnormT_tmp) + -21.0 * dT_data[13] *
                  dnormT_data[1] * dnormT_tmp) + -35.0 * dT_data[10] *
                  dnormT_data[2] * dnormT_tmp) + -35.0 * dT_data[7] *
                  dnormT_data[3] * dnormT_tmp) + -21.0 * dT_data[4] *
                  dnormT_data[4] * dnormT_tmp) + -7.0 * dT_data[1] *
                  dnormT_data[5] * dnormT_tmp) + dT_data[19] * y) + d0 * T[1]) +
                  d1 * T[1]) + d2 * T[1]) + d3 * T[1]) + d4 * T[1]) + d5 * T[1])
                                      + d6 * T[1]) + d7 * T[1]) + d8 * T[1]) +
                                   d9 * T[1]) + d10 * T[1]) + d11 * T[1]) + d12 *
                                T[1]) + d13 * T[1]) + dnormT * T[1];
                dq_data[20] = (((((((((((((((((((((((((((((((((((((((((((5040.0 *
                  dT_data[2] * k_y * l_y + -2520.0 * dT_data[5] * i_y * j_y) +
                  -12600.0 * dT_data[2] * f_y * dnormT_data[1] * j_y) + 840.0 *
                  dT_data[8] * f_y * g_y) + 5040.0 * dT_data[5] * d_y *
                  dnormT_data[1] * g_y) + 7560.0 * dT_data[2] * b_y * h_y * g_y)
                  + 3360.0 * dT_data[2] * d_y * dnormT_data[2] * g_y) + -210.0 *
                  dT_data[11] * d_y * e_y) + -1260.0 * dT_data[8] * b_y *
                  dnormT_data[1] * e_y) + -1890.0 * dT_data[5] * dnormT_data[0] *
                  h_y * e_y) + -630.0 * dT_data[2] * m_y * e_y) + -1260.0 *
                  dT_data[5] * b_y * dnormT_data[2] * e_y) + -2520.0 * dT_data[2]
                  * dnormT_data[0] * dnormT_data[1] * dnormT_data[2] * e_y) +
                  -630.0 * dT_data[2] * b_y * dnormT_data[3] * e_y) + 42.0 *
                  dT_data[14] * b_y * c_y) + 210.0 * dT_data[11] * dnormT_data[0]
                  * dnormT_data[1] * c_y) + 210.0 * dT_data[8] * h_y * c_y) +
                  280.0 * dT_data[8] * dnormT_data[0] * dnormT_data[2] * c_y) +
                  420.0 * dT_data[5] * dnormT_data[1] * dnormT_data[2] * c_y) +
                  140.0 * dT_data[2] * n_y * c_y) + 210.0 * dT_data[5] *
                  dnormT_data[0] * dnormT_data[3] * c_y) + 210.0 * dT_data[2] *
                  dnormT_data[1] * dnormT_data[3] * c_y) + 84.0 * dT_data[2] *
                  dnormT_data[0] * dnormT_data[4] * c_y) + -7.0 * dT_data[17] *
                  dnormT_data[0] * dnormT_tmp) + -21.0 * dT_data[14] *
                  dnormT_data[1] * dnormT_tmp) + -35.0 * dT_data[11] *
                  dnormT_data[2] * dnormT_tmp) + -35.0 * dT_data[8] *
                  dnormT_data[3] * dnormT_tmp) + -21.0 * dT_data[5] *
                  dnormT_data[4] * dnormT_tmp) + -7.0 * dT_data[2] *
                  dnormT_data[5] * dnormT_tmp) + dT_data[20] * y) + d0 * T[2]) +
                  d1 * T[2]) + d2 * T[2]) + d3 * T[2]) + d4 * T[2]) + d5 * T[2])
                                      + d6 * T[2]) + d7 * T[2]) + d8 * T[2]) +
                                   d9 * T[2]) + d10 * T[2]) + d11 * T[2]) + d12 *
                                T[2]) + d13 * T[2]) + dnormT * T[2];
                if (dT_size[1] > 7) {
                  if (8 > dnormT_size[1]) {
                    emlrtDynamicBoundsCheckR2012b(8, 1, dnormT_size[1],
                      &g_emlrtBCI, sp);
                  }

                  y = 1.0 / normT;
                  q_y = muDoubleScalarPower(dnormT_data[0], 8.0);
                  r_y = muDoubleScalarPower(normT, -9.0);
                  d0 = 40320.0 * q_y * r_y;
                  d1 = -141120.0 * k_y * dnormT_data[1] * p_y;
                  d2 = 151200.0 * f_y * h_y * l_y;
                  d3 = 40320.0 * i_y * dnormT_data[2] * l_y;
                  d4 = -50400.0 * b_y * m_y * j_y;
                  d5 = -67200.0 * d_y * dnormT_data[1] * dnormT_data[2] * j_y;
                  d6 = -8400.0 * f_y * dnormT_data[3] * j_y;
                  s_y = muDoubleScalarPower(dnormT_data[1], 4.0);
                  d7 = 2520.0 * s_y * g_y;
                  d8 = 20160.0 * dnormT_data[0] * h_y * dnormT_data[2] * g_y;
                  d9 = 6720.0 * b_y * n_y * g_y;
                  d10 = 10080.0 * b_y * dnormT_data[1] * dnormT_data[3] * g_y;
                  d11 = 1344.0 * d_y * dnormT_data[4] * g_y;
                  d12 = -1680.0 * dnormT_data[1] * n_y * e_y;
                  d13 = -1260.0 * h_y * dnormT_data[3] * e_y;
                  d14 = -1680.0 * dnormT_data[0] * dnormT_data[2] * dnormT_data
                    [3] * e_y;
                  d15 = -1008.0 * dnormT_data[0] * dnormT_data[1] * dnormT_data
                    [4] * e_y;
                  d16 = -168.0 * b_y * dnormT_data[5] * e_y;
                  t_y = dnormT_data[3] * dnormT_data[3];
                  d17 = 70.0 * t_y * c_y;
                  d18 = 112.0 * dnormT_data[2] * dnormT_data[4] * c_y;
                  d19 = 56.0 * dnormT_data[1] * dnormT_data[5] * c_y;
                  d20 = 16.0 * dnormT_data[0] * dnormT_data[6] * c_y;
                  dnormT = -dnormT_data[7] * dnormT_tmp;
                  dq_data[21] =
                    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
                    ((((-40320.0 * dT_data[0] * o_y * p_y + 20160.0 * dT_data[3]
                    * k_y * l_y) + 120960.0 * dT_data[0] * i_y * dnormT_data[1] *
                    l_y) + -6720.0 * dT_data[6] * i_y * j_y) + -50400.0 *
                    dT_data[3] * f_y * dnormT_data[1] * j_y) + -100800.0 *
                    dT_data[0] * d_y * h_y * j_y) + -33600.0 * dT_data[0] * f_y *
                    dnormT_data[2] * j_y) + 1680.0 * dT_data[9] * f_y * g_y) +
                    13440.0 * dT_data[6] * d_y * dnormT_data[1] * g_y) + 30240.0
                    * dT_data[3] * b_y * h_y * g_y) + 20160.0 * dT_data[0] *
                    dnormT_data[0] * m_y * g_y) + 13440.0 * dT_data[3] * d_y *
                    dnormT_data[2] * g_y) + 40320.0 * dT_data[0] * b_y *
                    dnormT_data[1] * dnormT_data[2] * g_y) + 6720.0 * dT_data[0]
                    * d_y * dnormT_data[3] * g_y) + -336.0 * dT_data[12] * d_y *
                    e_y) + -2520.0 * dT_data[9] * b_y * dnormT_data[1] * e_y) +
                    -5040.0 * dT_data[6] * dnormT_data[0] * h_y * e_y) + -2520.0
                    * dT_data[3] * m_y * e_y) + -3360.0 * dT_data[6] * b_y *
                    dnormT_data[2] * e_y) + -10080.0 * dT_data[3] * dnormT_data
                    [0] * dnormT_data[1] * dnormT_data[2] * e_y) + -5040.0 *
                    dT_data[0] * h_y * dnormT_data[2] * e_y) + -3360.0 *
                    dT_data[0] * dnormT_data[0] * n_y * e_y) + -2520.0 *
                    dT_data[3] * b_y * dnormT_data[3] * e_y) + -5040.0 *
                    dT_data[0] * dnormT_data[0] * dnormT_data[1] * dnormT_data[3]
                    * e_y) + -1008.0 * dT_data[0] * b_y * dnormT_data[4] * e_y)
                    + 56.0 * dT_data[15] * b_y * c_y) + 336.0 * dT_data[12] *
                    dnormT_data[0] * dnormT_data[1] * c_y) + 420.0 * dT_data[9] *
                    h_y * c_y) + 560.0 * dT_data[9] * dnormT_data[0] *
                    dnormT_data[2] * c_y) + 1120.0 * dT_data[6] * dnormT_data[1]
                    * dnormT_data[2] * c_y) + 560.0 * dT_data[3] * n_y * c_y) +
                    560.0 * dT_data[6] * dnormT_data[0] * dnormT_data[3] * c_y)
                    + 840.0 * dT_data[3] * dnormT_data[1] * dnormT_data[3] * c_y)
                    + 560.0 * dT_data[0] * dnormT_data[2] * dnormT_data[3] * c_y)
                    + 336.0 * dT_data[3] * dnormT_data[0] * dnormT_data[4] * c_y)
                    + 336.0 * dT_data[0] * dnormT_data[1] * dnormT_data[4] * c_y)
                    + 112.0 * dT_data[0] * dnormT_data[0] * dnormT_data[5] * c_y)
                    + -8.0 * dT_data[18] * dnormT_data[0] * dnormT_tmp) + -28.0 *
                    dT_data[15] * dnormT_data[1] * dnormT_tmp) + -56.0 *
                    dT_data[12] * dnormT_data[2] * dnormT_tmp) + -70.0 *
                    dT_data[9] * dnormT_data[3] * dnormT_tmp) + -56.0 * dT_data
                    [6] * dnormT_data[4] * dnormT_tmp) + -28.0 * dT_data[3] *
                    dnormT_data[5] * dnormT_tmp) + -8.0 * dT_data[0] *
                    dnormT_data[6] * dnormT_tmp) + dT_data[21] * y) + d0 * T[0])
                    + d1 * T[0]) + d2 * T[0]) + d3 * T[0]) + d4 * T[0]) + d5 *
                                    T[0]) + d6 * T[0]) + d7 * T[0]) + d8 * T[0])
                                + d9 * T[0]) + d10 * T[0]) + d11 * T[0]) + d12 *
                             T[0]) + d13 * T[0]) + d14 * T[0]) + d15 * T[0]) +
                         d16 * T[0]) + d17 * T[0]) + d18 * T[0]) + d19 * T[0]) +
                     d20 * T[0]) + dnormT * T[0];
                  dq_data[22] =
                    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
                    ((((-40320.0 * dT_data[1] * o_y * p_y + 20160.0 * dT_data[4]
                    * k_y * l_y) + 120960.0 * dT_data[1] * i_y * dnormT_data[1] *
                    l_y) + -6720.0 * dT_data[7] * i_y * j_y) + -50400.0 *
                    dT_data[4] * f_y * dnormT_data[1] * j_y) + -100800.0 *
                    dT_data[1] * d_y * h_y * j_y) + -33600.0 * dT_data[1] * f_y *
                    dnormT_data[2] * j_y) + 1680.0 * dT_data[10] * f_y * g_y) +
                    13440.0 * dT_data[7] * d_y * dnormT_data[1] * g_y) + 30240.0
                    * dT_data[4] * b_y * h_y * g_y) + 20160.0 * dT_data[1] *
                    dnormT_data[0] * m_y * g_y) + 13440.0 * dT_data[4] * d_y *
                    dnormT_data[2] * g_y) + 40320.0 * dT_data[1] * b_y *
                    dnormT_data[1] * dnormT_data[2] * g_y) + 6720.0 * dT_data[1]
                    * d_y * dnormT_data[3] * g_y) + -336.0 * dT_data[13] * d_y *
                    e_y) + -2520.0 * dT_data[10] * b_y * dnormT_data[1] * e_y) +
                    -5040.0 * dT_data[7] * dnormT_data[0] * h_y * e_y) + -2520.0
                    * dT_data[4] * m_y * e_y) + -3360.0 * dT_data[7] * b_y *
                    dnormT_data[2] * e_y) + -10080.0 * dT_data[4] * dnormT_data
                    [0] * dnormT_data[1] * dnormT_data[2] * e_y) + -5040.0 *
                    dT_data[1] * h_y * dnormT_data[2] * e_y) + -3360.0 *
                    dT_data[1] * dnormT_data[0] * n_y * e_y) + -2520.0 *
                    dT_data[4] * b_y * dnormT_data[3] * e_y) + -5040.0 *
                    dT_data[1] * dnormT_data[0] * dnormT_data[1] * dnormT_data[3]
                    * e_y) + -1008.0 * dT_data[1] * b_y * dnormT_data[4] * e_y)
                    + 56.0 * dT_data[16] * b_y * c_y) + 336.0 * dT_data[13] *
                    dnormT_data[0] * dnormT_data[1] * c_y) + 420.0 * dT_data[10]
                    * h_y * c_y) + 560.0 * dT_data[10] * dnormT_data[0] *
                    dnormT_data[2] * c_y) + 1120.0 * dT_data[7] * dnormT_data[1]
                    * dnormT_data[2] * c_y) + 560.0 * dT_data[4] * n_y * c_y) +
                    560.0 * dT_data[7] * dnormT_data[0] * dnormT_data[3] * c_y)
                    + 840.0 * dT_data[4] * dnormT_data[1] * dnormT_data[3] * c_y)
                    + 560.0 * dT_data[1] * dnormT_data[2] * dnormT_data[3] * c_y)
                    + 336.0 * dT_data[4] * dnormT_data[0] * dnormT_data[4] * c_y)
                    + 336.0 * dT_data[1] * dnormT_data[1] * dnormT_data[4] * c_y)
                    + 112.0 * dT_data[1] * dnormT_data[0] * dnormT_data[5] * c_y)
                    + -8.0 * dT_data[19] * dnormT_data[0] * dnormT_tmp) + -28.0 *
                    dT_data[16] * dnormT_data[1] * dnormT_tmp) + -56.0 *
                    dT_data[13] * dnormT_data[2] * dnormT_tmp) + -70.0 *
                    dT_data[10] * dnormT_data[3] * dnormT_tmp) + -56.0 *
                    dT_data[7] * dnormT_data[4] * dnormT_tmp) + -28.0 * dT_data
                    [4] * dnormT_data[5] * dnormT_tmp) + -8.0 * dT_data[1] *
                    dnormT_data[6] * dnormT_tmp) + dT_data[22] * y) + d0 * T[1])
                    + d1 * T[1]) + d2 * T[1]) + d3 * T[1]) + d4 * T[1]) + d5 *
                                    T[1]) + d6 * T[1]) + d7 * T[1]) + d8 * T[1])
                                + d9 * T[1]) + d10 * T[1]) + d11 * T[1]) + d12 *
                             T[1]) + d13 * T[1]) + d14 * T[1]) + d15 * T[1]) +
                         d16 * T[1]) + d17 * T[1]) + d18 * T[1]) + d19 * T[1]) +
                     d20 * T[1]) + dnormT * T[1];
                  dq_data[23] =
                    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
                    ((((-40320.0 * dT_data[2] * o_y * p_y + 20160.0 * dT_data[5]
                    * k_y * l_y) + 120960.0 * dT_data[2] * i_y * dnormT_data[1] *
                    l_y) + -6720.0 * dT_data[8] * i_y * j_y) + -50400.0 *
                    dT_data[5] * f_y * dnormT_data[1] * j_y) + -100800.0 *
                    dT_data[2] * d_y * h_y * j_y) + -33600.0 * dT_data[2] * f_y *
                    dnormT_data[2] * j_y) + 1680.0 * dT_data[11] * f_y * g_y) +
                    13440.0 * dT_data[8] * d_y * dnormT_data[1] * g_y) + 30240.0
                    * dT_data[5] * b_y * h_y * g_y) + 20160.0 * dT_data[2] *
                    dnormT_data[0] * m_y * g_y) + 13440.0 * dT_data[5] * d_y *
                    dnormT_data[2] * g_y) + 40320.0 * dT_data[2] * b_y *
                    dnormT_data[1] * dnormT_data[2] * g_y) + 6720.0 * dT_data[2]
                    * d_y * dnormT_data[3] * g_y) + -336.0 * dT_data[14] * d_y *
                    e_y) + -2520.0 * dT_data[11] * b_y * dnormT_data[1] * e_y) +
                    -5040.0 * dT_data[8] * dnormT_data[0] * h_y * e_y) + -2520.0
                    * dT_data[5] * m_y * e_y) + -3360.0 * dT_data[8] * b_y *
                    dnormT_data[2] * e_y) + -10080.0 * dT_data[5] * dnormT_data
                    [0] * dnormT_data[1] * dnormT_data[2] * e_y) + -5040.0 *
                    dT_data[2] * h_y * dnormT_data[2] * e_y) + -3360.0 *
                    dT_data[2] * dnormT_data[0] * n_y * e_y) + -2520.0 *
                    dT_data[5] * b_y * dnormT_data[3] * e_y) + -5040.0 *
                    dT_data[2] * dnormT_data[0] * dnormT_data[1] * dnormT_data[3]
                    * e_y) + -1008.0 * dT_data[2] * b_y * dnormT_data[4] * e_y)
                    + 56.0 * dT_data[17] * b_y * c_y) + 336.0 * dT_data[14] *
                    dnormT_data[0] * dnormT_data[1] * c_y) + 420.0 * dT_data[11]
                    * h_y * c_y) + 560.0 * dT_data[11] * dnormT_data[0] *
                    dnormT_data[2] * c_y) + 1120.0 * dT_data[8] * dnormT_data[1]
                    * dnormT_data[2] * c_y) + 560.0 * dT_data[5] * n_y * c_y) +
                    560.0 * dT_data[8] * dnormT_data[0] * dnormT_data[3] * c_y)
                    + 840.0 * dT_data[5] * dnormT_data[1] * dnormT_data[3] * c_y)
                    + 560.0 * dT_data[2] * dnormT_data[2] * dnormT_data[3] * c_y)
                    + 336.0 * dT_data[5] * dnormT_data[0] * dnormT_data[4] * c_y)
                    + 336.0 * dT_data[2] * dnormT_data[1] * dnormT_data[4] * c_y)
                    + 112.0 * dT_data[2] * dnormT_data[0] * dnormT_data[5] * c_y)
                    + -8.0 * dT_data[20] * dnormT_data[0] * dnormT_tmp) + -28.0 *
                    dT_data[17] * dnormT_data[1] * dnormT_tmp) + -56.0 *
                    dT_data[14] * dnormT_data[2] * dnormT_tmp) + -70.0 *
                    dT_data[11] * dnormT_data[3] * dnormT_tmp) + -56.0 *
                    dT_data[8] * dnormT_data[4] * dnormT_tmp) + -28.0 * dT_data
                    [5] * dnormT_data[5] * dnormT_tmp) + -8.0 * dT_data[2] *
                    dnormT_data[6] * dnormT_tmp) + dT_data[23] * y) + d0 * T[2])
                    + d1 * T[2]) + d2 * T[2]) + d3 * T[2]) + d4 * T[2]) + d5 *
                                    T[2]) + d6 * T[2]) + d7 * T[2]) + d8 * T[2])
                                + d9 * T[2]) + d10 * T[2]) + d11 * T[2]) + d12 *
                             T[2]) + d13 * T[2]) + d14 * T[2]) + d15 * T[2]) +
                         d16 * T[2]) + d17 * T[2]) + d18 * T[2]) + d19 * T[2]) +
                     d20 * T[2]) + dnormT * T[2];
                  if (dT_size[1] > 8) {
                    if (9 > dnormT_size[1]) {
                      emlrtDynamicBoundsCheckR2012b(9, 1, dnormT_size[1],
                        &f_emlrtBCI, sp);
                    }

                    y = 1.0 / normT;
                    u_y = muDoubleScalarPower(dnormT_data[0], 9.0);
                    v_y = muDoubleScalarPower(normT, -10.0);
                    d0 = -362880.0 * u_y * v_y;
                    d1 = 1.45152E+6 * o_y * dnormT_data[1] * r_y;
                    d2 = -1.90512E+6 * i_y * h_y * p_y;
                    d3 = -423360.0 * k_y * dnormT_data[2] * p_y;
                    d4 = 907200.0 * d_y * m_y * l_y;
                    d5 = 907200.0 * f_y * dnormT_data[1] * dnormT_data[2] * l_y;
                    d6 = 90720.0 * i_y * dnormT_data[3] * l_y;
                    d7 = -113400.0 * dnormT_data[0] * s_y * j_y;
                    d8 = -453600.0 * b_y * h_y * dnormT_data[2] * j_y;
                    d9 = -100800.0 * d_y * n_y * j_y;
                    d10 = -151200.0 * d_y * dnormT_data[1] * dnormT_data[3] *
                      j_y;
                    d11 = -15120.0 * f_y * dnormT_data[4] * j_y;
                    d12 = 30240.0 * m_y * dnormT_data[2] * g_y;
                    d13 = 60480.0 * dnormT_data[0] * dnormT_data[1] * n_y * g_y;
                    d14 = 45360.0 * dnormT_data[0] * h_y * dnormT_data[3] * g_y;
                    d15 = 30240.0 * b_y;
                    d16 = d15 * dnormT_data[2] * dnormT_data[3] * g_y;
                    d17 = 18144.0 * b_y * dnormT_data[1] * dnormT_data[4] * g_y;
                    d18 = 2016.0 * d_y * dnormT_data[5] * g_y;
                    w_y = muDoubleScalarPower(dnormT_data[2], 3.0);
                    d19 = -1680.0 * w_y * e_y;
                    d20 = -7560.0 * dnormT_data[1] * dnormT_data[2] *
                      dnormT_data[3] * e_y;
                    d21 = -1890.0 * dnormT_data[0] * t_y * e_y;
                    d22 = -2268.0 * h_y * dnormT_data[4] * e_y;
                    d23 = -3024.0 * dnormT_data[0] * dnormT_data[2] *
                      dnormT_data[4] * e_y;
                    d24 = -1512.0 * dnormT_data[0] * dnormT_data[1] *
                      dnormT_data[5] * e_y;
                    d25 = -216.0 * b_y * dnormT_data[6] * e_y;
                    d26 = 252.0 * dnormT_data[3] * dnormT_data[4] * c_y;
                    d27 = 168.0 * dnormT_data[2] * dnormT_data[5] * c_y;
                    d28 = 72.0 * dnormT_data[1] * dnormT_data[6] * c_y;
                    d29 = 18.0 * dnormT_data[0] * dnormT_data[7] * c_y;
                    dnormT = -dnormT_data[8] * dnormT_tmp;
                    d30 = -15120.0 * dT_data[0] * dnormT_data[0];
                    dq_data[24] =
                      (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
                      ((((((((((((((((((((((((((((((((((((362880.0 * dT_data[0] *
                      q_y * r_y + -181440.0 * dT_data[3] * o_y * p_y) +
                      -1.27008E+6 * dT_data[0] * k_y * dnormT_data[1] * p_y) +
                      60480.0 * dT_data[6] * k_y * l_y) + 544320.0 * dT_data[3] *
                      i_y * dnormT_data[1] * l_y) + 1.3608E+6 * dT_data[0] * f_y
                      * h_y * l_y) + 362880.0 * dT_data[0] * i_y * dnormT_data[2]
                      * l_y) + -15120.0 * dT_data[9] * i_y * j_y) + -151200.0 *
                      dT_data[6] * f_y * dnormT_data[1] * j_y) + -453600.0 *
                      dT_data[3] * d_y * h_y * j_y) + -453600.0 * dT_data[0] *
                      b_y * m_y * j_y) + -151200.0 * dT_data[3] * f_y *
                      dnormT_data[2] * j_y) + -604800.0 * dT_data[0] * d_y *
                      dnormT_data[1] * dnormT_data[2] * j_y) + -75600.0 *
                      dT_data[0] * f_y * dnormT_data[3] * j_y) + 3024.0 *
                      dT_data[12] * f_y * g_y) + 30240.0 * dT_data[9] * d_y *
                      dnormT_data[1] * g_y) + 90720.0 * dT_data[6] * b_y * h_y *
                      g_y) + 90720.0 * dT_data[3] * dnormT_data[0] * m_y * g_y)
                      + 22680.0 * dT_data[0] * s_y * g_y) + 40320.0 * dT_data[6]
                      * d_y * dnormT_data[2] * g_y) + 181440.0 * dT_data[3] *
                      b_y * dnormT_data[1] * dnormT_data[2] * g_y) + 181440.0 *
                      dT_data[0] * dnormT_data[0] * h_y * dnormT_data[2] * g_y)
                      + 60480.0 * dT_data[0] * b_y * n_y * g_y) + 30240.0 *
                      dT_data[3] * d_y * dnormT_data[3] * g_y) + 90720.0 *
                      dT_data[0] * b_y * dnormT_data[1] * dnormT_data[3] * g_y)
                      + 12096.0 * dT_data[0] * d_y * dnormT_data[4] * g_y) +
                      -504.0 * dT_data[15] * d_y * e_y) + -4536.0 * dT_data[12] *
                      b_y * dnormT_data[1] * e_y) + -11340.0 * dT_data[9] *
                      dnormT_data[0] * h_y * e_y) + -7560.0 * dT_data[6] * m_y *
                      e_y) + -7560.0 * dT_data[9] * b_y * dnormT_data[2] * e_y)
                      + -30240.0 * dT_data[6] * dnormT_data[0] * dnormT_data[1] *
                      dnormT_data[2] * e_y) + -22680.0 * dT_data[3] * h_y *
                      dnormT_data[2] * e_y) + -15120.0 * dT_data[3] *
                      dnormT_data[0] * n_y * e_y) + -15120.0 * dT_data[0] *
                      dnormT_data[1] * n_y * e_y) + -7560.0 * dT_data[6] * b_y *
                      dnormT_data[3] * e_y) + -22680.0 * dT_data[3] *
                      dnormT_data[0] * dnormT_data[1] * dnormT_data[3] * e_y) +
                      -11340.0 * dT_data[0] * h_y * dnormT_data[3] * e_y) + d30 *
                      dnormT_data[2] * dnormT_data[3] * e_y) + -4536.0 *
                      dT_data[3] * b_y * dnormT_data[4] * e_y) + -9072.0 *
                      dT_data[0] * dnormT_data[0] * dnormT_data[1] *
                      dnormT_data[4] * e_y) + -1512.0 * dT_data[0] * b_y *
                      dnormT_data[5] * e_y) + 72.0 * dT_data[18] * b_y * c_y) +
                      504.0 * dT_data[15] * dnormT_data[0] * dnormT_data[1] *
                      c_y) + 756.0 * dT_data[12] * h_y * c_y) + 1008.0 *
                      dT_data[12] * dnormT_data[0] * dnormT_data[2] * c_y) +
                      2520.0 * dT_data[9] * dnormT_data[1] * dnormT_data[2] *
                      c_y) + 1680.0 * dT_data[6] * n_y * c_y) + 1260.0 *
                      dT_data[9] * dnormT_data[0] * dnormT_data[3] * c_y) +
                      2520.0 * dT_data[6] * dnormT_data[1] * dnormT_data[3] *
                      c_y) + 2520.0 * dT_data[3] * dnormT_data[2] * dnormT_data
                      [3] * c_y) + 630.0 * dT_data[0] * t_y * c_y) + 1008.0 *
                      dT_data[6] * dnormT_data[0] * dnormT_data[4] * c_y) +
                      1512.0 * dT_data[3] * dnormT_data[1] * dnormT_data[4] *
                      c_y) + 1008.0 * dT_data[0] * dnormT_data[2] * dnormT_data
                      [4] * c_y) + 504.0 * dT_data[3] * dnormT_data[0] *
                      dnormT_data[5] * c_y) + 504.0 * dT_data[0] * dnormT_data[1]
                      * dnormT_data[5] * c_y) + 144.0 * dT_data[0] *
                      dnormT_data[0] * dnormT_data[6] * c_y) + -9.0 * dT_data[21]
                      * dnormT_data[0] * dnormT_tmp) + -36.0 * dT_data[18] *
                      dnormT_data[1] * dnormT_tmp) + -84.0 * dT_data[15] *
                      dnormT_data[2] * dnormT_tmp) + -126.0 * dT_data[12] *
                      dnormT_data[3] * dnormT_tmp) + -126.0 * dT_data[9] *
                      dnormT_data[4] * dnormT_tmp) + -84.0 * dT_data[6] *
                      dnormT_data[5] * dnormT_tmp) + -36.0 * dT_data[3] *
                      dnormT_data[6] * dnormT_tmp) + -9.0 * dT_data[0] *
                      dnormT_data[7] * dnormT_tmp) + dT_data[24] * y) + d0 * T[0])
                      + d1 * T[0]) + d2 * T[0]) + d3 * T[0]) + d4 * T[0]) + d5 *
                      T[0]) + d6 * T[0]) + d7 * T[0]) + d8 * T[0]) + d9 * T[0])
                                         + d10 * T[0]) + d11 * T[0]) + d12 * T[0])
                                      + d13 * T[0]) + d14 * T[0]) + d16 * T[0])
                                   + d17 * T[0]) + d18 * T[0]) + d19 * T[0]) +
                                d20 * T[0]) + d21 * T[0]) + d22 * T[0]) + d23 *
                             T[0]) + d24 * T[0]) + d25 * T[0]) + d26 * T[0]) +
                         d27 * T[0]) + d28 * T[0]) + d29 * T[0]) + dnormT * T[0];
                    d31 = -15120.0 * dT_data[1] * dnormT_data[0];
                    dq_data[25] =
                      (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
                      ((((((((((((((((((((((((((((((((((((362880.0 * dT_data[1] *
                      q_y * r_y + -181440.0 * dT_data[4] * o_y * p_y) +
                      -1.27008E+6 * dT_data[1] * k_y * dnormT_data[1] * p_y) +
                      60480.0 * dT_data[7] * k_y * l_y) + 544320.0 * dT_data[4] *
                      i_y * dnormT_data[1] * l_y) + 1.3608E+6 * dT_data[1] * f_y
                      * h_y * l_y) + 362880.0 * dT_data[1] * i_y * dnormT_data[2]
                      * l_y) + -15120.0 * dT_data[10] * i_y * j_y) + -151200.0 *
                      dT_data[7] * f_y * dnormT_data[1] * j_y) + -453600.0 *
                      dT_data[4] * d_y * h_y * j_y) + -453600.0 * dT_data[1] *
                      b_y * m_y * j_y) + -151200.0 * dT_data[4] * f_y *
                      dnormT_data[2] * j_y) + -604800.0 * dT_data[1] * d_y *
                      dnormT_data[1] * dnormT_data[2] * j_y) + -75600.0 *
                      dT_data[1] * f_y * dnormT_data[3] * j_y) + 3024.0 *
                      dT_data[13] * f_y * g_y) + 30240.0 * dT_data[10] * d_y *
                      dnormT_data[1] * g_y) + 90720.0 * dT_data[7] * b_y * h_y *
                      g_y) + 90720.0 * dT_data[4] * dnormT_data[0] * m_y * g_y)
                      + 22680.0 * dT_data[1] * s_y * g_y) + 40320.0 * dT_data[7]
                      * d_y * dnormT_data[2] * g_y) + 181440.0 * dT_data[4] *
                      b_y * dnormT_data[1] * dnormT_data[2] * g_y) + 181440.0 *
                      dT_data[1] * dnormT_data[0] * h_y * dnormT_data[2] * g_y)
                      + 60480.0 * dT_data[1] * b_y * n_y * g_y) + 30240.0 *
                      dT_data[4] * d_y * dnormT_data[3] * g_y) + 90720.0 *
                      dT_data[1] * b_y * dnormT_data[1] * dnormT_data[3] * g_y)
                      + 12096.0 * dT_data[1] * d_y * dnormT_data[4] * g_y) +
                      -504.0 * dT_data[16] * d_y * e_y) + -4536.0 * dT_data[13] *
                      b_y * dnormT_data[1] * e_y) + -11340.0 * dT_data[10] *
                      dnormT_data[0] * h_y * e_y) + -7560.0 * dT_data[7] * m_y *
                      e_y) + -7560.0 * dT_data[10] * b_y * dnormT_data[2] * e_y)
                      + -30240.0 * dT_data[7] * dnormT_data[0] * dnormT_data[1] *
                      dnormT_data[2] * e_y) + -22680.0 * dT_data[4] * h_y *
                      dnormT_data[2] * e_y) + -15120.0 * dT_data[4] *
                      dnormT_data[0] * n_y * e_y) + -15120.0 * dT_data[1] *
                      dnormT_data[1] * n_y * e_y) + -7560.0 * dT_data[7] * b_y *
                      dnormT_data[3] * e_y) + -22680.0 * dT_data[4] *
                      dnormT_data[0] * dnormT_data[1] * dnormT_data[3] * e_y) +
                      -11340.0 * dT_data[1] * h_y * dnormT_data[3] * e_y) + d31 *
                      dnormT_data[2] * dnormT_data[3] * e_y) + -4536.0 *
                      dT_data[4] * b_y * dnormT_data[4] * e_y) + -9072.0 *
                      dT_data[1] * dnormT_data[0] * dnormT_data[1] *
                      dnormT_data[4] * e_y) + -1512.0 * dT_data[1] * b_y *
                      dnormT_data[5] * e_y) + 72.0 * dT_data[19] * b_y * c_y) +
                      504.0 * dT_data[16] * dnormT_data[0] * dnormT_data[1] *
                      c_y) + 756.0 * dT_data[13] * h_y * c_y) + 1008.0 *
                      dT_data[13] * dnormT_data[0] * dnormT_data[2] * c_y) +
                      2520.0 * dT_data[10] * dnormT_data[1] * dnormT_data[2] *
                      c_y) + 1680.0 * dT_data[7] * n_y * c_y) + 1260.0 *
                      dT_data[10] * dnormT_data[0] * dnormT_data[3] * c_y) +
                      2520.0 * dT_data[7] * dnormT_data[1] * dnormT_data[3] *
                      c_y) + 2520.0 * dT_data[4] * dnormT_data[2] * dnormT_data
                      [3] * c_y) + 630.0 * dT_data[1] * t_y * c_y) + 1008.0 *
                      dT_data[7] * dnormT_data[0] * dnormT_data[4] * c_y) +
                      1512.0 * dT_data[4] * dnormT_data[1] * dnormT_data[4] *
                      c_y) + 1008.0 * dT_data[1] * dnormT_data[2] * dnormT_data
                      [4] * c_y) + 504.0 * dT_data[4] * dnormT_data[0] *
                      dnormT_data[5] * c_y) + 504.0 * dT_data[1] * dnormT_data[1]
                      * dnormT_data[5] * c_y) + 144.0 * dT_data[1] *
                      dnormT_data[0] * dnormT_data[6] * c_y) + -9.0 * dT_data[22]
                      * dnormT_data[0] * dnormT_tmp) + -36.0 * dT_data[19] *
                      dnormT_data[1] * dnormT_tmp) + -84.0 * dT_data[16] *
                      dnormT_data[2] * dnormT_tmp) + -126.0 * dT_data[13] *
                      dnormT_data[3] * dnormT_tmp) + -126.0 * dT_data[10] *
                      dnormT_data[4] * dnormT_tmp) + -84.0 * dT_data[7] *
                      dnormT_data[5] * dnormT_tmp) + -36.0 * dT_data[4] *
                      dnormT_data[6] * dnormT_tmp) + -9.0 * dT_data[1] *
                      dnormT_data[7] * dnormT_tmp) + dT_data[25] * y) + d0 * T[1])
                      + d1 * T[1]) + d2 * T[1]) + d3 * T[1]) + d4 * T[1]) + d5 *
                      T[1]) + d6 * T[1]) + d7 * T[1]) + d8 * T[1]) + d9 * T[1])
                                         + d10 * T[1]) + d11 * T[1]) + d12 * T[1])
                                      + d13 * T[1]) + d14 * T[1]) + d16 * T[1])
                                   + d17 * T[1]) + d18 * T[1]) + d19 * T[1]) +
                                d20 * T[1]) + d21 * T[1]) + d22 * T[1]) + d23 *
                             T[1]) + d24 * T[1]) + d25 * T[1]) + d26 * T[1]) +
                         d27 * T[1]) + d28 * T[1]) + d29 * T[1]) + dnormT * T[1];
                    d32 = -15120.0 * dT_data[2] * dnormT_data[0];
                    dq_data[26] =
                      (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
                      ((((((((((((((((((((((((((((((((((((362880.0 * dT_data[2] *
                      q_y * r_y + -181440.0 * dT_data[5] * o_y * p_y) +
                      -1.27008E+6 * dT_data[2] * k_y * dnormT_data[1] * p_y) +
                      60480.0 * dT_data[8] * k_y * l_y) + 544320.0 * dT_data[5] *
                      i_y * dnormT_data[1] * l_y) + 1.3608E+6 * dT_data[2] * f_y
                      * h_y * l_y) + 362880.0 * dT_data[2] * i_y * dnormT_data[2]
                      * l_y) + -15120.0 * dT_data[11] * i_y * j_y) + -151200.0 *
                      dT_data[8] * f_y * dnormT_data[1] * j_y) + -453600.0 *
                      dT_data[5] * d_y * h_y * j_y) + -453600.0 * dT_data[2] *
                      b_y * m_y * j_y) + -151200.0 * dT_data[5] * f_y *
                      dnormT_data[2] * j_y) + -604800.0 * dT_data[2] * d_y *
                      dnormT_data[1] * dnormT_data[2] * j_y) + -75600.0 *
                      dT_data[2] * f_y * dnormT_data[3] * j_y) + 3024.0 *
                      dT_data[14] * f_y * g_y) + 30240.0 * dT_data[11] * d_y *
                      dnormT_data[1] * g_y) + 90720.0 * dT_data[8] * b_y * h_y *
                      g_y) + 90720.0 * dT_data[5] * dnormT_data[0] * m_y * g_y)
                      + 22680.0 * dT_data[2] * s_y * g_y) + 40320.0 * dT_data[8]
                      * d_y * dnormT_data[2] * g_y) + 181440.0 * dT_data[5] *
                      b_y * dnormT_data[1] * dnormT_data[2] * g_y) + 181440.0 *
                      dT_data[2] * dnormT_data[0] * h_y * dnormT_data[2] * g_y)
                      + 60480.0 * dT_data[2] * b_y * n_y * g_y) + 30240.0 *
                      dT_data[5] * d_y * dnormT_data[3] * g_y) + 90720.0 *
                      dT_data[2] * b_y * dnormT_data[1] * dnormT_data[3] * g_y)
                      + 12096.0 * dT_data[2] * d_y * dnormT_data[4] * g_y) +
                      -504.0 * dT_data[17] * d_y * e_y) + -4536.0 * dT_data[14] *
                      b_y * dnormT_data[1] * e_y) + -11340.0 * dT_data[11] *
                      dnormT_data[0] * h_y * e_y) + -7560.0 * dT_data[8] * m_y *
                      e_y) + -7560.0 * dT_data[11] * b_y * dnormT_data[2] * e_y)
                      + -30240.0 * dT_data[8] * dnormT_data[0] * dnormT_data[1] *
                      dnormT_data[2] * e_y) + -22680.0 * dT_data[5] * h_y *
                      dnormT_data[2] * e_y) + -15120.0 * dT_data[5] *
                      dnormT_data[0] * n_y * e_y) + -15120.0 * dT_data[2] *
                      dnormT_data[1] * n_y * e_y) + -7560.0 * dT_data[8] * b_y *
                      dnormT_data[3] * e_y) + -22680.0 * dT_data[5] *
                      dnormT_data[0] * dnormT_data[1] * dnormT_data[3] * e_y) +
                      -11340.0 * dT_data[2] * h_y * dnormT_data[3] * e_y) + d32 *
                      dnormT_data[2] * dnormT_data[3] * e_y) + -4536.0 *
                      dT_data[5] * b_y * dnormT_data[4] * e_y) + -9072.0 *
                      dT_data[2] * dnormT_data[0] * dnormT_data[1] *
                      dnormT_data[4] * e_y) + -1512.0 * dT_data[2] * b_y *
                      dnormT_data[5] * e_y) + 72.0 * dT_data[20] * b_y * c_y) +
                      504.0 * dT_data[17] * dnormT_data[0] * dnormT_data[1] *
                      c_y) + 756.0 * dT_data[14] * h_y * c_y) + 1008.0 *
                      dT_data[14] * dnormT_data[0] * dnormT_data[2] * c_y) +
                      2520.0 * dT_data[11] * dnormT_data[1] * dnormT_data[2] *
                      c_y) + 1680.0 * dT_data[8] * n_y * c_y) + 1260.0 *
                      dT_data[11] * dnormT_data[0] * dnormT_data[3] * c_y) +
                      2520.0 * dT_data[8] * dnormT_data[1] * dnormT_data[3] *
                      c_y) + 2520.0 * dT_data[5] * dnormT_data[2] * dnormT_data
                      [3] * c_y) + 630.0 * dT_data[2] * t_y * c_y) + 1008.0 *
                      dT_data[8] * dnormT_data[0] * dnormT_data[4] * c_y) +
                      1512.0 * dT_data[5] * dnormT_data[1] * dnormT_data[4] *
                      c_y) + 1008.0 * dT_data[2] * dnormT_data[2] * dnormT_data
                      [4] * c_y) + 504.0 * dT_data[5] * dnormT_data[0] *
                      dnormT_data[5] * c_y) + 504.0 * dT_data[2] * dnormT_data[1]
                      * dnormT_data[5] * c_y) + 144.0 * dT_data[2] *
                      dnormT_data[0] * dnormT_data[6] * c_y) + -9.0 * dT_data[23]
                      * dnormT_data[0] * dnormT_tmp) + -36.0 * dT_data[20] *
                      dnormT_data[1] * dnormT_tmp) + -84.0 * dT_data[17] *
                      dnormT_data[2] * dnormT_tmp) + -126.0 * dT_data[14] *
                      dnormT_data[3] * dnormT_tmp) + -126.0 * dT_data[11] *
                      dnormT_data[4] * dnormT_tmp) + -84.0 * dT_data[8] *
                      dnormT_data[5] * dnormT_tmp) + -36.0 * dT_data[5] *
                      dnormT_data[6] * dnormT_tmp) + -9.0 * dT_data[2] *
                      dnormT_data[7] * dnormT_tmp) + dT_data[26] * y) + d0 * T[2])
                      + d1 * T[2]) + d2 * T[2]) + d3 * T[2]) + d4 * T[2]) + d5 *
                      T[2]) + d6 * T[2]) + d7 * T[2]) + d8 * T[2]) + d9 * T[2])
                                         + d10 * T[2]) + d11 * T[2]) + d12 * T[2])
                                      + d13 * T[2]) + d14 * T[2]) + d16 * T[2])
                                   + d17 * T[2]) + d18 * T[2]) + d19 * T[2]) +
                                d20 * T[2]) + d21 * T[2]) + d22 * T[2]) + d23 *
                             T[2]) + d24 * T[2]) + d25 * T[2]) + d26 * T[2]) +
                         d27 * T[2]) + d28 * T[2]) + d29 * T[2]) + dnormT * T[2];
                    if (dT_size[1] > 9) {
                      if (10 > dnormT_size[1]) {
                        emlrtDynamicBoundsCheckR2012b(10, 1, dnormT_size[1],
                          &e_emlrtBCI, sp);
                      }

                      y = 1.0 / normT;
                      x_y = muDoubleScalarPower(dnormT_data[0], 10.0);
                      y_y = muDoubleScalarPower(normT, -11.0);
                      d0 = 3.6288E+6 * x_y * y_y;
                      d1 = -1.63296E+7 * q_y * dnormT_data[1] * v_y;
                      d2 = 2.54016E+7 * k_y * h_y * r_y;
                      d3 = 4.8384E+6 * o_y * dnormT_data[2] * r_y;
                      d4 = -1.5876E+7 * f_y * m_y * p_y;
                      d5 = -1.27008E+7 * i_y * dnormT_data[1] * dnormT_data[2] *
                        p_y;
                      d6 = -1.0584E+6 * k_y * dnormT_data[3] * p_y;
                      d7 = 3.402E+6 * b_y * s_y * l_y;
                      d8 = 9.072E+6 * d_y * h_y * dnormT_data[2] * l_y;
                      d9 = 1.512E+6 * f_y * n_y * l_y;
                      d10 = 2.268E+6 * f_y * dnormT_data[1] * dnormT_data[3] *
                        l_y;
                      d11 = 181440.0 * i_y * dnormT_data[4] * l_y;
                      ab_y = muDoubleScalarPower(dnormT_data[1], 5.0);
                      d12 = -113400.0 * ab_y * j_y;
                      d13 = -1.512E+6 * dnormT_data[0] * m_y * dnormT_data[2] *
                        j_y;
                      d14 = -1.512E+6 * b_y * dnormT_data[1] * n_y * j_y;
                      d16 = -1.134E+6 * b_y * h_y * dnormT_data[3] * j_y;
                      d17 = -504000.0 * d_y * dnormT_data[2] * dnormT_data[3] *
                        j_y;
                      d18 = -302400.0 * d_y * dnormT_data[1] * dnormT_data[4] *
                        j_y;
                      d19 = -25200.0 * f_y * dnormT_data[5] * j_y;
                      d20 = 151200.0 * h_y * n_y * g_y;
                      d21 = 67200.0 * dnormT_data[0] * w_y * g_y;
                      d22 = 75600.0 * m_y * dnormT_data[3] * g_y;
                      d23 = 302400.0 * dnormT_data[0] * dnormT_data[1] *
                        dnormT_data[2] * dnormT_data[3] * g_y;
                      d24 = 37800.0 * b_y * t_y * g_y;
                      d25 = 90720.0 * dnormT_data[0] * h_y * dnormT_data[4] *
                        g_y;
                      d26 = 60480.0 * b_y * dnormT_data[2] * dnormT_data[4] *
                        g_y;
                      d15 = d15 * dnormT_data[1] * dnormT_data[5] * g_y;
                      d27 = 2880.0 * d_y * dnormT_data[6] * g_y;
                      d28 = -12600.0 * n_y * dnormT_data[3] * e_y;
                      d29 = -9450.0 * dnormT_data[1] * t_y * e_y;
                      d33 = -15120.0 * dnormT_data[1] * dnormT_data[2] *
                        dnormT_data[4] * e_y;
                      d34 = -7560.0 * dnormT_data[0] * dnormT_data[3] *
                        dnormT_data[4] * e_y;
                      d35 = -3780.0 * h_y * dnormT_data[5] * e_y;
                      d36 = -5040.0 * dnormT_data[0] * dnormT_data[2] *
                        dnormT_data[5] * e_y;
                      d37 = -2160.0 * dnormT_data[0] * dnormT_data[1] *
                        dnormT_data[6] * e_y;
                      d38 = -270.0 * b_y * dnormT_data[7] * e_y;
                      bb_y = dnormT_data[4] * dnormT_data[4];
                      d39 = 252.0 * bb_y * c_y;
                      d40 = 420.0 * dnormT_data[3] * dnormT_data[5] * c_y;
                      d41 = 240.0 * dnormT_data[2] * dnormT_data[6] * c_y;
                      d42 = 90.0 * dnormT_data[1] * dnormT_data[7] * c_y;
                      d43 = 20.0 * dnormT_data[0] * dnormT_data[8] * c_y;
                      dnormT = -dnormT_data[9] * dnormT_tmp;
                      dq_data[27] =
                        (((((((((((((((((((((((((((((((((((((((((((((((((((((((((
                        (((((((((((((((((((((((((((((((((((((((((((((((((((((((((
                        (((((((((((((((((((((((-3.6288E+6 * dT_data[0] * u_y *
                        v_y + 1.8144E+6 * dT_data[3] * q_y * r_y) + 1.45152E+7 *
                        dT_data[0] * o_y * dnormT_data[1] * r_y) + -604800.0 *
                        dT_data[6] * o_y * p_y) + -6.3504E+6 * dT_data[3] * k_y *
                        dnormT_data[1] * p_y) + -1.90512E+7 * dT_data[0] * i_y *
                        h_y * p_y) + -4.2336E+6 * dT_data[0] * k_y *
                        dnormT_data[2] * p_y) + 151200.0 * dT_data[9] * k_y *
                        l_y) + 1.8144E+6 * dT_data[6] * i_y * dnormT_data[1] *
                        l_y) + 6.804E+6 * dT_data[3] * f_y * h_y * l_y) +
                        9.072E+6 * dT_data[0] * d_y * m_y * l_y) + 1.8144E+6 *
                        dT_data[3] * i_y * dnormT_data[2] * l_y) + 9.072E+6 *
                        dT_data[0] * f_y * dnormT_data[1] * dnormT_data[2] * l_y)
                        + 907200.0 * dT_data[0] * i_y * dnormT_data[3] * l_y) +
                        -30240.0 * dT_data[12] * i_y * j_y) + -378000.0 *
                        dT_data[9] * f_y * dnormT_data[1] * j_y) + -1.512E+6 *
                        dT_data[6] * d_y * h_y * j_y) + -2.268E+6 * dT_data[3] *
                        b_y * m_y * j_y) + -1.134E+6 * dT_data[0] * dnormT_data
                        [0] * s_y * j_y) + -504000.0 * dT_data[6] * f_y *
                        dnormT_data[2] * j_y) + -3.024E+6 * dT_data[3] * d_y *
                        dnormT_data[1] * dnormT_data[2] * j_y) + -4.536E+6 *
                        dT_data[0] * b_y * h_y * dnormT_data[2] * j_y) +
                        -1.008E+6 * dT_data[0] * d_y * n_y * j_y) + -378000.0 *
                        dT_data[3] * f_y * dnormT_data[3] * j_y) + -1.512E+6 *
                        dT_data[0] * d_y * dnormT_data[1] * dnormT_data[3] * j_y)
                        + -151200.0 * dT_data[0] * f_y * dnormT_data[4] * j_y) +
                        5040.0 * dT_data[15] * f_y * g_y) + 60480.0 * dT_data[12]
                        * d_y * dnormT_data[1] * g_y) + 226800.0 * dT_data[9] *
                        b_y * h_y * g_y) + 302400.0 * dT_data[6] * dnormT_data[0]
                        * m_y * g_y) + 113400.0 * dT_data[3] * s_y * g_y) +
                        100800.0 * dT_data[9] * d_y * dnormT_data[2] * g_y) +
                        604800.0 * dT_data[6] * b_y * dnormT_data[1] *
                        dnormT_data[2] * g_y) + 907200.0 * dT_data[3] *
                        dnormT_data[0] * h_y * dnormT_data[2] * g_y) + 302400.0 *
                        dT_data[0] * m_y * dnormT_data[2] * g_y) + 302400.0 *
                        dT_data[3] * b_y * n_y * g_y) + 604800.0 * dT_data[0] *
                        dnormT_data[0] * dnormT_data[1] * n_y * g_y) + 100800.0 *
                        dT_data[6] * d_y * dnormT_data[3] * g_y) + 453600.0 *
                        dT_data[3] * b_y * dnormT_data[1] * dnormT_data[3] * g_y)
                        + 453600.0 * dT_data[0] * dnormT_data[0] * h_y *
                        dnormT_data[3] * g_y) + 302400.0 * dT_data[0] * b_y *
                        dnormT_data[2] * dnormT_data[3] * g_y) + 60480.0 *
                        dT_data[3] * d_y * dnormT_data[4] * g_y) + 181440.0 *
                        dT_data[0] * b_y * dnormT_data[1] * dnormT_data[4] * g_y)
                        + 20160.0 * dT_data[0] * d_y * dnormT_data[5] * g_y) +
                        -720.0 * dT_data[18] * d_y * e_y) + -7560.0 * dT_data[15]
                        * b_y * dnormT_data[1] * e_y) + -22680.0 * dT_data[12] *
                        dnormT_data[0] * h_y * e_y) + -18900.0 * dT_data[9] *
                        m_y * e_y) + -15120.0 * dT_data[12] * b_y * dnormT_data
                        [2] * e_y) + -75600.0 * dT_data[9] * dnormT_data[0] *
                        dnormT_data[1] * dnormT_data[2] * e_y) + -75600.0 *
                        dT_data[6] * h_y * dnormT_data[2] * e_y) + -50400.0 *
                        dT_data[6] * dnormT_data[0] * n_y * e_y) + -75600.0 *
                        dT_data[3] * dnormT_data[1] * n_y * e_y) + -16800.0 *
                        dT_data[0] * w_y * e_y) + -18900.0 * dT_data[9] * b_y *
                        dnormT_data[3] * e_y) + -75600.0 * dT_data[6] *
                        dnormT_data[0] * dnormT_data[1] * dnormT_data[3] * e_y)
                        + -56700.0 * dT_data[3] * h_y * dnormT_data[3] * e_y) +
                        -75600.0 * dT_data[3] * dnormT_data[0] * dnormT_data[2] *
                        dnormT_data[3] * e_y) + -75600.0 * dT_data[0] *
                        dnormT_data[1] * dnormT_data[2] * dnormT_data[3] * e_y)
                        + -18900.0 * dT_data[0] * dnormT_data[0] * t_y * e_y) +
                        -15120.0 * dT_data[6] * b_y * dnormT_data[4] * e_y) +
                        -45360.0 * dT_data[3] * dnormT_data[0] * dnormT_data[1] *
                        dnormT_data[4] * e_y) + -22680.0 * dT_data[0] * h_y *
                        dnormT_data[4] * e_y) + -30240.0 * dT_data[0] *
                        dnormT_data[0] * dnormT_data[2] * dnormT_data[4] * e_y)
                        + -7560.0 * dT_data[3] * b_y * dnormT_data[5] * e_y) +
                        d30 * dnormT_data[1] * dnormT_data[5] * e_y) + -2160.0 *
                        dT_data[0] * b_y * dnormT_data[6] * e_y) + 90.0 *
                        dT_data[21] * b_y * c_y) + 720.0 * dT_data[18] *
                        dnormT_data[0] * dnormT_data[1] * c_y) + 1260.0 *
                        dT_data[15] * h_y * c_y) + 1680.0 * dT_data[15] *
                        dnormT_data[0] * dnormT_data[2] * c_y) + 5040.0 *
                        dT_data[12] * dnormT_data[1] * dnormT_data[2] * c_y) +
                        4200.0 * dT_data[9] * n_y * c_y) + 2520.0 * dT_data[12] *
                        dnormT_data[0] * dnormT_data[3] * c_y) + 6300.0 *
                        dT_data[9] * dnormT_data[1] * dnormT_data[3] * c_y) +
                        8400.0 * dT_data[6] * dnormT_data[2] * dnormT_data[3] *
                        c_y) + 3150.0 * dT_data[3] * t_y * c_y) + 2520.0 *
                        dT_data[9] * dnormT_data[0] * dnormT_data[4] * c_y) +
                        5040.0 * dT_data[6] * dnormT_data[1] * dnormT_data[4] *
                        c_y) + 5040.0 * dT_data[3] * dnormT_data[2] *
                        dnormT_data[4] * c_y) + 2520.0 * dT_data[0] *
                        dnormT_data[3] * dnormT_data[4] * c_y) + 1680.0 *
                        dT_data[6] * dnormT_data[0] * dnormT_data[5] * c_y) +
                        2520.0 * dT_data[3] * dnormT_data[1] * dnormT_data[5] *
                        c_y) + 1680.0 * dT_data[0] * dnormT_data[2] *
                        dnormT_data[5] * c_y) + 720.0 * dT_data[3] *
                        dnormT_data[0] * dnormT_data[6] * c_y) + 720.0 *
                        dT_data[0] * dnormT_data[1] * dnormT_data[6] * c_y) +
                        180.0 * dT_data[0] * dnormT_data[0] * dnormT_data[7] *
                        c_y) + -10.0 * dT_data[24] * dnormT_data[0] * dnormT_tmp)
                        + -45.0 * dT_data[21] * dnormT_data[1] * dnormT_tmp) +
                        -120.0 * dT_data[18] * dnormT_data[2] * dnormT_tmp) +
                        -210.0 * dT_data[15] * dnormT_data[3] * dnormT_tmp) +
                        -252.0 * dT_data[12] * dnormT_data[4] * dnormT_tmp) +
                        -210.0 * dT_data[9] * dnormT_data[5] * dnormT_tmp) +
                        -120.0 * dT_data[6] * dnormT_data[6] * dnormT_tmp) +
                        -45.0 * dT_data[3] * dnormT_data[7] * dnormT_tmp) +
                        -10.0 * dT_data[0] * dnormT_data[8] * dnormT_tmp) +
                        dT_data[27] * y) + d0 * T[0]) + d1 * T[0]) + d2 * T[0])
                        + d3 * T[0]) + d4 * T[0]) + d5 * T[0]) + d6 * T[0]) + d7
                        * T[0]) + d8 * T[0]) + d9 * T[0]) + d10 * T[0]) + d11 *
                        T[0]) + d12 * T[0]) + d13 * T[0]) + d14 * T[0]) + d16 *
                        T[0]) + d17 * T[0]) + d18 * T[0]) + d19 * T[0]) + d20 *
                        T[0]) + d21 * T[0]) + d22 * T[0]) + d23 * T[0]) + d24 *
                                          T[0]) + d25 * T[0]) + d26 * T[0]) +
                                       d15 * T[0]) + d27 * T[0]) + d28 * T[0]) +
                                    d29 * T[0]) + d33 * T[0]) + d34 * T[0]) +
                                 d35 * T[0]) + d36 * T[0]) + d37 * T[0]) + d38 *
                              T[0]) + d39 * T[0]) + d40 * T[0]) + d41 * T[0]) +
                          d42 * T[0]) + d43 * T[0]) + dnormT * T[0];
                      dq_data[28] =
                        (((((((((((((((((((((((((((((((((((((((((((((((((((((((((
                        (((((((((((((((((((((((((((((((((((((((((((((((((((((((((
                        (((((((((((((((((((((((-3.6288E+6 * dT_data[1] * u_y *
                        v_y + 1.8144E+6 * dT_data[4] * q_y * r_y) + 1.45152E+7 *
                        dT_data[1] * o_y * dnormT_data[1] * r_y) + -604800.0 *
                        dT_data[7] * o_y * p_y) + -6.3504E+6 * dT_data[4] * k_y *
                        dnormT_data[1] * p_y) + -1.90512E+7 * dT_data[1] * i_y *
                        h_y * p_y) + -4.2336E+6 * dT_data[1] * k_y *
                        dnormT_data[2] * p_y) + 151200.0 * dT_data[10] * k_y *
                        l_y) + 1.8144E+6 * dT_data[7] * i_y * dnormT_data[1] *
                        l_y) + 6.804E+6 * dT_data[4] * f_y * h_y * l_y) +
                        9.072E+6 * dT_data[1] * d_y * m_y * l_y) + 1.8144E+6 *
                        dT_data[4] * i_y * dnormT_data[2] * l_y) + 9.072E+6 *
                        dT_data[1] * f_y * dnormT_data[1] * dnormT_data[2] * l_y)
                        + 907200.0 * dT_data[1] * i_y * dnormT_data[3] * l_y) +
                        -30240.0 * dT_data[13] * i_y * j_y) + -378000.0 *
                        dT_data[10] * f_y * dnormT_data[1] * j_y) + -1.512E+6 *
                        dT_data[7] * d_y * h_y * j_y) + -2.268E+6 * dT_data[4] *
                        b_y * m_y * j_y) + -1.134E+6 * dT_data[1] * dnormT_data
                        [0] * s_y * j_y) + -504000.0 * dT_data[7] * f_y *
                        dnormT_data[2] * j_y) + -3.024E+6 * dT_data[4] * d_y *
                        dnormT_data[1] * dnormT_data[2] * j_y) + -4.536E+6 *
                        dT_data[1] * b_y * h_y * dnormT_data[2] * j_y) +
                        -1.008E+6 * dT_data[1] * d_y * n_y * j_y) + -378000.0 *
                        dT_data[4] * f_y * dnormT_data[3] * j_y) + -1.512E+6 *
                        dT_data[1] * d_y * dnormT_data[1] * dnormT_data[3] * j_y)
                        + -151200.0 * dT_data[1] * f_y * dnormT_data[4] * j_y) +
                        5040.0 * dT_data[16] * f_y * g_y) + 60480.0 * dT_data[13]
                        * d_y * dnormT_data[1] * g_y) + 226800.0 * dT_data[10] *
                        b_y * h_y * g_y) + 302400.0 * dT_data[7] * dnormT_data[0]
                        * m_y * g_y) + 113400.0 * dT_data[4] * s_y * g_y) +
                        100800.0 * dT_data[10] * d_y * dnormT_data[2] * g_y) +
                        604800.0 * dT_data[7] * b_y * dnormT_data[1] *
                        dnormT_data[2] * g_y) + 907200.0 * dT_data[4] *
                        dnormT_data[0] * h_y * dnormT_data[2] * g_y) + 302400.0 *
                        dT_data[1] * m_y * dnormT_data[2] * g_y) + 302400.0 *
                        dT_data[4] * b_y * n_y * g_y) + 604800.0 * dT_data[1] *
                        dnormT_data[0] * dnormT_data[1] * n_y * g_y) + 100800.0 *
                        dT_data[7] * d_y * dnormT_data[3] * g_y) + 453600.0 *
                        dT_data[4] * b_y * dnormT_data[1] * dnormT_data[3] * g_y)
                        + 453600.0 * dT_data[1] * dnormT_data[0] * h_y *
                        dnormT_data[3] * g_y) + 302400.0 * dT_data[1] * b_y *
                        dnormT_data[2] * dnormT_data[3] * g_y) + 60480.0 *
                        dT_data[4] * d_y * dnormT_data[4] * g_y) + 181440.0 *
                        dT_data[1] * b_y * dnormT_data[1] * dnormT_data[4] * g_y)
                        + 20160.0 * dT_data[1] * d_y * dnormT_data[5] * g_y) +
                        -720.0 * dT_data[19] * d_y * e_y) + -7560.0 * dT_data[16]
                        * b_y * dnormT_data[1] * e_y) + -22680.0 * dT_data[13] *
                        dnormT_data[0] * h_y * e_y) + -18900.0 * dT_data[10] *
                        m_y * e_y) + -15120.0 * dT_data[13] * b_y * dnormT_data
                        [2] * e_y) + -75600.0 * dT_data[10] * dnormT_data[0] *
                        dnormT_data[1] * dnormT_data[2] * e_y) + -75600.0 *
                        dT_data[7] * h_y * dnormT_data[2] * e_y) + -50400.0 *
                        dT_data[7] * dnormT_data[0] * n_y * e_y) + -75600.0 *
                        dT_data[4] * dnormT_data[1] * n_y * e_y) + -16800.0 *
                        dT_data[1] * w_y * e_y) + -18900.0 * dT_data[10] * b_y *
                        dnormT_data[3] * e_y) + -75600.0 * dT_data[7] *
                        dnormT_data[0] * dnormT_data[1] * dnormT_data[3] * e_y)
                        + -56700.0 * dT_data[4] * h_y * dnormT_data[3] * e_y) +
                        -75600.0 * dT_data[4] * dnormT_data[0] * dnormT_data[2] *
                        dnormT_data[3] * e_y) + -75600.0 * dT_data[1] *
                        dnormT_data[1] * dnormT_data[2] * dnormT_data[3] * e_y)
                        + -18900.0 * dT_data[1] * dnormT_data[0] * t_y * e_y) +
                        -15120.0 * dT_data[7] * b_y * dnormT_data[4] * e_y) +
                        -45360.0 * dT_data[4] * dnormT_data[0] * dnormT_data[1] *
                        dnormT_data[4] * e_y) + -22680.0 * dT_data[1] * h_y *
                        dnormT_data[4] * e_y) + -30240.0 * dT_data[1] *
                        dnormT_data[0] * dnormT_data[2] * dnormT_data[4] * e_y)
                        + -7560.0 * dT_data[4] * b_y * dnormT_data[5] * e_y) +
                        d31 * dnormT_data[1] * dnormT_data[5] * e_y) + -2160.0 *
                        dT_data[1] * b_y * dnormT_data[6] * e_y) + 90.0 *
                        dT_data[22] * b_y * c_y) + 720.0 * dT_data[19] *
                        dnormT_data[0] * dnormT_data[1] * c_y) + 1260.0 *
                        dT_data[16] * h_y * c_y) + 1680.0 * dT_data[16] *
                        dnormT_data[0] * dnormT_data[2] * c_y) + 5040.0 *
                        dT_data[13] * dnormT_data[1] * dnormT_data[2] * c_y) +
                        4200.0 * dT_data[10] * n_y * c_y) + 2520.0 * dT_data[13]
                        * dnormT_data[0] * dnormT_data[3] * c_y) + 6300.0 *
                        dT_data[10] * dnormT_data[1] * dnormT_data[3] * c_y) +
                        8400.0 * dT_data[7] * dnormT_data[2] * dnormT_data[3] *
                        c_y) + 3150.0 * dT_data[4] * t_y * c_y) + 2520.0 *
                        dT_data[10] * dnormT_data[0] * dnormT_data[4] * c_y) +
                        5040.0 * dT_data[7] * dnormT_data[1] * dnormT_data[4] *
                        c_y) + 5040.0 * dT_data[4] * dnormT_data[2] *
                        dnormT_data[4] * c_y) + 2520.0 * dT_data[1] *
                        dnormT_data[3] * dnormT_data[4] * c_y) + 1680.0 *
                        dT_data[7] * dnormT_data[0] * dnormT_data[5] * c_y) +
                        2520.0 * dT_data[4] * dnormT_data[1] * dnormT_data[5] *
                        c_y) + 1680.0 * dT_data[1] * dnormT_data[2] *
                        dnormT_data[5] * c_y) + 720.0 * dT_data[4] *
                        dnormT_data[0] * dnormT_data[6] * c_y) + 720.0 *
                        dT_data[1] * dnormT_data[1] * dnormT_data[6] * c_y) +
                        180.0 * dT_data[1] * dnormT_data[0] * dnormT_data[7] *
                        c_y) + -10.0 * dT_data[25] * dnormT_data[0] * dnormT_tmp)
                        + -45.0 * dT_data[22] * dnormT_data[1] * dnormT_tmp) +
                        -120.0 * dT_data[19] * dnormT_data[2] * dnormT_tmp) +
                        -210.0 * dT_data[16] * dnormT_data[3] * dnormT_tmp) +
                        -252.0 * dT_data[13] * dnormT_data[4] * dnormT_tmp) +
                        -210.0 * dT_data[10] * dnormT_data[5] * dnormT_tmp) +
                        -120.0 * dT_data[7] * dnormT_data[6] * dnormT_tmp) +
                        -45.0 * dT_data[4] * dnormT_data[7] * dnormT_tmp) +
                        -10.0 * dT_data[1] * dnormT_data[8] * dnormT_tmp) +
                        dT_data[28] * y) + d0 * T[1]) + d1 * T[1]) + d2 * T[1])
                        + d3 * T[1]) + d4 * T[1]) + d5 * T[1]) + d6 * T[1]) + d7
                        * T[1]) + d8 * T[1]) + d9 * T[1]) + d10 * T[1]) + d11 *
                        T[1]) + d12 * T[1]) + d13 * T[1]) + d14 * T[1]) + d16 *
                        T[1]) + d17 * T[1]) + d18 * T[1]) + d19 * T[1]) + d20 *
                        T[1]) + d21 * T[1]) + d22 * T[1]) + d23 * T[1]) + d24 *
                                          T[1]) + d25 * T[1]) + d26 * T[1]) +
                                       d15 * T[1]) + d27 * T[1]) + d28 * T[1]) +
                                    d29 * T[1]) + d33 * T[1]) + d34 * T[1]) +
                                 d35 * T[1]) + d36 * T[1]) + d37 * T[1]) + d38 *
                              T[1]) + d39 * T[1]) + d40 * T[1]) + d41 * T[1]) +
                          d42 * T[1]) + d43 * T[1]) + dnormT * T[1];
                      dq_data[29] =
                        (((((((((((((((((((((((((((((((((((((((((((((((((((((((((
                        (((((((((((((((((((((((((((((((((((((((((((((((((((((((((
                        (((((((((((((((((((((((-3.6288E+6 * dT_data[2] * u_y *
                        v_y + 1.8144E+6 * dT_data[5] * q_y * r_y) + 1.45152E+7 *
                        dT_data[2] * o_y * dnormT_data[1] * r_y) + -604800.0 *
                        dT_data[8] * o_y * p_y) + -6.3504E+6 * dT_data[5] * k_y *
                        dnormT_data[1] * p_y) + -1.90512E+7 * dT_data[2] * i_y *
                        h_y * p_y) + -4.2336E+6 * dT_data[2] * k_y *
                        dnormT_data[2] * p_y) + 151200.0 * dT_data[11] * k_y *
                        l_y) + 1.8144E+6 * dT_data[8] * i_y * dnormT_data[1] *
                        l_y) + 6.804E+6 * dT_data[5] * f_y * h_y * l_y) +
                        9.072E+6 * dT_data[2] * d_y * m_y * l_y) + 1.8144E+6 *
                        dT_data[5] * i_y * dnormT_data[2] * l_y) + 9.072E+6 *
                        dT_data[2] * f_y * dnormT_data[1] * dnormT_data[2] * l_y)
                        + 907200.0 * dT_data[2] * i_y * dnormT_data[3] * l_y) +
                        -30240.0 * dT_data[14] * i_y * j_y) + -378000.0 *
                        dT_data[11] * f_y * dnormT_data[1] * j_y) + -1.512E+6 *
                        dT_data[8] * d_y * h_y * j_y) + -2.268E+6 * dT_data[5] *
                        b_y * m_y * j_y) + -1.134E+6 * dT_data[2] * dnormT_data
                        [0] * s_y * j_y) + -504000.0 * dT_data[8] * f_y *
                        dnormT_data[2] * j_y) + -3.024E+6 * dT_data[5] * d_y *
                        dnormT_data[1] * dnormT_data[2] * j_y) + -4.536E+6 *
                        dT_data[2] * b_y * h_y * dnormT_data[2] * j_y) +
                        -1.008E+6 * dT_data[2] * d_y * n_y * j_y) + -378000.0 *
                        dT_data[5] * f_y * dnormT_data[3] * j_y) + -1.512E+6 *
                        dT_data[2] * d_y * dnormT_data[1] * dnormT_data[3] * j_y)
                        + -151200.0 * dT_data[2] * f_y * dnormT_data[4] * j_y) +
                        5040.0 * dT_data[17] * f_y * g_y) + 60480.0 * dT_data[14]
                        * d_y * dnormT_data[1] * g_y) + 226800.0 * dT_data[11] *
                        b_y * h_y * g_y) + 302400.0 * dT_data[8] * dnormT_data[0]
                        * m_y * g_y) + 113400.0 * dT_data[5] * s_y * g_y) +
                        100800.0 * dT_data[11] * d_y * dnormT_data[2] * g_y) +
                        604800.0 * dT_data[8] * b_y * dnormT_data[1] *
                        dnormT_data[2] * g_y) + 907200.0 * dT_data[5] *
                        dnormT_data[0] * h_y * dnormT_data[2] * g_y) + 302400.0 *
                        dT_data[2] * m_y * dnormT_data[2] * g_y) + 302400.0 *
                        dT_data[5] * b_y * n_y * g_y) + 604800.0 * dT_data[2] *
                        dnormT_data[0] * dnormT_data[1] * n_y * g_y) + 100800.0 *
                        dT_data[8] * d_y * dnormT_data[3] * g_y) + 453600.0 *
                        dT_data[5] * b_y * dnormT_data[1] * dnormT_data[3] * g_y)
                        + 453600.0 * dT_data[2] * dnormT_data[0] * h_y *
                        dnormT_data[3] * g_y) + 302400.0 * dT_data[2] * b_y *
                        dnormT_data[2] * dnormT_data[3] * g_y) + 60480.0 *
                        dT_data[5] * d_y * dnormT_data[4] * g_y) + 181440.0 *
                        dT_data[2] * b_y * dnormT_data[1] * dnormT_data[4] * g_y)
                        + 20160.0 * dT_data[2] * d_y * dnormT_data[5] * g_y) +
                        -720.0 * dT_data[20] * d_y * e_y) + -7560.0 * dT_data[17]
                        * b_y * dnormT_data[1] * e_y) + -22680.0 * dT_data[14] *
                        dnormT_data[0] * h_y * e_y) + -18900.0 * dT_data[11] *
                        m_y * e_y) + -15120.0 * dT_data[14] * b_y * dnormT_data
                        [2] * e_y) + -75600.0 * dT_data[11] * dnormT_data[0] *
                        dnormT_data[1] * dnormT_data[2] * e_y) + -75600.0 *
                        dT_data[8] * h_y * dnormT_data[2] * e_y) + -50400.0 *
                        dT_data[8] * dnormT_data[0] * n_y * e_y) + -75600.0 *
                        dT_data[5] * dnormT_data[1] * n_y * e_y) + -16800.0 *
                        dT_data[2] * w_y * e_y) + -18900.0 * dT_data[11] * b_y *
                        dnormT_data[3] * e_y) + -75600.0 * dT_data[8] *
                        dnormT_data[0] * dnormT_data[1] * dnormT_data[3] * e_y)
                        + -56700.0 * dT_data[5] * h_y * dnormT_data[3] * e_y) +
                        -75600.0 * dT_data[5] * dnormT_data[0] * dnormT_data[2] *
                        dnormT_data[3] * e_y) + -75600.0 * dT_data[2] *
                        dnormT_data[1] * dnormT_data[2] * dnormT_data[3] * e_y)
                        + -18900.0 * dT_data[2] * dnormT_data[0] * t_y * e_y) +
                        -15120.0 * dT_data[8] * b_y * dnormT_data[4] * e_y) +
                        -45360.0 * dT_data[5] * dnormT_data[0] * dnormT_data[1] *
                        dnormT_data[4] * e_y) + -22680.0 * dT_data[2] * h_y *
                        dnormT_data[4] * e_y) + -30240.0 * dT_data[2] *
                        dnormT_data[0] * dnormT_data[2] * dnormT_data[4] * e_y)
                        + -7560.0 * dT_data[5] * b_y * dnormT_data[5] * e_y) +
                        d32 * dnormT_data[1] * dnormT_data[5] * e_y) + -2160.0 *
                        dT_data[2] * b_y * dnormT_data[6] * e_y) + 90.0 *
                        dT_data[23] * b_y * c_y) + 720.0 * dT_data[20] *
                        dnormT_data[0] * dnormT_data[1] * c_y) + 1260.0 *
                        dT_data[17] * h_y * c_y) + 1680.0 * dT_data[17] *
                        dnormT_data[0] * dnormT_data[2] * c_y) + 5040.0 *
                        dT_data[14] * dnormT_data[1] * dnormT_data[2] * c_y) +
                        4200.0 * dT_data[11] * n_y * c_y) + 2520.0 * dT_data[14]
                        * dnormT_data[0] * dnormT_data[3] * c_y) + 6300.0 *
                        dT_data[11] * dnormT_data[1] * dnormT_data[3] * c_y) +
                        8400.0 * dT_data[8] * dnormT_data[2] * dnormT_data[3] *
                        c_y) + 3150.0 * dT_data[5] * t_y * c_y) + 2520.0 *
                        dT_data[11] * dnormT_data[0] * dnormT_data[4] * c_y) +
                        5040.0 * dT_data[8] * dnormT_data[1] * dnormT_data[4] *
                        c_y) + 5040.0 * dT_data[5] * dnormT_data[2] *
                        dnormT_data[4] * c_y) + 2520.0 * dT_data[2] *
                        dnormT_data[3] * dnormT_data[4] * c_y) + 1680.0 *
                        dT_data[8] * dnormT_data[0] * dnormT_data[5] * c_y) +
                        2520.0 * dT_data[5] * dnormT_data[1] * dnormT_data[5] *
                        c_y) + 1680.0 * dT_data[2] * dnormT_data[2] *
                        dnormT_data[5] * c_y) + 720.0 * dT_data[5] *
                        dnormT_data[0] * dnormT_data[6] * c_y) + 720.0 *
                        dT_data[2] * dnormT_data[1] * dnormT_data[6] * c_y) +
                        180.0 * dT_data[2] * dnormT_data[0] * dnormT_data[7] *
                        c_y) + -10.0 * dT_data[26] * dnormT_data[0] * dnormT_tmp)
                        + -45.0 * dT_data[23] * dnormT_data[1] * dnormT_tmp) +
                        -120.0 * dT_data[20] * dnormT_data[2] * dnormT_tmp) +
                        -210.0 * dT_data[17] * dnormT_data[3] * dnormT_tmp) +
                        -252.0 * dT_data[14] * dnormT_data[4] * dnormT_tmp) +
                        -210.0 * dT_data[11] * dnormT_data[5] * dnormT_tmp) +
                        -120.0 * dT_data[8] * dnormT_data[6] * dnormT_tmp) +
                        -45.0 * dT_data[5] * dnormT_data[7] * dnormT_tmp) +
                        -10.0 * dT_data[2] * dnormT_data[8] * dnormT_tmp) +
                        dT_data[29] * y) + d0 * T[2]) + d1 * T[2]) + d2 * T[2])
                        + d3 * T[2]) + d4 * T[2]) + d5 * T[2]) + d6 * T[2]) + d7
                        * T[2]) + d8 * T[2]) + d9 * T[2]) + d10 * T[2]) + d11 *
                        T[2]) + d12 * T[2]) + d13 * T[2]) + d14 * T[2]) + d16 *
                        T[2]) + d17 * T[2]) + d18 * T[2]) + d19 * T[2]) + d20 *
                        T[2]) + d21 * T[2]) + d22 * T[2]) + d23 * T[2]) + d24 *
                                          T[2]) + d25 * T[2]) + d26 * T[2]) +
                                       d15 * T[2]) + d27 * T[2]) + d28 * T[2]) +
                                    d29 * T[2]) + d33 * T[2]) + d34 * T[2]) +
                                 d35 * T[2]) + d36 * T[2]) + d37 * T[2]) + d38 *
                              T[2]) + d39 * T[2]) + d40 * T[2]) + d41 * T[2]) +
                          d42 * T[2]) + d43 * T[2]) + dnormT * T[2];
                      if (dT_size[1] > 10) {
                        if (11 > dnormT_size[1]) {
                          emlrtDynamicBoundsCheckR2012b(11, 1, dnormT_size[1],
                            &d_emlrtBCI, sp);
                        }

                        y = 1.0 / normT;
                        cb_y = muDoubleScalarPower(dnormT_data[0], 11.0);
                        db_y = muDoubleScalarPower(normT, -12.0);
                        d0 = -3.99168E+7 * cb_y * db_y;
                        d1 = 1.99584E+8 * u_y * dnormT_data[1] * y_y;
                        d2 = -3.592512E+8 * o_y * h_y * v_y;
                        d3 = -5.98752E+7 * q_y * dnormT_data[2] * v_y;
                        d4 = 2.794176E+8 * i_y * m_y * r_y;
                        d5 = 1.862784E+8 * k_y * dnormT_data[1] * dnormT_data[2]
                          * r_y;
                        d6 = 1.33056E+7 * o_y * dnormT_data[3] * r_y;
                        d7 = -8.7318E+7 * d_y * s_y * p_y;
                        d8 = -1.74636E+8 * f_y * h_y * dnormT_data[2] * p_y;
                        d9 = -2.32848E+7 * i_y * n_y * p_y;
                        d10 = -3.49272E+7 * i_y * dnormT_data[1] * dnormT_data[3]
                          * p_y;
                        d11 = -2.32848E+6 * k_y * dnormT_data[4] * p_y;
                        d12 = 7.4844E+6 * dnormT_data[0] * ab_y * l_y;
                        d13 = 4.9896E+7 * b_y * m_y * dnormT_data[2] * l_y;
                        d14 = 3.3264E+7 * d_y * dnormT_data[1] * n_y * l_y;
                        d15 = 2.4948E+7 * d_y * h_y * dnormT_data[3] * l_y;
                        d16 = 8.316E+6 * f_y * dnormT_data[2] * dnormT_data[3] *
                          l_y;
                        d17 = 4.9896E+6 * f_y * dnormT_data[1] * dnormT_data[4] *
                          l_y;
                        d18 = 332640.0 * i_y * dnormT_data[5] * l_y;
                        d19 = -2.079E+6 * s_y * dnormT_data[2] * j_y;
                        d20 = -8.316E+6 * dnormT_data[0] * h_y * n_y * j_y;
                        d21 = -1.848E+6 * b_y * w_y * j_y;
                        d22 = -4.158E+6 * dnormT_data[0] * m_y * dnormT_data[3] *
                          j_y;
                        d23 = -8.316E+6 * b_y * dnormT_data[1] * dnormT_data[2] *
                          dnormT_data[3] * j_y;
                        d24 = -693000.0 * d_y * t_y * j_y;
                        d25 = -2.4948E+6 * b_y * h_y * dnormT_data[4] * j_y;
                        d26 = -1.1088E+6 * d_y * dnormT_data[2] * dnormT_data[4]
                          * j_y;
                        d27 = -554400.0 * d_y * dnormT_data[1] * dnormT_data[5] *
                          j_y;
                        d28 = -39600.0 * f_y * dnormT_data[6] * j_y;
                        d29 = 369600.0 * dnormT_data[1] * w_y * g_y;
                        d30 = 831600.0 * h_y * dnormT_data[2] * dnormT_data[3] *
                          g_y;
                        d31 = 554400.0 * dnormT_data[0] * n_y * dnormT_data[3] *
                          g_y;
                        d32 = 415800.0 * dnormT_data[0] * dnormT_data[1] * t_y *
                          g_y;
                        d33 = 166320.0 * m_y * dnormT_data[4] * g_y;
                        d34 = 665280.0 * dnormT_data[0] * dnormT_data[1] *
                          dnormT_data[2] * dnormT_data[4] * g_y;
                        d35 = 166320.0 * b_y * dnormT_data[3] * dnormT_data[4] *
                          g_y;
                        d36 = 166320.0 * dnormT_data[0] * h_y * dnormT_data[5] *
                          g_y;
                        d37 = 110880.0 * b_y * dnormT_data[2] * dnormT_data[5] *
                          g_y;
                        d38 = 47520.0 * b_y * dnormT_data[1] * dnormT_data[6] *
                          g_y;
                        d39 = 3960.0 * d_y * dnormT_data[7] * g_y;
                        d40 = -34650.0 * dnormT_data[2] * t_y * e_y;
                        d41 = -27720.0 * n_y * dnormT_data[4] * e_y;
                        d42 = -41580.0 * dnormT_data[1] * dnormT_data[3] *
                          dnormT_data[4] * e_y;
                        d43 = -8316.0 * dnormT_data[0] * bb_y * e_y;
                        d44 = -27720.0 * dnormT_data[1] * dnormT_data[2] *
                          dnormT_data[5] * e_y;
                        d45 = -13860.0 * dnormT_data[0] * dnormT_data[3] *
                          dnormT_data[5] * e_y;
                        d46 = -5940.0 * h_y * dnormT_data[6] * e_y;
                        d47 = -7920.0 * dnormT_data[0] * dnormT_data[2] *
                          dnormT_data[6] * e_y;
                        d48 = -2970.0 * dnormT_data[0] * dnormT_data[1] *
                          dnormT_data[7] * e_y;
                        d49 = -330.0 * b_y * dnormT_data[8] * e_y;
                        d50 = 22.0 * dnormT_data[9] * dnormT_data[0] * c_y;
                        d51 = 924.0 * dnormT_data[4] * dnormT_data[5] * c_y;
                        d52 = 660.0 * dnormT_data[3] * dnormT_data[6] * c_y;
                        d53 = 330.0 * dnormT_data[2] * dnormT_data[7] * c_y;
                        d54 = 110.0 * dnormT_data[1] * dnormT_data[8] * c_y;
                        dnormT = -dnormT_data[10] * dnormT_tmp;
                        dq_data[30] =
                          (((((((((((((((((((((((((((((((((((((((((((((((((((((((
                          (((((((((((((((((((((((((((((((((((((((((((((((((((((((
                          (((((((((((((((((((((((((((((((((((((((((((((((((((((((
                          ((((((((((((((((((((((((((((3.99168E+7 * dT_data[0] *
                          x_y * y_y + -1.99584E+7 * dT_data[3] * u_y * v_y) +
                          -1.796256E+8 * dT_data[0] * q_y * dnormT_data[1] * v_y)
                          + 6.6528E+6 * dT_data[6] * q_y * r_y) + 7.98336E+7 *
                          dT_data[3] * o_y * dnormT_data[1] * r_y) + 2.794176E+8
                          * dT_data[0] * k_y * h_y * r_y) + 5.32224E+7 *
                          dT_data[0] * o_y * dnormT_data[2] * r_y) + -1.6632E+6 *
                          dT_data[9] * o_y * p_y) + -2.32848E+7 * dT_data[6] *
                          k_y * dnormT_data[1] * p_y) + -1.047816E+8 * dT_data[3]
                          * i_y * h_y * p_y) + -1.74636E+8 * dT_data[0] * f_y *
                          m_y * p_y) + -2.32848E+7 * dT_data[3] * k_y *
                          dnormT_data[2] * p_y) + -1.397088E+8 * dT_data[0] *
                          i_y * dnormT_data[1] * dnormT_data[2] * p_y) +
                          -1.16424E+7 * dT_data[0] * k_y * dnormT_data[3] * p_y)
                          + 332640.0 * dT_data[12] * k_y * l_y) + 4.9896E+6 *
                          dT_data[9] * i_y * dnormT_data[1] * l_y) + 2.4948E+7 *
                          dT_data[6] * f_y * h_y * l_y) + 4.9896E+7 * dT_data[3]
                          * d_y * m_y * l_y) + 3.7422E+7 * dT_data[0] * b_y *
                          s_y * l_y) + 6.6528E+6 * dT_data[6] * i_y *
                          dnormT_data[2] * l_y) + 4.9896E+7 * dT_data[3] * f_y *
                          dnormT_data[1] * dnormT_data[2] * l_y) + 9.9792E+7 *
                          dT_data[0] * d_y * h_y * dnormT_data[2] * l_y) +
                          1.6632E+7 * dT_data[0] * f_y * n_y * l_y) + 4.9896E+6 *
                          dT_data[3] * i_y * dnormT_data[3] * l_y) + 2.4948E+7 *
                          dT_data[0] * f_y * dnormT_data[1] * dnormT_data[3] *
                          l_y) + 1.99584E+6 * dT_data[0] * i_y * dnormT_data[4] *
                          l_y) + -55440.0 * dT_data[15] * i_y * j_y) + -831600.0
                          * dT_data[12] * f_y * dnormT_data[1] * j_y) +
                          -4.158E+6 * dT_data[9] * d_y * h_y * j_y) + -8.316E+6 *
                          dT_data[6] * b_y * m_y * j_y) + -6.237E+6 * dT_data[3]
                          * dnormT_data[0] * s_y * j_y) + -1.2474E+6 * dT_data[0]
                          * ab_y * j_y) + -1.386E+6 * dT_data[9] * f_y *
                          dnormT_data[2] * j_y) + -1.1088E+7 * dT_data[6] * d_y *
                          dnormT_data[1] * dnormT_data[2] * j_y) + -2.4948E+7 *
                          dT_data[3] * b_y * h_y * dnormT_data[2] * j_y) +
                          -1.6632E+7 * dT_data[0] * dnormT_data[0] * m_y *
                          dnormT_data[2] * j_y) + -5.544E+6 * dT_data[3] * d_y *
                          n_y * j_y) + -1.6632E+7 * dT_data[0] * b_y *
                          dnormT_data[1] * n_y * j_y) + -1.386E+6 * dT_data[6] *
                          f_y * dnormT_data[3] * j_y) + -8.316E+6 * dT_data[3] *
                          d_y * dnormT_data[1] * dnormT_data[3] * j_y) +
                          -1.2474E+7 * dT_data[0] * b_y * h_y * dnormT_data[3] *
                          j_y) + -5.544E+6 * dT_data[0] * d_y * dnormT_data[2] *
                          dnormT_data[3] * j_y) + -831600.0 * dT_data[3] * f_y *
                          dnormT_data[4] * j_y) + -3.3264E+6 * dT_data[0] * d_y *
                          dnormT_data[1] * dnormT_data[4] * j_y) + -277200.0 *
                          dT_data[0] * f_y * dnormT_data[5] * j_y) + 7920.0 *
                          dT_data[18] * f_y * g_y) + 110880.0 * dT_data[15] *
                          d_y * dnormT_data[1] * g_y) + 498960.0 * dT_data[12] *
                          b_y * h_y * g_y) + 831600.0 * dT_data[9] *
                          dnormT_data[0] * m_y * g_y) + 415800.0 * dT_data[6] *
                          s_y * g_y) + 221760.0 * dT_data[12] * d_y *
                          dnormT_data[2] * g_y) + 1.6632E+6 * dT_data[9] * b_y *
                          dnormT_data[1] * dnormT_data[2] * g_y) + 3.3264E+6 *
                          dT_data[6] * dnormT_data[0] * h_y * dnormT_data[2] *
                          g_y) + 1.6632E+6 * dT_data[3] * m_y * dnormT_data[2] *
                          g_y) + 1.1088E+6 * dT_data[6] * b_y * n_y * g_y) +
                          3.3264E+6 * dT_data[3] * dnormT_data[0] * dnormT_data
                          [1] * n_y * g_y) + 1.6632E+6 * dT_data[0] * h_y * n_y *
                          g_y) + 739200.0 * dT_data[0] * dnormT_data[0] * w_y *
                          g_y) + 277200.0 * dT_data[9] * d_y * dnormT_data[3] *
                          g_y) + 1.6632E+6 * dT_data[6] * b_y * dnormT_data[1] *
                          dnormT_data[3] * g_y) + 2.4948E+6 * dT_data[3] *
                          dnormT_data[0] * h_y * dnormT_data[3] * g_y) +
                          831600.0 * dT_data[0] * m_y * dnormT_data[3] * g_y) +
                          1.6632E+6 * dT_data[3] * b_y * dnormT_data[2] *
                          dnormT_data[3] * g_y) + 3.3264E+6 * dT_data[0] *
                          dnormT_data[0] * dnormT_data[1] * dnormT_data[2] *
                          dnormT_data[3] * g_y) + 415800.0 * dT_data[0] * b_y *
                          t_y * g_y) + 221760.0 * dT_data[6] * d_y *
                          dnormT_data[4] * g_y) + 997920.0 * dT_data[3] * b_y *
                          dnormT_data[1] * dnormT_data[4] * g_y) + 997920.0 *
                          dT_data[0] * dnormT_data[0] * h_y * dnormT_data[4] *
                          g_y) + 665280.0 * dT_data[0] * b_y * dnormT_data[2] *
                          dnormT_data[4] * g_y) + 110880.0 * dT_data[3] * d_y *
                          dnormT_data[5] * g_y) + 332640.0 * dT_data[0] * b_y *
                          dnormT_data[1] * dnormT_data[5] * g_y) + 31680.0 *
                          dT_data[0] * d_y * dnormT_data[6] * g_y) + -990.0 *
                          dT_data[21] * d_y * e_y) + -11880.0 * dT_data[18] *
                          b_y * dnormT_data[1] * e_y) + -41580.0 * dT_data[15] *
                          dnormT_data[0] * h_y * e_y) + -41580.0 * dT_data[12] *
                          m_y * e_y) + -27720.0 * dT_data[15] * b_y *
                          dnormT_data[2] * e_y) + -166320.0 * dT_data[12] *
                          dnormT_data[0] * dnormT_data[1] * dnormT_data[2] * e_y)
                          + -207900.0 * dT_data[9] * h_y * dnormT_data[2] * e_y)
                          + -138600.0 * dT_data[9] * dnormT_data[0] * n_y * e_y)
                          + -277200.0 * dT_data[6] * dnormT_data[1] * n_y * e_y)
                          + -92400.0 * dT_data[3] * w_y * e_y) + -41580.0 *
                          dT_data[12] * b_y * dnormT_data[3] * e_y) + -207900.0 *
                          dT_data[9] * dnormT_data[0] * dnormT_data[1] *
                          dnormT_data[3] * e_y) + -207900.0 * dT_data[6] * h_y *
                          dnormT_data[3] * e_y) + -277200.0 * dT_data[6] *
                          dnormT_data[0] * dnormT_data[2] * dnormT_data[3] * e_y)
                          + -415800.0 * dT_data[3] * dnormT_data[1] *
                          dnormT_data[2] * dnormT_data[3] * e_y) + -138600.0 *
                          dT_data[0] * n_y * dnormT_data[3] * e_y) + -103950.0 *
                          dT_data[3] * dnormT_data[0] * t_y * e_y) + -103950.0 *
                          dT_data[0] * dnormT_data[1] * t_y * e_y) + -41580.0 *
                          dT_data[9] * b_y * dnormT_data[4] * e_y) + -166320.0 *
                          dT_data[6] * dnormT_data[0] * dnormT_data[1] *
                          dnormT_data[4] * e_y) + -124740.0 * dT_data[3] * h_y *
                          dnormT_data[4] * e_y) + -166320.0 * dT_data[3] *
                          dnormT_data[0] * dnormT_data[2] * dnormT_data[4] * e_y)
                          + -166320.0 * dT_data[0] * dnormT_data[1] *
                          dnormT_data[2] * dnormT_data[4] * e_y) + -83160.0 *
                          dT_data[0] * dnormT_data[0] * dnormT_data[3] *
                          dnormT_data[4] * e_y) + -27720.0 * dT_data[6] * b_y *
                          dnormT_data[5] * e_y) + -83160.0 * dT_data[3] *
                          dnormT_data[0] * dnormT_data[1] * dnormT_data[5] * e_y)
                          + -41580.0 * dT_data[0] * h_y * dnormT_data[5] * e_y)
                          + -55440.0 * dT_data[0] * dnormT_data[0] *
                          dnormT_data[2] * dnormT_data[5] * e_y) + -11880.0 *
                          dT_data[3] * b_y * dnormT_data[6] * e_y) + -23760.0 *
                          dT_data[0] * dnormT_data[0] * dnormT_data[1] *
                          dnormT_data[6] * e_y) + -2970.0 * dT_data[0] * b_y *
                          dnormT_data[7] * e_y) + 110.0 * dT_data[24] * b_y *
                          c_y) + 990.0 * dT_data[21] * dnormT_data[0] *
                          dnormT_data[1] * c_y) + 1980.0 * dT_data[18] * h_y *
                          c_y) + 2640.0 * dT_data[18] * dnormT_data[0] *
                          dnormT_data[2] * c_y) + 9240.0 * dT_data[15] *
                          dnormT_data[1] * dnormT_data[2] * c_y) + 9240.0 *
                          dT_data[12] * n_y * c_y) + 4620.0 * dT_data[15] *
                          dnormT_data[0] * dnormT_data[3] * c_y) + 13860.0 *
                          dT_data[12] * dnormT_data[1] * dnormT_data[3] * c_y) +
                          23100.0 * dT_data[9] * dnormT_data[2] * dnormT_data[3]
                          * c_y) + 11550.0 * dT_data[6] * t_y * c_y) + 5544.0 *
                          dT_data[12] * dnormT_data[0] * dnormT_data[4] * c_y) +
                          13860.0 * dT_data[9] * dnormT_data[1] * dnormT_data[4]
                          * c_y) + 18480.0 * dT_data[6] * dnormT_data[2] *
                          dnormT_data[4] * c_y) + 13860.0 * dT_data[3] *
                          dnormT_data[3] * dnormT_data[4] * c_y) + 2772.0 *
                          dT_data[0] * bb_y * c_y) + 4620.0 * dT_data[9] *
                          dnormT_data[0] * dnormT_data[5] * c_y) + 9240.0 *
                          dT_data[6] * dnormT_data[1] * dnormT_data[5] * c_y) +
                          9240.0 * dT_data[3] * dnormT_data[2] * dnormT_data[5] *
                          c_y) + 4620.0 * dT_data[0] * dnormT_data[3] *
                          dnormT_data[5] * c_y) + 2640.0 * dT_data[6] *
                          dnormT_data[0] * dnormT_data[6] * c_y) + 3960.0 *
                          dT_data[3] * dnormT_data[1] * dnormT_data[6] * c_y) +
                          2640.0 * dT_data[0] * dnormT_data[2] * dnormT_data[6] *
                          c_y) + 990.0 * dT_data[3] * dnormT_data[0] *
                          dnormT_data[7] * c_y) + 990.0 * dT_data[0] *
                          dnormT_data[1] * dnormT_data[7] * c_y) + 220.0 *
                          dT_data[0] * dnormT_data[0] * dnormT_data[8] * c_y) +
                          -11.0 * dT_data[0] * dnormT_data[9] * dnormT_tmp) +
                          -11.0 * dT_data[27] * dnormT_data[0] * dnormT_tmp) +
                          -55.0 * dT_data[24] * dnormT_data[1] * dnormT_tmp) +
                          -165.0 * dT_data[21] * dnormT_data[2] * dnormT_tmp) +
                          -330.0 * dT_data[18] * dnormT_data[3] * dnormT_tmp) +
                          -462.0 * dT_data[15] * dnormT_data[4] * dnormT_tmp) +
                          -462.0 * dT_data[12] * dnormT_data[5] * dnormT_tmp) +
                          -330.0 * dT_data[9] * dnormT_data[6] * dnormT_tmp) +
                          -165.0 * dT_data[6] * dnormT_data[7] * dnormT_tmp) +
                          -55.0 * dT_data[3] * dnormT_data[8] * dnormT_tmp) +
                          dT_data[30] * y) + d0 * T[0]) + d1 * T[0]) + d2 * T[0])
                          + d3 * T[0]) + d4 * T[0]) + d5 * T[0]) + d6 * T[0]) +
                          d7 * T[0]) + d8 * T[0]) + d9 * T[0]) + d10 * T[0]) +
                          d11 * T[0]) + d12 * T[0]) + d13 * T[0]) + d14 * T[0])
                          + d15 * T[0]) + d16 * T[0]) + d17 * T[0]) + d18 * T[0])
                          + d19 * T[0]) + d20 * T[0]) + d21 * T[0]) + d22 * T[0])
                          + d23 * T[0]) + d24 * T[0]) + d25 * T[0]) + d26 * T[0])
                          + d27 * T[0]) + d28 * T[0]) + d29 * T[0]) + d30 * T[0])
                          + d31 * T[0]) + d32 * T[0]) + d33 * T[0]) + d34 * T[0])
                          + d35 * T[0]) + d36 * T[0]) + d37 * T[0]) + d38 * T[0])
                                          + d39 * T[0]) + d40 * T[0]) + d41 * T
                                        [0]) + d42 * T[0]) + d43 * T[0]) + d44 *
                                     T[0]) + d45 * T[0]) + d46 * T[0]) + d47 *
                                  T[0]) + d48 * T[0]) + d49 * T[0]) + d50 * T[0])
                              + d51 * T[0]) + d52 * T[0]) + d53 * T[0]) + d54 *
                           T[0]) + dnormT * T[0];
                        dq_data[31] =
                          (((((((((((((((((((((((((((((((((((((((((((((((((((((((
                          (((((((((((((((((((((((((((((((((((((((((((((((((((((((
                          (((((((((((((((((((((((((((((((((((((((((((((((((((((((
                          ((((((((((((((((((((((((((((3.99168E+7 * dT_data[1] *
                          x_y * y_y + -1.99584E+7 * dT_data[4] * u_y * v_y) +
                          -1.796256E+8 * dT_data[1] * q_y * dnormT_data[1] * v_y)
                          + 6.6528E+6 * dT_data[7] * q_y * r_y) + 7.98336E+7 *
                          dT_data[4] * o_y * dnormT_data[1] * r_y) + 2.794176E+8
                          * dT_data[1] * k_y * h_y * r_y) + 5.32224E+7 *
                          dT_data[1] * o_y * dnormT_data[2] * r_y) + -1.6632E+6 *
                          dT_data[10] * o_y * p_y) + -2.32848E+7 * dT_data[7] *
                          k_y * dnormT_data[1] * p_y) + -1.047816E+8 * dT_data[4]
                          * i_y * h_y * p_y) + -1.74636E+8 * dT_data[1] * f_y *
                          m_y * p_y) + -2.32848E+7 * dT_data[4] * k_y *
                          dnormT_data[2] * p_y) + -1.397088E+8 * dT_data[1] *
                          i_y * dnormT_data[1] * dnormT_data[2] * p_y) +
                          -1.16424E+7 * dT_data[1] * k_y * dnormT_data[3] * p_y)
                          + 332640.0 * dT_data[13] * k_y * l_y) + 4.9896E+6 *
                          dT_data[10] * i_y * dnormT_data[1] * l_y) + 2.4948E+7 *
                          dT_data[7] * f_y * h_y * l_y) + 4.9896E+7 * dT_data[4]
                          * d_y * m_y * l_y) + 3.7422E+7 * dT_data[1] * b_y *
                          s_y * l_y) + 6.6528E+6 * dT_data[7] * i_y *
                          dnormT_data[2] * l_y) + 4.9896E+7 * dT_data[4] * f_y *
                          dnormT_data[1] * dnormT_data[2] * l_y) + 9.9792E+7 *
                          dT_data[1] * d_y * h_y * dnormT_data[2] * l_y) +
                          1.6632E+7 * dT_data[1] * f_y * n_y * l_y) + 4.9896E+6 *
                          dT_data[4] * i_y * dnormT_data[3] * l_y) + 2.4948E+7 *
                          dT_data[1] * f_y * dnormT_data[1] * dnormT_data[3] *
                          l_y) + 1.99584E+6 * dT_data[1] * i_y * dnormT_data[4] *
                          l_y) + -55440.0 * dT_data[16] * i_y * j_y) + -831600.0
                          * dT_data[13] * f_y * dnormT_data[1] * j_y) +
                          -4.158E+6 * dT_data[10] * d_y * h_y * j_y) + -8.316E+6
                          * dT_data[7] * b_y * m_y * j_y) + -6.237E+6 * dT_data
                          [4] * dnormT_data[0] * s_y * j_y) + -1.2474E+6 *
                          dT_data[1] * ab_y * j_y) + -1.386E+6 * dT_data[10] *
                          f_y * dnormT_data[2] * j_y) + -1.1088E+7 * dT_data[7] *
                          d_y * dnormT_data[1] * dnormT_data[2] * j_y) +
                          -2.4948E+7 * dT_data[4] * b_y * h_y * dnormT_data[2] *
                          j_y) + -1.6632E+7 * dT_data[1] * dnormT_data[0] * m_y *
                          dnormT_data[2] * j_y) + -5.544E+6 * dT_data[4] * d_y *
                          n_y * j_y) + -1.6632E+7 * dT_data[1] * b_y *
                          dnormT_data[1] * n_y * j_y) + -1.386E+6 * dT_data[7] *
                          f_y * dnormT_data[3] * j_y) + -8.316E+6 * dT_data[4] *
                          d_y * dnormT_data[1] * dnormT_data[3] * j_y) +
                          -1.2474E+7 * dT_data[1] * b_y * h_y * dnormT_data[3] *
                          j_y) + -5.544E+6 * dT_data[1] * d_y * dnormT_data[2] *
                          dnormT_data[3] * j_y) + -831600.0 * dT_data[4] * f_y *
                          dnormT_data[4] * j_y) + -3.3264E+6 * dT_data[1] * d_y *
                          dnormT_data[1] * dnormT_data[4] * j_y) + -277200.0 *
                          dT_data[1] * f_y * dnormT_data[5] * j_y) + 7920.0 *
                          dT_data[19] * f_y * g_y) + 110880.0 * dT_data[16] *
                          d_y * dnormT_data[1] * g_y) + 498960.0 * dT_data[13] *
                          b_y * h_y * g_y) + 831600.0 * dT_data[10] *
                          dnormT_data[0] * m_y * g_y) + 415800.0 * dT_data[7] *
                          s_y * g_y) + 221760.0 * dT_data[13] * d_y *
                          dnormT_data[2] * g_y) + 1.6632E+6 * dT_data[10] * b_y *
                          dnormT_data[1] * dnormT_data[2] * g_y) + 3.3264E+6 *
                          dT_data[7] * dnormT_data[0] * h_y * dnormT_data[2] *
                          g_y) + 1.6632E+6 * dT_data[4] * m_y * dnormT_data[2] *
                          g_y) + 1.1088E+6 * dT_data[7] * b_y * n_y * g_y) +
                          3.3264E+6 * dT_data[4] * dnormT_data[0] * dnormT_data
                          [1] * n_y * g_y) + 1.6632E+6 * dT_data[1] * h_y * n_y *
                          g_y) + 739200.0 * dT_data[1] * dnormT_data[0] * w_y *
                          g_y) + 277200.0 * dT_data[10] * d_y * dnormT_data[3] *
                          g_y) + 1.6632E+6 * dT_data[7] * b_y * dnormT_data[1] *
                          dnormT_data[3] * g_y) + 2.4948E+6 * dT_data[4] *
                          dnormT_data[0] * h_y * dnormT_data[3] * g_y) +
                          831600.0 * dT_data[1] * m_y * dnormT_data[3] * g_y) +
                          1.6632E+6 * dT_data[4] * b_y * dnormT_data[2] *
                          dnormT_data[3] * g_y) + 3.3264E+6 * dT_data[1] *
                          dnormT_data[0] * dnormT_data[1] * dnormT_data[2] *
                          dnormT_data[3] * g_y) + 415800.0 * dT_data[1] * b_y *
                          t_y * g_y) + 221760.0 * dT_data[7] * d_y *
                          dnormT_data[4] * g_y) + 997920.0 * dT_data[4] * b_y *
                          dnormT_data[1] * dnormT_data[4] * g_y) + 997920.0 *
                          dT_data[1] * dnormT_data[0] * h_y * dnormT_data[4] *
                          g_y) + 665280.0 * dT_data[1] * b_y * dnormT_data[2] *
                          dnormT_data[4] * g_y) + 110880.0 * dT_data[4] * d_y *
                          dnormT_data[5] * g_y) + 332640.0 * dT_data[1] * b_y *
                          dnormT_data[1] * dnormT_data[5] * g_y) + 31680.0 *
                          dT_data[1] * d_y * dnormT_data[6] * g_y) + -990.0 *
                          dT_data[22] * d_y * e_y) + -11880.0 * dT_data[19] *
                          b_y * dnormT_data[1] * e_y) + -41580.0 * dT_data[16] *
                          dnormT_data[0] * h_y * e_y) + -41580.0 * dT_data[13] *
                          m_y * e_y) + -27720.0 * dT_data[16] * b_y *
                          dnormT_data[2] * e_y) + -166320.0 * dT_data[13] *
                          dnormT_data[0] * dnormT_data[1] * dnormT_data[2] * e_y)
                          + -207900.0 * dT_data[10] * h_y * dnormT_data[2] * e_y)
                          + -138600.0 * dT_data[10] * dnormT_data[0] * n_y * e_y)
                          + -277200.0 * dT_data[7] * dnormT_data[1] * n_y * e_y)
                          + -92400.0 * dT_data[4] * w_y * e_y) + -41580.0 *
                          dT_data[13] * b_y * dnormT_data[3] * e_y) + -207900.0 *
                          dT_data[10] * dnormT_data[0] * dnormT_data[1] *
                          dnormT_data[3] * e_y) + -207900.0 * dT_data[7] * h_y *
                          dnormT_data[3] * e_y) + -277200.0 * dT_data[7] *
                          dnormT_data[0] * dnormT_data[2] * dnormT_data[3] * e_y)
                          + -415800.0 * dT_data[4] * dnormT_data[1] *
                          dnormT_data[2] * dnormT_data[3] * e_y) + -138600.0 *
                          dT_data[1] * n_y * dnormT_data[3] * e_y) + -103950.0 *
                          dT_data[4] * dnormT_data[0] * t_y * e_y) + -103950.0 *
                          dT_data[1] * dnormT_data[1] * t_y * e_y) + -41580.0 *
                          dT_data[10] * b_y * dnormT_data[4] * e_y) + -166320.0 *
                          dT_data[7] * dnormT_data[0] * dnormT_data[1] *
                          dnormT_data[4] * e_y) + -124740.0 * dT_data[4] * h_y *
                          dnormT_data[4] * e_y) + -166320.0 * dT_data[4] *
                          dnormT_data[0] * dnormT_data[2] * dnormT_data[4] * e_y)
                          + -166320.0 * dT_data[1] * dnormT_data[1] *
                          dnormT_data[2] * dnormT_data[4] * e_y) + -83160.0 *
                          dT_data[1] * dnormT_data[0] * dnormT_data[3] *
                          dnormT_data[4] * e_y) + -27720.0 * dT_data[7] * b_y *
                          dnormT_data[5] * e_y) + -83160.0 * dT_data[4] *
                          dnormT_data[0] * dnormT_data[1] * dnormT_data[5] * e_y)
                          + -41580.0 * dT_data[1] * h_y * dnormT_data[5] * e_y)
                          + -55440.0 * dT_data[1] * dnormT_data[0] *
                          dnormT_data[2] * dnormT_data[5] * e_y) + -11880.0 *
                          dT_data[4] * b_y * dnormT_data[6] * e_y) + -23760.0 *
                          dT_data[1] * dnormT_data[0] * dnormT_data[1] *
                          dnormT_data[6] * e_y) + -2970.0 * dT_data[1] * b_y *
                          dnormT_data[7] * e_y) + 110.0 * dT_data[25] * b_y *
                          c_y) + 990.0 * dT_data[22] * dnormT_data[0] *
                          dnormT_data[1] * c_y) + 1980.0 * dT_data[19] * h_y *
                          c_y) + 2640.0 * dT_data[19] * dnormT_data[0] *
                          dnormT_data[2] * c_y) + 9240.0 * dT_data[16] *
                          dnormT_data[1] * dnormT_data[2] * c_y) + 9240.0 *
                          dT_data[13] * n_y * c_y) + 4620.0 * dT_data[16] *
                          dnormT_data[0] * dnormT_data[3] * c_y) + 13860.0 *
                          dT_data[13] * dnormT_data[1] * dnormT_data[3] * c_y) +
                          23100.0 * dT_data[10] * dnormT_data[2] * dnormT_data[3]
                          * c_y) + 11550.0 * dT_data[7] * t_y * c_y) + 5544.0 *
                          dT_data[13] * dnormT_data[0] * dnormT_data[4] * c_y) +
                          13860.0 * dT_data[10] * dnormT_data[1] * dnormT_data[4]
                          * c_y) + 18480.0 * dT_data[7] * dnormT_data[2] *
                          dnormT_data[4] * c_y) + 13860.0 * dT_data[4] *
                          dnormT_data[3] * dnormT_data[4] * c_y) + 2772.0 *
                          dT_data[1] * bb_y * c_y) + 4620.0 * dT_data[10] *
                          dnormT_data[0] * dnormT_data[5] * c_y) + 9240.0 *
                          dT_data[7] * dnormT_data[1] * dnormT_data[5] * c_y) +
                          9240.0 * dT_data[4] * dnormT_data[2] * dnormT_data[5] *
                          c_y) + 4620.0 * dT_data[1] * dnormT_data[3] *
                          dnormT_data[5] * c_y) + 2640.0 * dT_data[7] *
                          dnormT_data[0] * dnormT_data[6] * c_y) + 3960.0 *
                          dT_data[4] * dnormT_data[1] * dnormT_data[6] * c_y) +
                          2640.0 * dT_data[1] * dnormT_data[2] * dnormT_data[6] *
                          c_y) + 990.0 * dT_data[4] * dnormT_data[0] *
                          dnormT_data[7] * c_y) + 990.0 * dT_data[1] *
                          dnormT_data[1] * dnormT_data[7] * c_y) + 220.0 *
                          dT_data[1] * dnormT_data[0] * dnormT_data[8] * c_y) +
                          -11.0 * dT_data[1] * dnormT_data[9] * dnormT_tmp) +
                          -11.0 * dT_data[28] * dnormT_data[0] * dnormT_tmp) +
                          -55.0 * dT_data[25] * dnormT_data[1] * dnormT_tmp) +
                          -165.0 * dT_data[22] * dnormT_data[2] * dnormT_tmp) +
                          -330.0 * dT_data[19] * dnormT_data[3] * dnormT_tmp) +
                          -462.0 * dT_data[16] * dnormT_data[4] * dnormT_tmp) +
                          -462.0 * dT_data[13] * dnormT_data[5] * dnormT_tmp) +
                          -330.0 * dT_data[10] * dnormT_data[6] * dnormT_tmp) +
                          -165.0 * dT_data[7] * dnormT_data[7] * dnormT_tmp) +
                          -55.0 * dT_data[4] * dnormT_data[8] * dnormT_tmp) +
                          dT_data[31] * y) + d0 * T[1]) + d1 * T[1]) + d2 * T[1])
                          + d3 * T[1]) + d4 * T[1]) + d5 * T[1]) + d6 * T[1]) +
                          d7 * T[1]) + d8 * T[1]) + d9 * T[1]) + d10 * T[1]) +
                          d11 * T[1]) + d12 * T[1]) + d13 * T[1]) + d14 * T[1])
                          + d15 * T[1]) + d16 * T[1]) + d17 * T[1]) + d18 * T[1])
                          + d19 * T[1]) + d20 * T[1]) + d21 * T[1]) + d22 * T[1])
                          + d23 * T[1]) + d24 * T[1]) + d25 * T[1]) + d26 * T[1])
                          + d27 * T[1]) + d28 * T[1]) + d29 * T[1]) + d30 * T[1])
                          + d31 * T[1]) + d32 * T[1]) + d33 * T[1]) + d34 * T[1])
                          + d35 * T[1]) + d36 * T[1]) + d37 * T[1]) + d38 * T[1])
                                          + d39 * T[1]) + d40 * T[1]) + d41 * T
                                        [1]) + d42 * T[1]) + d43 * T[1]) + d44 *
                                     T[1]) + d45 * T[1]) + d46 * T[1]) + d47 *
                                  T[1]) + d48 * T[1]) + d49 * T[1]) + d50 * T[1])
                              + d51 * T[1]) + d52 * T[1]) + d53 * T[1]) + d54 *
                           T[1]) + dnormT * T[1];
                        dq_data[32] =
                          (((((((((((((((((((((((((((((((((((((((((((((((((((((((
                          (((((((((((((((((((((((((((((((((((((((((((((((((((((((
                          (((((((((((((((((((((((((((((((((((((((((((((((((((((((
                          ((((((((((((((((((((((((((((3.99168E+7 * dT_data[2] *
                          x_y * y_y + -1.99584E+7 * dT_data[5] * u_y * v_y) +
                          -1.796256E+8 * dT_data[2] * q_y * dnormT_data[1] * v_y)
                          + 6.6528E+6 * dT_data[8] * q_y * r_y) + 7.98336E+7 *
                          dT_data[5] * o_y * dnormT_data[1] * r_y) + 2.794176E+8
                          * dT_data[2] * k_y * h_y * r_y) + 5.32224E+7 *
                          dT_data[2] * o_y * dnormT_data[2] * r_y) + -1.6632E+6 *
                          dT_data[11] * o_y * p_y) + -2.32848E+7 * dT_data[8] *
                          k_y * dnormT_data[1] * p_y) + -1.047816E+8 * dT_data[5]
                          * i_y * h_y * p_y) + -1.74636E+8 * dT_data[2] * f_y *
                          m_y * p_y) + -2.32848E+7 * dT_data[5] * k_y *
                          dnormT_data[2] * p_y) + -1.397088E+8 * dT_data[2] *
                          i_y * dnormT_data[1] * dnormT_data[2] * p_y) +
                          -1.16424E+7 * dT_data[2] * k_y * dnormT_data[3] * p_y)
                          + 332640.0 * dT_data[14] * k_y * l_y) + 4.9896E+6 *
                          dT_data[11] * i_y * dnormT_data[1] * l_y) + 2.4948E+7 *
                          dT_data[8] * f_y * h_y * l_y) + 4.9896E+7 * dT_data[5]
                          * d_y * m_y * l_y) + 3.7422E+7 * dT_data[2] * b_y *
                          s_y * l_y) + 6.6528E+6 * dT_data[8] * i_y *
                          dnormT_data[2] * l_y) + 4.9896E+7 * dT_data[5] * f_y *
                          dnormT_data[1] * dnormT_data[2] * l_y) + 9.9792E+7 *
                          dT_data[2] * d_y * h_y * dnormT_data[2] * l_y) +
                          1.6632E+7 * dT_data[2] * f_y * n_y * l_y) + 4.9896E+6 *
                          dT_data[5] * i_y * dnormT_data[3] * l_y) + 2.4948E+7 *
                          dT_data[2] * f_y * dnormT_data[1] * dnormT_data[3] *
                          l_y) + 1.99584E+6 * dT_data[2] * i_y * dnormT_data[4] *
                          l_y) + -55440.0 * dT_data[17] * i_y * j_y) + -831600.0
                          * dT_data[14] * f_y * dnormT_data[1] * j_y) +
                          -4.158E+6 * dT_data[11] * d_y * h_y * j_y) + -8.316E+6
                          * dT_data[8] * b_y * m_y * j_y) + -6.237E+6 * dT_data
                          [5] * dnormT_data[0] * s_y * j_y) + -1.2474E+6 *
                          dT_data[2] * ab_y * j_y) + -1.386E+6 * dT_data[11] *
                          f_y * dnormT_data[2] * j_y) + -1.1088E+7 * dT_data[8] *
                          d_y * dnormT_data[1] * dnormT_data[2] * j_y) +
                          -2.4948E+7 * dT_data[5] * b_y * h_y * dnormT_data[2] *
                          j_y) + -1.6632E+7 * dT_data[2] * dnormT_data[0] * m_y *
                          dnormT_data[2] * j_y) + -5.544E+6 * dT_data[5] * d_y *
                          n_y * j_y) + -1.6632E+7 * dT_data[2] * b_y *
                          dnormT_data[1] * n_y * j_y) + -1.386E+6 * dT_data[8] *
                          f_y * dnormT_data[3] * j_y) + -8.316E+6 * dT_data[5] *
                          d_y * dnormT_data[1] * dnormT_data[3] * j_y) +
                          -1.2474E+7 * dT_data[2] * b_y * h_y * dnormT_data[3] *
                          j_y) + -5.544E+6 * dT_data[2] * d_y * dnormT_data[2] *
                          dnormT_data[3] * j_y) + -831600.0 * dT_data[5] * f_y *
                          dnormT_data[4] * j_y) + -3.3264E+6 * dT_data[2] * d_y *
                          dnormT_data[1] * dnormT_data[4] * j_y) + -277200.0 *
                          dT_data[2] * f_y * dnormT_data[5] * j_y) + 7920.0 *
                          dT_data[20] * f_y * g_y) + 110880.0 * dT_data[17] *
                          d_y * dnormT_data[1] * g_y) + 498960.0 * dT_data[14] *
                          b_y * h_y * g_y) + 831600.0 * dT_data[11] *
                          dnormT_data[0] * m_y * g_y) + 415800.0 * dT_data[8] *
                          s_y * g_y) + 221760.0 * dT_data[14] * d_y *
                          dnormT_data[2] * g_y) + 1.6632E+6 * dT_data[11] * b_y *
                          dnormT_data[1] * dnormT_data[2] * g_y) + 3.3264E+6 *
                          dT_data[8] * dnormT_data[0] * h_y * dnormT_data[2] *
                          g_y) + 1.6632E+6 * dT_data[5] * m_y * dnormT_data[2] *
                          g_y) + 1.1088E+6 * dT_data[8] * b_y * n_y * g_y) +
                          3.3264E+6 * dT_data[5] * dnormT_data[0] * dnormT_data
                          [1] * n_y * g_y) + 1.6632E+6 * dT_data[2] * h_y * n_y *
                          g_y) + 739200.0 * dT_data[2] * dnormT_data[0] * w_y *
                          g_y) + 277200.0 * dT_data[11] * d_y * dnormT_data[3] *
                          g_y) + 1.6632E+6 * dT_data[8] * b_y * dnormT_data[1] *
                          dnormT_data[3] * g_y) + 2.4948E+6 * dT_data[5] *
                          dnormT_data[0] * h_y * dnormT_data[3] * g_y) +
                          831600.0 * dT_data[2] * m_y * dnormT_data[3] * g_y) +
                          1.6632E+6 * dT_data[5] * b_y * dnormT_data[2] *
                          dnormT_data[3] * g_y) + 3.3264E+6 * dT_data[2] *
                          dnormT_data[0] * dnormT_data[1] * dnormT_data[2] *
                          dnormT_data[3] * g_y) + 415800.0 * dT_data[2] * b_y *
                          t_y * g_y) + 221760.0 * dT_data[8] * d_y *
                          dnormT_data[4] * g_y) + 997920.0 * dT_data[5] * b_y *
                          dnormT_data[1] * dnormT_data[4] * g_y) + 997920.0 *
                          dT_data[2] * dnormT_data[0] * h_y * dnormT_data[4] *
                          g_y) + 665280.0 * dT_data[2] * b_y * dnormT_data[2] *
                          dnormT_data[4] * g_y) + 110880.0 * dT_data[5] * d_y *
                          dnormT_data[5] * g_y) + 332640.0 * dT_data[2] * b_y *
                          dnormT_data[1] * dnormT_data[5] * g_y) + 31680.0 *
                          dT_data[2] * d_y * dnormT_data[6] * g_y) + -990.0 *
                          dT_data[23] * d_y * e_y) + -11880.0 * dT_data[20] *
                          b_y * dnormT_data[1] * e_y) + -41580.0 * dT_data[17] *
                          dnormT_data[0] * h_y * e_y) + -41580.0 * dT_data[14] *
                          m_y * e_y) + -27720.0 * dT_data[17] * b_y *
                          dnormT_data[2] * e_y) + -166320.0 * dT_data[14] *
                          dnormT_data[0] * dnormT_data[1] * dnormT_data[2] * e_y)
                          + -207900.0 * dT_data[11] * h_y * dnormT_data[2] * e_y)
                          + -138600.0 * dT_data[11] * dnormT_data[0] * n_y * e_y)
                          + -277200.0 * dT_data[8] * dnormT_data[1] * n_y * e_y)
                          + -92400.0 * dT_data[5] * w_y * e_y) + -41580.0 *
                          dT_data[14] * b_y * dnormT_data[3] * e_y) + -207900.0 *
                          dT_data[11] * dnormT_data[0] * dnormT_data[1] *
                          dnormT_data[3] * e_y) + -207900.0 * dT_data[8] * h_y *
                          dnormT_data[3] * e_y) + -277200.0 * dT_data[8] *
                          dnormT_data[0] * dnormT_data[2] * dnormT_data[3] * e_y)
                          + -415800.0 * dT_data[5] * dnormT_data[1] *
                          dnormT_data[2] * dnormT_data[3] * e_y) + -138600.0 *
                          dT_data[2] * n_y * dnormT_data[3] * e_y) + -103950.0 *
                          dT_data[5] * dnormT_data[0] * t_y * e_y) + -103950.0 *
                          dT_data[2] * dnormT_data[1] * t_y * e_y) + -41580.0 *
                          dT_data[11] * b_y * dnormT_data[4] * e_y) + -166320.0 *
                          dT_data[8] * dnormT_data[0] * dnormT_data[1] *
                          dnormT_data[4] * e_y) + -124740.0 * dT_data[5] * h_y *
                          dnormT_data[4] * e_y) + -166320.0 * dT_data[5] *
                          dnormT_data[0] * dnormT_data[2] * dnormT_data[4] * e_y)
                          + -166320.0 * dT_data[2] * dnormT_data[1] *
                          dnormT_data[2] * dnormT_data[4] * e_y) + -83160.0 *
                          dT_data[2] * dnormT_data[0] * dnormT_data[3] *
                          dnormT_data[4] * e_y) + -27720.0 * dT_data[8] * b_y *
                          dnormT_data[5] * e_y) + -83160.0 * dT_data[5] *
                          dnormT_data[0] * dnormT_data[1] * dnormT_data[5] * e_y)
                          + -41580.0 * dT_data[2] * h_y * dnormT_data[5] * e_y)
                          + -55440.0 * dT_data[2] * dnormT_data[0] *
                          dnormT_data[2] * dnormT_data[5] * e_y) + -11880.0 *
                          dT_data[5] * b_y * dnormT_data[6] * e_y) + -23760.0 *
                          dT_data[2] * dnormT_data[0] * dnormT_data[1] *
                          dnormT_data[6] * e_y) + -2970.0 * dT_data[2] * b_y *
                          dnormT_data[7] * e_y) + 110.0 * dT_data[26] * b_y *
                          c_y) + 990.0 * dT_data[23] * dnormT_data[0] *
                          dnormT_data[1] * c_y) + 1980.0 * dT_data[20] * h_y *
                          c_y) + 2640.0 * dT_data[20] * dnormT_data[0] *
                          dnormT_data[2] * c_y) + 9240.0 * dT_data[17] *
                          dnormT_data[1] * dnormT_data[2] * c_y) + 9240.0 *
                          dT_data[14] * n_y * c_y) + 4620.0 * dT_data[17] *
                          dnormT_data[0] * dnormT_data[3] * c_y) + 13860.0 *
                          dT_data[14] * dnormT_data[1] * dnormT_data[3] * c_y) +
                          23100.0 * dT_data[11] * dnormT_data[2] * dnormT_data[3]
                          * c_y) + 11550.0 * dT_data[8] * t_y * c_y) + 5544.0 *
                          dT_data[14] * dnormT_data[0] * dnormT_data[4] * c_y) +
                          13860.0 * dT_data[11] * dnormT_data[1] * dnormT_data[4]
                          * c_y) + 18480.0 * dT_data[8] * dnormT_data[2] *
                          dnormT_data[4] * c_y) + 13860.0 * dT_data[5] *
                          dnormT_data[3] * dnormT_data[4] * c_y) + 2772.0 *
                          dT_data[2] * bb_y * c_y) + 4620.0 * dT_data[11] *
                          dnormT_data[0] * dnormT_data[5] * c_y) + 9240.0 *
                          dT_data[8] * dnormT_data[1] * dnormT_data[5] * c_y) +
                          9240.0 * dT_data[5] * dnormT_data[2] * dnormT_data[5] *
                          c_y) + 4620.0 * dT_data[2] * dnormT_data[3] *
                          dnormT_data[5] * c_y) + 2640.0 * dT_data[8] *
                          dnormT_data[0] * dnormT_data[6] * c_y) + 3960.0 *
                          dT_data[5] * dnormT_data[1] * dnormT_data[6] * c_y) +
                          2640.0 * dT_data[2] * dnormT_data[2] * dnormT_data[6] *
                          c_y) + 990.0 * dT_data[5] * dnormT_data[0] *
                          dnormT_data[7] * c_y) + 990.0 * dT_data[2] *
                          dnormT_data[1] * dnormT_data[7] * c_y) + 220.0 *
                          dT_data[2] * dnormT_data[0] * dnormT_data[8] * c_y) +
                          -11.0 * dT_data[2] * dnormT_data[9] * dnormT_tmp) +
                          -11.0 * dT_data[29] * dnormT_data[0] * dnormT_tmp) +
                          -55.0 * dT_data[26] * dnormT_data[1] * dnormT_tmp) +
                          -165.0 * dT_data[23] * dnormT_data[2] * dnormT_tmp) +
                          -330.0 * dT_data[20] * dnormT_data[3] * dnormT_tmp) +
                          -462.0 * dT_data[17] * dnormT_data[4] * dnormT_tmp) +
                          -462.0 * dT_data[14] * dnormT_data[5] * dnormT_tmp) +
                          -330.0 * dT_data[11] * dnormT_data[6] * dnormT_tmp) +
                          -165.0 * dT_data[8] * dnormT_data[7] * dnormT_tmp) +
                          -55.0 * dT_data[5] * dnormT_data[8] * dnormT_tmp) +
                          dT_data[32] * y) + d0 * T[2]) + d1 * T[2]) + d2 * T[2])
                          + d3 * T[2]) + d4 * T[2]) + d5 * T[2]) + d6 * T[2]) +
                          d7 * T[2]) + d8 * T[2]) + d9 * T[2]) + d10 * T[2]) +
                          d11 * T[2]) + d12 * T[2]) + d13 * T[2]) + d14 * T[2])
                          + d15 * T[2]) + d16 * T[2]) + d17 * T[2]) + d18 * T[2])
                          + d19 * T[2]) + d20 * T[2]) + d21 * T[2]) + d22 * T[2])
                          + d23 * T[2]) + d24 * T[2]) + d25 * T[2]) + d26 * T[2])
                          + d27 * T[2]) + d28 * T[2]) + d29 * T[2]) + d30 * T[2])
                          + d31 * T[2]) + d32 * T[2]) + d33 * T[2]) + d34 * T[2])
                          + d35 * T[2]) + d36 * T[2]) + d37 * T[2]) + d38 * T[2])
                                          + d39 * T[2]) + d40 * T[2]) + d41 * T
                                        [2]) + d42 * T[2]) + d43 * T[2]) + d44 *
                                     T[2]) + d45 * T[2]) + d46 * T[2]) + d47 *
                                  T[2]) + d48 * T[2]) + d49 * T[2]) + d50 * T[2])
                              + d51 * T[2]) + d52 * T[2]) + d53 * T[2]) + d54 *
                           T[2]) + dnormT * T[2];
                        if (dT_size[1] > 11) {
                          if (12 > dnormT_size[1]) {
                            emlrtDynamicBoundsCheckR2012b(12, 1, dnormT_size[1],
                              &c_emlrtBCI, sp);
                          }

                          y = 1.0 / normT;
                          eb_y = muDoubleScalarPower(dnormT_data[0], 12.0);
                          fb_y = muDoubleScalarPower(normT, -13.0);
                          d0 = 4.790016E+8 * eb_y * fb_y;
                          d1 = -2.6345088E+9 * x_y * dnormT_data[1] * db_y;
                          d2 = 5.388768E+9 * q_y * h_y * y_y;
                          d3 = 7.98336E+8 * u_y * dnormT_data[2] * y_y;
                          d4 = -5.0295168E+9 * k_y * m_y * v_y;
                          d5 = -2.8740096E+9 * o_y * dnormT_data[1] *
                            dnormT_data[2] * v_y;
                          d6 = -1.796256E+8 * q_y * dnormT_data[3] * v_y;
                          d7 = 2.095632E+9 * f_y * s_y * r_y;
                          d8 = 3.3530112E+9 * i_y * h_y * dnormT_data[2] * r_y;
                          d9 = 3.725568E+8 * k_y * n_y * r_y;
                          d10 = 5.588352E+8 * k_y * dnormT_data[1] *
                            dnormT_data[3] * r_y;
                          d11 = 3.193344E+7 * o_y * dnormT_data[4] * r_y;
                          d12 = -3.143448E+8 * b_y * ab_y * p_y;
                          d13 = -1.397088E+9 * d_y * m_y * dnormT_data[2] * p_y;
                          d14 = -6.98544E+8 * f_y * dnormT_data[1] * n_y * p_y;
                          d15 = -5.23908E+8 * f_y * h_y * dnormT_data[3] * p_y;
                          d16 = -1.397088E+8 * i_y * dnormT_data[2] *
                            dnormT_data[3] * p_y;
                          d17 = -8.382528E+7 * i_y * dnormT_data[1] *
                            dnormT_data[4] * p_y;
                          d18 = -4.65696E+6 * k_y * dnormT_data[5] * p_y;
                          gb_y = muDoubleScalarPower(dnormT_data[1], 6.0);
                          d19 = 7.4844E+6 * gb_y * l_y;
                          d20 = 1.49688E+8 * dnormT_data[0] * s_y * dnormT_data
                            [2] * l_y;
                          d21 = 2.99376E+8 * b_y * h_y * n_y * l_y;
                          d22 = 4.4352E+7 * d_y * w_y * l_y;
                          d23 = 1.49688E+8 * b_y * m_y * dnormT_data[3] * l_y;
                          d24 = 1.99584E+8 * d_y * dnormT_data[1] * dnormT_data
                            [2] * dnormT_data[3] * l_y;
                          d25 = 1.2474E+7 * f_y * t_y * l_y;
                          d26 = 5.98752E+7 * d_y * h_y * dnormT_data[4] * l_y;
                          d27 = 1.99584E+7 * f_y * dnormT_data[2] * dnormT_data
                            [4] * l_y;
                          d28 = 9.9792E+6 * f_y * dnormT_data[1] * dnormT_data[5]
                            * l_y;
                          d29 = 570240.0 * i_y * dnormT_data[6] * l_y;
                          d30 = -1.6632E+7 * m_y * n_y * j_y;
                          d31 = -2.2176E+7 * dnormT_data[0] * dnormT_data[1] *
                            w_y * j_y;
                          d32 = -6.237E+6 * s_y * dnormT_data[3] * j_y;
                          d33 = -4.9896E+7 * dnormT_data[0] * h_y * dnormT_data
                            [2] * dnormT_data[3] * j_y;
                          d34 = -1.6632E+7 * b_y * n_y * dnormT_data[3] * j_y;
                          d35 = -1.2474E+7 * b_y * dnormT_data[1] * t_y * j_y;
                          d36 = -9.9792E+6 * dnormT_data[0] * m_y * dnormT_data
                            [4] * j_y;
                          d37 = -1.99584E+7 * b_y * dnormT_data[1] *
                            dnormT_data[2] * dnormT_data[4] * j_y;
                          d38 = -3.3264E+6 * d_y * dnormT_data[3] * dnormT_data
                            [4] * j_y;
                          d39 = -4.9896E+6 * b_y * h_y * dnormT_data[5] * j_y;
                          d40 = -2.2176E+6 * d_y * dnormT_data[2] * dnormT_data
                            [5] * j_y;
                          d41 = -950400.0 * d_y * dnormT_data[1] * dnormT_data[6]
                            * j_y;
                          d42 = -59400.0 * f_y * dnormT_data[7] * j_y;
                          hb_y = muDoubleScalarPower(dnormT_data[2], 4.0);
                          d43 = 369600.0 * hb_y * g_y;
                          d44 = 3.3264E+6 * dnormT_data[1] * n_y * dnormT_data[3]
                            * g_y;
                          d45 = 1.2474E+6 * h_y * t_y * g_y;
                          d46 = 1.6632E+6 * dnormT_data[0] * dnormT_data[2] *
                            t_y * g_y;
                          d47 = 1.99584E+6 * h_y * dnormT_data[2] * dnormT_data
                            [4] * g_y;
                          d48 = 1.33056E+6 * dnormT_data[0] * n_y * dnormT_data
                            [4] * g_y;
                          d49 = 1.99584E+6 * dnormT_data[0] * dnormT_data[1] *
                            dnormT_data[3] * dnormT_data[4] * g_y;
                          d50 = 199584.0 * b_y * bb_y * g_y;
                          d51 = 332640.0 * m_y * dnormT_data[5] * g_y;
                          d52 = 1.33056E+6 * dnormT_data[0] * dnormT_data[1] *
                            dnormT_data[2] * dnormT_data[5] * g_y;
                          d53 = 332640.0 * b_y * dnormT_data[3] * dnormT_data[5]
                            * g_y;
                          d54 = 285120.0 * dnormT_data[0] * h_y * dnormT_data[6]
                            * g_y;
                          d55 = 190080.0 * b_y * dnormT_data[2] * dnormT_data[6]
                            * g_y;
                          d56 = 71280.0 * b_y * dnormT_data[1] * dnormT_data[7] *
                            g_y;
                          d57 = 5280.0 * d_y * dnormT_data[8] * g_y;
                          d58 = -396.0 * dnormT_data[9] * b_y * e_y;
                          ib_y = muDoubleScalarPower(dnormT_data[3], 3.0);
                          d59 = -34650.0 * ib_y * e_y;
                          d60 = -166320.0 * dnormT_data[2] * dnormT_data[3] *
                            dnormT_data[4] * e_y;
                          d61 = -49896.0 * dnormT_data[1] * bb_y * e_y;
                          d62 = -55440.0 * n_y * dnormT_data[5] * e_y;
                          d63 = -83160.0 * dnormT_data[1] * dnormT_data[3] *
                            dnormT_data[5] * e_y;
                          d64 = -33264.0 * dnormT_data[0] * dnormT_data[4] *
                            dnormT_data[5] * e_y;
                          d65 = -47520.0 * dnormT_data[1] * dnormT_data[2] *
                            dnormT_data[6] * e_y;
                          d66 = -23760.0 * dnormT_data[0] * dnormT_data[3] *
                            dnormT_data[6] * e_y;
                          d67 = -8910.0 * h_y * dnormT_data[7] * e_y;
                          d68 = -11880.0 * dnormT_data[0] * dnormT_data[2] *
                            dnormT_data[7] * e_y;
                          d69 = -3960.0 * dnormT_data[0] * dnormT_data[1] *
                            dnormT_data[8] * e_y;
                          d70 = 24.0 * dnormT_data[10] * dnormT_data[0] * c_y;
                          d71 = 132.0 * dnormT_data[9] * dnormT_data[1] * c_y;
                          jb_y = dnormT_data[5] * dnormT_data[5];
                          d72 = 924.0 * jb_y * c_y;
                          d73 = 1584.0 * dnormT_data[4] * dnormT_data[6] * c_y;
                          d74 = 990.0 * dnormT_data[3] * dnormT_data[7] * c_y;
                          d75 = 440.0 * dnormT_data[2] * dnormT_data[8] * c_y;
                          dnormT = -dnormT_data[11] * dnormT_tmp;
                          dq_data[33] =
                            (((((((((((((((((((((((((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((((((((((((((((((((((((((
                            (((((-4.790016E+8 * dT_data[0] * cb_y * db_y +
                            2.395008E+8 * dT_data[3] * x_y * y_y) + 2.395008E+9 *
                            dT_data[0] * u_y * dnormT_data[1] * y_y) +
                            -7.98336E+7 * dT_data[6] * u_y * v_y) +
                            -1.0777536E+9 * dT_data[3] * q_y * dnormT_data[1] *
                            v_y) + -4.3110144E+9 * dT_data[0] * o_y * h_y * v_y)
                            + -7.185024E+8 * dT_data[0] * q_y * dnormT_data[2] *
                            v_y) + 1.99584E+7 * dT_data[9] * q_y * r_y) +
                            3.193344E+8 * dT_data[6] * o_y * dnormT_data[1] *
                            r_y) + 1.6765056E+9 * dT_data[3] * k_y * h_y * r_y)
                            + 3.3530112E+9 * dT_data[0] * i_y * m_y * r_y) +
                            3.193344E+8 * dT_data[3] * o_y * dnormT_data[2] *
                            r_y) + 2.2353408E+9 * dT_data[0] * k_y *
                            dnormT_data[1] * dnormT_data[2] * r_y) + 1.596672E+8
                            * dT_data[0] * o_y * dnormT_data[3] * r_y) +
                            -3.99168E+6 * dT_data[12] * o_y * p_y) + -6.98544E+7
                            * dT_data[9] * k_y * dnormT_data[1] * p_y) +
                            -4.191264E+8 * dT_data[6] * i_y * h_y * p_y) +
                            -1.047816E+9 * dT_data[3] * f_y * m_y * p_y) +
                            -1.047816E+9 * dT_data[0] * d_y * s_y * p_y) +
                            -9.31392E+7 * dT_data[6] * k_y * dnormT_data[2] *
                            p_y) + -8.382528E+8 * dT_data[3] * i_y *
                            dnormT_data[1] * dnormT_data[2] * p_y) +
                            -2.095632E+9 * dT_data[0] * f_y * h_y * dnormT_data
                            [2] * p_y) + -2.794176E+8 * dT_data[0] * i_y * n_y *
                            p_y) + -6.98544E+7 * dT_data[3] * k_y * dnormT_data
                            [3] * p_y) + -4.191264E+8 * dT_data[0] * i_y *
                            dnormT_data[1] * dnormT_data[3] * p_y) +
                            -2.794176E+7 * dT_data[0] * k_y * dnormT_data[4] *
                            p_y) + 665280.0 * dT_data[15] * k_y * l_y) +
                            1.197504E+7 * dT_data[12] * i_y * dnormT_data[1] *
                            l_y) + 7.4844E+7 * dT_data[9] * f_y * h_y * l_y) +
                            1.99584E+8 * dT_data[6] * d_y * m_y * l_y) +
                            2.24532E+8 * dT_data[3] * b_y * s_y * l_y) +
                            8.98128E+7 * dT_data[0] * dnormT_data[0] * ab_y *
                            l_y) + 1.99584E+7 * dT_data[9] * i_y * dnormT_data[2]
                            * l_y) + 1.99584E+8 * dT_data[6] * f_y *
                            dnormT_data[1] * dnormT_data[2] * l_y) + 5.98752E+8 *
                            dT_data[3] * d_y * h_y * dnormT_data[2] * l_y) +
                            5.98752E+8 * dT_data[0] * b_y * m_y * dnormT_data[2]
                            * l_y) + 9.9792E+7 * dT_data[3] * f_y * n_y * l_y) +
                            3.99168E+8 * dT_data[0] * d_y * dnormT_data[1] * n_y
                            * l_y) + 1.99584E+7 * dT_data[6] * i_y *
                            dnormT_data[3] * l_y) + 1.49688E+8 * dT_data[3] *
                            f_y * dnormT_data[1] * dnormT_data[3] * l_y) +
                            2.99376E+8 * dT_data[0] * d_y * h_y * dnormT_data[3]
                            * l_y) + 9.9792E+7 * dT_data[0] * f_y * dnormT_data
                            [2] * dnormT_data[3] * l_y) + 1.197504E+7 * dT_data
                            [3] * i_y * dnormT_data[4] * l_y) + 5.98752E+7 *
                            dT_data[0] * f_y * dnormT_data[1] * dnormT_data[4] *
                            l_y) + 3.99168E+6 * dT_data[0] * i_y * dnormT_data[5]
                            * l_y) + -95040.0 * dT_data[18] * i_y * j_y) +
                            -1.6632E+6 * dT_data[15] * f_y * dnormT_data[1] *
                            j_y) + -9.9792E+6 * dT_data[12] * d_y * h_y * j_y) +
                            -2.4948E+7 * dT_data[9] * b_y * m_y * j_y) +
                            -2.4948E+7 * dT_data[6] * dnormT_data[0] * s_y * j_y)
                            + -7.4844E+6 * dT_data[3] * ab_y * j_y) + -3.3264E+6
                            * dT_data[12] * f_y * dnormT_data[2] * j_y) +
                            -3.3264E+7 * dT_data[9] * d_y * dnormT_data[1] *
                            dnormT_data[2] * j_y) + -9.9792E+7 * dT_data[6] *
                            b_y * h_y * dnormT_data[2] * j_y) + -9.9792E+7 *
                            dT_data[3] * dnormT_data[0] * m_y * dnormT_data[2] *
                            j_y) + -2.4948E+7 * dT_data[0] * s_y * dnormT_data[2]
                            * j_y) + -2.2176E+7 * dT_data[6] * d_y * n_y * j_y)
                            + -9.9792E+7 * dT_data[3] * b_y * dnormT_data[1] *
                            n_y * j_y) + -9.9792E+7 * dT_data[0] * dnormT_data[0]
                            * h_y * n_y * j_y) + -2.2176E+7 * dT_data[0] * b_y *
                            w_y * j_y) + -4.158E+6 * dT_data[9] * f_y *
                            dnormT_data[3] * j_y) + -3.3264E+7 * dT_data[6] *
                            d_y * dnormT_data[1] * dnormT_data[3] * j_y) +
                            -7.4844E+7 * dT_data[3] * b_y * h_y * dnormT_data[3]
                            * j_y) + -4.9896E+7 * dT_data[0] * dnormT_data[0] *
                            m_y * dnormT_data[3] * j_y) + -3.3264E+7 * dT_data[3]
                            * d_y * dnormT_data[2] * dnormT_data[3] * j_y) +
                            -9.9792E+7 * dT_data[0] * b_y * dnormT_data[1] *
                            dnormT_data[2] * dnormT_data[3] * j_y) + -8.316E+6 *
                            dT_data[0] * d_y * t_y * j_y) + -3.3264E+6 *
                            dT_data[6] * f_y * dnormT_data[4] * j_y) +
                            -1.99584E+7 * dT_data[3] * d_y * dnormT_data[1] *
                            dnormT_data[4] * j_y) + -2.99376E+7 * dT_data[0] *
                            b_y * h_y * dnormT_data[4] * j_y) + -1.33056E+7 *
                            dT_data[0] * d_y * dnormT_data[2] * dnormT_data[4] *
                            j_y) + -1.6632E+6 * dT_data[3] * f_y * dnormT_data[5]
                            * j_y) + -6.6528E+6 * dT_data[0] * d_y *
                            dnormT_data[1] * dnormT_data[5] * j_y) + -475200.0 *
                            dT_data[0] * f_y * dnormT_data[6] * j_y) + 11880.0 *
                            dT_data[21] * f_y * g_y) + 190080.0 * dT_data[18] *
                            d_y * dnormT_data[1] * g_y) + 997920.0 * dT_data[15]
                            * b_y * h_y * g_y) + 1.99584E+6 * dT_data[12] *
                            dnormT_data[0] * m_y * g_y) + 1.2474E+6 * dT_data[9]
                            * s_y * g_y) + 443520.0 * dT_data[15] * d_y *
                            dnormT_data[2] * g_y) + 3.99168E+6 * dT_data[12] *
                            b_y * dnormT_data[1] * dnormT_data[2] * g_y) +
                            9.9792E+6 * dT_data[9] * dnormT_data[0] * h_y *
                            dnormT_data[2] * g_y) + 6.6528E+6 * dT_data[6] * m_y
                            * dnormT_data[2] * g_y) + 3.3264E+6 * dT_data[9] *
                            b_y * n_y * g_y) + 1.33056E+7 * dT_data[6] *
                            dnormT_data[0] * dnormT_data[1] * n_y * g_y) +
                            9.9792E+6 * dT_data[3] * h_y * n_y * g_y) +
                            4.4352E+6 * dT_data[3] * dnormT_data[0] * w_y * g_y)
                            + 4.4352E+6 * dT_data[0] * dnormT_data[1] * w_y *
                            g_y) + 665280.0 * dT_data[12] * d_y * dnormT_data[3]
                            * g_y) + 4.9896E+6 * dT_data[9] * b_y * dnormT_data
                            [1] * dnormT_data[3] * g_y) + 9.9792E+6 * dT_data[6]
                            * dnormT_data[0] * h_y * dnormT_data[3] * g_y) +
                            4.9896E+6 * dT_data[3] * m_y * dnormT_data[3] * g_y)
                            + 6.6528E+6 * dT_data[6] * b_y * dnormT_data[2] *
                            dnormT_data[3] * g_y) + 1.99584E+7 * dT_data[3] *
                            dnormT_data[0] * dnormT_data[1] * dnormT_data[2] *
                            dnormT_data[3] * g_y) + 9.9792E+6 * dT_data[0] * h_y
                            * dnormT_data[2] * dnormT_data[3] * g_y) + 6.6528E+6
                            * dT_data[0] * dnormT_data[0] * n_y * dnormT_data[3]
                            * g_y) + 2.4948E+6 * dT_data[3] * b_y * t_y * g_y) +
                            4.9896E+6 * dT_data[0] * dnormT_data[0] *
                            dnormT_data[1] * t_y * g_y) + 665280.0 * dT_data[9] *
                            d_y * dnormT_data[4] * g_y) + 3.99168E+6 * dT_data[6]
                            * b_y * dnormT_data[1] * dnormT_data[4] * g_y) +
                            5.98752E+6 * dT_data[3] * dnormT_data[0] * h_y *
                            dnormT_data[4] * g_y) + 1.99584E+6 * dT_data[0] *
                            m_y * dnormT_data[4] * g_y) + 3.99168E+6 * dT_data[3]
                            * b_y * dnormT_data[2] * dnormT_data[4] * g_y) +
                            7.98336E+6 * dT_data[0] * dnormT_data[0] *
                            dnormT_data[1] * dnormT_data[2] * dnormT_data[4] *
                            g_y) + 1.99584E+6 * dT_data[0] * b_y * dnormT_data[3]
                            * dnormT_data[4] * g_y) + 443520.0 * dT_data[6] *
                            d_y * dnormT_data[5] * g_y) + 1.99584E+6 * dT_data[3]
                            * b_y * dnormT_data[1] * dnormT_data[5] * g_y) +
                            1.99584E+6 * dT_data[0] * dnormT_data[0] * h_y *
                            dnormT_data[5] * g_y) + 1.33056E+6 * dT_data[0] *
                            b_y * dnormT_data[2] * dnormT_data[5] * g_y) +
                            190080.0 * dT_data[3] * d_y * dnormT_data[6] * g_y)
                            + 570240.0 * dT_data[0] * b_y * dnormT_data[1] *
                            dnormT_data[6] * g_y) + 47520.0 * dT_data[0] * d_y *
                            dnormT_data[7] * g_y) + -1320.0 * dT_data[24] * d_y *
                            e_y) + -17820.0 * dT_data[21] * b_y * dnormT_data[1]
                            * e_y) + -71280.0 * dT_data[18] * dnormT_data[0] *
                            h_y * e_y) + -83160.0 * dT_data[15] * m_y * e_y) +
                            -47520.0 * dT_data[18] * b_y * dnormT_data[2] * e_y)
                            + -332640.0 * dT_data[15] * dnormT_data[0] *
                            dnormT_data[1] * dnormT_data[2] * e_y) + -498960.0 *
                            dT_data[12] * h_y * dnormT_data[2] * e_y) +
                            -332640.0 * dT_data[12] * dnormT_data[0] * n_y * e_y)
                            + -831600.0 * dT_data[9] * dnormT_data[1] * n_y *
                            e_y) + -369600.0 * dT_data[6] * w_y * e_y) +
                            -83160.0 * dT_data[15] * b_y * dnormT_data[3] * e_y)
                            + -498960.0 * dT_data[12] * dnormT_data[0] *
                            dnormT_data[1] * dnormT_data[3] * e_y) + -623700.0 *
                            dT_data[9] * h_y * dnormT_data[3] * e_y) + -831600.0
                            * dT_data[9] * dnormT_data[0] * dnormT_data[2] *
                            dnormT_data[3] * e_y) + -1.6632E+6 * dT_data[6] *
                            dnormT_data[1] * dnormT_data[2] * dnormT_data[3] *
                            e_y) + -831600.0 * dT_data[3] * n_y * dnormT_data[3]
                            * e_y) + -415800.0 * dT_data[6] * dnormT_data[0] *
                            t_y * e_y) + -623700.0 * dT_data[3] * dnormT_data[1]
                            * t_y * e_y) + -415800.0 * dT_data[0] * dnormT_data
                            [2] * t_y * e_y) + -99792.0 * dT_data[12] * b_y *
                            dnormT_data[4] * e_y) + -498960.0 * dT_data[9] *
                            dnormT_data[0] * dnormT_data[1] * dnormT_data[4] *
                            e_y) + -498960.0 * dT_data[6] * h_y * dnormT_data[4]
                            * e_y) + -665280.0 * dT_data[6] * dnormT_data[0] *
                            dnormT_data[2] * dnormT_data[4] * e_y) + -997920.0 *
                            dT_data[3] * dnormT_data[1] * dnormT_data[2] *
                            dnormT_data[4] * e_y) + -332640.0 * dT_data[0] * n_y
                            * dnormT_data[4] * e_y) + -498960.0 * dT_data[3] *
                            dnormT_data[0] * dnormT_data[3] * dnormT_data[4] *
                            e_y) + -498960.0 * dT_data[0] * dnormT_data[1] *
                            dnormT_data[3] * dnormT_data[4] * e_y) + -99792.0 *
                            dT_data[0] * dnormT_data[0] * bb_y * e_y) + -83160.0
                            * dT_data[9] * b_y * dnormT_data[5] * e_y) +
                            -332640.0 * dT_data[6] * dnormT_data[0] *
                            dnormT_data[1] * dnormT_data[5] * e_y) + -249480.0 *
                            dT_data[3] * h_y * dnormT_data[5] * e_y) + -332640.0
                            * dT_data[3] * dnormT_data[0] * dnormT_data[2] *
                            dnormT_data[5] * e_y) + -332640.0 * dT_data[0] *
                            dnormT_data[1] * dnormT_data[2] * dnormT_data[5] *
                            e_y) + -166320.0 * dT_data[0] * dnormT_data[0] *
                            dnormT_data[3] * dnormT_data[5] * e_y) + -47520.0 *
                            dT_data[6] * b_y * dnormT_data[6] * e_y) + -142560.0
                            * dT_data[3] * dnormT_data[0] * dnormT_data[1] *
                            dnormT_data[6] * e_y) + -71280.0 * dT_data[0] * h_y *
                            dnormT_data[6] * e_y) + -95040.0 * dT_data[0] *
                            dnormT_data[0] * dnormT_data[2] * dnormT_data[6] *
                            e_y) + -17820.0 * dT_data[3] * b_y * dnormT_data[7] *
                            e_y) + -35640.0 * dT_data[0] * dnormT_data[0] *
                            dnormT_data[1] * dnormT_data[7] * e_y) + -3960.0 *
                            dT_data[0] * b_y * dnormT_data[8] * e_y) + 264.0 *
                            dT_data[0] * dnormT_data[9] * dnormT_data[0] * c_y)
                            + 132.0 * dT_data[27] * b_y * c_y) + 1320.0 *
                            dT_data[24] * dnormT_data[0] * dnormT_data[1] * c_y)
                            + 2970.0 * dT_data[21] * h_y * c_y) + 3960.0 *
                            dT_data[21] * dnormT_data[0] * dnormT_data[2] * c_y)
                            + 15840.0 * dT_data[18] * dnormT_data[1] *
                            dnormT_data[2] * c_y) + 18480.0 * dT_data[15] * n_y *
                            c_y) + 7920.0 * dT_data[18] * dnormT_data[0] *
                            dnormT_data[3] * c_y) + 27720.0 * dT_data[15] *
                            dnormT_data[1] * dnormT_data[3] * c_y) + 55440.0 *
                            dT_data[12] * dnormT_data[2] * dnormT_data[3] * c_y)
                            + 34650.0 * dT_data[9] * t_y * c_y) + 11088.0 *
                            dT_data[15] * dnormT_data[0] * dnormT_data[4] * c_y)
                            + 33264.0 * dT_data[12] * dnormT_data[1] *
                            dnormT_data[4] * c_y) + 55440.0 * dT_data[9] *
                            dnormT_data[2] * dnormT_data[4] * c_y) + 55440.0 *
                            dT_data[6] * dnormT_data[3] * dnormT_data[4] * c_y)
                            + 16632.0 * dT_data[3] * bb_y * c_y) + 11088.0 *
                            dT_data[12] * dnormT_data[0] * dnormT_data[5] * c_y)
                            + 27720.0 * dT_data[9] * dnormT_data[1] *
                            dnormT_data[5] * c_y) + 36960.0 * dT_data[6] *
                            dnormT_data[2] * dnormT_data[5] * c_y) + 27720.0 *
                            dT_data[3] * dnormT_data[3] * dnormT_data[5] * c_y)
                            + 11088.0 * dT_data[0] * dnormT_data[4] *
                            dnormT_data[5] * c_y) + 7920.0 * dT_data[9] *
                            dnormT_data[0] * dnormT_data[6] * c_y) + 15840.0 *
                            dT_data[6] * dnormT_data[1] * dnormT_data[6] * c_y)
                            + 15840.0 * dT_data[3] * dnormT_data[2] *
                            dnormT_data[6] * c_y) + 7920.0 * dT_data[0] *
                            dnormT_data[3] * dnormT_data[6] * c_y) + 3960.0 *
                            dT_data[6] * dnormT_data[0] * dnormT_data[7] * c_y)
                            + 5940.0 * dT_data[3] * dnormT_data[1] *
                            dnormT_data[7] * c_y) + 3960.0 * dT_data[0] *
                            dnormT_data[2] * dnormT_data[7] * c_y) + 1320.0 *
                            dT_data[3] * dnormT_data[0] * dnormT_data[8] * c_y)
                            + 1320.0 * dT_data[0] * dnormT_data[1] *
                            dnormT_data[8] * c_y) + -66.0 * dT_data[3] *
                            dnormT_data[9] * dnormT_tmp) + -12.0 * dT_data[0] *
                            dnormT_data[10] * dnormT_tmp) + -12.0 * dT_data[30] *
                            dnormT_data[0] * dnormT_tmp) + -66.0 * dT_data[27] *
                            dnormT_data[1] * dnormT_tmp) + -220.0 * dT_data[24] *
                            dnormT_data[2] * dnormT_tmp) + -495.0 * dT_data[21] *
                            dnormT_data[3] * dnormT_tmp) + -792.0 * dT_data[18] *
                            dnormT_data[4] * dnormT_tmp) + -924.0 * dT_data[15] *
                            dnormT_data[5] * dnormT_tmp) + -792.0 * dT_data[12] *
                            dnormT_data[6] * dnormT_tmp) + -495.0 * dT_data[9] *
                            dnormT_data[7] * dnormT_tmp) + -220.0 * dT_data[6] *
                            dnormT_data[8] * dnormT_tmp) + dT_data[33] * y) + d0
                            * T[0]) + d1 * T[0]) + d2 * T[0]) + d3 * T[0]) + d4 *
                            T[0]) + d5 * T[0]) + d6 * T[0]) + d7 * T[0]) + d8 *
                            T[0]) + d9 * T[0]) + d10 * T[0]) + d11 * T[0]) + d12
                            * T[0]) + d13 * T[0]) + d14 * T[0]) + d15 * T[0]) +
                            d16 * T[0]) + d17 * T[0]) + d18 * T[0]) + d19 * T[0])
                            + d20 * T[0]) + d21 * T[0]) + d22 * T[0]) + d23 * T
                            [0]) + d24 * T[0]) + d25 * T[0]) + d26 * T[0]) + d27
                            * T[0]) + d28 * T[0]) + d29 * T[0]) + d30 * T[0]) +
                            d31 * T[0]) + d32 * T[0]) + d33 * T[0]) + d34 * T[0])
                            + d35 * T[0]) + d36 * T[0]) + d37 * T[0]) + d38 * T
                            [0]) + d39 * T[0]) + d40 * T[0]) + d41 * T[0]) + d42
                            * T[0]) + d43 * T[0]) + d44 * T[0]) + d45 * T[0]) +
                            d46 * T[0]) + d47 * T[0]) + d48 * T[0]) + d49 * T[0])
                            + d50 * T[0]) + d51 * T[0]) + d52 * T[0]) + d53 * T
                            [0]) + d54 * T[0]) + d55 * T[0]) + d56 * T[0]) + d57
                                               * T[0]) + d58 * T[0]) + d59 * T[0])
                                            + d60 * T[0]) + d61 * T[0]) + d62 *
                                          T[0]) + d63 * T[0]) + d64 * T[0]) +
                                       d65 * T[0]) + d66 * T[0]) + d67 * T[0]) +
                                    d68 * T[0]) + d69 * T[0]) + d70 * T[0]) +
                                 d71 * T[0]) + d72 * T[0]) + d73 * T[0]) + d74 *
                              T[0]) + d75 * T[0]) + dnormT * T[0];
                          dq_data[34] =
                            (((((((((((((((((((((((((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((((((((((((((((((((((((((
                            (((((-4.790016E+8 * dT_data[1] * cb_y * db_y +
                            2.395008E+8 * dT_data[4] * x_y * y_y) + 2.395008E+9 *
                            dT_data[1] * u_y * dnormT_data[1] * y_y) +
                            -7.98336E+7 * dT_data[7] * u_y * v_y) +
                            -1.0777536E+9 * dT_data[4] * q_y * dnormT_data[1] *
                            v_y) + -4.3110144E+9 * dT_data[1] * o_y * h_y * v_y)
                            + -7.185024E+8 * dT_data[1] * q_y * dnormT_data[2] *
                            v_y) + 1.99584E+7 * dT_data[10] * q_y * r_y) +
                            3.193344E+8 * dT_data[7] * o_y * dnormT_data[1] *
                            r_y) + 1.6765056E+9 * dT_data[4] * k_y * h_y * r_y)
                            + 3.3530112E+9 * dT_data[1] * i_y * m_y * r_y) +
                            3.193344E+8 * dT_data[4] * o_y * dnormT_data[2] *
                            r_y) + 2.2353408E+9 * dT_data[1] * k_y *
                            dnormT_data[1] * dnormT_data[2] * r_y) + 1.596672E+8
                            * dT_data[1] * o_y * dnormT_data[3] * r_y) +
                            -3.99168E+6 * dT_data[13] * o_y * p_y) + -6.98544E+7
                            * dT_data[10] * k_y * dnormT_data[1] * p_y) +
                            -4.191264E+8 * dT_data[7] * i_y * h_y * p_y) +
                            -1.047816E+9 * dT_data[4] * f_y * m_y * p_y) +
                            -1.047816E+9 * dT_data[1] * d_y * s_y * p_y) +
                            -9.31392E+7 * dT_data[7] * k_y * dnormT_data[2] *
                            p_y) + -8.382528E+8 * dT_data[4] * i_y *
                            dnormT_data[1] * dnormT_data[2] * p_y) +
                            -2.095632E+9 * dT_data[1] * f_y * h_y * dnormT_data
                            [2] * p_y) + -2.794176E+8 * dT_data[1] * i_y * n_y *
                            p_y) + -6.98544E+7 * dT_data[4] * k_y * dnormT_data
                            [3] * p_y) + -4.191264E+8 * dT_data[1] * i_y *
                            dnormT_data[1] * dnormT_data[3] * p_y) +
                            -2.794176E+7 * dT_data[1] * k_y * dnormT_data[4] *
                            p_y) + 665280.0 * dT_data[16] * k_y * l_y) +
                            1.197504E+7 * dT_data[13] * i_y * dnormT_data[1] *
                            l_y) + 7.4844E+7 * dT_data[10] * f_y * h_y * l_y) +
                            1.99584E+8 * dT_data[7] * d_y * m_y * l_y) +
                            2.24532E+8 * dT_data[4] * b_y * s_y * l_y) +
                            8.98128E+7 * dT_data[1] * dnormT_data[0] * ab_y *
                            l_y) + 1.99584E+7 * dT_data[10] * i_y * dnormT_data
                            [2] * l_y) + 1.99584E+8 * dT_data[7] * f_y *
                            dnormT_data[1] * dnormT_data[2] * l_y) + 5.98752E+8 *
                            dT_data[4] * d_y * h_y * dnormT_data[2] * l_y) +
                            5.98752E+8 * dT_data[1] * b_y * m_y * dnormT_data[2]
                            * l_y) + 9.9792E+7 * dT_data[4] * f_y * n_y * l_y) +
                            3.99168E+8 * dT_data[1] * d_y * dnormT_data[1] * n_y
                            * l_y) + 1.99584E+7 * dT_data[7] * i_y *
                            dnormT_data[3] * l_y) + 1.49688E+8 * dT_data[4] *
                            f_y * dnormT_data[1] * dnormT_data[3] * l_y) +
                            2.99376E+8 * dT_data[1] * d_y * h_y * dnormT_data[3]
                            * l_y) + 9.9792E+7 * dT_data[1] * f_y * dnormT_data
                            [2] * dnormT_data[3] * l_y) + 1.197504E+7 * dT_data
                            [4] * i_y * dnormT_data[4] * l_y) + 5.98752E+7 *
                            dT_data[1] * f_y * dnormT_data[1] * dnormT_data[4] *
                            l_y) + 3.99168E+6 * dT_data[1] * i_y * dnormT_data[5]
                            * l_y) + -95040.0 * dT_data[19] * i_y * j_y) +
                            -1.6632E+6 * dT_data[16] * f_y * dnormT_data[1] *
                            j_y) + -9.9792E+6 * dT_data[13] * d_y * h_y * j_y) +
                            -2.4948E+7 * dT_data[10] * b_y * m_y * j_y) +
                            -2.4948E+7 * dT_data[7] * dnormT_data[0] * s_y * j_y)
                            + -7.4844E+6 * dT_data[4] * ab_y * j_y) + -3.3264E+6
                            * dT_data[13] * f_y * dnormT_data[2] * j_y) +
                            -3.3264E+7 * dT_data[10] * d_y * dnormT_data[1] *
                            dnormT_data[2] * j_y) + -9.9792E+7 * dT_data[7] *
                            b_y * h_y * dnormT_data[2] * j_y) + -9.9792E+7 *
                            dT_data[4] * dnormT_data[0] * m_y * dnormT_data[2] *
                            j_y) + -2.4948E+7 * dT_data[1] * s_y * dnormT_data[2]
                            * j_y) + -2.2176E+7 * dT_data[7] * d_y * n_y * j_y)
                            + -9.9792E+7 * dT_data[4] * b_y * dnormT_data[1] *
                            n_y * j_y) + -9.9792E+7 * dT_data[1] * dnormT_data[0]
                            * h_y * n_y * j_y) + -2.2176E+7 * dT_data[1] * b_y *
                            w_y * j_y) + -4.158E+6 * dT_data[10] * f_y *
                            dnormT_data[3] * j_y) + -3.3264E+7 * dT_data[7] *
                            d_y * dnormT_data[1] * dnormT_data[3] * j_y) +
                            -7.4844E+7 * dT_data[4] * b_y * h_y * dnormT_data[3]
                            * j_y) + -4.9896E+7 * dT_data[1] * dnormT_data[0] *
                            m_y * dnormT_data[3] * j_y) + -3.3264E+7 * dT_data[4]
                            * d_y * dnormT_data[2] * dnormT_data[3] * j_y) +
                            -9.9792E+7 * dT_data[1] * b_y * dnormT_data[1] *
                            dnormT_data[2] * dnormT_data[3] * j_y) + -8.316E+6 *
                            dT_data[1] * d_y * t_y * j_y) + -3.3264E+6 *
                            dT_data[7] * f_y * dnormT_data[4] * j_y) +
                            -1.99584E+7 * dT_data[4] * d_y * dnormT_data[1] *
                            dnormT_data[4] * j_y) + -2.99376E+7 * dT_data[1] *
                            b_y * h_y * dnormT_data[4] * j_y) + -1.33056E+7 *
                            dT_data[1] * d_y * dnormT_data[2] * dnormT_data[4] *
                            j_y) + -1.6632E+6 * dT_data[4] * f_y * dnormT_data[5]
                            * j_y) + -6.6528E+6 * dT_data[1] * d_y *
                            dnormT_data[1] * dnormT_data[5] * j_y) + -475200.0 *
                            dT_data[1] * f_y * dnormT_data[6] * j_y) + 11880.0 *
                            dT_data[22] * f_y * g_y) + 190080.0 * dT_data[19] *
                            d_y * dnormT_data[1] * g_y) + 997920.0 * dT_data[16]
                            * b_y * h_y * g_y) + 1.99584E+6 * dT_data[13] *
                            dnormT_data[0] * m_y * g_y) + 1.2474E+6 * dT_data[10]
                            * s_y * g_y) + 443520.0 * dT_data[16] * d_y *
                            dnormT_data[2] * g_y) + 3.99168E+6 * dT_data[13] *
                            b_y * dnormT_data[1] * dnormT_data[2] * g_y) +
                            9.9792E+6 * dT_data[10] * dnormT_data[0] * h_y *
                            dnormT_data[2] * g_y) + 6.6528E+6 * dT_data[7] * m_y
                            * dnormT_data[2] * g_y) + 3.3264E+6 * dT_data[10] *
                            b_y * n_y * g_y) + 1.33056E+7 * dT_data[7] *
                            dnormT_data[0] * dnormT_data[1] * n_y * g_y) +
                            9.9792E+6 * dT_data[4] * h_y * n_y * g_y) +
                            4.4352E+6 * dT_data[4] * dnormT_data[0] * w_y * g_y)
                            + 4.4352E+6 * dT_data[1] * dnormT_data[1] * w_y *
                            g_y) + 665280.0 * dT_data[13] * d_y * dnormT_data[3]
                            * g_y) + 4.9896E+6 * dT_data[10] * b_y *
                            dnormT_data[1] * dnormT_data[3] * g_y) + 9.9792E+6 *
                            dT_data[7] * dnormT_data[0] * h_y * dnormT_data[3] *
                            g_y) + 4.9896E+6 * dT_data[4] * m_y * dnormT_data[3]
                            * g_y) + 6.6528E+6 * dT_data[7] * b_y * dnormT_data
                            [2] * dnormT_data[3] * g_y) + 1.99584E+7 * dT_data[4]
                            * dnormT_data[0] * dnormT_data[1] * dnormT_data[2] *
                            dnormT_data[3] * g_y) + 9.9792E+6 * dT_data[1] * h_y
                            * dnormT_data[2] * dnormT_data[3] * g_y) + 6.6528E+6
                            * dT_data[1] * dnormT_data[0] * n_y * dnormT_data[3]
                            * g_y) + 2.4948E+6 * dT_data[4] * b_y * t_y * g_y) +
                            4.9896E+6 * dT_data[1] * dnormT_data[0] *
                            dnormT_data[1] * t_y * g_y) + 665280.0 * dT_data[10]
                            * d_y * dnormT_data[4] * g_y) + 3.99168E+6 *
                            dT_data[7] * b_y * dnormT_data[1] * dnormT_data[4] *
                            g_y) + 5.98752E+6 * dT_data[4] * dnormT_data[0] *
                            h_y * dnormT_data[4] * g_y) + 1.99584E+6 * dT_data[1]
                            * m_y * dnormT_data[4] * g_y) + 3.99168E+6 *
                            dT_data[4] * b_y * dnormT_data[2] * dnormT_data[4] *
                            g_y) + 7.98336E+6 * dT_data[1] * dnormT_data[0] *
                            dnormT_data[1] * dnormT_data[2] * dnormT_data[4] *
                            g_y) + 1.99584E+6 * dT_data[1] * b_y * dnormT_data[3]
                            * dnormT_data[4] * g_y) + 443520.0 * dT_data[7] *
                            d_y * dnormT_data[5] * g_y) + 1.99584E+6 * dT_data[4]
                            * b_y * dnormT_data[1] * dnormT_data[5] * g_y) +
                            1.99584E+6 * dT_data[1] * dnormT_data[0] * h_y *
                            dnormT_data[5] * g_y) + 1.33056E+6 * dT_data[1] *
                            b_y * dnormT_data[2] * dnormT_data[5] * g_y) +
                            190080.0 * dT_data[4] * d_y * dnormT_data[6] * g_y)
                            + 570240.0 * dT_data[1] * b_y * dnormT_data[1] *
                            dnormT_data[6] * g_y) + 47520.0 * dT_data[1] * d_y *
                            dnormT_data[7] * g_y) + -1320.0 * dT_data[25] * d_y *
                            e_y) + -17820.0 * dT_data[22] * b_y * dnormT_data[1]
                            * e_y) + -71280.0 * dT_data[19] * dnormT_data[0] *
                            h_y * e_y) + -83160.0 * dT_data[16] * m_y * e_y) +
                            -47520.0 * dT_data[19] * b_y * dnormT_data[2] * e_y)
                            + -332640.0 * dT_data[16] * dnormT_data[0] *
                            dnormT_data[1] * dnormT_data[2] * e_y) + -498960.0 *
                            dT_data[13] * h_y * dnormT_data[2] * e_y) +
                            -332640.0 * dT_data[13] * dnormT_data[0] * n_y * e_y)
                            + -831600.0 * dT_data[10] * dnormT_data[1] * n_y *
                            e_y) + -369600.0 * dT_data[7] * w_y * e_y) +
                            -83160.0 * dT_data[16] * b_y * dnormT_data[3] * e_y)
                            + -498960.0 * dT_data[13] * dnormT_data[0] *
                            dnormT_data[1] * dnormT_data[3] * e_y) + -623700.0 *
                            dT_data[10] * h_y * dnormT_data[3] * e_y) +
                            -831600.0 * dT_data[10] * dnormT_data[0] *
                            dnormT_data[2] * dnormT_data[3] * e_y) + -1.6632E+6 *
                            dT_data[7] * dnormT_data[1] * dnormT_data[2] *
                            dnormT_data[3] * e_y) + -831600.0 * dT_data[4] * n_y
                            * dnormT_data[3] * e_y) + -415800.0 * dT_data[7] *
                            dnormT_data[0] * t_y * e_y) + -623700.0 * dT_data[4]
                            * dnormT_data[1] * t_y * e_y) + -415800.0 * dT_data
                            [1] * dnormT_data[2] * t_y * e_y) + -99792.0 *
                            dT_data[13] * b_y * dnormT_data[4] * e_y) +
                            -498960.0 * dT_data[10] * dnormT_data[0] *
                            dnormT_data[1] * dnormT_data[4] * e_y) + -498960.0 *
                            dT_data[7] * h_y * dnormT_data[4] * e_y) + -665280.0
                            * dT_data[7] * dnormT_data[0] * dnormT_data[2] *
                            dnormT_data[4] * e_y) + -997920.0 * dT_data[4] *
                            dnormT_data[1] * dnormT_data[2] * dnormT_data[4] *
                            e_y) + -332640.0 * dT_data[1] * n_y * dnormT_data[4]
                            * e_y) + -498960.0 * dT_data[4] * dnormT_data[0] *
                            dnormT_data[3] * dnormT_data[4] * e_y) + -498960.0 *
                            dT_data[1] * dnormT_data[1] * dnormT_data[3] *
                            dnormT_data[4] * e_y) + -99792.0 * dT_data[1] *
                            dnormT_data[0] * bb_y * e_y) + -83160.0 * dT_data[10]
                            * b_y * dnormT_data[5] * e_y) + -332640.0 * dT_data
                            [7] * dnormT_data[0] * dnormT_data[1] * dnormT_data
                            [5] * e_y) + -249480.0 * dT_data[4] * h_y *
                            dnormT_data[5] * e_y) + -332640.0 * dT_data[4] *
                            dnormT_data[0] * dnormT_data[2] * dnormT_data[5] *
                            e_y) + -332640.0 * dT_data[1] * dnormT_data[1] *
                            dnormT_data[2] * dnormT_data[5] * e_y) + -166320.0 *
                            dT_data[1] * dnormT_data[0] * dnormT_data[3] *
                            dnormT_data[5] * e_y) + -47520.0 * dT_data[7] * b_y *
                            dnormT_data[6] * e_y) + -142560.0 * dT_data[4] *
                            dnormT_data[0] * dnormT_data[1] * dnormT_data[6] *
                            e_y) + -71280.0 * dT_data[1] * h_y * dnormT_data[6] *
                            e_y) + -95040.0 * dT_data[1] * dnormT_data[0] *
                            dnormT_data[2] * dnormT_data[6] * e_y) + -17820.0 *
                            dT_data[4] * b_y * dnormT_data[7] * e_y) + -35640.0 *
                            dT_data[1] * dnormT_data[0] * dnormT_data[1] *
                            dnormT_data[7] * e_y) + -3960.0 * dT_data[1] * b_y *
                            dnormT_data[8] * e_y) + 264.0 * dT_data[1] *
                            dnormT_data[9] * dnormT_data[0] * c_y) + 132.0 *
                            dT_data[28] * b_y * c_y) + 1320.0 * dT_data[25] *
                            dnormT_data[0] * dnormT_data[1] * c_y) + 2970.0 *
                            dT_data[22] * h_y * c_y) + 3960.0 * dT_data[22] *
                            dnormT_data[0] * dnormT_data[2] * c_y) + 15840.0 *
                            dT_data[19] * dnormT_data[1] * dnormT_data[2] * c_y)
                            + 18480.0 * dT_data[16] * n_y * c_y) + 7920.0 *
                            dT_data[19] * dnormT_data[0] * dnormT_data[3] * c_y)
                            + 27720.0 * dT_data[16] * dnormT_data[1] *
                            dnormT_data[3] * c_y) + 55440.0 * dT_data[13] *
                            dnormT_data[2] * dnormT_data[3] * c_y) + 34650.0 *
                            dT_data[10] * t_y * c_y) + 11088.0 * dT_data[16] *
                            dnormT_data[0] * dnormT_data[4] * c_y) + 33264.0 *
                            dT_data[13] * dnormT_data[1] * dnormT_data[4] * c_y)
                            + 55440.0 * dT_data[10] * dnormT_data[2] *
                            dnormT_data[4] * c_y) + 55440.0 * dT_data[7] *
                            dnormT_data[3] * dnormT_data[4] * c_y) + 16632.0 *
                            dT_data[4] * bb_y * c_y) + 11088.0 * dT_data[13] *
                            dnormT_data[0] * dnormT_data[5] * c_y) + 27720.0 *
                            dT_data[10] * dnormT_data[1] * dnormT_data[5] * c_y)
                            + 36960.0 * dT_data[7] * dnormT_data[2] *
                            dnormT_data[5] * c_y) + 27720.0 * dT_data[4] *
                            dnormT_data[3] * dnormT_data[5] * c_y) + 11088.0 *
                            dT_data[1] * dnormT_data[4] * dnormT_data[5] * c_y)
                            + 7920.0 * dT_data[10] * dnormT_data[0] *
                            dnormT_data[6] * c_y) + 15840.0 * dT_data[7] *
                            dnormT_data[1] * dnormT_data[6] * c_y) + 15840.0 *
                            dT_data[4] * dnormT_data[2] * dnormT_data[6] * c_y)
                            + 7920.0 * dT_data[1] * dnormT_data[3] *
                            dnormT_data[6] * c_y) + 3960.0 * dT_data[7] *
                            dnormT_data[0] * dnormT_data[7] * c_y) + 5940.0 *
                            dT_data[4] * dnormT_data[1] * dnormT_data[7] * c_y)
                            + 3960.0 * dT_data[1] * dnormT_data[2] *
                            dnormT_data[7] * c_y) + 1320.0 * dT_data[4] *
                            dnormT_data[0] * dnormT_data[8] * c_y) + 1320.0 *
                            dT_data[1] * dnormT_data[1] * dnormT_data[8] * c_y)
                            + -66.0 * dT_data[4] * dnormT_data[9] * dnormT_tmp)
                            + -12.0 * dT_data[1] * dnormT_data[10] * dnormT_tmp)
                            + -12.0 * dT_data[31] * dnormT_data[0] * dnormT_tmp)
                            + -66.0 * dT_data[28] * dnormT_data[1] * dnormT_tmp)
                            + -220.0 * dT_data[25] * dnormT_data[2] * dnormT_tmp)
                            + -495.0 * dT_data[22] * dnormT_data[3] * dnormT_tmp)
                            + -792.0 * dT_data[19] * dnormT_data[4] * dnormT_tmp)
                            + -924.0 * dT_data[16] * dnormT_data[5] * dnormT_tmp)
                            + -792.0 * dT_data[13] * dnormT_data[6] * dnormT_tmp)
                            + -495.0 * dT_data[10] * dnormT_data[7] * dnormT_tmp)
                            + -220.0 * dT_data[7] * dnormT_data[8] * dnormT_tmp)
                            + dT_data[34] * y) + d0 * T[1]) + d1 * T[1]) + d2 *
                            T[1]) + d3 * T[1]) + d4 * T[1]) + d5 * T[1]) + d6 *
                            T[1]) + d7 * T[1]) + d8 * T[1]) + d9 * T[1]) + d10 *
                            T[1]) + d11 * T[1]) + d12 * T[1]) + d13 * T[1]) +
                            d14 * T[1]) + d15 * T[1]) + d16 * T[1]) + d17 * T[1])
                            + d18 * T[1]) + d19 * T[1]) + d20 * T[1]) + d21 * T
                            [1]) + d22 * T[1]) + d23 * T[1]) + d24 * T[1]) + d25
                            * T[1]) + d26 * T[1]) + d27 * T[1]) + d28 * T[1]) +
                            d29 * T[1]) + d30 * T[1]) + d31 * T[1]) + d32 * T[1])
                            + d33 * T[1]) + d34 * T[1]) + d35 * T[1]) + d36 * T
                            [1]) + d37 * T[1]) + d38 * T[1]) + d39 * T[1]) + d40
                            * T[1]) + d41 * T[1]) + d42 * T[1]) + d43 * T[1]) +
                            d44 * T[1]) + d45 * T[1]) + d46 * T[1]) + d47 * T[1])
                            + d48 * T[1]) + d49 * T[1]) + d50 * T[1]) + d51 * T
                            [1]) + d52 * T[1]) + d53 * T[1]) + d54 * T[1]) + d55
                            * T[1]) + d56 * T[1]) + d57 * T[1]) + d58 * T[1]) +
                                             d59 * T[1]) + d60 * T[1]) + d61 *
                                           T[1]) + d62 * T[1]) + d63 * T[1]) +
                                        d64 * T[1]) + d65 * T[1]) + d66 * T[1])
                                     + d67 * T[1]) + d68 * T[1]) + d69 * T[1]) +
                                  d70 * T[1]) + d71 * T[1]) + d72 * T[1]) + d73 *
                               T[1]) + d74 * T[1]) + d75 * T[1]) + dnormT * T[1];
                          dq_data[35] =
                            (((((((((((((((((((((((((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((((((((((((((((((((((((((
                            (((((((((((((((((((((((((((((((((((((((((((((((((((((
                            (((((-4.790016E+8 * dT_data[2] * cb_y * db_y +
                            2.395008E+8 * dT_data[5] * x_y * y_y) + 2.395008E+9 *
                            dT_data[2] * u_y * dnormT_data[1] * y_y) +
                            -7.98336E+7 * dT_data[8] * u_y * v_y) +
                            -1.0777536E+9 * dT_data[5] * q_y * dnormT_data[1] *
                            v_y) + -4.3110144E+9 * dT_data[2] * o_y * h_y * v_y)
                            + -7.185024E+8 * dT_data[2] * q_y * dnormT_data[2] *
                            v_y) + 1.99584E+7 * dT_data[11] * q_y * r_y) +
                            3.193344E+8 * dT_data[8] * o_y * dnormT_data[1] *
                            r_y) + 1.6765056E+9 * dT_data[5] * k_y * h_y * r_y)
                            + 3.3530112E+9 * dT_data[2] * i_y * m_y * r_y) +
                            3.193344E+8 * dT_data[5] * o_y * dnormT_data[2] *
                            r_y) + 2.2353408E+9 * dT_data[2] * k_y *
                            dnormT_data[1] * dnormT_data[2] * r_y) + 1.596672E+8
                            * dT_data[2] * o_y * dnormT_data[3] * r_y) +
                            -3.99168E+6 * dT_data[14] * o_y * p_y) + -6.98544E+7
                            * dT_data[11] * k_y * dnormT_data[1] * p_y) +
                            -4.191264E+8 * dT_data[8] * i_y * h_y * p_y) +
                            -1.047816E+9 * dT_data[5] * f_y * m_y * p_y) +
                            -1.047816E+9 * dT_data[2] * d_y * s_y * p_y) +
                            -9.31392E+7 * dT_data[8] * k_y * dnormT_data[2] *
                            p_y) + -8.382528E+8 * dT_data[5] * i_y *
                            dnormT_data[1] * dnormT_data[2] * p_y) +
                            -2.095632E+9 * dT_data[2] * f_y * h_y * dnormT_data
                            [2] * p_y) + -2.794176E+8 * dT_data[2] * i_y * n_y *
                            p_y) + -6.98544E+7 * dT_data[5] * k_y * dnormT_data
                            [3] * p_y) + -4.191264E+8 * dT_data[2] * i_y *
                            dnormT_data[1] * dnormT_data[3] * p_y) +
                            -2.794176E+7 * dT_data[2] * k_y * dnormT_data[4] *
                            p_y) + 665280.0 * dT_data[17] * k_y * l_y) +
                            1.197504E+7 * dT_data[14] * i_y * dnormT_data[1] *
                            l_y) + 7.4844E+7 * dT_data[11] * f_y * h_y * l_y) +
                            1.99584E+8 * dT_data[8] * d_y * m_y * l_y) +
                            2.24532E+8 * dT_data[5] * b_y * s_y * l_y) +
                            8.98128E+7 * dT_data[2] * dnormT_data[0] * ab_y *
                            l_y) + 1.99584E+7 * dT_data[11] * i_y * dnormT_data
                            [2] * l_y) + 1.99584E+8 * dT_data[8] * f_y *
                            dnormT_data[1] * dnormT_data[2] * l_y) + 5.98752E+8 *
                            dT_data[5] * d_y * h_y * dnormT_data[2] * l_y) +
                            5.98752E+8 * dT_data[2] * b_y * m_y * dnormT_data[2]
                            * l_y) + 9.9792E+7 * dT_data[5] * f_y * n_y * l_y) +
                            3.99168E+8 * dT_data[2] * d_y * dnormT_data[1] * n_y
                            * l_y) + 1.99584E+7 * dT_data[8] * i_y *
                            dnormT_data[3] * l_y) + 1.49688E+8 * dT_data[5] *
                            f_y * dnormT_data[1] * dnormT_data[3] * l_y) +
                            2.99376E+8 * dT_data[2] * d_y * h_y * dnormT_data[3]
                            * l_y) + 9.9792E+7 * dT_data[2] * f_y * dnormT_data
                            [2] * dnormT_data[3] * l_y) + 1.197504E+7 * dT_data
                            [5] * i_y * dnormT_data[4] * l_y) + 5.98752E+7 *
                            dT_data[2] * f_y * dnormT_data[1] * dnormT_data[4] *
                            l_y) + 3.99168E+6 * dT_data[2] * i_y * dnormT_data[5]
                            * l_y) + -95040.0 * dT_data[20] * i_y * j_y) +
                            -1.6632E+6 * dT_data[17] * f_y * dnormT_data[1] *
                            j_y) + -9.9792E+6 * dT_data[14] * d_y * h_y * j_y) +
                            -2.4948E+7 * dT_data[11] * b_y * m_y * j_y) +
                            -2.4948E+7 * dT_data[8] * dnormT_data[0] * s_y * j_y)
                            + -7.4844E+6 * dT_data[5] * ab_y * j_y) + -3.3264E+6
                            * dT_data[14] * f_y * dnormT_data[2] * j_y) +
                            -3.3264E+7 * dT_data[11] * d_y * dnormT_data[1] *
                            dnormT_data[2] * j_y) + -9.9792E+7 * dT_data[8] *
                            b_y * h_y * dnormT_data[2] * j_y) + -9.9792E+7 *
                            dT_data[5] * dnormT_data[0] * m_y * dnormT_data[2] *
                            j_y) + -2.4948E+7 * dT_data[2] * s_y * dnormT_data[2]
                            * j_y) + -2.2176E+7 * dT_data[8] * d_y * n_y * j_y)
                            + -9.9792E+7 * dT_data[5] * b_y * dnormT_data[1] *
                            n_y * j_y) + -9.9792E+7 * dT_data[2] * dnormT_data[0]
                            * h_y * n_y * j_y) + -2.2176E+7 * dT_data[2] * b_y *
                            w_y * j_y) + -4.158E+6 * dT_data[11] * f_y *
                            dnormT_data[3] * j_y) + -3.3264E+7 * dT_data[8] *
                            d_y * dnormT_data[1] * dnormT_data[3] * j_y) +
                            -7.4844E+7 * dT_data[5] * b_y * h_y * dnormT_data[3]
                            * j_y) + -4.9896E+7 * dT_data[2] * dnormT_data[0] *
                            m_y * dnormT_data[3] * j_y) + -3.3264E+7 * dT_data[5]
                            * d_y * dnormT_data[2] * dnormT_data[3] * j_y) +
                            -9.9792E+7 * dT_data[2] * b_y * dnormT_data[1] *
                            dnormT_data[2] * dnormT_data[3] * j_y) + -8.316E+6 *
                            dT_data[2] * d_y * t_y * j_y) + -3.3264E+6 *
                            dT_data[8] * f_y * dnormT_data[4] * j_y) +
                            -1.99584E+7 * dT_data[5] * d_y * dnormT_data[1] *
                            dnormT_data[4] * j_y) + -2.99376E+7 * dT_data[2] *
                            b_y * h_y * dnormT_data[4] * j_y) + -1.33056E+7 *
                            dT_data[2] * d_y * dnormT_data[2] * dnormT_data[4] *
                            j_y) + -1.6632E+6 * dT_data[5] * f_y * dnormT_data[5]
                            * j_y) + -6.6528E+6 * dT_data[2] * d_y *
                            dnormT_data[1] * dnormT_data[5] * j_y) + -475200.0 *
                            dT_data[2] * f_y * dnormT_data[6] * j_y) + 11880.0 *
                            dT_data[23] * f_y * g_y) + 190080.0 * dT_data[20] *
                            d_y * dnormT_data[1] * g_y) + 997920.0 * dT_data[17]
                            * b_y * h_y * g_y) + 1.99584E+6 * dT_data[14] *
                            dnormT_data[0] * m_y * g_y) + 1.2474E+6 * dT_data[11]
                            * s_y * g_y) + 443520.0 * dT_data[17] * d_y *
                            dnormT_data[2] * g_y) + 3.99168E+6 * dT_data[14] *
                            b_y * dnormT_data[1] * dnormT_data[2] * g_y) +
                            9.9792E+6 * dT_data[11] * dnormT_data[0] * h_y *
                            dnormT_data[2] * g_y) + 6.6528E+6 * dT_data[8] * m_y
                            * dnormT_data[2] * g_y) + 3.3264E+6 * dT_data[11] *
                            b_y * n_y * g_y) + 1.33056E+7 * dT_data[8] *
                            dnormT_data[0] * dnormT_data[1] * n_y * g_y) +
                            9.9792E+6 * dT_data[5] * h_y * n_y * g_y) +
                            4.4352E+6 * dT_data[5] * dnormT_data[0] * w_y * g_y)
                            + 4.4352E+6 * dT_data[2] * dnormT_data[1] * w_y *
                            g_y) + 665280.0 * dT_data[14] * d_y * dnormT_data[3]
                            * g_y) + 4.9896E+6 * dT_data[11] * b_y *
                            dnormT_data[1] * dnormT_data[3] * g_y) + 9.9792E+6 *
                            dT_data[8] * dnormT_data[0] * h_y * dnormT_data[3] *
                            g_y) + 4.9896E+6 * dT_data[5] * m_y * dnormT_data[3]
                            * g_y) + 6.6528E+6 * dT_data[8] * b_y * dnormT_data
                            [2] * dnormT_data[3] * g_y) + 1.99584E+7 * dT_data[5]
                            * dnormT_data[0] * dnormT_data[1] * dnormT_data[2] *
                            dnormT_data[3] * g_y) + 9.9792E+6 * dT_data[2] * h_y
                            * dnormT_data[2] * dnormT_data[3] * g_y) + 6.6528E+6
                            * dT_data[2] * dnormT_data[0] * n_y * dnormT_data[3]
                            * g_y) + 2.4948E+6 * dT_data[5] * b_y * t_y * g_y) +
                            4.9896E+6 * dT_data[2] * dnormT_data[0] *
                            dnormT_data[1] * t_y * g_y) + 665280.0 * dT_data[11]
                            * d_y * dnormT_data[4] * g_y) + 3.99168E+6 *
                            dT_data[8] * b_y * dnormT_data[1] * dnormT_data[4] *
                            g_y) + 5.98752E+6 * dT_data[5] * dnormT_data[0] *
                            h_y * dnormT_data[4] * g_y) + 1.99584E+6 * dT_data[2]
                            * m_y * dnormT_data[4] * g_y) + 3.99168E+6 *
                            dT_data[5] * b_y * dnormT_data[2] * dnormT_data[4] *
                            g_y) + 7.98336E+6 * dT_data[2] * dnormT_data[0] *
                            dnormT_data[1] * dnormT_data[2] * dnormT_data[4] *
                            g_y) + 1.99584E+6 * dT_data[2] * b_y * dnormT_data[3]
                            * dnormT_data[4] * g_y) + 443520.0 * dT_data[8] *
                            d_y * dnormT_data[5] * g_y) + 1.99584E+6 * dT_data[5]
                            * b_y * dnormT_data[1] * dnormT_data[5] * g_y) +
                            1.99584E+6 * dT_data[2] * dnormT_data[0] * h_y *
                            dnormT_data[5] * g_y) + 1.33056E+6 * dT_data[2] *
                            b_y * dnormT_data[2] * dnormT_data[5] * g_y) +
                            190080.0 * dT_data[5] * d_y * dnormT_data[6] * g_y)
                            + 570240.0 * dT_data[2] * b_y * dnormT_data[1] *
                            dnormT_data[6] * g_y) + 47520.0 * dT_data[2] * d_y *
                            dnormT_data[7] * g_y) + -1320.0 * dT_data[26] * d_y *
                            e_y) + -17820.0 * dT_data[23] * b_y * dnormT_data[1]
                            * e_y) + -71280.0 * dT_data[20] * dnormT_data[0] *
                            h_y * e_y) + -83160.0 * dT_data[17] * m_y * e_y) +
                            -47520.0 * dT_data[20] * b_y * dnormT_data[2] * e_y)
                            + -332640.0 * dT_data[17] * dnormT_data[0] *
                            dnormT_data[1] * dnormT_data[2] * e_y) + -498960.0 *
                            dT_data[14] * h_y * dnormT_data[2] * e_y) +
                            -332640.0 * dT_data[14] * dnormT_data[0] * n_y * e_y)
                            + -831600.0 * dT_data[11] * dnormT_data[1] * n_y *
                            e_y) + -369600.0 * dT_data[8] * w_y * e_y) +
                            -83160.0 * dT_data[17] * b_y * dnormT_data[3] * e_y)
                            + -498960.0 * dT_data[14] * dnormT_data[0] *
                            dnormT_data[1] * dnormT_data[3] * e_y) + -623700.0 *
                            dT_data[11] * h_y * dnormT_data[3] * e_y) +
                            -831600.0 * dT_data[11] * dnormT_data[0] *
                            dnormT_data[2] * dnormT_data[3] * e_y) + -1.6632E+6 *
                            dT_data[8] * dnormT_data[1] * dnormT_data[2] *
                            dnormT_data[3] * e_y) + -831600.0 * dT_data[5] * n_y
                            * dnormT_data[3] * e_y) + -415800.0 * dT_data[8] *
                            dnormT_data[0] * t_y * e_y) + -623700.0 * dT_data[5]
                            * dnormT_data[1] * t_y * e_y) + -415800.0 * dT_data
                            [2] * dnormT_data[2] * t_y * e_y) + -99792.0 *
                            dT_data[14] * b_y * dnormT_data[4] * e_y) +
                            -498960.0 * dT_data[11] * dnormT_data[0] *
                            dnormT_data[1] * dnormT_data[4] * e_y) + -498960.0 *
                            dT_data[8] * h_y * dnormT_data[4] * e_y) + -665280.0
                            * dT_data[8] * dnormT_data[0] * dnormT_data[2] *
                            dnormT_data[4] * e_y) + -997920.0 * dT_data[5] *
                            dnormT_data[1] * dnormT_data[2] * dnormT_data[4] *
                            e_y) + -332640.0 * dT_data[2] * n_y * dnormT_data[4]
                            * e_y) + -498960.0 * dT_data[5] * dnormT_data[0] *
                            dnormT_data[3] * dnormT_data[4] * e_y) + -498960.0 *
                            dT_data[2] * dnormT_data[1] * dnormT_data[3] *
                            dnormT_data[4] * e_y) + -99792.0 * dT_data[2] *
                            dnormT_data[0] * bb_y * e_y) + -83160.0 * dT_data[11]
                            * b_y * dnormT_data[5] * e_y) + -332640.0 * dT_data
                            [8] * dnormT_data[0] * dnormT_data[1] * dnormT_data
                            [5] * e_y) + -249480.0 * dT_data[5] * h_y *
                            dnormT_data[5] * e_y) + -332640.0 * dT_data[5] *
                            dnormT_data[0] * dnormT_data[2] * dnormT_data[5] *
                            e_y) + -332640.0 * dT_data[2] * dnormT_data[1] *
                            dnormT_data[2] * dnormT_data[5] * e_y) + -166320.0 *
                            dT_data[2] * dnormT_data[0] * dnormT_data[3] *
                            dnormT_data[5] * e_y) + -47520.0 * dT_data[8] * b_y *
                            dnormT_data[6] * e_y) + -142560.0 * dT_data[5] *
                            dnormT_data[0] * dnormT_data[1] * dnormT_data[6] *
                            e_y) + -71280.0 * dT_data[2] * h_y * dnormT_data[6] *
                            e_y) + -95040.0 * dT_data[2] * dnormT_data[0] *
                            dnormT_data[2] * dnormT_data[6] * e_y) + -17820.0 *
                            dT_data[5] * b_y * dnormT_data[7] * e_y) + -35640.0 *
                            dT_data[2] * dnormT_data[0] * dnormT_data[1] *
                            dnormT_data[7] * e_y) + -3960.0 * dT_data[2] * b_y *
                            dnormT_data[8] * e_y) + 264.0 * dT_data[2] *
                            dnormT_data[9] * dnormT_data[0] * c_y) + 132.0 *
                            dT_data[29] * b_y * c_y) + 1320.0 * dT_data[26] *
                            dnormT_data[0] * dnormT_data[1] * c_y) + 2970.0 *
                            dT_data[23] * h_y * c_y) + 3960.0 * dT_data[23] *
                            dnormT_data[0] * dnormT_data[2] * c_y) + 15840.0 *
                            dT_data[20] * dnormT_data[1] * dnormT_data[2] * c_y)
                            + 18480.0 * dT_data[17] * n_y * c_y) + 7920.0 *
                            dT_data[20] * dnormT_data[0] * dnormT_data[3] * c_y)
                            + 27720.0 * dT_data[17] * dnormT_data[1] *
                            dnormT_data[3] * c_y) + 55440.0 * dT_data[14] *
                            dnormT_data[2] * dnormT_data[3] * c_y) + 34650.0 *
                            dT_data[11] * t_y * c_y) + 11088.0 * dT_data[17] *
                            dnormT_data[0] * dnormT_data[4] * c_y) + 33264.0 *
                            dT_data[14] * dnormT_data[1] * dnormT_data[4] * c_y)
                            + 55440.0 * dT_data[11] * dnormT_data[2] *
                            dnormT_data[4] * c_y) + 55440.0 * dT_data[8] *
                            dnormT_data[3] * dnormT_data[4] * c_y) + 16632.0 *
                            dT_data[5] * bb_y * c_y) + 11088.0 * dT_data[14] *
                            dnormT_data[0] * dnormT_data[5] * c_y) + 27720.0 *
                            dT_data[11] * dnormT_data[1] * dnormT_data[5] * c_y)
                            + 36960.0 * dT_data[8] * dnormT_data[2] *
                            dnormT_data[5] * c_y) + 27720.0 * dT_data[5] *
                            dnormT_data[3] * dnormT_data[5] * c_y) + 11088.0 *
                            dT_data[2] * dnormT_data[4] * dnormT_data[5] * c_y)
                            + 7920.0 * dT_data[11] * dnormT_data[0] *
                            dnormT_data[6] * c_y) + 15840.0 * dT_data[8] *
                            dnormT_data[1] * dnormT_data[6] * c_y) + 15840.0 *
                            dT_data[5] * dnormT_data[2] * dnormT_data[6] * c_y)
                            + 7920.0 * dT_data[2] * dnormT_data[3] *
                            dnormT_data[6] * c_y) + 3960.0 * dT_data[8] *
                            dnormT_data[0] * dnormT_data[7] * c_y) + 5940.0 *
                            dT_data[5] * dnormT_data[1] * dnormT_data[7] * c_y)
                            + 3960.0 * dT_data[2] * dnormT_data[2] *
                            dnormT_data[7] * c_y) + 1320.0 * dT_data[5] *
                            dnormT_data[0] * dnormT_data[8] * c_y) + 1320.0 *
                            dT_data[2] * dnormT_data[1] * dnormT_data[8] * c_y)
                            + -66.0 * dT_data[5] * dnormT_data[9] * dnormT_tmp)
                            + -12.0 * dT_data[2] * dnormT_data[10] * dnormT_tmp)
                            + -12.0 * dT_data[32] * dnormT_data[0] * dnormT_tmp)
                            + -66.0 * dT_data[29] * dnormT_data[1] * dnormT_tmp)
                            + -220.0 * dT_data[26] * dnormT_data[2] * dnormT_tmp)
                            + -495.0 * dT_data[23] * dnormT_data[3] * dnormT_tmp)
                            + -792.0 * dT_data[20] * dnormT_data[4] * dnormT_tmp)
                            + -924.0 * dT_data[17] * dnormT_data[5] * dnormT_tmp)
                            + -792.0 * dT_data[14] * dnormT_data[6] * dnormT_tmp)
                            + -495.0 * dT_data[11] * dnormT_data[7] * dnormT_tmp)
                            + -220.0 * dT_data[8] * dnormT_data[8] * dnormT_tmp)
                            + dT_data[35] * y) + d0 * T[2]) + d1 * T[2]) + d2 *
                            T[2]) + d3 * T[2]) + d4 * T[2]) + d5 * T[2]) + d6 *
                            T[2]) + d7 * T[2]) + d8 * T[2]) + d9 * T[2]) + d10 *
                            T[2]) + d11 * T[2]) + d12 * T[2]) + d13 * T[2]) +
                            d14 * T[2]) + d15 * T[2]) + d16 * T[2]) + d17 * T[2])
                            + d18 * T[2]) + d19 * T[2]) + d20 * T[2]) + d21 * T
                            [2]) + d22 * T[2]) + d23 * T[2]) + d24 * T[2]) + d25
                            * T[2]) + d26 * T[2]) + d27 * T[2]) + d28 * T[2]) +
                            d29 * T[2]) + d30 * T[2]) + d31 * T[2]) + d32 * T[2])
                            + d33 * T[2]) + d34 * T[2]) + d35 * T[2]) + d36 * T
                            [2]) + d37 * T[2]) + d38 * T[2]) + d39 * T[2]) + d40
                            * T[2]) + d41 * T[2]) + d42 * T[2]) + d43 * T[2]) +
                            d44 * T[2]) + d45 * T[2]) + d46 * T[2]) + d47 * T[2])
                            + d48 * T[2]) + d49 * T[2]) + d50 * T[2]) + d51 * T
                            [2]) + d52 * T[2]) + d53 * T[2]) + d54 * T[2]) + d55
                            * T[2]) + d56 * T[2]) + d57 * T[2]) + d58 * T[2]) +
                                             d59 * T[2]) + d60 * T[2]) + d61 *
                                           T[2]) + d62 * T[2]) + d63 * T[2]) +
                                        d64 * T[2]) + d65 * T[2]) + d66 * T[2])
                                     + d67 * T[2]) + d68 * T[2]) + d69 * T[2]) +
                                  d70 * T[2]) + d71 * T[2]) + d72 * T[2]) + d73 *
                               T[2]) + d74 * T[2]) + d75 * T[2]) + dnormT * T[2];
                          if (dT_size[1] > 12) {
                            if (13 > dnormT_size[1]) {
                              emlrtDynamicBoundsCheckR2012b(13, 1, dnormT_size[1],
                                &b_emlrtBCI, sp);
                            }

                            y = 1.0 / normT;
                            kb_y = muDoubleScalarPower(dnormT_data[0], 13.0);
                            lb_y = muDoubleScalarPower(normT, -14.0);
                            d0 = -6.2270208E+9 * kb_y * lb_y;
                            d1 = 3.73621248E+10 * cb_y * dnormT_data[1] * fb_y;
                            d2 = -8.5621536E+10 * u_y * h_y * db_y;
                            d3 = -1.14162048E+10 * x_y * dnormT_data[2] * db_y;
                            d4 = 9.3405312E+10 * o_y * m_y * y_y;
                            d5 = 4.6702656E+10 * q_y * dnormT_data[1] *
                              dnormT_data[2] * y_y;
                            d6 = 2.594592E+9 * u_y * dnormT_data[3] * y_y;
                            d7 = -4.90377888E+10 * i_y * s_y * v_y;
                            d8 = -6.53837184E+10 * k_y * h_y * dnormT_data[2] *
                              v_y;
                            d9 = -6.2270208E+9 * o_y * n_y * v_y;
                            d10 = -9.3405312E+9 * o_y * dnormT_data[1] *
                              dnormT_data[3] * v_y;
                            d11 = -4.6702656E+8 * q_y * dnormT_data[4] * v_y;
                            d12 = 1.08972864E+10 * d_y * ab_y * r_y;
                            d13 = 3.6324288E+10 * f_y * m_y * dnormT_data[2] *
                              r_y;
                            d14 = 1.45297152E+10 * i_y * dnormT_data[1] * n_y *
                              r_y;
                            d15 = 1.08972864E+10 * i_y * h_y * dnormT_data[3] *
                              r_y;
                            d16 = 2.4216192E+9 * k_y * dnormT_data[2] *
                              dnormT_data[3] * r_y;
                            d17 = 1.45297152E+9 * k_y * dnormT_data[1] *
                              dnormT_data[4] * r_y;
                            d18 = 6.918912E+7 * o_y * dnormT_data[5] * r_y;
                            d19 = -6.810804E+8 * dnormT_data[0] * gb_y * p_y;
                            d20 = -6.810804E+9 * b_y * s_y * dnormT_data[2] *
                              p_y;
                            d21 = -9.081072E+9 * d_y * h_y * n_y * p_y;
                            d22 = -1.009008E+9 * f_y * w_y * p_y;
                            d23 = -4.540536E+9 * d_y * m_y * dnormT_data[3] *
                              p_y;
                            d24 = -4.540536E+9 * f_y * dnormT_data[1] *
                              dnormT_data[2] * dnormT_data[3] * p_y;
                            d25 = -2.270268E+8 * i_y * t_y * p_y;
                            d26 = -1.3621608E+9 * f_y * h_y * dnormT_data[4] *
                              p_y;
                            d27 = -3.6324288E+8 * i_y;
                            d28 = d27 * dnormT_data[2] * dnormT_data[4] * p_y;
                            d29 = -1.8162144E+8 * i_y * dnormT_data[1] *
                              dnormT_data[5] * p_y;
                            d30 = -8.64864E+6 * k_y * dnormT_data[6] * p_y;
                            d31 = 1.945944E+8 * ab_y * dnormT_data[2] * l_y;
                            d32 = 1.297296E+9 * dnormT_data[0] * m_y * n_y * l_y;
                            d33 = 8.64864E+8 * b_y * dnormT_data[1] * w_y * l_y;
                            d34 = 4.86486E+8 * dnormT_data[0] * s_y *
                              dnormT_data[3] * l_y;
                            d35 = 1.945944E+9 * b_y * h_y * dnormT_data[2] *
                              dnormT_data[3] * l_y;
                            d36 = 4.32432E+8 * d_y * n_y * dnormT_data[3] * l_y;
                            d37 = 3.24324E+8 * d_y * dnormT_data[1] * t_y * l_y;
                            d38 = 3.891888E+8 * b_y * m_y * dnormT_data[4] * l_y;
                            d39 = 5.189184E+8 * d_y * dnormT_data[1] *
                              dnormT_data[2] * dnormT_data[4] * l_y;
                            d40 = 6.48648E+7 * f_y * dnormT_data[3] *
                              dnormT_data[4] * l_y;
                            d41 = 1.297296E+8 * d_y * h_y * dnormT_data[5] * l_y;
                            d42 = 4.32432E+7 * f_y * dnormT_data[2] *
                              dnormT_data[5] * l_y;
                            d43 = 1.85328E+7 * f_y * dnormT_data[1] *
                              dnormT_data[6] * l_y;
                            d44 = 926640.0 * i_y * dnormT_data[7] * l_y;
                            d45 = -7.2072E+7 * h_y * w_y * j_y;
                            d46 = -2.4024E+7 * dnormT_data[0] * hb_y * j_y;
                            d47 = -1.08108E+8 * m_y * dnormT_data[2] *
                              dnormT_data[3] * j_y;
                            d48 = -2.16216E+8 * dnormT_data[0] * dnormT_data[1] *
                              n_y * dnormT_data[3] * j_y;
                            d49 = -8.1081E+7 * dnormT_data[0] * h_y * t_y * j_y;
                            d50 = -5.4054E+7 * b_y * dnormT_data[2] * t_y * j_y;
                            d51 = -1.62162E+7 * s_y * dnormT_data[4] * j_y;
                            d52 = -1.297296E+8 * dnormT_data[0] * h_y *
                              dnormT_data[2] * dnormT_data[4] * j_y;
                            d53 = -4.32432E+7 * b_y;
                            d54 = d53 * n_y * dnormT_data[4] * j_y;
                            d55 = -6.48648E+7 * b_y * dnormT_data[1] *
                              dnormT_data[3] * dnormT_data[4] * j_y;
                            d56 = -4.32432E+6 * d_y * bb_y * j_y;
                            d57 = -2.16216E+7 * dnormT_data[0] * m_y *
                              dnormT_data[5] * j_y;
                            d53 = d53 * dnormT_data[1] * dnormT_data[2] *
                              dnormT_data[5] * j_y;
                            d58 = -7.2072E+6 * d_y;
                            d59 = d58 * dnormT_data[3] * dnormT_data[5] * j_y;
                            d60 = -9.2664E+6 * b_y * h_y * dnormT_data[6] * j_y;
                            d61 = -4.1184E+6 * d_y * dnormT_data[2] *
                              dnormT_data[6] * j_y;
                            d62 = -1.5444E+6 * d_y * dnormT_data[1] *
                              dnormT_data[7] * j_y;
                            d63 = -85800.0 * f_y * dnormT_data[8] * j_y;
                            d64 = 6864.0 * dnormT_data[9] * d_y * g_y;
                            d65 = 4.8048E+6 * w_y * dnormT_data[3] * g_y;
                            d66 = 1.08108E+7 * dnormT_data[1] * dnormT_data[2] *
                              t_y * g_y;
                            d67 = 1.8018E+6 * dnormT_data[0] * ib_y * g_y;
                            d68 = 8.64864E+6 * dnormT_data[1] * n_y *
                              dnormT_data[4] * g_y;
                            d69 = 6.48648E+6 * h_y * dnormT_data[3] *
                              dnormT_data[4] * g_y;
                            d70 = 8.64864E+6 * dnormT_data[0] * dnormT_data[2] *
                              dnormT_data[3] * dnormT_data[4] * g_y;
                            d71 = 2.594592E+6 * dnormT_data[0] * dnormT_data[1] *
                              bb_y * g_y;
                            d72 = 4.32432E+6 * h_y * dnormT_data[2] *
                              dnormT_data[5] * g_y;
                            d73 = 2.88288E+6 * dnormT_data[0] * n_y *
                              dnormT_data[5] * g_y;
                            d74 = 4.32432E+6 * dnormT_data[0] * dnormT_data[1];
                            d75 = d74 * dnormT_data[3] * dnormT_data[5] * g_y;
                            d76 = 864864.0 * b_y * dnormT_data[4] * dnormT_data
                              [5] * g_y;
                            d77 = 617760.0 * m_y * dnormT_data[6] * g_y;
                            d78 = 2.47104E+6 * dnormT_data[0] * dnormT_data[1] *
                              dnormT_data[2] * dnormT_data[6] * g_y;
                            d79 = 617760.0 * b_y * dnormT_data[3] * dnormT_data
                              [6] * g_y;
                            d80 = 463320.0 * dnormT_data[0] * h_y * dnormT_data
                              [7] * g_y;
                            d81 = 308880.0 * b_y * dnormT_data[2] * dnormT_data
                              [7] * g_y;
                            d82 = 102960.0 * b_y * dnormT_data[1] * dnormT_data
                              [8] * g_y;
                            d83 = -468.0 * dnormT_data[10] * b_y * e_y;
                            d84 = -5148.0 * dnormT_data[9] * dnormT_data[0] *
                              dnormT_data[1] * e_y;
                            d85 = -270270.0 * t_y * dnormT_data[4] * e_y;
                            d86 = -216216.0 * dnormT_data[2] * bb_y * e_y;
                            d87 = -360360.0 * dnormT_data[2] * dnormT_data[3] *
                              dnormT_data[5] * e_y;
                            d88 = -216216.0 * dnormT_data[1] * dnormT_data[4] *
                              dnormT_data[5] * e_y;
                            d89 = -36036.0 * dnormT_data[0] * jb_y * e_y;
                            d90 = -102960.0 * n_y * dnormT_data[6] * e_y;
                            d91 = -154440.0 * dnormT_data[1] * dnormT_data[3] *
                              dnormT_data[6] * e_y;
                            d92 = -61776.0 * dnormT_data[0] * dnormT_data[4] *
                              dnormT_data[6] * e_y;
                            d93 = -77220.0 * dnormT_data[1] * dnormT_data[2] *
                              dnormT_data[7] * e_y;
                            d94 = -38610.0 * dnormT_data[0] * dnormT_data[3] *
                              dnormT_data[7] * e_y;
                            d95 = -12870.0 * h_y * dnormT_data[8] * e_y;
                            d96 = -17160.0 * dnormT_data[0] * dnormT_data[2] *
                              dnormT_data[8] * e_y;
                            d97 = 26.0 * dnormT_data[11] * dnormT_data[0] * c_y;
                            d98 = 156.0 * dnormT_data[10] * dnormT_data[1] * c_y;
                            d99 = 572.0 * dnormT_data[9] * dnormT_data[2] * c_y;
                            d100 = 3432.0 * dnormT_data[5] * dnormT_data[6] *
                              c_y;
                            d101 = 2574.0 * dnormT_data[4] * dnormT_data[7] *
                              c_y;
                            d102 = 1430.0 * dnormT_data[3] * dnormT_data[8] *
                              c_y;
                            dnormT = -dnormT_data[12] * dnormT_tmp;
                            d103 = 1.729728E+7 * dT_data[0] * dnormT_data[0];
                            d104 = -2.16216E+6 * dT_data[9] * dnormT_data[0];
                            d105 = -1.08108E+6 * dT_data[3] * dnormT_data[0];
                            d106 = -1.08108E+6 * dT_data[0] * dnormT_data[1];
                            dq_data[36] =
                              (((((((((((((((((((((((((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((((((((((((((((((((((((
                              ((((((((((((((6.2270208E+9 * dT_data[0] * eb_y *
                              fb_y + -3.1135104E+9 * dT_data[3] * cb_y * db_y) +
                              -3.42486144E+10 * dT_data[0] * x_y * dnormT_data[1]
                              * db_y) + 1.0378368E+9 * dT_data[6] * x_y * y_y) +
                              1.5567552E+10 * dT_data[3] * u_y * dnormT_data[1] *
                              y_y) + 7.0053984E+10 * dT_data[0] * q_y * h_y *
                              y_y) + 1.0378368E+10 * dT_data[0] * u_y *
                              dnormT_data[2] * y_y) + -2.594592E+8 * dT_data[9] *
                              u_y * v_y) + -4.6702656E+9 * dT_data[6] * q_y *
                              dnormT_data[1] * v_y) + -2.80215936E+10 * dT_data
                              [3] * o_y * h_y * v_y) + -6.53837184E+10 *
                              dT_data[0] * k_y * m_y * v_y) + -4.6702656E+9 *
                              dT_data[3] * q_y * dnormT_data[2] * v_y) +
                              -3.73621248E+10 * dT_data[0] * o_y * dnormT_data[1]
                              * dnormT_data[2] * v_y) + -2.3351328E+9 * dT_data
                              [0] * q_y * dnormT_data[3] * v_y) + 5.189184E+7 *
                              dT_data[12] * q_y * r_y) + 1.0378368E+9 * dT_data
                              [9] * o_y * dnormT_data[1] * r_y) + 7.2648576E+9 *
                              dT_data[6] * k_y * h_y * r_y) + 2.17945728E+10 *
                              dT_data[3] * i_y * m_y * r_y) + 2.7243216E+10 *
                              dT_data[0] * f_y * s_y * r_y) + 1.3837824E+9 *
                              dT_data[6] * o_y * dnormT_data[2] * r_y) +
                              1.45297152E+10 * dT_data[3] * k_y * dnormT_data[1]
                              * dnormT_data[2] * r_y) + 4.35891456E+10 *
                              dT_data[0] * i_y * h_y * dnormT_data[2] * r_y) +
                              4.8432384E+9 * dT_data[0] * k_y * n_y * r_y) +
                              1.0378368E+9 * dT_data[3] * o_y * dnormT_data[3] *
                              r_y) + 7.2648576E+9 * dT_data[0] * k_y *
                              dnormT_data[1] * dnormT_data[3] * r_y) +
                              4.1513472E+8 * dT_data[0] * o_y * dnormT_data[4] *
                              r_y) + -8.64864E+6 * dT_data[15] * o_y * p_y) +
                              -1.8162144E+8 * dT_data[12] * k_y * dnormT_data[1]
                              * p_y) + -1.3621608E+9 * dT_data[9] * i_y * h_y *
                              p_y) + -4.540536E+9 * dT_data[6] * f_y * m_y * p_y)
                              + -6.810804E+9 * dT_data[3] * d_y * s_y * p_y) +
                              -4.0864824E+9 * dT_data[0] * b_y * ab_y * p_y) +
                              -3.027024E+8 * dT_data[9] * k_y * dnormT_data[2] *
                              p_y) + -3.6324288E+9 * dT_data[6] * i_y *
                              dnormT_data[1] * dnormT_data[2] * p_y) +
                              -1.3621608E+10 * dT_data[3] * f_y * h_y *
                              dnormT_data[2] * p_y) + -1.8162144E+10 * dT_data[0]
                              * d_y * m_y * dnormT_data[2] * p_y) +
                              -1.8162144E+9 * dT_data[3] * i_y * n_y * p_y) +
                              -9.081072E+9 * dT_data[0] * f_y * dnormT_data[1] *
                              n_y * p_y) + -3.027024E+8 * dT_data[6] * k_y *
                              dnormT_data[3] * p_y) + -2.7243216E+9 * dT_data[3]
                              * i_y * dnormT_data[1] * dnormT_data[3] * p_y) +
                              -6.810804E+9 * dT_data[0] * f_y * h_y *
                              dnormT_data[3] * p_y) + -1.8162144E+9 * dT_data[0]
                              * i_y * dnormT_data[2] * dnormT_data[3] * p_y) +
                              -1.8162144E+8 * dT_data[3] * k_y * dnormT_data[4] *
                              p_y) + -1.08972864E+9 * dT_data[0] * i_y *
                              dnormT_data[1] * dnormT_data[4] * p_y) +
                              -6.054048E+7 * dT_data[0] * k_y * dnormT_data[5] *
                              p_y) + 1.23552E+6 * dT_data[18] * k_y * l_y) +
                              2.594592E+7 * dT_data[15] * i_y * dnormT_data[1] *
                              l_y) + 1.945944E+8 * dT_data[12] * f_y * h_y * l_y)
                              + 6.48648E+8 * dT_data[9] * d_y * m_y * l_y) +
                              9.72972E+8 * dT_data[6] * b_y * s_y * l_y) +
                              5.837832E+8 * dT_data[3] * dnormT_data[0] * ab_y *
                              l_y) + 9.72972E+7 * dT_data[0] * gb_y * l_y) +
                              5.189184E+7 * dT_data[12] * i_y * dnormT_data[2] *
                              l_y) + 6.48648E+8 * dT_data[9] * f_y *
                              dnormT_data[1] * dnormT_data[2] * l_y) +
                              2.594592E+9 * dT_data[6] * d_y * h_y *
                              dnormT_data[2] * l_y) + 3.891888E+9 * dT_data[3] *
                              b_y * m_y * dnormT_data[2] * l_y) + 1.945944E+9 *
                              dT_data[0] * dnormT_data[0] * s_y * dnormT_data[2]
                              * l_y) + 4.32432E+8 * dT_data[6] * f_y * n_y * l_y)
                              + 2.594592E+9 * dT_data[3] * d_y * dnormT_data[1] *
                              n_y * l_y) + 3.891888E+9 * dT_data[0] * b_y * h_y *
                              n_y * l_y) + 5.76576E+8 * dT_data[0] * d_y * w_y *
                              l_y) + 6.48648E+7 * dT_data[9] * i_y *
                              dnormT_data[3] * l_y) + 6.48648E+8 * dT_data[6] *
                              f_y * dnormT_data[1] * dnormT_data[3] * l_y) +
                              1.945944E+9 * dT_data[3] * d_y * h_y *
                              dnormT_data[3] * l_y) + 1.945944E+9 * dT_data[0] *
                              b_y * m_y * dnormT_data[3] * l_y) + 6.48648E+8 *
                              dT_data[3] * f_y * dnormT_data[2] * dnormT_data[3]
                              * l_y) + 2.594592E+9 * dT_data[0] * d_y *
                              dnormT_data[1] * dnormT_data[2] * dnormT_data[3] *
                              l_y) + 1.62162E+8 * dT_data[0] * f_y * t_y * l_y)
                              + 5.189184E+7 * dT_data[6] * i_y * dnormT_data[4] *
                              l_y) + 3.891888E+8 * dT_data[3] * f_y *
                              dnormT_data[1] * dnormT_data[4] * l_y) +
                              7.783776E+8 * dT_data[0] * d_y * h_y *
                              dnormT_data[4] * l_y) + 2.594592E+8 * dT_data[0] *
                              f_y * dnormT_data[2] * dnormT_data[4] * l_y) +
                              2.594592E+7 * dT_data[3] * i_y * dnormT_data[5] *
                              l_y) + 1.297296E+8 * dT_data[0] * f_y *
                              dnormT_data[1] * dnormT_data[5] * l_y) +
                              7.41312E+6 * dT_data[0] * i_y * dnormT_data[6] *
                              l_y) + -154440.0 * dT_data[21] * i_y * j_y) +
                              -3.0888E+6 * dT_data[18] * f_y * dnormT_data[1] *
                              j_y) + -2.16216E+7 * dT_data[15] * d_y * h_y * j_y)
                              + -6.48648E+7 * dT_data[12] * b_y * m_y * j_y) +
                              -8.1081E+7 * dT_data[9] * dnormT_data[0] * s_y *
                              j_y) + -3.24324E+7 * dT_data[6] * ab_y * j_y) +
                              -7.2072E+6 * dT_data[15] * f_y * dnormT_data[2] *
                              j_y) + -8.64864E+7 * dT_data[12] * d_y *
                              dnormT_data[1] * dnormT_data[2] * j_y) +
                              -3.24324E+8 * dT_data[9] * b_y * h_y *
                              dnormT_data[2] * j_y) + -4.32432E+8 * dT_data[6] *
                              dnormT_data[0] * m_y * dnormT_data[2] * j_y) +
                              -1.62162E+8 * dT_data[3] * s_y * dnormT_data[2] *
                              j_y) + -7.2072E+7 * dT_data[9] * d_y * n_y * j_y)
                              + -4.32432E+8 * dT_data[6] * b_y * dnormT_data[1] *
                              n_y * j_y) + -6.48648E+8 * dT_data[3] *
                              dnormT_data[0] * h_y * n_y * j_y) + -2.16216E+8 *
                              dT_data[0] * m_y * n_y * j_y) + -1.44144E+8 *
                              dT_data[3] * b_y * w_y * j_y) + -2.88288E+8 *
                              dT_data[0] * dnormT_data[0] * dnormT_data[1] * w_y
                              * j_y) + -1.08108E+7 * dT_data[12] * f_y *
                              dnormT_data[3] * j_y) + -1.08108E+8 * dT_data[9] *
                              d_y * dnormT_data[1] * dnormT_data[3] * j_y) +
                              -3.24324E+8 * dT_data[6] * b_y * h_y *
                              dnormT_data[3] * j_y) + -3.24324E+8 * dT_data[3] *
                              dnormT_data[0] * m_y * dnormT_data[3] * j_y) +
                              -8.1081E+7 * dT_data[0] * s_y * dnormT_data[3] *
                              j_y) + -1.44144E+8 * dT_data[6] * d_y *
                              dnormT_data[2] * dnormT_data[3] * j_y) +
                              -6.48648E+8 * dT_data[3] * b_y * dnormT_data[1] *
                              dnormT_data[2] * dnormT_data[3] * j_y) +
                              -6.48648E+8 * dT_data[0] * dnormT_data[0] * h_y *
                              dnormT_data[2] * dnormT_data[3] * j_y) +
                              -2.16216E+8 * dT_data[0] * b_y * n_y *
                              dnormT_data[3] * j_y) + -5.4054E+7 * dT_data[3] *
                              d_y * t_y * j_y) + -1.62162E+8 * dT_data[0] * b_y *
                              dnormT_data[1] * t_y * j_y) + -1.08108E+7 *
                              dT_data[9] * f_y * dnormT_data[4] * j_y) +
                              -8.64864E+7 * dT_data[6] * d_y * dnormT_data[1] *
                              dnormT_data[4] * j_y) + -1.945944E+8 * dT_data[3] *
                              b_y * h_y * dnormT_data[4] * j_y) + -1.297296E+8 *
                              dT_data[0] * dnormT_data[0] * m_y * dnormT_data[4]
                              * j_y) + -8.64864E+7 * dT_data[3] * d_y *
                              dnormT_data[2] * dnormT_data[4] * j_y) +
                              -2.594592E+8 * dT_data[0] * b_y * dnormT_data[1] *
                              dnormT_data[2] * dnormT_data[4] * j_y) +
                              -4.32432E+7 * dT_data[0] * d_y * dnormT_data[3] *
                              dnormT_data[4] * j_y) + -7.2072E+6 * dT_data[6] *
                              f_y * dnormT_data[5] * j_y) + -4.32432E+7 *
                              dT_data[3] * d_y * dnormT_data[1] * dnormT_data[5]
                              * j_y) + -6.48648E+7 * dT_data[0] * b_y * h_y *
                              dnormT_data[5] * j_y) + -2.88288E+7 * dT_data[0] *
                              d_y * dnormT_data[2] * dnormT_data[5] * j_y) +
                              -3.0888E+6 * dT_data[3] * f_y * dnormT_data[6] *
                              j_y) + -1.23552E+7 * dT_data[0] * d_y *
                              dnormT_data[1] * dnormT_data[6] * j_y) + -772200.0
                              * dT_data[0] * f_y * dnormT_data[7] * j_y) +
                              17160.0 * dT_data[24] * f_y * g_y) + 308880.0 *
                              dT_data[21] * d_y * dnormT_data[1] * g_y) +
                              1.85328E+6 * dT_data[18] * b_y * h_y * g_y) +
                              4.32432E+6 * dT_data[15] * dnormT_data[0] * m_y *
                              g_y) + 3.24324E+6 * dT_data[12] * s_y * g_y) +
                              823680.0 * dT_data[18] * d_y * dnormT_data[2] *
                              g_y) + 8.64864E+6 * dT_data[15] * b_y *
                              dnormT_data[1] * dnormT_data[2] * g_y) +
                              2.594592E+7 * dT_data[12] * dnormT_data[0] * h_y *
                              dnormT_data[2] * g_y) + 2.16216E+7 * dT_data[9] *
                              m_y * dnormT_data[2] * g_y) + 8.64864E+6 *
                              dT_data[12] * b_y * n_y * g_y) + 4.32432E+7 *
                              dT_data[9] * dnormT_data[0] * dnormT_data[1] * n_y
                              * g_y) + 4.32432E+7 * dT_data[6] * h_y * n_y * g_y)
                              + 1.92192E+7 * dT_data[6] * dnormT_data[0] * w_y *
                              g_y) + 2.88288E+7 * dT_data[3] * dnormT_data[1] *
                              w_y * g_y) + 4.8048E+6 * dT_data[0] * hb_y * g_y)
                              + 1.44144E+6 * dT_data[15] * d_y * dnormT_data[3] *
                              g_y) + 1.297296E+7 * dT_data[12] * b_y *
                              dnormT_data[1] * dnormT_data[3] * g_y) +
                              3.24324E+7 * dT_data[9] * dnormT_data[0] * h_y *
                              dnormT_data[3] * g_y) + 2.16216E+7 * dT_data[6] *
                              m_y * dnormT_data[3] * g_y) + 2.16216E+7 *
                              dT_data[9] * b_y * dnormT_data[2] * dnormT_data[3]
                              * g_y) + 8.64864E+7 * dT_data[6] * dnormT_data[0] *
                              dnormT_data[1] * dnormT_data[2] * dnormT_data[3] *
                              g_y) + 6.48648E+7 * dT_data[3] * h_y *
                              dnormT_data[2] * dnormT_data[3] * g_y) +
                              4.32432E+7 * dT_data[3] * dnormT_data[0] * n_y *
                              dnormT_data[3] * g_y) + 4.32432E+7 * dT_data[0] *
                              dnormT_data[1] * n_y * dnormT_data[3] * g_y) +
                              1.08108E+7 * dT_data[6] * b_y * t_y * g_y) +
                              3.24324E+7 * dT_data[3] * dnormT_data[0] *
                              dnormT_data[1] * t_y * g_y) + 1.62162E+7 *
                              dT_data[0] * h_y * t_y * g_y) + 2.16216E+7 *
                              dT_data[0] * dnormT_data[0] * dnormT_data[2] * t_y
                              * g_y) + 1.729728E+6 * dT_data[12] * d_y *
                              dnormT_data[4] * g_y) + 1.297296E+7 * dT_data[9] *
                              b_y * dnormT_data[1] * dnormT_data[4] * g_y) +
                              2.594592E+7 * dT_data[6] * dnormT_data[0] * h_y *
                              dnormT_data[4] * g_y) + 1.297296E+7 * dT_data[3] *
                              m_y * dnormT_data[4] * g_y) + 1.729728E+7 *
                              dT_data[6] * b_y * dnormT_data[2] * dnormT_data[4]
                              * g_y) + 5.189184E+7 * dT_data[3] * dnormT_data[0]
                              * dnormT_data[1] * dnormT_data[2] * dnormT_data[4]
                              * g_y) + 2.594592E+7 * dT_data[0] * h_y *
                              dnormT_data[2] * dnormT_data[4] * g_y) + d103 *
                              n_y * dnormT_data[4] * g_y) + 1.297296E+7 *
                              dT_data[3] * b_y * dnormT_data[3] * dnormT_data[4]
                              * g_y) + 2.594592E+7 * dT_data[0] * dnormT_data[0]
                              * dnormT_data[1] * dnormT_data[3] * dnormT_data[4]
                              * g_y) + 2.594592E+6 * dT_data[0] * b_y * bb_y *
                              g_y) + 1.44144E+6 * dT_data[9] * d_y *
                              dnormT_data[5] * g_y) + 8.64864E+6 * dT_data[6] *
                              b_y * dnormT_data[1] * dnormT_data[5] * g_y) +
                              1.297296E+7 * dT_data[3] * dnormT_data[0] * h_y *
                              dnormT_data[5] * g_y) + 4.32432E+6 * dT_data[0] *
                              m_y * dnormT_data[5] * g_y) + 8.64864E+6 *
                              dT_data[3] * b_y * dnormT_data[2] * dnormT_data[5]
                              * g_y) + d103 * dnormT_data[1] * dnormT_data[2] *
                              dnormT_data[5] * g_y) + 4.32432E+6 * dT_data[0] *
                              b_y * dnormT_data[3] * dnormT_data[5] * g_y) +
                              823680.0 * dT_data[6] * d_y * dnormT_data[6] * g_y)
                              + 3.70656E+6 * dT_data[3] * b_y * dnormT_data[1] *
                              dnormT_data[6] * g_y) + 3.70656E+6 * dT_data[0] *
                              dnormT_data[0] * h_y * dnormT_data[6] * g_y) +
                              2.47104E+6 * dT_data[0] * b_y * dnormT_data[2] *
                              dnormT_data[6] * g_y) + 308880.0 * dT_data[3] *
                              d_y * dnormT_data[7] * g_y) + 926640.0 * dT_data[0]
                              * b_y * dnormT_data[1] * dnormT_data[7] * g_y) +
                              68640.0 * dT_data[0] * d_y * dnormT_data[8] * g_y)
                              + -5148.0 * dT_data[0] * dnormT_data[9] * b_y *
                              e_y) + -1716.0 * dT_data[27] * d_y * e_y) +
                              -25740.0 * dT_data[24] * b_y * dnormT_data[1] *
                              e_y) + -115830.0 * dT_data[21] * dnormT_data[0] *
                              h_y * e_y) + -154440.0 * dT_data[18] * m_y * e_y)
                              + -77220.0 * dT_data[21] * b_y * dnormT_data[2] *
                              e_y) + -617760.0 * dT_data[18] * dnormT_data[0] *
                              dnormT_data[1] * dnormT_data[2] * e_y) +
                              -1.08108E+6 * dT_data[15] * h_y * dnormT_data[2] *
                              e_y) + -720720.0 * dT_data[15] * dnormT_data[0] *
                              n_y * e_y) + -2.16216E+6 * dT_data[12] *
                              dnormT_data[1] * n_y * e_y) + -1.2012E+6 *
                              dT_data[9] * w_y * e_y) + -154440.0 * dT_data[18] *
                              b_y * dnormT_data[3] * e_y) + -1.08108E+6 *
                              dT_data[15] * dnormT_data[0] * dnormT_data[1] *
                              dnormT_data[3] * e_y) + -1.62162E+6 * dT_data[12] *
                              h_y * dnormT_data[3] * e_y) + -2.16216E+6 *
                              dT_data[12] * dnormT_data[0] * dnormT_data[2] *
                              dnormT_data[3] * e_y) + -5.4054E+6 * dT_data[9] *
                              dnormT_data[1] * dnormT_data[2] * dnormT_data[3] *
                              e_y) + -3.6036E+6 * dT_data[6] * n_y *
                              dnormT_data[3] * e_y) + -1.35135E+6 * dT_data[9] *
                              dnormT_data[0] * t_y * e_y) + -2.7027E+6 *
                              dT_data[6] * dnormT_data[1] * t_y * e_y) +
                              -2.7027E+6 * dT_data[3] * dnormT_data[2] * t_y *
                              e_y) + -450450.0 * dT_data[0] * ib_y * e_y) +
                              -216216.0 * dT_data[15] * b_y * dnormT_data[4] *
                              e_y) + -1.297296E+6 * dT_data[12] * dnormT_data[0]
                              * dnormT_data[1] * dnormT_data[4] * e_y) +
                              -1.62162E+6 * dT_data[9] * h_y * dnormT_data[4] *
                              e_y) + d104 * dnormT_data[2] * dnormT_data[4] *
                              e_y) + -4.32432E+6 * dT_data[6] * dnormT_data[1] *
                              dnormT_data[2] * dnormT_data[4] * e_y) +
                              -2.16216E+6 * dT_data[3] * n_y * dnormT_data[4] *
                              e_y) + -2.16216E+6 * dT_data[6] * dnormT_data[0] *
                              dnormT_data[3] * dnormT_data[4] * e_y) +
                              -3.24324E+6 * dT_data[3] * dnormT_data[1] *
                              dnormT_data[3] * dnormT_data[4] * e_y) +
                              -2.16216E+6 * dT_data[0] * dnormT_data[2] *
                              dnormT_data[3] * dnormT_data[4] * e_y) + -648648.0
                              * dT_data[3] * dnormT_data[0] * bb_y * e_y) +
                              -648648.0 * dT_data[0] * dnormT_data[1] * bb_y *
                              e_y) + -216216.0 * dT_data[12] * b_y *
                              dnormT_data[5] * e_y) + -1.08108E+6 * dT_data[9] *
                              dnormT_data[0] * dnormT_data[1] * dnormT_data[5] *
                              e_y) + -1.08108E+6 * dT_data[6] * h_y *
                              dnormT_data[5] * e_y) + -1.44144E+6 * dT_data[6] *
                              dnormT_data[0] * dnormT_data[2] * dnormT_data[5] *
                              e_y) + -2.16216E+6 * dT_data[3] * dnormT_data[1] *
                              dnormT_data[2] * dnormT_data[5] * e_y) + -720720.0
                              * dT_data[0] * n_y * dnormT_data[5] * e_y) + d105 *
                              dnormT_data[3] * dnormT_data[5] * e_y) + d106 *
                              dnormT_data[3] * dnormT_data[5] * e_y) + -432432.0
                              * dT_data[0] * dnormT_data[0] * dnormT_data[4] *
                              dnormT_data[5] * e_y) + -154440.0 * dT_data[9] *
                              b_y * dnormT_data[6] * e_y) + -617760.0 * dT_data
                              [6] * dnormT_data[0] * dnormT_data[1] *
                              dnormT_data[6] * e_y) + -463320.0 * dT_data[3] *
                              h_y * dnormT_data[6] * e_y) + -617760.0 * dT_data
                              [3] * dnormT_data[0] * dnormT_data[2] *
                              dnormT_data[6] * e_y) + -617760.0 * dT_data[0] *
                              dnormT_data[1] * dnormT_data[2] * dnormT_data[6] *
                              e_y) + -308880.0 * dT_data[0] * dnormT_data[0] *
                              dnormT_data[3] * dnormT_data[6] * e_y) + -77220.0 *
                              dT_data[6] * b_y * dnormT_data[7] * e_y) +
                              -231660.0 * dT_data[3] * dnormT_data[0] *
                              dnormT_data[1] * dnormT_data[7] * e_y) + -115830.0
                              * dT_data[0] * h_y * dnormT_data[7] * e_y) +
                              -154440.0 * dT_data[0] * dnormT_data[0] *
                              dnormT_data[2] * dnormT_data[7] * e_y) + -25740.0 *
                              dT_data[3] * b_y * dnormT_data[8] * e_y) +
                              -51480.0 * dT_data[0] * dnormT_data[0] *
                              dnormT_data[1] * dnormT_data[8] * e_y) + 1716.0 *
                              dT_data[3] * dnormT_data[9] * dnormT_data[0] * c_y)
                              + 312.0 * dT_data[0] * dnormT_data[10] *
                              dnormT_data[0] * c_y) + 156.0 * dT_data[30] * b_y *
                              c_y) + 1716.0 * dT_data[0] * dnormT_data[9] *
                              dnormT_data[1] * c_y) + 1716.0 * dT_data[27] *
                              dnormT_data[0] * dnormT_data[1] * c_y) + 4290.0 *
                              dT_data[24] * h_y * c_y) + 5720.0 * dT_data[24] *
                              dnormT_data[0] * dnormT_data[2] * c_y) + 25740.0 *
                              dT_data[21] * dnormT_data[1] * dnormT_data[2] *
                              c_y) + 34320.0 * dT_data[18] * n_y * c_y) +
                              12870.0 * dT_data[21] * dnormT_data[0] *
                              dnormT_data[3] * c_y) + 51480.0 * dT_data[18] *
                              dnormT_data[1] * dnormT_data[3] * c_y) + 120120.0 *
                              dT_data[15] * dnormT_data[2] * dnormT_data[3] *
                              c_y) + 90090.0 * dT_data[12] * t_y * c_y) +
                              20592.0 * dT_data[18] * dnormT_data[0] *
                              dnormT_data[4] * c_y) + 72072.0 * dT_data[15] *
                              dnormT_data[1] * dnormT_data[4] * c_y) + 144144.0 *
                              dT_data[12] * dnormT_data[2] * dnormT_data[4] *
                              c_y) + 180180.0 * dT_data[9] * dnormT_data[3] *
                              dnormT_data[4] * c_y) + 72072.0 * dT_data[6] *
                              bb_y * c_y) + 24024.0 * dT_data[15] * dnormT_data
                              [0] * dnormT_data[5] * c_y) + 72072.0 * dT_data[12]
                              * dnormT_data[1] * dnormT_data[5] * c_y) +
                              120120.0 * dT_data[9] * dnormT_data[2] *
                              dnormT_data[5] * c_y) + 120120.0 * dT_data[6] *
                              dnormT_data[3] * dnormT_data[5] * c_y) + 72072.0 *
                              dT_data[3] * dnormT_data[4] * dnormT_data[5] * c_y)
                              + 12012.0 * dT_data[0] * jb_y * c_y) + 20592.0 *
                              dT_data[12] * dnormT_data[0] * dnormT_data[6] *
                              c_y) + 51480.0 * dT_data[9] * dnormT_data[1] *
                              dnormT_data[6] * c_y) + 68640.0 * dT_data[6] *
                              dnormT_data[2] * dnormT_data[6] * c_y) + 51480.0 *
                              dT_data[3] * dnormT_data[3] * dnormT_data[6] * c_y)
                              + 20592.0 * dT_data[0] * dnormT_data[4] *
                              dnormT_data[6] * c_y) + 12870.0 * dT_data[9] *
                              dnormT_data[0] * dnormT_data[7] * c_y) + 25740.0 *
                              dT_data[6] * dnormT_data[1] * dnormT_data[7] * c_y)
                              + 25740.0 * dT_data[3] * dnormT_data[2] *
                              dnormT_data[7] * c_y) + 12870.0 * dT_data[0] *
                              dnormT_data[3] * dnormT_data[7] * c_y) + 5720.0 *
                              dT_data[6] * dnormT_data[0] * dnormT_data[8] * c_y)
                              + 8580.0 * dT_data[3] * dnormT_data[1] *
                              dnormT_data[8] * c_y) + 5720.0 * dT_data[0] *
                              dnormT_data[2] * dnormT_data[8] * c_y) + -286.0 *
                              dT_data[6] * dnormT_data[9] * dnormT_tmp) + -78.0 *
                              dT_data[3] * dnormT_data[10] * dnormT_tmp) + -13.0
                              * dT_data[0] * dnormT_data[11] * dnormT_tmp) +
                              -13.0 * dT_data[33] * dnormT_data[0] * dnormT_tmp)
                              + -78.0 * dT_data[30] * dnormT_data[1] *
                              dnormT_tmp) + -286.0 * dT_data[27] * dnormT_data[2]
                              * dnormT_tmp) + -715.0 * dT_data[24] *
                              dnormT_data[3] * dnormT_tmp) + -1287.0 * dT_data
                              [21] * dnormT_data[4] * dnormT_tmp) + -1716.0 *
                              dT_data[18] * dnormT_data[5] * dnormT_tmp) +
                              -1716.0 * dT_data[15] * dnormT_data[6] *
                              dnormT_tmp) + -1287.0 * dT_data[12] * dnormT_data
                              [7] * dnormT_tmp) + -715.0 * dT_data[9] *
                              dnormT_data[8] * dnormT_tmp) + dT_data[36] * y) +
                              d0 * T[0]) + d1 * T[0]) + d2 * T[0]) + d3 * T[0])
                              + d4 * T[0]) + d5 * T[0]) + d6 * T[0]) + d7 * T[0])
                              + d8 * T[0]) + d9 * T[0]) + d10 * T[0]) + d11 * T
                              [0]) + d12 * T[0]) + d13 * T[0]) + d14 * T[0]) +
                              d15 * T[0]) + d16 * T[0]) + d17 * T[0]) + d18 * T
                              [0]) + d19 * T[0]) + d20 * T[0]) + d21 * T[0]) +
                              d22 * T[0]) + d23 * T[0]) + d24 * T[0]) + d25 * T
                              [0]) + d26 * T[0]) + d28 * T[0]) + d29 * T[0]) +
                              d30 * T[0]) + d31 * T[0]) + d32 * T[0]) + d33 * T
                              [0]) + d34 * T[0]) + d35 * T[0]) + d36 * T[0]) +
                              d37 * T[0]) + d38 * T[0]) + d39 * T[0]) + d40 * T
                              [0]) + d41 * T[0]) + d42 * T[0]) + d43 * T[0]) +
                              d44 * T[0]) + d45 * T[0]) + d46 * T[0]) + d47 * T
                              [0]) + d48 * T[0]) + d49 * T[0]) + d50 * T[0]) +
                              d51 * T[0]) + d52 * T[0]) + d54 * T[0]) + d55 * T
                              [0]) + d56 * T[0]) + d57 * T[0]) + d53 * T[0]) +
                              d59 * T[0]) + d60 * T[0]) + d61 * T[0]) + d62 * T
                              [0]) + d63 * T[0]) + d64 * T[0]) + d65 * T[0]) +
                              d66 * T[0]) + d67 * T[0]) + d68 * T[0]) + d69 * T
                              [0]) + d70 * T[0]) + d71 * T[0]) + d72 * T[0]) +
                              d73 * T[0]) + d75 * T[0]) + d76 * T[0]) + d77 * T
                              [0]) + d78 * T[0]) + d79 * T[0]) + d80 * T[0]) +
                              d81 * T[0]) + d82 * T[0]) + d83 * T[0]) + d84 * T
                                                 [0]) + d85 * T[0]) + d86 * T[0])
                                              + d87 * T[0]) + d88 * T[0]) + d89 *
                                            T[0]) + d90 * T[0]) + d91 * T[0]) +
                                         d92 * T[0]) + d93 * T[0]) + d94 * T[0])
                                      + d95 * T[0]) + d96 * T[0]) + d97 * T[0])
                                   + d98 * T[0]) + d99 * T[0]) + d100 * T[0]) +
                                d101 * T[0]) + d102 * T[0]) + dnormT * T[0];
                            d103 = 1.729728E+7 * dT_data[1] * dnormT_data[0];
                            d107 = -2.16216E+6 * dT_data[10] * dnormT_data[0];
                            d108 = -1.08108E+6 * dT_data[4] * dnormT_data[0];
                            d109 = -1.08108E+6 * dT_data[1] * dnormT_data[1];
                            dq_data[37] =
                              (((((((((((((((((((((((((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((((((((((((((((((((((((
                              ((((((((((((((6.2270208E+9 * dT_data[1] * eb_y *
                              fb_y + -3.1135104E+9 * dT_data[4] * cb_y * db_y) +
                              -3.42486144E+10 * dT_data[1] * x_y * dnormT_data[1]
                              * db_y) + 1.0378368E+9 * dT_data[7] * x_y * y_y) +
                              1.5567552E+10 * dT_data[4] * u_y * dnormT_data[1] *
                              y_y) + 7.0053984E+10 * dT_data[1] * q_y * h_y *
                              y_y) + 1.0378368E+10 * dT_data[1] * u_y *
                              dnormT_data[2] * y_y) + -2.594592E+8 * dT_data[10]
                              * u_y * v_y) + -4.6702656E+9 * dT_data[7] * q_y *
                              dnormT_data[1] * v_y) + -2.80215936E+10 * dT_data
                              [4] * o_y * h_y * v_y) + -6.53837184E+10 *
                              dT_data[1] * k_y * m_y * v_y) + -4.6702656E+9 *
                              dT_data[4] * q_y * dnormT_data[2] * v_y) +
                              -3.73621248E+10 * dT_data[1] * o_y * dnormT_data[1]
                              * dnormT_data[2] * v_y) + -2.3351328E+9 * dT_data
                              [1] * q_y * dnormT_data[3] * v_y) + 5.189184E+7 *
                              dT_data[13] * q_y * r_y) + 1.0378368E+9 * dT_data
                              [10] * o_y * dnormT_data[1] * r_y) + 7.2648576E+9 *
                              dT_data[7] * k_y * h_y * r_y) + 2.17945728E+10 *
                              dT_data[4] * i_y * m_y * r_y) + 2.7243216E+10 *
                              dT_data[1] * f_y * s_y * r_y) + 1.3837824E+9 *
                              dT_data[7] * o_y * dnormT_data[2] * r_y) +
                              1.45297152E+10 * dT_data[4] * k_y * dnormT_data[1]
                              * dnormT_data[2] * r_y) + 4.35891456E+10 *
                              dT_data[1] * i_y * h_y * dnormT_data[2] * r_y) +
                              4.8432384E+9 * dT_data[1] * k_y * n_y * r_y) +
                              1.0378368E+9 * dT_data[4] * o_y * dnormT_data[3] *
                              r_y) + 7.2648576E+9 * dT_data[1] * k_y *
                              dnormT_data[1] * dnormT_data[3] * r_y) +
                              4.1513472E+8 * dT_data[1] * o_y * dnormT_data[4] *
                              r_y) + -8.64864E+6 * dT_data[16] * o_y * p_y) +
                              -1.8162144E+8 * dT_data[13] * k_y * dnormT_data[1]
                              * p_y) + -1.3621608E+9 * dT_data[10] * i_y * h_y *
                              p_y) + -4.540536E+9 * dT_data[7] * f_y * m_y * p_y)
                              + -6.810804E+9 * dT_data[4] * d_y * s_y * p_y) +
                              -4.0864824E+9 * dT_data[1] * b_y * ab_y * p_y) +
                              -3.027024E+8 * dT_data[10] * k_y * dnormT_data[2] *
                              p_y) + -3.6324288E+9 * dT_data[7] * i_y *
                              dnormT_data[1] * dnormT_data[2] * p_y) +
                              -1.3621608E+10 * dT_data[4] * f_y * h_y *
                              dnormT_data[2] * p_y) + -1.8162144E+10 * dT_data[1]
                              * d_y * m_y * dnormT_data[2] * p_y) +
                              -1.8162144E+9 * dT_data[4] * i_y * n_y * p_y) +
                              -9.081072E+9 * dT_data[1] * f_y * dnormT_data[1] *
                              n_y * p_y) + -3.027024E+8 * dT_data[7] * k_y *
                              dnormT_data[3] * p_y) + -2.7243216E+9 * dT_data[4]
                              * i_y * dnormT_data[1] * dnormT_data[3] * p_y) +
                              -6.810804E+9 * dT_data[1] * f_y * h_y *
                              dnormT_data[3] * p_y) + -1.8162144E+9 * dT_data[1]
                              * i_y * dnormT_data[2] * dnormT_data[3] * p_y) +
                              -1.8162144E+8 * dT_data[4] * k_y * dnormT_data[4] *
                              p_y) + -1.08972864E+9 * dT_data[1] * i_y *
                              dnormT_data[1] * dnormT_data[4] * p_y) +
                              -6.054048E+7 * dT_data[1] * k_y * dnormT_data[5] *
                              p_y) + 1.23552E+6 * dT_data[19] * k_y * l_y) +
                              2.594592E+7 * dT_data[16] * i_y * dnormT_data[1] *
                              l_y) + 1.945944E+8 * dT_data[13] * f_y * h_y * l_y)
                              + 6.48648E+8 * dT_data[10] * d_y * m_y * l_y) +
                              9.72972E+8 * dT_data[7] * b_y * s_y * l_y) +
                              5.837832E+8 * dT_data[4] * dnormT_data[0] * ab_y *
                              l_y) + 9.72972E+7 * dT_data[1] * gb_y * l_y) +
                              5.189184E+7 * dT_data[13] * i_y * dnormT_data[2] *
                              l_y) + 6.48648E+8 * dT_data[10] * f_y *
                              dnormT_data[1] * dnormT_data[2] * l_y) +
                              2.594592E+9 * dT_data[7] * d_y * h_y *
                              dnormT_data[2] * l_y) + 3.891888E+9 * dT_data[4] *
                              b_y * m_y * dnormT_data[2] * l_y) + 1.945944E+9 *
                              dT_data[1] * dnormT_data[0] * s_y * dnormT_data[2]
                              * l_y) + 4.32432E+8 * dT_data[7] * f_y * n_y * l_y)
                              + 2.594592E+9 * dT_data[4] * d_y * dnormT_data[1] *
                              n_y * l_y) + 3.891888E+9 * dT_data[1] * b_y * h_y *
                              n_y * l_y) + 5.76576E+8 * dT_data[1] * d_y * w_y *
                              l_y) + 6.48648E+7 * dT_data[10] * i_y *
                              dnormT_data[3] * l_y) + 6.48648E+8 * dT_data[7] *
                              f_y * dnormT_data[1] * dnormT_data[3] * l_y) +
                              1.945944E+9 * dT_data[4] * d_y * h_y *
                              dnormT_data[3] * l_y) + 1.945944E+9 * dT_data[1] *
                              b_y * m_y * dnormT_data[3] * l_y) + 6.48648E+8 *
                              dT_data[4] * f_y * dnormT_data[2] * dnormT_data[3]
                              * l_y) + 2.594592E+9 * dT_data[1] * d_y *
                              dnormT_data[1] * dnormT_data[2] * dnormT_data[3] *
                              l_y) + 1.62162E+8 * dT_data[1] * f_y * t_y * l_y)
                              + 5.189184E+7 * dT_data[7] * i_y * dnormT_data[4] *
                              l_y) + 3.891888E+8 * dT_data[4] * f_y *
                              dnormT_data[1] * dnormT_data[4] * l_y) +
                              7.783776E+8 * dT_data[1] * d_y * h_y *
                              dnormT_data[4] * l_y) + 2.594592E+8 * dT_data[1] *
                              f_y * dnormT_data[2] * dnormT_data[4] * l_y) +
                              2.594592E+7 * dT_data[4] * i_y * dnormT_data[5] *
                              l_y) + 1.297296E+8 * dT_data[1] * f_y *
                              dnormT_data[1] * dnormT_data[5] * l_y) +
                              7.41312E+6 * dT_data[1] * i_y * dnormT_data[6] *
                              l_y) + -154440.0 * dT_data[22] * i_y * j_y) +
                              -3.0888E+6 * dT_data[19] * f_y * dnormT_data[1] *
                              j_y) + -2.16216E+7 * dT_data[16] * d_y * h_y * j_y)
                              + -6.48648E+7 * dT_data[13] * b_y * m_y * j_y) +
                              -8.1081E+7 * dT_data[10] * dnormT_data[0] * s_y *
                              j_y) + -3.24324E+7 * dT_data[7] * ab_y * j_y) +
                              -7.2072E+6 * dT_data[16] * f_y * dnormT_data[2] *
                              j_y) + -8.64864E+7 * dT_data[13] * d_y *
                              dnormT_data[1] * dnormT_data[2] * j_y) +
                              -3.24324E+8 * dT_data[10] * b_y * h_y *
                              dnormT_data[2] * j_y) + -4.32432E+8 * dT_data[7] *
                              dnormT_data[0] * m_y * dnormT_data[2] * j_y) +
                              -1.62162E+8 * dT_data[4] * s_y * dnormT_data[2] *
                              j_y) + -7.2072E+7 * dT_data[10] * d_y * n_y * j_y)
                              + -4.32432E+8 * dT_data[7] * b_y * dnormT_data[1] *
                              n_y * j_y) + -6.48648E+8 * dT_data[4] *
                              dnormT_data[0] * h_y * n_y * j_y) + -2.16216E+8 *
                              dT_data[1] * m_y * n_y * j_y) + -1.44144E+8 *
                              dT_data[4] * b_y * w_y * j_y) + -2.88288E+8 *
                              dT_data[1] * dnormT_data[0] * dnormT_data[1] * w_y
                              * j_y) + -1.08108E+7 * dT_data[13] * f_y *
                              dnormT_data[3] * j_y) + -1.08108E+8 * dT_data[10] *
                              d_y * dnormT_data[1] * dnormT_data[3] * j_y) +
                              -3.24324E+8 * dT_data[7] * b_y * h_y *
                              dnormT_data[3] * j_y) + -3.24324E+8 * dT_data[4] *
                              dnormT_data[0] * m_y * dnormT_data[3] * j_y) +
                              -8.1081E+7 * dT_data[1] * s_y * dnormT_data[3] *
                              j_y) + -1.44144E+8 * dT_data[7] * d_y *
                              dnormT_data[2] * dnormT_data[3] * j_y) +
                              -6.48648E+8 * dT_data[4] * b_y * dnormT_data[1] *
                              dnormT_data[2] * dnormT_data[3] * j_y) +
                              -6.48648E+8 * dT_data[1] * dnormT_data[0] * h_y *
                              dnormT_data[2] * dnormT_data[3] * j_y) +
                              -2.16216E+8 * dT_data[1] * b_y * n_y *
                              dnormT_data[3] * j_y) + -5.4054E+7 * dT_data[4] *
                              d_y * t_y * j_y) + -1.62162E+8 * dT_data[1] * b_y *
                              dnormT_data[1] * t_y * j_y) + -1.08108E+7 *
                              dT_data[10] * f_y * dnormT_data[4] * j_y) +
                              -8.64864E+7 * dT_data[7] * d_y * dnormT_data[1] *
                              dnormT_data[4] * j_y) + -1.945944E+8 * dT_data[4] *
                              b_y * h_y * dnormT_data[4] * j_y) + -1.297296E+8 *
                              dT_data[1] * dnormT_data[0] * m_y * dnormT_data[4]
                              * j_y) + -8.64864E+7 * dT_data[4] * d_y *
                              dnormT_data[2] * dnormT_data[4] * j_y) +
                              -2.594592E+8 * dT_data[1] * b_y * dnormT_data[1] *
                              dnormT_data[2] * dnormT_data[4] * j_y) +
                              -4.32432E+7 * dT_data[1] * d_y * dnormT_data[3] *
                              dnormT_data[4] * j_y) + -7.2072E+6 * dT_data[7] *
                              f_y * dnormT_data[5] * j_y) + -4.32432E+7 *
                              dT_data[4] * d_y * dnormT_data[1] * dnormT_data[5]
                              * j_y) + -6.48648E+7 * dT_data[1] * b_y * h_y *
                              dnormT_data[5] * j_y) + -2.88288E+7 * dT_data[1] *
                              d_y * dnormT_data[2] * dnormT_data[5] * j_y) +
                              -3.0888E+6 * dT_data[4] * f_y * dnormT_data[6] *
                              j_y) + -1.23552E+7 * dT_data[1] * d_y *
                              dnormT_data[1] * dnormT_data[6] * j_y) + -772200.0
                              * dT_data[1] * f_y * dnormT_data[7] * j_y) +
                              17160.0 * dT_data[25] * f_y * g_y) + 308880.0 *
                              dT_data[22] * d_y * dnormT_data[1] * g_y) +
                              1.85328E+6 * dT_data[19] * b_y * h_y * g_y) +
                              4.32432E+6 * dT_data[16] * dnormT_data[0] * m_y *
                              g_y) + 3.24324E+6 * dT_data[13] * s_y * g_y) +
                              823680.0 * dT_data[19] * d_y * dnormT_data[2] *
                              g_y) + 8.64864E+6 * dT_data[16] * b_y *
                              dnormT_data[1] * dnormT_data[2] * g_y) +
                              2.594592E+7 * dT_data[13] * dnormT_data[0] * h_y *
                              dnormT_data[2] * g_y) + 2.16216E+7 * dT_data[10] *
                              m_y * dnormT_data[2] * g_y) + 8.64864E+6 *
                              dT_data[13] * b_y * n_y * g_y) + 4.32432E+7 *
                              dT_data[10] * dnormT_data[0] * dnormT_data[1] *
                              n_y * g_y) + 4.32432E+7 * dT_data[7] * h_y * n_y *
                              g_y) + 1.92192E+7 * dT_data[7] * dnormT_data[0] *
                              w_y * g_y) + 2.88288E+7 * dT_data[4] *
                              dnormT_data[1] * w_y * g_y) + 4.8048E+6 * dT_data
                              [1] * hb_y * g_y) + 1.44144E+6 * dT_data[16] * d_y
                              * dnormT_data[3] * g_y) + 1.297296E+7 * dT_data[13]
                              * b_y * dnormT_data[1] * dnormT_data[3] * g_y) +
                              3.24324E+7 * dT_data[10] * dnormT_data[0] * h_y *
                              dnormT_data[3] * g_y) + 2.16216E+7 * dT_data[7] *
                              m_y * dnormT_data[3] * g_y) + 2.16216E+7 *
                              dT_data[10] * b_y * dnormT_data[2] * dnormT_data[3]
                              * g_y) + 8.64864E+7 * dT_data[7] * dnormT_data[0] *
                              dnormT_data[1] * dnormT_data[2] * dnormT_data[3] *
                              g_y) + 6.48648E+7 * dT_data[4] * h_y *
                              dnormT_data[2] * dnormT_data[3] * g_y) +
                              4.32432E+7 * dT_data[4] * dnormT_data[0] * n_y *
                              dnormT_data[3] * g_y) + 4.32432E+7 * dT_data[1] *
                              dnormT_data[1] * n_y * dnormT_data[3] * g_y) +
                              1.08108E+7 * dT_data[7] * b_y * t_y * g_y) +
                              3.24324E+7 * dT_data[4] * dnormT_data[0] *
                              dnormT_data[1] * t_y * g_y) + 1.62162E+7 *
                              dT_data[1] * h_y * t_y * g_y) + 2.16216E+7 *
                              dT_data[1] * dnormT_data[0] * dnormT_data[2] * t_y
                              * g_y) + 1.729728E+6 * dT_data[13] * d_y *
                              dnormT_data[4] * g_y) + 1.297296E+7 * dT_data[10] *
                              b_y * dnormT_data[1] * dnormT_data[4] * g_y) +
                              2.594592E+7 * dT_data[7] * dnormT_data[0] * h_y *
                              dnormT_data[4] * g_y) + 1.297296E+7 * dT_data[4] *
                              m_y * dnormT_data[4] * g_y) + 1.729728E+7 *
                              dT_data[7] * b_y * dnormT_data[2] * dnormT_data[4]
                              * g_y) + 5.189184E+7 * dT_data[4] * dnormT_data[0]
                              * dnormT_data[1] * dnormT_data[2] * dnormT_data[4]
                              * g_y) + 2.594592E+7 * dT_data[1] * h_y *
                              dnormT_data[2] * dnormT_data[4] * g_y) + d103 *
                              n_y * dnormT_data[4] * g_y) + 1.297296E+7 *
                              dT_data[4] * b_y * dnormT_data[3] * dnormT_data[4]
                              * g_y) + 2.594592E+7 * dT_data[1] * dnormT_data[0]
                              * dnormT_data[1] * dnormT_data[3] * dnormT_data[4]
                              * g_y) + 2.594592E+6 * dT_data[1] * b_y * bb_y *
                              g_y) + 1.44144E+6 * dT_data[10] * d_y *
                              dnormT_data[5] * g_y) + 8.64864E+6 * dT_data[7] *
                              b_y * dnormT_data[1] * dnormT_data[5] * g_y) +
                              1.297296E+7 * dT_data[4] * dnormT_data[0] * h_y *
                              dnormT_data[5] * g_y) + 4.32432E+6 * dT_data[1] *
                              m_y * dnormT_data[5] * g_y) + 8.64864E+6 *
                              dT_data[4] * b_y * dnormT_data[2] * dnormT_data[5]
                              * g_y) + d103 * dnormT_data[1] * dnormT_data[2] *
                              dnormT_data[5] * g_y) + 4.32432E+6 * dT_data[1] *
                              b_y * dnormT_data[3] * dnormT_data[5] * g_y) +
                              823680.0 * dT_data[7] * d_y * dnormT_data[6] * g_y)
                              + 3.70656E+6 * dT_data[4] * b_y * dnormT_data[1] *
                              dnormT_data[6] * g_y) + 3.70656E+6 * dT_data[1] *
                              dnormT_data[0] * h_y * dnormT_data[6] * g_y) +
                              2.47104E+6 * dT_data[1] * b_y * dnormT_data[2] *
                              dnormT_data[6] * g_y) + 308880.0 * dT_data[4] *
                              d_y * dnormT_data[7] * g_y) + 926640.0 * dT_data[1]
                              * b_y * dnormT_data[1] * dnormT_data[7] * g_y) +
                              68640.0 * dT_data[1] * d_y * dnormT_data[8] * g_y)
                              + -5148.0 * dT_data[1] * dnormT_data[9] * b_y *
                              e_y) + -1716.0 * dT_data[28] * d_y * e_y) +
                              -25740.0 * dT_data[25] * b_y * dnormT_data[1] *
                              e_y) + -115830.0 * dT_data[22] * dnormT_data[0] *
                              h_y * e_y) + -154440.0 * dT_data[19] * m_y * e_y)
                              + -77220.0 * dT_data[22] * b_y * dnormT_data[2] *
                              e_y) + -617760.0 * dT_data[19] * dnormT_data[0] *
                              dnormT_data[1] * dnormT_data[2] * e_y) +
                              -1.08108E+6 * dT_data[16] * h_y * dnormT_data[2] *
                              e_y) + -720720.0 * dT_data[16] * dnormT_data[0] *
                              n_y * e_y) + -2.16216E+6 * dT_data[13] *
                              dnormT_data[1] * n_y * e_y) + -1.2012E+6 *
                              dT_data[10] * w_y * e_y) + -154440.0 * dT_data[19]
                              * b_y * dnormT_data[3] * e_y) + -1.08108E+6 *
                              dT_data[16] * dnormT_data[0] * dnormT_data[1] *
                              dnormT_data[3] * e_y) + -1.62162E+6 * dT_data[13] *
                              h_y * dnormT_data[3] * e_y) + -2.16216E+6 *
                              dT_data[13] * dnormT_data[0] * dnormT_data[2] *
                              dnormT_data[3] * e_y) + -5.4054E+6 * dT_data[10] *
                              dnormT_data[1] * dnormT_data[2] * dnormT_data[3] *
                              e_y) + -3.6036E+6 * dT_data[7] * n_y *
                              dnormT_data[3] * e_y) + -1.35135E+6 * dT_data[10] *
                              dnormT_data[0] * t_y * e_y) + -2.7027E+6 *
                              dT_data[7] * dnormT_data[1] * t_y * e_y) +
                              -2.7027E+6 * dT_data[4] * dnormT_data[2] * t_y *
                              e_y) + -450450.0 * dT_data[1] * ib_y * e_y) +
                              -216216.0 * dT_data[16] * b_y * dnormT_data[4] *
                              e_y) + -1.297296E+6 * dT_data[13] * dnormT_data[0]
                              * dnormT_data[1] * dnormT_data[4] * e_y) +
                              -1.62162E+6 * dT_data[10] * h_y * dnormT_data[4] *
                              e_y) + d107 * dnormT_data[2] * dnormT_data[4] *
                              e_y) + -4.32432E+6 * dT_data[7] * dnormT_data[1] *
                              dnormT_data[2] * dnormT_data[4] * e_y) +
                              -2.16216E+6 * dT_data[4] * n_y * dnormT_data[4] *
                              e_y) + -2.16216E+6 * dT_data[7] * dnormT_data[0] *
                              dnormT_data[3] * dnormT_data[4] * e_y) +
                              -3.24324E+6 * dT_data[4] * dnormT_data[1] *
                              dnormT_data[3] * dnormT_data[4] * e_y) +
                              -2.16216E+6 * dT_data[1] * dnormT_data[2] *
                              dnormT_data[3] * dnormT_data[4] * e_y) + -648648.0
                              * dT_data[4] * dnormT_data[0] * bb_y * e_y) +
                              -648648.0 * dT_data[1] * dnormT_data[1] * bb_y *
                              e_y) + -216216.0 * dT_data[13] * b_y *
                              dnormT_data[5] * e_y) + -1.08108E+6 * dT_data[10] *
                              dnormT_data[0] * dnormT_data[1] * dnormT_data[5] *
                              e_y) + -1.08108E+6 * dT_data[7] * h_y *
                              dnormT_data[5] * e_y) + -1.44144E+6 * dT_data[7] *
                              dnormT_data[0] * dnormT_data[2] * dnormT_data[5] *
                              e_y) + -2.16216E+6 * dT_data[4] * dnormT_data[1] *
                              dnormT_data[2] * dnormT_data[5] * e_y) + -720720.0
                              * dT_data[1] * n_y * dnormT_data[5] * e_y) + d108 *
                              dnormT_data[3] * dnormT_data[5] * e_y) + d109 *
                              dnormT_data[3] * dnormT_data[5] * e_y) + -432432.0
                              * dT_data[1] * dnormT_data[0] * dnormT_data[4] *
                              dnormT_data[5] * e_y) + -154440.0 * dT_data[10] *
                              b_y * dnormT_data[6] * e_y) + -617760.0 * dT_data
                              [7] * dnormT_data[0] * dnormT_data[1] *
                              dnormT_data[6] * e_y) + -463320.0 * dT_data[4] *
                              h_y * dnormT_data[6] * e_y) + -617760.0 * dT_data
                              [4] * dnormT_data[0] * dnormT_data[2] *
                              dnormT_data[6] * e_y) + -617760.0 * dT_data[1] *
                              dnormT_data[1] * dnormT_data[2] * dnormT_data[6] *
                              e_y) + -308880.0 * dT_data[1] * dnormT_data[0] *
                              dnormT_data[3] * dnormT_data[6] * e_y) + -77220.0 *
                              dT_data[7] * b_y * dnormT_data[7] * e_y) +
                              -231660.0 * dT_data[4] * dnormT_data[0] *
                              dnormT_data[1] * dnormT_data[7] * e_y) + -115830.0
                              * dT_data[1] * h_y * dnormT_data[7] * e_y) +
                              -154440.0 * dT_data[1] * dnormT_data[0] *
                              dnormT_data[2] * dnormT_data[7] * e_y) + -25740.0 *
                              dT_data[4] * b_y * dnormT_data[8] * e_y) +
                              -51480.0 * dT_data[1] * dnormT_data[0] *
                              dnormT_data[1] * dnormT_data[8] * e_y) + 1716.0 *
                              dT_data[4] * dnormT_data[9] * dnormT_data[0] * c_y)
                              + 312.0 * dT_data[1] * dnormT_data[10] *
                              dnormT_data[0] * c_y) + 156.0 * dT_data[31] * b_y *
                              c_y) + 1716.0 * dT_data[1] * dnormT_data[9] *
                              dnormT_data[1] * c_y) + 1716.0 * dT_data[28] *
                              dnormT_data[0] * dnormT_data[1] * c_y) + 4290.0 *
                              dT_data[25] * h_y * c_y) + 5720.0 * dT_data[25] *
                              dnormT_data[0] * dnormT_data[2] * c_y) + 25740.0 *
                              dT_data[22] * dnormT_data[1] * dnormT_data[2] *
                              c_y) + 34320.0 * dT_data[19] * n_y * c_y) +
                              12870.0 * dT_data[22] * dnormT_data[0] *
                              dnormT_data[3] * c_y) + 51480.0 * dT_data[19] *
                              dnormT_data[1] * dnormT_data[3] * c_y) + 120120.0 *
                              dT_data[16] * dnormT_data[2] * dnormT_data[3] *
                              c_y) + 90090.0 * dT_data[13] * t_y * c_y) +
                              20592.0 * dT_data[19] * dnormT_data[0] *
                              dnormT_data[4] * c_y) + 72072.0 * dT_data[16] *
                              dnormT_data[1] * dnormT_data[4] * c_y) + 144144.0 *
                              dT_data[13] * dnormT_data[2] * dnormT_data[4] *
                              c_y) + 180180.0 * dT_data[10] * dnormT_data[3] *
                              dnormT_data[4] * c_y) + 72072.0 * dT_data[7] *
                              bb_y * c_y) + 24024.0 * dT_data[16] * dnormT_data
                              [0] * dnormT_data[5] * c_y) + 72072.0 * dT_data[13]
                              * dnormT_data[1] * dnormT_data[5] * c_y) +
                              120120.0 * dT_data[10] * dnormT_data[2] *
                              dnormT_data[5] * c_y) + 120120.0 * dT_data[7] *
                              dnormT_data[3] * dnormT_data[5] * c_y) + 72072.0 *
                              dT_data[4] * dnormT_data[4] * dnormT_data[5] * c_y)
                              + 12012.0 * dT_data[1] * jb_y * c_y) + 20592.0 *
                              dT_data[13] * dnormT_data[0] * dnormT_data[6] *
                              c_y) + 51480.0 * dT_data[10] * dnormT_data[1] *
                              dnormT_data[6] * c_y) + 68640.0 * dT_data[7] *
                              dnormT_data[2] * dnormT_data[6] * c_y) + 51480.0 *
                              dT_data[4] * dnormT_data[3] * dnormT_data[6] * c_y)
                              + 20592.0 * dT_data[1] * dnormT_data[4] *
                              dnormT_data[6] * c_y) + 12870.0 * dT_data[10] *
                              dnormT_data[0] * dnormT_data[7] * c_y) + 25740.0 *
                              dT_data[7] * dnormT_data[1] * dnormT_data[7] * c_y)
                              + 25740.0 * dT_data[4] * dnormT_data[2] *
                              dnormT_data[7] * c_y) + 12870.0 * dT_data[1] *
                              dnormT_data[3] * dnormT_data[7] * c_y) + 5720.0 *
                              dT_data[7] * dnormT_data[0] * dnormT_data[8] * c_y)
                              + 8580.0 * dT_data[4] * dnormT_data[1] *
                              dnormT_data[8] * c_y) + 5720.0 * dT_data[1] *
                              dnormT_data[2] * dnormT_data[8] * c_y) + -286.0 *
                              dT_data[7] * dnormT_data[9] * dnormT_tmp) + -78.0 *
                              dT_data[4] * dnormT_data[10] * dnormT_tmp) + -13.0
                              * dT_data[1] * dnormT_data[11] * dnormT_tmp) +
                              -13.0 * dT_data[34] * dnormT_data[0] * dnormT_tmp)
                              + -78.0 * dT_data[31] * dnormT_data[1] *
                              dnormT_tmp) + -286.0 * dT_data[28] * dnormT_data[2]
                              * dnormT_tmp) + -715.0 * dT_data[25] *
                              dnormT_data[3] * dnormT_tmp) + -1287.0 * dT_data
                              [22] * dnormT_data[4] * dnormT_tmp) + -1716.0 *
                              dT_data[19] * dnormT_data[5] * dnormT_tmp) +
                              -1716.0 * dT_data[16] * dnormT_data[6] *
                              dnormT_tmp) + -1287.0 * dT_data[13] * dnormT_data
                              [7] * dnormT_tmp) + -715.0 * dT_data[10] *
                              dnormT_data[8] * dnormT_tmp) + dT_data[37] * y) +
                              d0 * T[1]) + d1 * T[1]) + d2 * T[1]) + d3 * T[1])
                              + d4 * T[1]) + d5 * T[1]) + d6 * T[1]) + d7 * T[1])
                              + d8 * T[1]) + d9 * T[1]) + d10 * T[1]) + d11 * T
                              [1]) + d12 * T[1]) + d13 * T[1]) + d14 * T[1]) +
                              d15 * T[1]) + d16 * T[1]) + d17 * T[1]) + d18 * T
                              [1]) + d19 * T[1]) + d20 * T[1]) + d21 * T[1]) +
                              d22 * T[1]) + d23 * T[1]) + d24 * T[1]) + d25 * T
                              [1]) + d26 * T[1]) + d28 * T[1]) + d29 * T[1]) +
                              d30 * T[1]) + d31 * T[1]) + d32 * T[1]) + d33 * T
                              [1]) + d34 * T[1]) + d35 * T[1]) + d36 * T[1]) +
                              d37 * T[1]) + d38 * T[1]) + d39 * T[1]) + d40 * T
                              [1]) + d41 * T[1]) + d42 * T[1]) + d43 * T[1]) +
                              d44 * T[1]) + d45 * T[1]) + d46 * T[1]) + d47 * T
                              [1]) + d48 * T[1]) + d49 * T[1]) + d50 * T[1]) +
                              d51 * T[1]) + d52 * T[1]) + d54 * T[1]) + d55 * T
                              [1]) + d56 * T[1]) + d57 * T[1]) + d53 * T[1]) +
                              d59 * T[1]) + d60 * T[1]) + d61 * T[1]) + d62 * T
                              [1]) + d63 * T[1]) + d64 * T[1]) + d65 * T[1]) +
                              d66 * T[1]) + d67 * T[1]) + d68 * T[1]) + d69 * T
                              [1]) + d70 * T[1]) + d71 * T[1]) + d72 * T[1]) +
                              d73 * T[1]) + d75 * T[1]) + d76 * T[1]) + d77 * T
                              [1]) + d78 * T[1]) + d79 * T[1]) + d80 * T[1]) +
                              d81 * T[1]) + d82 * T[1]) + d83 * T[1]) + d84 * T
                                                 [1]) + d85 * T[1]) + d86 * T[1])
                                              + d87 * T[1]) + d88 * T[1]) + d89 *
                                            T[1]) + d90 * T[1]) + d91 * T[1]) +
                                         d92 * T[1]) + d93 * T[1]) + d94 * T[1])
                                      + d95 * T[1]) + d96 * T[1]) + d97 * T[1])
                                   + d98 * T[1]) + d99 * T[1]) + d100 * T[1]) +
                                d101 * T[1]) + d102 * T[1]) + dnormT * T[1];
                            d103 = 1.729728E+7 * dT_data[2] * dnormT_data[0];
                            d110 = -2.16216E+6 * dT_data[11] * dnormT_data[0];
                            d111 = -1.08108E+6 * dT_data[5] * dnormT_data[0];
                            d112 = -1.08108E+6 * dT_data[2] * dnormT_data[1];
                            dq_data[38] =
                              (((((((((((((((((((((((((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((((((((((((((((((((((((
                              (((((((((((((((((((((((((((((((((((((((((((((((((((
                              ((((((((((((((6.2270208E+9 * dT_data[2] * eb_y *
                              fb_y + -3.1135104E+9 * dT_data[5] * cb_y * db_y) +
                              -3.42486144E+10 * dT_data[2] * x_y * dnormT_data[1]
                              * db_y) + 1.0378368E+9 * dT_data[8] * x_y * y_y) +
                              1.5567552E+10 * dT_data[5] * u_y * dnormT_data[1] *
                              y_y) + 7.0053984E+10 * dT_data[2] * q_y * h_y *
                              y_y) + 1.0378368E+10 * dT_data[2] * u_y *
                              dnormT_data[2] * y_y) + -2.594592E+8 * dT_data[11]
                              * u_y * v_y) + -4.6702656E+9 * dT_data[8] * q_y *
                              dnormT_data[1] * v_y) + -2.80215936E+10 * dT_data
                              [5] * o_y * h_y * v_y) + -6.53837184E+10 *
                              dT_data[2] * k_y * m_y * v_y) + -4.6702656E+9 *
                              dT_data[5] * q_y * dnormT_data[2] * v_y) +
                              -3.73621248E+10 * dT_data[2] * o_y * dnormT_data[1]
                              * dnormT_data[2] * v_y) + -2.3351328E+9 * dT_data
                              [2] * q_y * dnormT_data[3] * v_y) + 5.189184E+7 *
                              dT_data[14] * q_y * r_y) + 1.0378368E+9 * dT_data
                              [11] * o_y * dnormT_data[1] * r_y) + 7.2648576E+9 *
                              dT_data[8] * k_y * h_y * r_y) + 2.17945728E+10 *
                              dT_data[5] * i_y * m_y * r_y) + 2.7243216E+10 *
                              dT_data[2] * f_y * s_y * r_y) + 1.3837824E+9 *
                              dT_data[8] * o_y * dnormT_data[2] * r_y) +
                              1.45297152E+10 * dT_data[5] * k_y * dnormT_data[1]
                              * dnormT_data[2] * r_y) + 4.35891456E+10 *
                              dT_data[2] * i_y * h_y * dnormT_data[2] * r_y) +
                              4.8432384E+9 * dT_data[2] * k_y * n_y * r_y) +
                              1.0378368E+9 * dT_data[5] * o_y * dnormT_data[3] *
                              r_y) + 7.2648576E+9 * dT_data[2] * k_y *
                              dnormT_data[1] * dnormT_data[3] * r_y) +
                              4.1513472E+8 * dT_data[2] * o_y * dnormT_data[4] *
                              r_y) + -8.64864E+6 * dT_data[17] * o_y * p_y) +
                              -1.8162144E+8 * dT_data[14] * k_y * dnormT_data[1]
                              * p_y) + -1.3621608E+9 * dT_data[11] * i_y * h_y *
                              p_y) + -4.540536E+9 * dT_data[8] * f_y * m_y * p_y)
                              + -6.810804E+9 * dT_data[5] * d_y * s_y * p_y) +
                              -4.0864824E+9 * dT_data[2] * b_y * ab_y * p_y) +
                              -3.027024E+8 * dT_data[11] * k_y * dnormT_data[2] *
                              p_y) + -3.6324288E+9 * dT_data[8] * i_y *
                              dnormT_data[1] * dnormT_data[2] * p_y) +
                              -1.3621608E+10 * dT_data[5] * f_y * h_y *
                              dnormT_data[2] * p_y) + -1.8162144E+10 * dT_data[2]
                              * d_y * m_y * dnormT_data[2] * p_y) +
                              -1.8162144E+9 * dT_data[5] * i_y * n_y * p_y) +
                              -9.081072E+9 * dT_data[2] * f_y * dnormT_data[1] *
                              n_y * p_y) + -3.027024E+8 * dT_data[8] * k_y *
                              dnormT_data[3] * p_y) + -2.7243216E+9 * dT_data[5]
                              * i_y * dnormT_data[1] * dnormT_data[3] * p_y) +
                              -6.810804E+9 * dT_data[2] * f_y * h_y *
                              dnormT_data[3] * p_y) + -1.8162144E+9 * dT_data[2]
                              * i_y * dnormT_data[2] * dnormT_data[3] * p_y) +
                              -1.8162144E+8 * dT_data[5] * k_y * dnormT_data[4] *
                              p_y) + -1.08972864E+9 * dT_data[2] * i_y *
                              dnormT_data[1] * dnormT_data[4] * p_y) +
                              -6.054048E+7 * dT_data[2] * k_y * dnormT_data[5] *
                              p_y) + 1.23552E+6 * dT_data[20] * k_y * l_y) +
                              2.594592E+7 * dT_data[17] * i_y * dnormT_data[1] *
                              l_y) + 1.945944E+8 * dT_data[14] * f_y * h_y * l_y)
                              + 6.48648E+8 * dT_data[11] * d_y * m_y * l_y) +
                              9.72972E+8 * dT_data[8] * b_y * s_y * l_y) +
                              5.837832E+8 * dT_data[5] * dnormT_data[0] * ab_y *
                              l_y) + 9.72972E+7 * dT_data[2] * gb_y * l_y) +
                              5.189184E+7 * dT_data[14] * i_y * dnormT_data[2] *
                              l_y) + 6.48648E+8 * dT_data[11] * f_y *
                              dnormT_data[1] * dnormT_data[2] * l_y) +
                              2.594592E+9 * dT_data[8] * d_y * h_y *
                              dnormT_data[2] * l_y) + 3.891888E+9 * dT_data[5] *
                              b_y * m_y * dnormT_data[2] * l_y) + 1.945944E+9 *
                              dT_data[2] * dnormT_data[0] * s_y * dnormT_data[2]
                              * l_y) + 4.32432E+8 * dT_data[8] * f_y * n_y * l_y)
                              + 2.594592E+9 * dT_data[5] * d_y * dnormT_data[1] *
                              n_y * l_y) + 3.891888E+9 * dT_data[2] * b_y * h_y *
                              n_y * l_y) + 5.76576E+8 * dT_data[2] * d_y * w_y *
                              l_y) + 6.48648E+7 * dT_data[11] * i_y *
                              dnormT_data[3] * l_y) + 6.48648E+8 * dT_data[8] *
                              f_y * dnormT_data[1] * dnormT_data[3] * l_y) +
                              1.945944E+9 * dT_data[5] * d_y * h_y *
                              dnormT_data[3] * l_y) + 1.945944E+9 * dT_data[2] *
                              b_y * m_y * dnormT_data[3] * l_y) + 6.48648E+8 *
                              dT_data[5] * f_y * dnormT_data[2] * dnormT_data[3]
                              * l_y) + 2.594592E+9 * dT_data[2] * d_y *
                              dnormT_data[1] * dnormT_data[2] * dnormT_data[3] *
                              l_y) + 1.62162E+8 * dT_data[2] * f_y * t_y * l_y)
                              + 5.189184E+7 * dT_data[8] * i_y * dnormT_data[4] *
                              l_y) + 3.891888E+8 * dT_data[5] * f_y *
                              dnormT_data[1] * dnormT_data[4] * l_y) +
                              7.783776E+8 * dT_data[2] * d_y * h_y *
                              dnormT_data[4] * l_y) + 2.594592E+8 * dT_data[2] *
                              f_y * dnormT_data[2] * dnormT_data[4] * l_y) +
                              2.594592E+7 * dT_data[5] * i_y * dnormT_data[5] *
                              l_y) + 1.297296E+8 * dT_data[2] * f_y *
                              dnormT_data[1] * dnormT_data[5] * l_y) +
                              7.41312E+6 * dT_data[2] * i_y * dnormT_data[6] *
                              l_y) + -154440.0 * dT_data[23] * i_y * j_y) +
                              -3.0888E+6 * dT_data[20] * f_y * dnormT_data[1] *
                              j_y) + -2.16216E+7 * dT_data[17] * d_y * h_y * j_y)
                              + -6.48648E+7 * dT_data[14] * b_y * m_y * j_y) +
                              -8.1081E+7 * dT_data[11] * dnormT_data[0] * s_y *
                              j_y) + -3.24324E+7 * dT_data[8] * ab_y * j_y) +
                              -7.2072E+6 * dT_data[17] * f_y * dnormT_data[2] *
                              j_y) + -8.64864E+7 * dT_data[14] * d_y *
                              dnormT_data[1] * dnormT_data[2] * j_y) +
                              -3.24324E+8 * dT_data[11] * b_y * h_y *
                              dnormT_data[2] * j_y) + -4.32432E+8 * dT_data[8] *
                              dnormT_data[0] * m_y * dnormT_data[2] * j_y) +
                              -1.62162E+8 * dT_data[5] * s_y * dnormT_data[2] *
                              j_y) + -7.2072E+7 * dT_data[11] * d_y * n_y * j_y)
                              + -4.32432E+8 * dT_data[8] * b_y * dnormT_data[1] *
                              n_y * j_y) + -6.48648E+8 * dT_data[5] *
                              dnormT_data[0] * h_y * n_y * j_y) + -2.16216E+8 *
                              dT_data[2] * m_y * n_y * j_y) + -1.44144E+8 *
                              dT_data[5] * b_y * w_y * j_y) + -2.88288E+8 *
                              dT_data[2] * dnormT_data[0] * dnormT_data[1] * w_y
                              * j_y) + -1.08108E+7 * dT_data[14] * f_y *
                              dnormT_data[3] * j_y) + -1.08108E+8 * dT_data[11] *
                              d_y * dnormT_data[1] * dnormT_data[3] * j_y) +
                              -3.24324E+8 * dT_data[8] * b_y * h_y *
                              dnormT_data[3] * j_y) + -3.24324E+8 * dT_data[5] *
                              dnormT_data[0] * m_y * dnormT_data[3] * j_y) +
                              -8.1081E+7 * dT_data[2] * s_y * dnormT_data[3] *
                              j_y) + -1.44144E+8 * dT_data[8] * d_y *
                              dnormT_data[2] * dnormT_data[3] * j_y) +
                              -6.48648E+8 * dT_data[5] * b_y * dnormT_data[1] *
                              dnormT_data[2] * dnormT_data[3] * j_y) +
                              -6.48648E+8 * dT_data[2] * dnormT_data[0] * h_y *
                              dnormT_data[2] * dnormT_data[3] * j_y) +
                              -2.16216E+8 * dT_data[2] * b_y * n_y *
                              dnormT_data[3] * j_y) + -5.4054E+7 * dT_data[5] *
                              d_y * t_y * j_y) + -1.62162E+8 * dT_data[2] * b_y *
                              dnormT_data[1] * t_y * j_y) + -1.08108E+7 *
                              dT_data[11] * f_y * dnormT_data[4] * j_y) +
                              -8.64864E+7 * dT_data[8] * d_y * dnormT_data[1] *
                              dnormT_data[4] * j_y) + -1.945944E+8 * dT_data[5] *
                              b_y * h_y * dnormT_data[4] * j_y) + -1.297296E+8 *
                              dT_data[2] * dnormT_data[0] * m_y * dnormT_data[4]
                              * j_y) + -8.64864E+7 * dT_data[5] * d_y *
                              dnormT_data[2] * dnormT_data[4] * j_y) +
                              -2.594592E+8 * dT_data[2] * b_y * dnormT_data[1] *
                              dnormT_data[2] * dnormT_data[4] * j_y) +
                              -4.32432E+7 * dT_data[2] * d_y * dnormT_data[3] *
                              dnormT_data[4] * j_y) + -7.2072E+6 * dT_data[8] *
                              f_y * dnormT_data[5] * j_y) + -4.32432E+7 *
                              dT_data[5] * d_y * dnormT_data[1] * dnormT_data[5]
                              * j_y) + -6.48648E+7 * dT_data[2] * b_y * h_y *
                              dnormT_data[5] * j_y) + -2.88288E+7 * dT_data[2] *
                              d_y * dnormT_data[2] * dnormT_data[5] * j_y) +
                              -3.0888E+6 * dT_data[5] * f_y * dnormT_data[6] *
                              j_y) + -1.23552E+7 * dT_data[2] * d_y *
                              dnormT_data[1] * dnormT_data[6] * j_y) + -772200.0
                              * dT_data[2] * f_y * dnormT_data[7] * j_y) +
                              17160.0 * dT_data[26] * f_y * g_y) + 308880.0 *
                              dT_data[23] * d_y * dnormT_data[1] * g_y) +
                              1.85328E+6 * dT_data[20] * b_y * h_y * g_y) +
                              4.32432E+6 * dT_data[17] * dnormT_data[0] * m_y *
                              g_y) + 3.24324E+6 * dT_data[14] * s_y * g_y) +
                              823680.0 * dT_data[20] * d_y * dnormT_data[2] *
                              g_y) + 8.64864E+6 * dT_data[17] * b_y *
                              dnormT_data[1] * dnormT_data[2] * g_y) +
                              2.594592E+7 * dT_data[14] * dnormT_data[0] * h_y *
                              dnormT_data[2] * g_y) + 2.16216E+7 * dT_data[11] *
                              m_y * dnormT_data[2] * g_y) + 8.64864E+6 *
                              dT_data[14] * b_y * n_y * g_y) + 4.32432E+7 *
                              dT_data[11] * dnormT_data[0] * dnormT_data[1] *
                              n_y * g_y) + 4.32432E+7 * dT_data[8] * h_y * n_y *
                              g_y) + 1.92192E+7 * dT_data[8] * dnormT_data[0] *
                              w_y * g_y) + 2.88288E+7 * dT_data[5] *
                              dnormT_data[1] * w_y * g_y) + 4.8048E+6 * dT_data
                              [2] * hb_y * g_y) + 1.44144E+6 * dT_data[17] * d_y
                              * dnormT_data[3] * g_y) + 1.297296E+7 * dT_data[14]
                              * b_y * dnormT_data[1] * dnormT_data[3] * g_y) +
                              3.24324E+7 * dT_data[11] * dnormT_data[0] * h_y *
                              dnormT_data[3] * g_y) + 2.16216E+7 * dT_data[8] *
                              m_y * dnormT_data[3] * g_y) + 2.16216E+7 *
                              dT_data[11] * b_y * dnormT_data[2] * dnormT_data[3]
                              * g_y) + 8.64864E+7 * dT_data[8] * dnormT_data[0] *
                              dnormT_data[1] * dnormT_data[2] * dnormT_data[3] *
                              g_y) + 6.48648E+7 * dT_data[5] * h_y *
                              dnormT_data[2] * dnormT_data[3] * g_y) +
                              4.32432E+7 * dT_data[5] * dnormT_data[0] * n_y *
                              dnormT_data[3] * g_y) + 4.32432E+7 * dT_data[2] *
                              dnormT_data[1] * n_y * dnormT_data[3] * g_y) +
                              1.08108E+7 * dT_data[8] * b_y * t_y * g_y) +
                              3.24324E+7 * dT_data[5] * dnormT_data[0] *
                              dnormT_data[1] * t_y * g_y) + 1.62162E+7 *
                              dT_data[2] * h_y * t_y * g_y) + 2.16216E+7 *
                              dT_data[2] * dnormT_data[0] * dnormT_data[2] * t_y
                              * g_y) + 1.729728E+6 * dT_data[14] * d_y *
                              dnormT_data[4] * g_y) + 1.297296E+7 * dT_data[11] *
                              b_y * dnormT_data[1] * dnormT_data[4] * g_y) +
                              2.594592E+7 * dT_data[8] * dnormT_data[0] * h_y *
                              dnormT_data[4] * g_y) + 1.297296E+7 * dT_data[5] *
                              m_y * dnormT_data[4] * g_y) + 1.729728E+7 *
                              dT_data[8] * b_y * dnormT_data[2] * dnormT_data[4]
                              * g_y) + 5.189184E+7 * dT_data[5] * dnormT_data[0]
                              * dnormT_data[1] * dnormT_data[2] * dnormT_data[4]
                              * g_y) + 2.594592E+7 * dT_data[2] * h_y *
                              dnormT_data[2] * dnormT_data[4] * g_y) + d103 *
                              n_y * dnormT_data[4] * g_y) + 1.297296E+7 *
                              dT_data[5] * b_y * dnormT_data[3] * dnormT_data[4]
                              * g_y) + 2.594592E+7 * dT_data[2] * dnormT_data[0]
                              * dnormT_data[1] * dnormT_data[3] * dnormT_data[4]
                              * g_y) + 2.594592E+6 * dT_data[2] * b_y * bb_y *
                              g_y) + 1.44144E+6 * dT_data[11] * d_y *
                              dnormT_data[5] * g_y) + 8.64864E+6 * dT_data[8] *
                              b_y * dnormT_data[1] * dnormT_data[5] * g_y) +
                              1.297296E+7 * dT_data[5] * dnormT_data[0] * h_y *
                              dnormT_data[5] * g_y) + 4.32432E+6 * dT_data[2] *
                              m_y * dnormT_data[5] * g_y) + 8.64864E+6 *
                              dT_data[5] * b_y * dnormT_data[2] * dnormT_data[5]
                              * g_y) + d103 * dnormT_data[1] * dnormT_data[2] *
                              dnormT_data[5] * g_y) + 4.32432E+6 * dT_data[2] *
                              b_y * dnormT_data[3] * dnormT_data[5] * g_y) +
                              823680.0 * dT_data[8] * d_y * dnormT_data[6] * g_y)
                              + 3.70656E+6 * dT_data[5] * b_y * dnormT_data[1] *
                              dnormT_data[6] * g_y) + 3.70656E+6 * dT_data[2] *
                              dnormT_data[0] * h_y * dnormT_data[6] * g_y) +
                              2.47104E+6 * dT_data[2] * b_y * dnormT_data[2] *
                              dnormT_data[6] * g_y) + 308880.0 * dT_data[5] *
                              d_y * dnormT_data[7] * g_y) + 926640.0 * dT_data[2]
                              * b_y * dnormT_data[1] * dnormT_data[7] * g_y) +
                              68640.0 * dT_data[2] * d_y * dnormT_data[8] * g_y)
                              + -5148.0 * dT_data[2] * dnormT_data[9] * b_y *
                              e_y) + -1716.0 * dT_data[29] * d_y * e_y) +
                              -25740.0 * dT_data[26] * b_y * dnormT_data[1] *
                              e_y) + -115830.0 * dT_data[23] * dnormT_data[0] *
                              h_y * e_y) + -154440.0 * dT_data[20] * m_y * e_y)
                              + -77220.0 * dT_data[23] * b_y * dnormT_data[2] *
                              e_y) + -617760.0 * dT_data[20] * dnormT_data[0] *
                              dnormT_data[1] * dnormT_data[2] * e_y) +
                              -1.08108E+6 * dT_data[17] * h_y * dnormT_data[2] *
                              e_y) + -720720.0 * dT_data[17] * dnormT_data[0] *
                              n_y * e_y) + -2.16216E+6 * dT_data[14] *
                              dnormT_data[1] * n_y * e_y) + -1.2012E+6 *
                              dT_data[11] * w_y * e_y) + -154440.0 * dT_data[20]
                              * b_y * dnormT_data[3] * e_y) + -1.08108E+6 *
                              dT_data[17] * dnormT_data[0] * dnormT_data[1] *
                              dnormT_data[3] * e_y) + -1.62162E+6 * dT_data[14] *
                              h_y * dnormT_data[3] * e_y) + -2.16216E+6 *
                              dT_data[14] * dnormT_data[0] * dnormT_data[2] *
                              dnormT_data[3] * e_y) + -5.4054E+6 * dT_data[11] *
                              dnormT_data[1] * dnormT_data[2] * dnormT_data[3] *
                              e_y) + -3.6036E+6 * dT_data[8] * n_y *
                              dnormT_data[3] * e_y) + -1.35135E+6 * dT_data[11] *
                              dnormT_data[0] * t_y * e_y) + -2.7027E+6 *
                              dT_data[8] * dnormT_data[1] * t_y * e_y) +
                              -2.7027E+6 * dT_data[5] * dnormT_data[2] * t_y *
                              e_y) + -450450.0 * dT_data[2] * ib_y * e_y) +
                              -216216.0 * dT_data[17] * b_y * dnormT_data[4] *
                              e_y) + -1.297296E+6 * dT_data[14] * dnormT_data[0]
                              * dnormT_data[1] * dnormT_data[4] * e_y) +
                              -1.62162E+6 * dT_data[11] * h_y * dnormT_data[4] *
                              e_y) + d110 * dnormT_data[2] * dnormT_data[4] *
                              e_y) + -4.32432E+6 * dT_data[8] * dnormT_data[1] *
                              dnormT_data[2] * dnormT_data[4] * e_y) +
                              -2.16216E+6 * dT_data[5] * n_y * dnormT_data[4] *
                              e_y) + -2.16216E+6 * dT_data[8] * dnormT_data[0] *
                              dnormT_data[3] * dnormT_data[4] * e_y) +
                              -3.24324E+6 * dT_data[5] * dnormT_data[1] *
                              dnormT_data[3] * dnormT_data[4] * e_y) +
                              -2.16216E+6 * dT_data[2] * dnormT_data[2] *
                              dnormT_data[3] * dnormT_data[4] * e_y) + -648648.0
                              * dT_data[5] * dnormT_data[0] * bb_y * e_y) +
                              -648648.0 * dT_data[2] * dnormT_data[1] * bb_y *
                              e_y) + -216216.0 * dT_data[14] * b_y *
                              dnormT_data[5] * e_y) + -1.08108E+6 * dT_data[11] *
                              dnormT_data[0] * dnormT_data[1] * dnormT_data[5] *
                              e_y) + -1.08108E+6 * dT_data[8] * h_y *
                              dnormT_data[5] * e_y) + -1.44144E+6 * dT_data[8] *
                              dnormT_data[0] * dnormT_data[2] * dnormT_data[5] *
                              e_y) + -2.16216E+6 * dT_data[5] * dnormT_data[1] *
                              dnormT_data[2] * dnormT_data[5] * e_y) + -720720.0
                              * dT_data[2] * n_y * dnormT_data[5] * e_y) + d111 *
                              dnormT_data[3] * dnormT_data[5] * e_y) + d112 *
                              dnormT_data[3] * dnormT_data[5] * e_y) + -432432.0
                              * dT_data[2] * dnormT_data[0] * dnormT_data[4] *
                              dnormT_data[5] * e_y) + -154440.0 * dT_data[11] *
                              b_y * dnormT_data[6] * e_y) + -617760.0 * dT_data
                              [8] * dnormT_data[0] * dnormT_data[1] *
                              dnormT_data[6] * e_y) + -463320.0 * dT_data[5] *
                              h_y * dnormT_data[6] * e_y) + -617760.0 * dT_data
                              [5] * dnormT_data[0] * dnormT_data[2] *
                              dnormT_data[6] * e_y) + -617760.0 * dT_data[2] *
                              dnormT_data[1] * dnormT_data[2] * dnormT_data[6] *
                              e_y) + -308880.0 * dT_data[2] * dnormT_data[0] *
                              dnormT_data[3] * dnormT_data[6] * e_y) + -77220.0 *
                              dT_data[8] * b_y * dnormT_data[7] * e_y) +
                              -231660.0 * dT_data[5] * dnormT_data[0] *
                              dnormT_data[1] * dnormT_data[7] * e_y) + -115830.0
                              * dT_data[2] * h_y * dnormT_data[7] * e_y) +
                              -154440.0 * dT_data[2] * dnormT_data[0] *
                              dnormT_data[2] * dnormT_data[7] * e_y) + -25740.0 *
                              dT_data[5] * b_y * dnormT_data[8] * e_y) +
                              -51480.0 * dT_data[2] * dnormT_data[0] *
                              dnormT_data[1] * dnormT_data[8] * e_y) + 1716.0 *
                              dT_data[5] * dnormT_data[9] * dnormT_data[0] * c_y)
                              + 312.0 * dT_data[2] * dnormT_data[10] *
                              dnormT_data[0] * c_y) + 156.0 * dT_data[32] * b_y *
                              c_y) + 1716.0 * dT_data[2] * dnormT_data[9] *
                              dnormT_data[1] * c_y) + 1716.0 * dT_data[29] *
                              dnormT_data[0] * dnormT_data[1] * c_y) + 4290.0 *
                              dT_data[26] * h_y * c_y) + 5720.0 * dT_data[26] *
                              dnormT_data[0] * dnormT_data[2] * c_y) + 25740.0 *
                              dT_data[23] * dnormT_data[1] * dnormT_data[2] *
                              c_y) + 34320.0 * dT_data[20] * n_y * c_y) +
                              12870.0 * dT_data[23] * dnormT_data[0] *
                              dnormT_data[3] * c_y) + 51480.0 * dT_data[20] *
                              dnormT_data[1] * dnormT_data[3] * c_y) + 120120.0 *
                              dT_data[17] * dnormT_data[2] * dnormT_data[3] *
                              c_y) + 90090.0 * dT_data[14] * t_y * c_y) +
                              20592.0 * dT_data[20] * dnormT_data[0] *
                              dnormT_data[4] * c_y) + 72072.0 * dT_data[17] *
                              dnormT_data[1] * dnormT_data[4] * c_y) + 144144.0 *
                              dT_data[14] * dnormT_data[2] * dnormT_data[4] *
                              c_y) + 180180.0 * dT_data[11] * dnormT_data[3] *
                              dnormT_data[4] * c_y) + 72072.0 * dT_data[8] *
                              bb_y * c_y) + 24024.0 * dT_data[17] * dnormT_data
                              [0] * dnormT_data[5] * c_y) + 72072.0 * dT_data[14]
                              * dnormT_data[1] * dnormT_data[5] * c_y) +
                              120120.0 * dT_data[11] * dnormT_data[2] *
                              dnormT_data[5] * c_y) + 120120.0 * dT_data[8] *
                              dnormT_data[3] * dnormT_data[5] * c_y) + 72072.0 *
                              dT_data[5] * dnormT_data[4] * dnormT_data[5] * c_y)
                              + 12012.0 * dT_data[2] * jb_y * c_y) + 20592.0 *
                              dT_data[14] * dnormT_data[0] * dnormT_data[6] *
                              c_y) + 51480.0 * dT_data[11] * dnormT_data[1] *
                              dnormT_data[6] * c_y) + 68640.0 * dT_data[8] *
                              dnormT_data[2] * dnormT_data[6] * c_y) + 51480.0 *
                              dT_data[5] * dnormT_data[3] * dnormT_data[6] * c_y)
                              + 20592.0 * dT_data[2] * dnormT_data[4] *
                              dnormT_data[6] * c_y) + 12870.0 * dT_data[11] *
                              dnormT_data[0] * dnormT_data[7] * c_y) + 25740.0 *
                              dT_data[8] * dnormT_data[1] * dnormT_data[7] * c_y)
                              + 25740.0 * dT_data[5] * dnormT_data[2] *
                              dnormT_data[7] * c_y) + 12870.0 * dT_data[2] *
                              dnormT_data[3] * dnormT_data[7] * c_y) + 5720.0 *
                              dT_data[8] * dnormT_data[0] * dnormT_data[8] * c_y)
                              + 8580.0 * dT_data[5] * dnormT_data[1] *
                              dnormT_data[8] * c_y) + 5720.0 * dT_data[2] *
                              dnormT_data[2] * dnormT_data[8] * c_y) + -286.0 *
                              dT_data[8] * dnormT_data[9] * dnormT_tmp) + -78.0 *
                              dT_data[5] * dnormT_data[10] * dnormT_tmp) + -13.0
                              * dT_data[2] * dnormT_data[11] * dnormT_tmp) +
                              -13.0 * dT_data[35] * dnormT_data[0] * dnormT_tmp)
                              + -78.0 * dT_data[32] * dnormT_data[1] *
                              dnormT_tmp) + -286.0 * dT_data[29] * dnormT_data[2]
                              * dnormT_tmp) + -715.0 * dT_data[26] *
                              dnormT_data[3] * dnormT_tmp) + -1287.0 * dT_data
                              [23] * dnormT_data[4] * dnormT_tmp) + -1716.0 *
                              dT_data[20] * dnormT_data[5] * dnormT_tmp) +
                              -1716.0 * dT_data[17] * dnormT_data[6] *
                              dnormT_tmp) + -1287.0 * dT_data[14] * dnormT_data
                              [7] * dnormT_tmp) + -715.0 * dT_data[11] *
                              dnormT_data[8] * dnormT_tmp) + dT_data[38] * y) +
                              d0 * T[2]) + d1 * T[2]) + d2 * T[2]) + d3 * T[2])
                              + d4 * T[2]) + d5 * T[2]) + d6 * T[2]) + d7 * T[2])
                              + d8 * T[2]) + d9 * T[2]) + d10 * T[2]) + d11 * T
                              [2]) + d12 * T[2]) + d13 * T[2]) + d14 * T[2]) +
                              d15 * T[2]) + d16 * T[2]) + d17 * T[2]) + d18 * T
                              [2]) + d19 * T[2]) + d20 * T[2]) + d21 * T[2]) +
                              d22 * T[2]) + d23 * T[2]) + d24 * T[2]) + d25 * T
                              [2]) + d26 * T[2]) + d28 * T[2]) + d29 * T[2]) +
                              d30 * T[2]) + d31 * T[2]) + d32 * T[2]) + d33 * T
                              [2]) + d34 * T[2]) + d35 * T[2]) + d36 * T[2]) +
                              d37 * T[2]) + d38 * T[2]) + d39 * T[2]) + d40 * T
                              [2]) + d41 * T[2]) + d42 * T[2]) + d43 * T[2]) +
                              d44 * T[2]) + d45 * T[2]) + d46 * T[2]) + d47 * T
                              [2]) + d48 * T[2]) + d49 * T[2]) + d50 * T[2]) +
                              d51 * T[2]) + d52 * T[2]) + d54 * T[2]) + d55 * T
                              [2]) + d56 * T[2]) + d57 * T[2]) + d53 * T[2]) +
                              d59 * T[2]) + d60 * T[2]) + d61 * T[2]) + d62 * T
                              [2]) + d63 * T[2]) + d64 * T[2]) + d65 * T[2]) +
                              d66 * T[2]) + d67 * T[2]) + d68 * T[2]) + d69 * T
                              [2]) + d70 * T[2]) + d71 * T[2]) + d72 * T[2]) +
                              d73 * T[2]) + d75 * T[2]) + d76 * T[2]) + d77 * T
                              [2]) + d78 * T[2]) + d79 * T[2]) + d80 * T[2]) +
                              d81 * T[2]) + d82 * T[2]) + d83 * T[2]) + d84 * T
                                                 [2]) + d85 * T[2]) + d86 * T[2])
                                              + d87 * T[2]) + d88 * T[2]) + d89 *
                                            T[2]) + d90 * T[2]) + d91 * T[2]) +
                                         d92 * T[2]) + d93 * T[2]) + d94 * T[2])
                                      + d95 * T[2]) + d96 * T[2]) + d97 * T[2])
                                   + d98 * T[2]) + d99 * T[2]) + d100 * T[2]) +
                                d101 * T[2]) + d102 * T[2]) + dnormT * T[2];
                            if (dT_size[1] > 13) {
                              if (14 > dnormT_size[1]) {
                                emlrtDynamicBoundsCheckR2012b(14, 1,
                                  dnormT_size[1], &emlrtBCI, sp);
                              }

                              y = 1.0 / normT;
                              d0 = 8.71782912E+10 * muDoubleScalarPower
                                (dnormT_data[0], 14.0) * muDoubleScalarPower
                                (normT, -15.0);
                              d1 = -5.666588928E+11 * eb_y * dnormT_data[1] *
                                lb_y;
                              d2 = 1.4384418048E+12 * x_y * h_y * fb_y;
                              d3 = 1.743565824E+11 * cb_y * dnormT_data[2] *
                                fb_y;
                              d4 = -1.798052256E+12 * q_y * m_y * db_y;
                              d5 = -7.99134336E+11 * u_y * dnormT_data[1] *
                                dnormT_data[2] * db_y;
                              d6 = -3.99567168E+10 * x_y * dnormT_data[3] * db_y;
                              d7 = 1.144215072E+12 * k_y * s_y * y_y;
                              d8 = 1.307674368E+12 * o_y * h_y * dnormT_data[2] *
                                y_y;
                              d9 = 1.08972864E+11 * q_y * n_y * y_y;
                              d10 = 1.63459296E+11 * q_y * dnormT_data[1] *
                                dnormT_data[3] * y_y;
                              d11 = 7.2648576E+9 * u_y * dnormT_data[4] * y_y;
                              d12 = -3.432645216E+11 * f_y * ab_y * v_y;
                              d13 = -9.153720576E+11 * i_y * m_y * dnormT_data[2]
                                * v_y;
                              d14 = -3.051240192E+11 * k_y * dnormT_data[1] *
                                n_y * v_y;
                              d15 = -2.288430144E+11 * k_y * h_y * dnormT_data[3]
                                * v_y;
                              d16 = -4.35891456E+10 * o_y * dnormT_data[2] *
                                dnormT_data[3] * v_y;
                              d17 = -2.615348736E+10 * o_y * dnormT_data[1] *
                                dnormT_data[4] * v_y;
                              d18 = -1.08972864E+9 * q_y * dnormT_data[5] * v_y;
                              d19 = 3.81405024E+10 * b_y * gb_y * r_y;
                              d20 = 2.54270016E+11 * d_y * s_y * dnormT_data[2] *
                                r_y;
                              d21 = 2.54270016E+11 * f_y * h_y * n_y * r_y;
                              d22 = 2.26017792E+10 * i_y * w_y * r_y;
                              d23 = 1.27135008E+11 * f_y * m_y * dnormT_data[3] *
                                r_y;
                              d24 = 1.017080064E+11 * i_y * dnormT_data[1] *
                                dnormT_data[2] * dnormT_data[3] * r_y;
                              d25 = 4.2378336E+9 * k_y * t_y * r_y;
                              d26 = 3.051240192E+10 * i_y * h_y * dnormT_data[4]
                                * r_y;
                              d28 = 6.78053376E+9 * k_y * dnormT_data[2] *
                                dnormT_data[4] * r_y;
                              d29 = 3.39026688E+9 * k_y * dnormT_data[1] *
                                dnormT_data[5] * r_y;
                              d30 = 1.3837824E+8 * o_y * dnormT_data[6] * r_y;
                              d31 = -6.810804E+8 * muDoubleScalarPower
                                (dnormT_data[1], 7.0) * p_y;
                              d32 = -1.90702512E+10 * dnormT_data[0] * ab_y *
                                dnormT_data[2] * p_y;
                              d33 = -6.3567504E+10 * b_y * m_y * n_y * p_y;
                              d34 = -2.8252224E+10 * d_y * dnormT_data[1] * w_y *
                                p_y;
                              d35 = -2.3837814E+10 * b_y * s_y * dnormT_data[3] *
                                p_y;
                              d36 = -6.3567504E+10 * d_y * h_y * dnormT_data[2] *
                                dnormT_data[3] * p_y;
                              d37 = -1.0594584E+10 * f_y * n_y * dnormT_data[3] *
                                p_y;
                              d38 = -7.945938E+9 * f_y * dnormT_data[1] * t_y *
                                p_y;
                              d39 = -1.27135008E+10 * d_y * m_y * dnormT_data[4]
                                * p_y;
                              d40 = -1.27135008E+10 * f_y * dnormT_data[1] *
                                dnormT_data[2] * dnormT_data[4] * p_y;
                              d41 = -1.27135008E+9 * i_y * dnormT_data[3] *
                                dnormT_data[4] * p_y;
                              d42 = -3.1783752E+9 * f_y * h_y * dnormT_data[5] *
                                p_y;
                              d43 = -8.4756672E+8 * i_y * dnormT_data[2] *
                                dnormT_data[5] * p_y;
                              d27 = d27 * dnormT_data[1] * dnormT_data[6] * p_y;
                              d44 = -1.513512E+7 * k_y * dnormT_data[7] * p_y;
                              d45 = 2.270268E+9 * s_y * n_y * l_y;
                              d46 = 6.054048E+9 * dnormT_data[0] * h_y * w_y *
                                l_y;
                              d47 = 1.009008E+9 * b_y * hb_y * l_y;
                              d48 = 6.810804E+8 * ab_y * dnormT_data[3] * l_y;
                              d49 = 9.081072E+9 * dnormT_data[0] * m_y *
                                dnormT_data[2] * dnormT_data[3] * l_y;
                              d50 = 9.081072E+9 * b_y * dnormT_data[1] * n_y *
                                dnormT_data[3] * l_y;
                              d51 = 3.405402E+9 * b_y * h_y * t_y * l_y;
                              d52 = 1.513512E+9 * d_y * dnormT_data[2] * t_y *
                                l_y;
                              d53 = 1.3621608E+9 * dnormT_data[0] * s_y *
                                dnormT_data[4] * l_y;
                              d54 = 5.4486432E+9 * b_y * h_y * dnormT_data[2] *
                                dnormT_data[4] * l_y;
                              d55 = 1.2108096E+9 * d_y;
                              d56 = d55 * n_y * dnormT_data[4] * l_y;
                              d57 = 1.8162144E+9 * d_y * dnormT_data[1] *
                                dnormT_data[3] * dnormT_data[4] * l_y;
                              d59 = 9.081072E+7 * f_y * bb_y * l_y;
                              d60 = 9.081072E+8 * b_y * m_y * dnormT_data[5] *
                                l_y;
                              d55 = d55 * dnormT_data[1] * dnormT_data[2] *
                                dnormT_data[5] * l_y;
                              d61 = 1.513512E+8 * f_y * dnormT_data[3] *
                                dnormT_data[5] * l_y;
                              d62 = 2.594592E+8 * d_y * h_y * dnormT_data[6] *
                                l_y;
                              d63 = 8.64864E+7 * f_y * dnormT_data[2] *
                                dnormT_data[6] * l_y;
                              d64 = 3.24324E+7 * f_y * dnormT_data[1] *
                                dnormT_data[7] * l_y;
                              d65 = 1.44144E+6 * i_y * dnormT_data[8] * l_y;
                              d66 = -120120.0 * dnormT_data[9] * f_y * j_y;
                              d67 = -1.68168E+8 * dnormT_data[1] * hb_y * j_y;
                              d68 = -7.56756E+8 * h_y * n_y * dnormT_data[3] *
                                j_y;
                              d69 = -3.36336E+8 * dnormT_data[0] * w_y *
                                dnormT_data[3] * j_y;
                              d70 = -1.89189E+8 * m_y * t_y * j_y;
                              d71 = -7.56756E+8 * dnormT_data[0] * dnormT_data[1]
                                * dnormT_data[2] * t_y * j_y;
                              d72 = -6.3063E+7 * b_y * ib_y * j_y;
                              d73 = -3.027024E+8 * m_y * dnormT_data[2] *
                                dnormT_data[4] * j_y;
                              d75 = -6.054048E+8 * dnormT_data[0] * dnormT_data
                                [1] * n_y * dnormT_data[4] * j_y;
                              d76 = -4.540536E+8 * dnormT_data[0] * h_y *
                                dnormT_data[3] * dnormT_data[4] * j_y;
                              d77 = -3.027024E+8 * b_y * dnormT_data[2] *
                                dnormT_data[3] * dnormT_data[4] * j_y;
                              d78 = -9.081072E+7 * b_y * dnormT_data[1] * bb_y *
                                j_y;
                              d79 = -3.78378E+7 * s_y * dnormT_data[5] * j_y;
                              d80 = -3.027024E+8 * dnormT_data[0] * h_y *
                                dnormT_data[2] * dnormT_data[5] * j_y;
                              d81 = -1.009008E+8 * b_y * n_y * dnormT_data[5] *
                                j_y;
                              d82 = -1.513512E+8 * b_y * dnormT_data[1] *
                                dnormT_data[3] * dnormT_data[5] * j_y;
                              d83 = -2.018016E+7 * d_y * dnormT_data[4] *
                                dnormT_data[5] * j_y;
                              d84 = -4.32432E+7 * dnormT_data[0] * m_y *
                                dnormT_data[6] * j_y;
                              d85 = -8.64864E+7 * b_y * dnormT_data[1] *
                                dnormT_data[2] * dnormT_data[6] * j_y;
                              d86 = -1.44144E+7 * d_y * dnormT_data[3] *
                                dnormT_data[6] * j_y;
                              d87 = -1.62162E+7 * b_y * h_y * dnormT_data[7] *
                                j_y;
                              d58 = d58 * dnormT_data[2] * dnormT_data[7] * j_y;
                              d88 = -2.4024E+6 * d_y * dnormT_data[1] *
                                dnormT_data[8] * j_y;
                              d89 = 8736.0 * dnormT_data[10] * d_y * g_y;
                              d90 = 144144.0 * dnormT_data[9] * b_y *
                                dnormT_data[1] * g_y;
                              d91 = 2.52252E+7 * n_y * t_y * g_y;
                              d92 = 1.26126E+7 * dnormT_data[1] * ib_y * g_y;
                              d93 = 1.345344E+7 * w_y * dnormT_data[4] * g_y;
                              d94 = 6.054048E+7 * dnormT_data[1] * dnormT_data[2]
                                * dnormT_data[3] * dnormT_data[4] * g_y;
                              d95 = 1.513512E+7 * dnormT_data[0] * t_y *
                                dnormT_data[4] * g_y;
                              d96 = 9.081072E+6 * h_y * bb_y * g_y;
                              d97 = 1.2108096E+7 * dnormT_data[0] * dnormT_data
                                [2] * bb_y * g_y;
                              d98 = 2.018016E+7 * dnormT_data[1] * n_y *
                                dnormT_data[5] * g_y;
                              d99 = 1.513512E+7 * h_y * dnormT_data[3] *
                                dnormT_data[5] * g_y;
                              d100 = 2.018016E+7 * dnormT_data[0] * dnormT_data
                                [2] * dnormT_data[3] * dnormT_data[5] * g_y;
                              d101 = 1.2108096E+7 * dnormT_data[0] *
                                dnormT_data[1] * dnormT_data[4] * dnormT_data[5]
                                * g_y;
                              d102 = 1.009008E+6 * b_y * jb_y * g_y;
                              d103 = 8.64864E+6 * h_y * dnormT_data[2] *
                                dnormT_data[6] * g_y;
                              d113 = 5.76576E+6 * dnormT_data[0] * n_y *
                                dnormT_data[6] * g_y;
                              d114 = 8.64864E+6 * dnormT_data[0] * dnormT_data[1]
                                * dnormT_data[3] * dnormT_data[6] * g_y;
                              d115 = 1.729728E+6 * b_y * dnormT_data[4] *
                                dnormT_data[6] * g_y;
                              d116 = 1.08108E+6 * m_y * dnormT_data[7] * g_y;
                              d74 = d74 * dnormT_data[2] * dnormT_data[7] * g_y;
                              d117 = 1.08108E+6 * b_y * dnormT_data[3] *
                                dnormT_data[7] * g_y;
                              d118 = 720720.0 * dnormT_data[0] * h_y *
                                dnormT_data[8] * g_y;
                              d119 = 480480.0 * b_y * dnormT_data[2] *
                                dnormT_data[8] * g_y;
                              d120 = -546.0 * dnormT_data[11] * b_y * e_y;
                              d121 = -6552.0 * dnormT_data[10] * dnormT_data[0] *
                                dnormT_data[1] * e_y;
                              d122 = -18018.0 * dnormT_data[9] * h_y * e_y;
                              d123 = -24024.0 * dnormT_data[9] * dnormT_data[0] *
                                dnormT_data[2] * e_y;
                              d124 = -756756.0 * dnormT_data[3] * bb_y * e_y;
                              d125 = -630630.0 * t_y * dnormT_data[5] * e_y;
                              d126 = -1.009008E+6 * dnormT_data[2] *
                                dnormT_data[4] * dnormT_data[5] * e_y;
                              d127 = -252252.0 * dnormT_data[1] * jb_y * e_y;
                              d128 = -720720.0 * dnormT_data[2] * dnormT_data[3]
                                * dnormT_data[6] * e_y;
                              d129 = -432432.0 * dnormT_data[1] * dnormT_data[4]
                                * dnormT_data[6] * e_y;
                              d130 = -144144.0 * dnormT_data[0] * dnormT_data[5]
                                * dnormT_data[6] * e_y;
                              d131 = -180180.0 * n_y * dnormT_data[7] * e_y;
                              d132 = -270270.0 * dnormT_data[1] * dnormT_data[3]
                                * dnormT_data[7] * e_y;
                              d133 = -108108.0 * dnormT_data[0] * dnormT_data[4]
                                * dnormT_data[7] * e_y;
                              d134 = -120120.0 * dnormT_data[1] * dnormT_data[2]
                                * dnormT_data[8] * e_y;
                              d135 = -60060.0 * dnormT_data[0] * dnormT_data[3] *
                                dnormT_data[8] * e_y;
                              d136 = 28.0 * dnormT_data[12] * dnormT_data[0] *
                                c_y;
                              d137 = 182.0 * dnormT_data[11] * dnormT_data[1] *
                                c_y;
                              d138 = 728.0 * dnormT_data[10] * dnormT_data[2] *
                                c_y;
                              d139 = 2002.0 * dnormT_data[9] * dnormT_data[3] *
                                c_y;
                              d140 = 3432.0 * (dnormT_data[6] * dnormT_data[6]) *
                                c_y;
                              d141 = 6006.0 * dnormT_data[5] * dnormT_data[7] *
                                c_y;
                              d142 = 4004.0 * dnormT_data[4] * dnormT_data[8] *
                                c_y;
                              dnormT = -dnormT_data[13] * dnormT_tmp;
                              d143 = 1.2108096E+8 * dT_data[3] * dnormT_data[0];
                              dq_data[39] =
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                ((((((((((((((((-8.71782912E+10 * dT_data[0] *
                                kb_y * lb_y + 4.35891456E+10 * dT_data[3] * eb_y
                                * fb_y) + 5.230697472E+11 * dT_data[0] * cb_y *
                                dnormT_data[1] * fb_y) + -1.45297152E+10 *
                                dT_data[6] * cb_y * db_y) + -2.397403008E+11 *
                                dT_data[3] * x_y * dnormT_data[1] * db_y) +
                                -1.198701504E+12 * dT_data[0] * u_y * h_y * db_y)
                                + -1.598268672E+11 * dT_data[0] * x_y *
                                dnormT_data[2] * db_y) + 3.6324288E+9 * dT_data
                                [9] * x_y * y_y) + 7.2648576E+10 * dT_data[6] *
                                u_y * dnormT_data[1] * y_y) + 4.90377888E+11 *
                                dT_data[3] * q_y * h_y * y_y) + 1.307674368E+12 *
                                dT_data[0] * o_y * m_y * y_y) + 7.2648576E+10 *
                                dT_data[3] * u_y * dnormT_data[2] * y_y) +
                                6.53837184E+11 * dT_data[0] * q_y * dnormT_data
                                [1] * dnormT_data[2] * y_y) + 3.6324288E+10 *
                                dT_data[0] * u_y * dnormT_data[3] * y_y) +
                                -7.2648576E+8 * dT_data[12] * u_y * v_y) +
                                -1.63459296E+10 * dT_data[9] * q_y *
                                dnormT_data[1] * v_y) + -1.307674368E+11 *
                                dT_data[6] * o_y * h_y * v_y) + -4.576860288E+11
                                * dT_data[3] * k_y * m_y * v_y) +
                                -6.865290432E+11 * dT_data[0] * i_y * s_y * v_y)
                                + -2.17945728E+10 * dT_data[6] * q_y *
                                dnormT_data[2] * v_y) + -2.615348736E+11 *
                                dT_data[3] * o_y * dnormT_data[1] * dnormT_data
                                [2] * v_y) + -9.153720576E+11 * dT_data[0] * k_y
                                * h_y * dnormT_data[2] * v_y) + -8.71782912E+10 *
                                dT_data[0] * o_y * n_y * v_y) + -1.63459296E+10 *
                                dT_data[3] * q_y * dnormT_data[3] * v_y) +
                                -1.307674368E+11 * dT_data[0] * o_y *
                                dnormT_data[1] * dnormT_data[3] * v_y) +
                                -6.53837184E+9 * dT_data[0] * q_y * dnormT_data
                                [4] * v_y) + 1.2108096E+8 * dT_data[15] * q_y *
                                r_y) + 2.90594304E+9 * dT_data[12] * o_y *
                                dnormT_data[1] * r_y) + 2.54270016E+10 *
                                dT_data[9] * k_y * h_y * r_y) + 1.017080064E+11 *
                                dT_data[6] * i_y * m_y * r_y) + 1.90702512E+11 *
                                dT_data[3] * f_y * s_y * r_y) + 1.525620096E+11 *
                                dT_data[0] * d_y * ab_y * r_y) + 4.8432384E+9 *
                                dT_data[9] * o_y * dnormT_data[2] * r_y) +
                                6.78053376E+10 * dT_data[6] * k_y * dnormT_data
                                [1] * dnormT_data[2] * r_y) + 3.051240192E+11 *
                                dT_data[3] * i_y * h_y * dnormT_data[2] * r_y) +
                                5.08540032E+11 * dT_data[0] * f_y * m_y *
                                dnormT_data[2] * r_y) + 3.39026688E+10 *
                                dT_data[3] * k_y * n_y * r_y) + 2.034160128E+11 *
                                dT_data[0] * i_y * dnormT_data[1] * n_y * r_y) +
                                4.8432384E+9 * dT_data[6] * o_y * dnormT_data[3]
                                * r_y) + 5.08540032E+10 * dT_data[3] * k_y *
                                dnormT_data[1] * dnormT_data[3] * r_y) +
                                1.525620096E+11 * dT_data[0] * i_y * h_y *
                                dnormT_data[3] * r_y) + 3.39026688E+10 *
                                dT_data[0] * k_y * dnormT_data[2] * dnormT_data
                                [3] * r_y) + 2.90594304E+9 * dT_data[3] * o_y *
                                dnormT_data[4] * r_y) + 2.034160128E+10 *
                                dT_data[0] * k_y * dnormT_data[1] * dnormT_data
                                [4] * r_y) + 9.6864768E+8 * dT_data[0] * o_y *
                                dnormT_data[5] * r_y) + -1.729728E+7 * dT_data
                                [18] * o_y * p_y) + -4.2378336E+8 * dT_data[15] *
                                k_y * dnormT_data[1] * p_y) + -3.81405024E+9 *
                                dT_data[12] * i_y * h_y * p_y) + -1.5891876E+10 *
                                dT_data[9] * f_y * m_y * p_y) + -3.1783752E+10 *
                                dT_data[6] * d_y * s_y * p_y) + -2.86053768E+10 *
                                dT_data[3] * b_y * ab_y * p_y) + -9.5351256E+9 *
                                dT_data[0] * dnormT_data[0] * gb_y * p_y) +
                                -8.4756672E+8 * dT_data[12] * k_y * dnormT_data
                                [2] * p_y) + -1.27135008E+10 * dT_data[9] * i_y *
                                dnormT_data[1] * dnormT_data[2] * p_y) +
                                -6.3567504E+10 * dT_data[6] * f_y * h_y *
                                dnormT_data[2] * p_y) + -1.27135008E+11 *
                                dT_data[3] * d_y * m_y * dnormT_data[2] * p_y) +
                                -9.5351256E+10 * dT_data[0] * b_y * s_y *
                                dnormT_data[2] * p_y) + -8.4756672E+9 * dT_data
                                [6] * i_y * n_y * p_y) + -6.3567504E+10 *
                                dT_data[3] * f_y * dnormT_data[1] * n_y * p_y) +
                                -1.27135008E+11 * dT_data[0] * d_y * h_y * n_y *
                                p_y) + -1.4126112E+10 * dT_data[0] * f_y * w_y *
                                p_y) + -1.0594584E+9 * dT_data[9] * k_y *
                                dnormT_data[3] * p_y) + -1.27135008E+10 *
                                dT_data[6] * i_y * dnormT_data[1] * dnormT_data
                                [3] * p_y) + -4.7675628E+10 * dT_data[3] * f_y *
                                h_y * dnormT_data[3] * p_y) + -6.3567504E+10 *
                                dT_data[0] * d_y * m_y * dnormT_data[3] * p_y) +
                                -1.27135008E+10 * dT_data[3] * i_y *
                                dnormT_data[2] * dnormT_data[3] * p_y) +
                                -6.3567504E+10 * dT_data[0] * f_y * dnormT_data
                                [1] * dnormT_data[2] * dnormT_data[3] * p_y) +
                                -3.1783752E+9 * dT_data[0] * i_y * t_y * p_y) +
                                -8.4756672E+8 * dT_data[6] * k_y * dnormT_data[4]
                                * p_y) + -7.62810048E+9 * dT_data[3] * i_y *
                                dnormT_data[1] * dnormT_data[4] * p_y) +
                                -1.90702512E+10 * dT_data[0] * f_y * h_y *
                                dnormT_data[4] * p_y) + -5.08540032E+9 *
                                dT_data[0] * i_y * dnormT_data[2] * dnormT_data
                                [4] * p_y) + -4.2378336E+8 * dT_data[3] * k_y *
                                dnormT_data[5] * p_y) + -2.54270016E+9 *
                                dT_data[0] * i_y * dnormT_data[1] * dnormT_data
                                [5] * p_y) + -1.2108096E+8 * dT_data[0] * k_y *
                                dnormT_data[6] * p_y) + 2.16216E+6 * dT_data[21]
                                * k_y * l_y) + 5.189184E+7 * dT_data[18] * i_y *
                                dnormT_data[1] * l_y) + 4.540536E+8 * dT_data[15]
                                * f_y * h_y * l_y) + 1.8162144E+9 * dT_data[12] *
                                d_y * m_y * l_y) + 3.405402E+9 * dT_data[9] *
                                b_y * s_y * l_y) + 2.7243216E+9 * dT_data[6] *
                                dnormT_data[0] * ab_y * l_y) + 6.810804E+8 *
                                dT_data[3] * gb_y * l_y) + 1.2108096E+8 *
                                dT_data[15] * i_y * dnormT_data[2] * l_y) +
                                1.8162144E+9 * dT_data[12] * f_y * dnormT_data[1]
                                * dnormT_data[2] * l_y) + 9.081072E+9 * dT_data
                                [9] * d_y * h_y * dnormT_data[2] * l_y) +
                                1.8162144E+10 * dT_data[6] * b_y * m_y *
                                dnormT_data[2] * l_y) + 1.3621608E+10 * dT_data
                                [3] * dnormT_data[0] * s_y * dnormT_data[2] *
                                l_y) + 2.7243216E+9 * dT_data[0] * ab_y *
                                dnormT_data[2] * l_y) + 1.513512E+9 * dT_data[9]
                                * f_y * n_y * l_y) + 1.2108096E+10 * dT_data[6] *
                                d_y * dnormT_data[1] * n_y * l_y) +
                                2.7243216E+10 * dT_data[3] * b_y * h_y * n_y *
                                l_y) + 1.8162144E+10 * dT_data[0] * dnormT_data
                                [0] * m_y * n_y * l_y) + 4.036032E+9 * dT_data[3]
                                * d_y * w_y * l_y) + 1.2108096E+10 * dT_data[0] *
                                b_y * dnormT_data[1] * w_y * l_y) + 1.8162144E+8
                                * dT_data[12] * i_y * dnormT_data[3] * l_y) +
                                2.270268E+9 * dT_data[9] * f_y * dnormT_data[1] *
                                dnormT_data[3] * l_y) + 9.081072E+9 * dT_data[6]
                                * d_y * h_y * dnormT_data[3] * l_y) +
                                1.3621608E+10 * dT_data[3] * b_y * m_y *
                                dnormT_data[3] * l_y) + 6.810804E+9 * dT_data[0]
                                * dnormT_data[0] * s_y * dnormT_data[3] * l_y) +
                                3.027024E+9 * dT_data[6] * f_y * dnormT_data[2] *
                                dnormT_data[3] * l_y) + 1.8162144E+10 * dT_data
                                [3] * d_y * dnormT_data[1] * dnormT_data[2] *
                                dnormT_data[3] * l_y) + 2.7243216E+10 * dT_data
                                [0] * b_y * h_y * dnormT_data[2] * dnormT_data[3]
                                * l_y) + 6.054048E+9 * dT_data[0] * d_y * n_y *
                                dnormT_data[3] * l_y) + 1.135134E+9 * dT_data[3]
                                * f_y * t_y * l_y) + 4.540536E+9 * dT_data[0] *
                                d_y * dnormT_data[1] * t_y * l_y) + 1.8162144E+8
                                * dT_data[9] * i_y * dnormT_data[4] * l_y) +
                                1.8162144E+9 * dT_data[6] * f_y * dnormT_data[1]
                                * dnormT_data[4] * l_y) + 5.4486432E+9 *
                                dT_data[3] * d_y * h_y * dnormT_data[4] * l_y) +
                                5.4486432E+9 * dT_data[0] * b_y * m_y *
                                dnormT_data[4] * l_y) + 1.8162144E+9 * dT_data[3]
                                * f_y * dnormT_data[2] * dnormT_data[4] * l_y) +
                                7.2648576E+9 * dT_data[0] * d_y * dnormT_data[1]
                                * dnormT_data[2] * dnormT_data[4] * l_y) +
                                9.081072E+8 * dT_data[0] * f_y * dnormT_data[3] *
                                dnormT_data[4] * l_y) + 1.2108096E+8 * dT_data[6]
                                * i_y * dnormT_data[5] * l_y) + 9.081072E+8 *
                                dT_data[3] * f_y * dnormT_data[1] * dnormT_data
                                [5] * l_y) + 1.8162144E+9 * dT_data[0] * d_y *
                                h_y * dnormT_data[5] * l_y) + 6.054048E+8 *
                                dT_data[0] * f_y * dnormT_data[2] * dnormT_data
                                [5] * l_y) + 5.189184E+7 * dT_data[3] * i_y *
                                dnormT_data[6] * l_y) + 2.594592E+8 * dT_data[0]
                                * f_y * dnormT_data[1] * dnormT_data[6] * l_y) +
                                1.297296E+7 * dT_data[0] * i_y * dnormT_data[7] *
                                l_y) + -240240.0 * dT_data[24] * i_y * j_y) +
                                -5.4054E+6 * dT_data[21] * f_y * dnormT_data[1] *
                                j_y) + -4.32432E+7 * dT_data[18] * d_y * h_y *
                                j_y) + -1.513512E+8 * dT_data[15] * b_y * m_y *
                                j_y) + -2.270268E+8 * dT_data[12] * dnormT_data
                                [0] * s_y * j_y) + -1.135134E+8 * dT_data[9] *
                                ab_y * j_y) + -1.44144E+7 * dT_data[18] * f_y *
                                dnormT_data[2] * j_y) + -2.018016E+8 * dT_data
                                [15] * d_y * dnormT_data[1] * dnormT_data[2] *
                                j_y) + -9.081072E+8 * dT_data[12] * b_y * h_y *
                                dnormT_data[2] * j_y) + -1.513512E+9 * dT_data[9]
                                * dnormT_data[0] * m_y * dnormT_data[2] * j_y) +
                                -7.56756E+8 * dT_data[6] * s_y * dnormT_data[2] *
                                j_y) + -2.018016E+8 * dT_data[12] * d_y * n_y *
                                j_y) + -1.513512E+9 * dT_data[9] * b_y *
                                dnormT_data[1] * n_y * j_y) + -3.027024E+9 *
                                dT_data[6] * dnormT_data[0] * h_y * n_y * j_y) +
                                -1.513512E+9 * dT_data[3] * m_y * n_y * j_y) +
                                -6.72672E+8 * dT_data[6] * b_y * w_y * j_y) +
                                -2.018016E+9 * dT_data[3] * dnormT_data[0] *
                                dnormT_data[1] * w_y * j_y) + -1.009008E+9 *
                                dT_data[0] * h_y * w_y * j_y) + -3.36336E+8 *
                                dT_data[0] * dnormT_data[0] * hb_y * j_y) +
                                -2.52252E+7 * dT_data[15] * f_y * dnormT_data[3]
                                * j_y) + -3.027024E+8 * dT_data[12] * d_y *
                                dnormT_data[1] * dnormT_data[3] * j_y) +
                                -1.135134E+9 * dT_data[9] * b_y * h_y *
                                dnormT_data[3] * j_y) + -1.513512E+9 * dT_data[6]
                                * dnormT_data[0] * m_y * dnormT_data[3] * j_y) +
                                -5.67567E+8 * dT_data[3] * s_y * dnormT_data[3] *
                                j_y) + -5.04504E+8 * dT_data[9] * d_y *
                                dnormT_data[2] * dnormT_data[3] * j_y) +
                                -3.027024E+9 * dT_data[6] * b_y * dnormT_data[1]
                                * dnormT_data[2] * dnormT_data[3] * j_y) +
                                -4.540536E+9 * dT_data[3] * dnormT_data[0] * h_y
                                * dnormT_data[2] * dnormT_data[3] * j_y) +
                                -1.513512E+9 * dT_data[0] * m_y * dnormT_data[2]
                                * dnormT_data[3] * j_y) + -1.513512E+9 *
                                dT_data[3] * b_y * n_y * dnormT_data[3] * j_y) +
                                -3.027024E+9 * dT_data[0] * dnormT_data[0] *
                                dnormT_data[1] * n_y * dnormT_data[3] * j_y) +
                                -2.52252E+8 * dT_data[6] * d_y * t_y * j_y) +
                                -1.135134E+9 * dT_data[3] * b_y * dnormT_data[1]
                                * t_y * j_y) + -1.135134E+9 * dT_data[0] *
                                dnormT_data[0] * h_y * t_y * j_y) + -7.56756E+8 *
                                dT_data[0] * b_y * dnormT_data[2] * t_y * j_y) +
                                -3.027024E+7 * dT_data[12] * f_y * dnormT_data[4]
                                * j_y) + -3.027024E+8 * dT_data[9] * d_y *
                                dnormT_data[1] * dnormT_data[4] * j_y) +
                                -9.081072E+8 * dT_data[6] * b_y * h_y *
                                dnormT_data[4] * j_y) + -9.081072E+8 * dT_data[3]
                                * dnormT_data[0] * m_y * dnormT_data[4] * j_y) +
                                -2.270268E+8 * dT_data[0] * s_y * dnormT_data[4]
                                * j_y) + -4.036032E+8 * dT_data[6] * d_y *
                                dnormT_data[2] * dnormT_data[4] * j_y) +
                                -1.8162144E+9 * dT_data[3] * b_y * dnormT_data[1]
                                * dnormT_data[2] * dnormT_data[4] * j_y) +
                                -1.8162144E+9 * dT_data[0] * dnormT_data[0] *
                                h_y * dnormT_data[2] * dnormT_data[4] * j_y) +
                                -6.054048E+8 * dT_data[0] * b_y * n_y *
                                dnormT_data[4] * j_y) + -3.027024E+8 * dT_data[3]
                                * d_y * dnormT_data[3] * dnormT_data[4] * j_y) +
                                -9.081072E+8 * dT_data[0] * b_y * dnormT_data[1]
                                * dnormT_data[3] * dnormT_data[4] * j_y) +
                                -6.054048E+7 * dT_data[0] * d_y * bb_y * j_y) +
                                -2.52252E+7 * dT_data[9] * f_y * dnormT_data[5] *
                                j_y) + -2.018016E+8 * dT_data[6] * d_y *
                                dnormT_data[1] * dnormT_data[5] * j_y) +
                                -4.540536E+8 * dT_data[3] * b_y * h_y *
                                dnormT_data[5] * j_y) + -3.027024E+8 * dT_data[0]
                                * dnormT_data[0] * m_y * dnormT_data[5] * j_y) +
                                -2.018016E+8 * dT_data[3] * d_y * dnormT_data[2]
                                * dnormT_data[5] * j_y) + -6.054048E+8 *
                                dT_data[0] * b_y * dnormT_data[1] * dnormT_data
                                [2] * dnormT_data[5] * j_y) + -1.009008E+8 *
                                dT_data[0] * d_y * dnormT_data[3] * dnormT_data
                                [5] * j_y) + -1.44144E+7 * dT_data[6] * f_y *
                                dnormT_data[6] * j_y) + -8.64864E+7 * dT_data[3]
                                * d_y * dnormT_data[1] * dnormT_data[6] * j_y) +
                                -1.297296E+8 * dT_data[0] * b_y * h_y *
                                dnormT_data[6] * j_y) + -5.76576E+7 * dT_data[0]
                                * d_y * dnormT_data[2] * dnormT_data[6] * j_y) +
                                -5.4054E+6 * dT_data[3] * f_y * dnormT_data[7] *
                                j_y) + -2.16216E+7 * dT_data[0] * d_y *
                                dnormT_data[1] * dnormT_data[7] * j_y) +
                                -1.2012E+6 * dT_data[0] * f_y * dnormT_data[8] *
                                j_y) + 96096.0 * dT_data[0] * dnormT_data[9] *
                                d_y * g_y) + 24024.0 * dT_data[27] * f_y * g_y)
                                + 480480.0 * dT_data[24] * d_y * dnormT_data[1] *
                                g_y) + 3.24324E+6 * dT_data[21] * b_y * h_y *
                                g_y) + 8.64864E+6 * dT_data[18] * dnormT_data[0]
                                * m_y * g_y) + 7.56756E+6 * dT_data[15] * s_y *
                                g_y) + 1.44144E+6 * dT_data[21] * d_y *
                                dnormT_data[2] * g_y) + 1.729728E+7 * dT_data[18]
                                * b_y * dnormT_data[1] * dnormT_data[2] * g_y) +
                                6.054048E+7 * dT_data[15] * dnormT_data[0] * h_y
                                * dnormT_data[2] * g_y) + 6.054048E+7 * dT_data
                                [12] * m_y * dnormT_data[2] * g_y) + 2.018016E+7
                                * dT_data[15] * b_y * n_y * g_y) + 1.2108096E+8 *
                                dT_data[12] * dnormT_data[0] * dnormT_data[1] *
                                n_y * g_y) + 1.513512E+8 * dT_data[9] * h_y *
                                n_y * g_y) + 6.72672E+7 * dT_data[9] *
                                dnormT_data[0] * w_y * g_y) + 1.345344E+8 *
                                dT_data[6] * dnormT_data[1] * w_y * g_y) +
                                3.36336E+7 * dT_data[3] * hb_y * g_y) +
                                2.88288E+6 * dT_data[18] * d_y * dnormT_data[3] *
                                g_y) + 3.027024E+7 * dT_data[15] * b_y *
                                dnormT_data[1] * dnormT_data[3] * g_y) +
                                9.081072E+7 * dT_data[12] * dnormT_data[0] * h_y
                                * dnormT_data[3] * g_y) + 7.56756E+7 * dT_data[9]
                                * m_y * dnormT_data[3] * g_y) + 6.054048E+7 *
                                dT_data[12] * b_y * dnormT_data[2] *
                                dnormT_data[3] * g_y) + 3.027024E+8 * dT_data[9]
                                * dnormT_data[0] * dnormT_data[1] * dnormT_data
                                [2] * dnormT_data[3] * g_y) + 3.027024E+8 *
                                dT_data[6] * h_y * dnormT_data[2] * dnormT_data
                                [3] * g_y) + 2.018016E+8 * dT_data[6] *
                                dnormT_data[0] * n_y * dnormT_data[3] * g_y) +
                                3.027024E+8 * dT_data[3] * dnormT_data[1] * n_y *
                                dnormT_data[3] * g_y) + 6.72672E+7 * dT_data[0] *
                                w_y * dnormT_data[3] * g_y) + 3.78378E+7 *
                                dT_data[9] * b_y * t_y * g_y) + 1.513512E+8 *
                                dT_data[6] * dnormT_data[0] * dnormT_data[1] *
                                t_y * g_y) + 1.135134E+8 * dT_data[3] * h_y *
                                t_y * g_y) + 1.513512E+8 * dT_data[3] *
                                dnormT_data[0] * dnormT_data[2] * t_y * g_y) +
                                1.513512E+8 * dT_data[0] * dnormT_data[1] *
                                dnormT_data[2] * t_y * g_y) + 2.52252E+7 *
                                dT_data[0] * dnormT_data[0] * ib_y * g_y) +
                                4.036032E+6 * dT_data[15] * d_y * dnormT_data[4]
                                * g_y) + 3.6324288E+7 * dT_data[12] * b_y *
                                dnormT_data[1] * dnormT_data[4] * g_y) +
                                9.081072E+7 * dT_data[9] * dnormT_data[0] * h_y *
                                dnormT_data[4] * g_y) + 6.054048E+7 * dT_data[6]
                                * m_y * dnormT_data[4] * g_y) + 6.054048E+7 *
                                dT_data[9] * b_y * dnormT_data[2] * dnormT_data
                                [4] * g_y) + 2.4216192E+8 * dT_data[6] *
                                dnormT_data[0] * dnormT_data[1] * dnormT_data[2]
                                * dnormT_data[4] * g_y) + 1.8162144E+8 *
                                dT_data[3] * h_y * dnormT_data[2] * dnormT_data
                                [4] * g_y) + d143 * n_y * dnormT_data[4] * g_y)
                                + 1.2108096E+8 * dT_data[0] * dnormT_data[1] *
                                n_y * dnormT_data[4] * g_y) + 6.054048E+7 *
                                dT_data[6] * b_y * dnormT_data[3] * dnormT_data
                                [4] * g_y) + 1.8162144E+8 * dT_data[3] *
                                dnormT_data[0] * dnormT_data[1] * dnormT_data[3]
                                * dnormT_data[4] * g_y) + 9.081072E+7 * dT_data
                                [0] * h_y * dnormT_data[3] * dnormT_data[4] *
                                g_y) + 1.2108096E+8 * dT_data[0] * dnormT_data[0]
                                * dnormT_data[2] * dnormT_data[3] * dnormT_data
                                [4] * g_y) + 1.8162144E+7 * dT_data[3] * b_y *
                                bb_y * g_y) + 3.6324288E+7 * dT_data[0] *
                                dnormT_data[0] * dnormT_data[1] * bb_y * g_y) +
                                4.036032E+6 * dT_data[12] * d_y * dnormT_data[5]
                                * g_y) + 3.027024E+7 * dT_data[9] * b_y *
                                dnormT_data[1] * dnormT_data[5] * g_y) +
                                6.054048E+7 * dT_data[6] * dnormT_data[0] * h_y *
                                dnormT_data[5] * g_y) + 3.027024E+7 * dT_data[3]
                                * m_y * dnormT_data[5] * g_y) + 4.036032E+7 *
                                dT_data[6] * b_y * dnormT_data[2] * dnormT_data
                                [5] * g_y) + d143 * dnormT_data[1] *
                                dnormT_data[2] * dnormT_data[5] * g_y) +
                                6.054048E+7 * dT_data[0] * h_y * dnormT_data[2] *
                                dnormT_data[5] * g_y) + 4.036032E+7 * dT_data[0]
                                * dnormT_data[0] * n_y * dnormT_data[5] * g_y) +
                                3.027024E+7 * dT_data[3] * b_y * dnormT_data[3] *
                                dnormT_data[5] * g_y) + 6.054048E+7 * dT_data[0]
                                * dnormT_data[0] * dnormT_data[1] * dnormT_data
                                [3] * dnormT_data[5] * g_y) + 1.2108096E+7 *
                                dT_data[0] * b_y * dnormT_data[4] * dnormT_data
                                [5] * g_y) + 2.88288E+6 * dT_data[9] * d_y *
                                dnormT_data[6] * g_y) + 1.729728E+7 * dT_data[6]
                                * b_y * dnormT_data[1] * dnormT_data[6] * g_y) +
                                2.594592E+7 * dT_data[3] * dnormT_data[0] * h_y *
                                dnormT_data[6] * g_y) + 8.64864E+6 * dT_data[0] *
                                m_y * dnormT_data[6] * g_y) + 1.729728E+7 *
                                dT_data[3] * b_y * dnormT_data[2] * dnormT_data
                                [6] * g_y) + 3.459456E+7 * dT_data[0] *
                                dnormT_data[0] * dnormT_data[1] * dnormT_data[2]
                                * dnormT_data[6] * g_y) + 8.64864E+6 * dT_data[0]
                                * b_y * dnormT_data[3] * dnormT_data[6] * g_y) +
                                1.44144E+6 * dT_data[6] * d_y * dnormT_data[7] *
                                g_y) + 6.48648E+6 * dT_data[3] * b_y *
                                dnormT_data[1] * dnormT_data[7] * g_y) +
                                6.48648E+6 * dT_data[0] * dnormT_data[0] * h_y *
                                dnormT_data[7] * g_y) + 4.32432E+6 * dT_data[0] *
                                b_y * dnormT_data[2] * dnormT_data[7] * g_y) +
                                480480.0 * dT_data[3] * d_y * dnormT_data[8] *
                                g_y) + 1.44144E+6 * dT_data[0] * b_y *
                                dnormT_data[1] * dnormT_data[8] * g_y) +
                                -36036.0 * dT_data[3] * dnormT_data[9] * b_y *
                                e_y) + -6552.0 * dT_data[0] * dnormT_data[10] *
                                b_y * e_y) + -2184.0 * dT_data[30] * d_y * e_y)
                                + -72072.0 * dT_data[0] * dnormT_data[9] *
                                dnormT_data[0] * dnormT_data[1] * e_y) +
                                -36036.0 * dT_data[27] * b_y * dnormT_data[1] *
                                e_y) + -180180.0 * dT_data[24] * dnormT_data[0] *
                                h_y * e_y) + -270270.0 * dT_data[21] * m_y * e_y)
                                + -120120.0 * dT_data[24] * b_y * dnormT_data[2]
                                * e_y) + -1.08108E+6 * dT_data[21] *
                                dnormT_data[0] * dnormT_data[1] * dnormT_data[2]
                                * e_y) + -2.16216E+6 * dT_data[18] * h_y *
                                dnormT_data[2] * e_y) + -1.44144E+6 * dT_data[18]
                                * dnormT_data[0] * n_y * e_y) + -5.04504E+6 *
                                dT_data[15] * dnormT_data[1] * n_y * e_y) +
                                -3.36336E+6 * dT_data[12] * w_y * e_y) +
                                -270270.0 * dT_data[21] * b_y * dnormT_data[3] *
                                e_y) + -2.16216E+6 * dT_data[18] * dnormT_data[0]
                                * dnormT_data[1] * dnormT_data[3] * e_y) +
                                -3.78378E+6 * dT_data[15] * h_y * dnormT_data[3]
                                * e_y) + -5.04504E+6 * dT_data[15] *
                                dnormT_data[0] * dnormT_data[2] * dnormT_data[3]
                                * e_y) + -1.513512E+7 * dT_data[12] *
                                dnormT_data[1] * dnormT_data[2] * dnormT_data[3]
                                * e_y) + -1.26126E+7 * dT_data[9] * n_y *
                                dnormT_data[3] * e_y) + -3.78378E+6 * dT_data[12]
                                * dnormT_data[0] * t_y * e_y) + -9.45945E+6 *
                                dT_data[9] * dnormT_data[1] * t_y * e_y) +
                                -1.26126E+7 * dT_data[6] * dnormT_data[2] * t_y *
                                e_y) + -3.15315E+6 * dT_data[3] * ib_y * e_y) +
                                -432432.0 * dT_data[18] * b_y * dnormT_data[4] *
                                e_y) + -3.027024E+6 * dT_data[15] * dnormT_data
                                [0] * dnormT_data[1] * dnormT_data[4] * e_y) +
                                -4.540536E+6 * dT_data[12] * h_y * dnormT_data[4]
                                * e_y) + -6.054048E+6 * dT_data[12] *
                                dnormT_data[0] * dnormT_data[2] * dnormT_data[4]
                                * e_y) + -1.513512E+7 * dT_data[9] *
                                dnormT_data[1] * dnormT_data[2] * dnormT_data[4]
                                * e_y) + -1.009008E+7 * dT_data[6] * n_y *
                                dnormT_data[4] * e_y) + -7.56756E+6 * dT_data[9]
                                * dnormT_data[0] * dnormT_data[3] * dnormT_data
                                [4] * e_y) + -1.513512E+7 * dT_data[6] *
                                dnormT_data[1] * dnormT_data[3] * dnormT_data[4]
                                * e_y) + -1.513512E+7 * dT_data[3] *
                                dnormT_data[2] * dnormT_data[3] * dnormT_data[4]
                                * e_y) + -3.78378E+6 * dT_data[0] * t_y *
                                dnormT_data[4] * e_y) + -3.027024E+6 * dT_data[6]
                                * dnormT_data[0] * bb_y * e_y) + -4.540536E+6 *
                                dT_data[3] * dnormT_data[1] * bb_y * e_y) +
                                -3.027024E+6 * dT_data[0] * dnormT_data[2] *
                                bb_y * e_y) + -504504.0 * dT_data[15] * b_y *
                                dnormT_data[5] * e_y) + -3.027024E+6 * dT_data
                                [12] * dnormT_data[0] * dnormT_data[1] *
                                dnormT_data[5] * e_y) + -3.78378E+6 * dT_data[9]
                                * h_y * dnormT_data[5] * e_y) + -5.04504E+6 *
                                dT_data[9] * dnormT_data[0] * dnormT_data[2] *
                                dnormT_data[5] * e_y) + -1.009008E+7 * dT_data[6]
                                * dnormT_data[1] * dnormT_data[2] * dnormT_data
                                [5] * e_y) + -5.04504E+6 * dT_data[3] * n_y *
                                dnormT_data[5] * e_y) + -5.04504E+6 * dT_data[6]
                                * dnormT_data[0] * dnormT_data[3] * dnormT_data
                                [5] * e_y) + -7.56756E+6 * dT_data[3] *
                                dnormT_data[1] * dnormT_data[3] * dnormT_data[5]
                                * e_y) + -5.04504E+6 * dT_data[0] * dnormT_data
                                [2] * dnormT_data[3] * dnormT_data[5] * e_y) +
                                -3.027024E+6 * dT_data[3] * dnormT_data[0] *
                                dnormT_data[4] * dnormT_data[5] * e_y) +
                                -3.027024E+6 * dT_data[0] * dnormT_data[1] *
                                dnormT_data[4] * dnormT_data[5] * e_y) +
                                -504504.0 * dT_data[0] * dnormT_data[0] * jb_y *
                                e_y) + -432432.0 * dT_data[12] * b_y *
                                dnormT_data[6] * e_y) + d104 * dnormT_data[1] *
                                dnormT_data[6] * e_y) + -2.16216E+6 * dT_data[6]
                                * h_y * dnormT_data[6] * e_y) + -2.88288E+6 *
                                dT_data[6] * dnormT_data[0] * dnormT_data[2] *
                                dnormT_data[6] * e_y) + -4.32432E+6 * dT_data[3]
                                * dnormT_data[1] * dnormT_data[2] * dnormT_data
                                [6] * e_y) + -1.44144E+6 * dT_data[0] * n_y *
                                dnormT_data[6] * e_y) + -2.16216E+6 * dT_data[3]
                                * dnormT_data[0] * dnormT_data[3] * dnormT_data
                                [6] * e_y) + -2.16216E+6 * dT_data[0] *
                                dnormT_data[1] * dnormT_data[3] * dnormT_data[6]
                                * e_y) + -864864.0 * dT_data[0] * dnormT_data[0]
                                * dnormT_data[4] * dnormT_data[6] * e_y) +
                                -270270.0 * dT_data[9] * b_y * dnormT_data[7] *
                                e_y) + -1.08108E+6 * dT_data[6] * dnormT_data[0]
                                * dnormT_data[1] * dnormT_data[7] * e_y) +
                                -810810.0 * dT_data[3] * h_y * dnormT_data[7] *
                                e_y) + d105 * dnormT_data[2] * dnormT_data[7] *
                                e_y) + d106 * dnormT_data[2] * dnormT_data[7] *
                                e_y) + -540540.0 * dT_data[0] * dnormT_data[0] *
                                dnormT_data[3] * dnormT_data[7] * e_y) +
                                -120120.0 * dT_data[6] * b_y * dnormT_data[8] *
                                e_y) + -360360.0 * dT_data[3] * dnormT_data[0] *
                                dnormT_data[1] * dnormT_data[8] * e_y) +
                                -180180.0 * dT_data[0] * h_y * dnormT_data[8] *
                                e_y) + -240240.0 * dT_data[0] * dnormT_data[0] *
                                dnormT_data[2] * dnormT_data[8] * e_y) + 8008.0 *
                                dT_data[6] * dnormT_data[9] * dnormT_data[0] *
                                c_y) + 2184.0 * dT_data[3] * dnormT_data[10] *
                                dnormT_data[0] * c_y) + 364.0 * dT_data[0] *
                                dnormT_data[11] * dnormT_data[0] * c_y) + 182.0 *
                                dT_data[33] * b_y * c_y) + 12012.0 * dT_data[3] *
                                dnormT_data[9] * dnormT_data[1] * c_y) + 2184.0 *
                                dT_data[0] * dnormT_data[10] * dnormT_data[1] *
                                c_y) + 2184.0 * dT_data[30] * dnormT_data[0] *
                                dnormT_data[1] * c_y) + 6006.0 * dT_data[27] *
                                h_y * c_y) + 8008.0 * dT_data[0] * dnormT_data[9]
                                * dnormT_data[2] * c_y) + 8008.0 * dT_data[27] *
                                dnormT_data[0] * dnormT_data[2] * c_y) + 40040.0
                                * dT_data[24] * dnormT_data[1] * dnormT_data[2] *
                                c_y) + 60060.0 * dT_data[21] * n_y * c_y) +
                                20020.0 * dT_data[24] * dnormT_data[0] *
                                dnormT_data[3] * c_y) + 90090.0 * dT_data[21] *
                                dnormT_data[1] * dnormT_data[3] * c_y) +
                                240240.0 * dT_data[18] * dnormT_data[2] *
                                dnormT_data[3] * c_y) + 210210.0 * dT_data[15] *
                                t_y * c_y) + 36036.0 * dT_data[21] *
                                dnormT_data[0] * dnormT_data[4] * c_y) +
                                144144.0 * dT_data[18] * dnormT_data[1] *
                                dnormT_data[4] * c_y) + 336336.0 * dT_data[15] *
                                dnormT_data[2] * dnormT_data[4] * c_y) +
                                504504.0 * dT_data[12] * dnormT_data[3] *
                                dnormT_data[4] * c_y) + 252252.0 * dT_data[9] *
                                bb_y * c_y) + 48048.0 * dT_data[18] *
                                dnormT_data[0] * dnormT_data[5] * c_y) +
                                168168.0 * dT_data[15] * dnormT_data[1] *
                                dnormT_data[5] * c_y) + 336336.0 * dT_data[12] *
                                dnormT_data[2] * dnormT_data[5] * c_y) +
                                420420.0 * dT_data[9] * dnormT_data[3] *
                                dnormT_data[5] * c_y) + 336336.0 * dT_data[6] *
                                dnormT_data[4] * dnormT_data[5] * c_y) + 84084.0
                                * dT_data[3] * jb_y * c_y) + 48048.0 * dT_data
                                [15] * dnormT_data[0] * dnormT_data[6] * c_y) +
                                144144.0 * dT_data[12] * dnormT_data[1] *
                                dnormT_data[6] * c_y) + 240240.0 * dT_data[9] *
                                dnormT_data[2] * dnormT_data[6] * c_y) +
                                240240.0 * dT_data[6] * dnormT_data[3] *
                                dnormT_data[6] * c_y) + 144144.0 * dT_data[3] *
                                dnormT_data[4] * dnormT_data[6] * c_y) + 48048.0
                                * dT_data[0] * dnormT_data[5] * dnormT_data[6] *
                                c_y) + 36036.0 * dT_data[12] * dnormT_data[0] *
                                dnormT_data[7] * c_y) + 90090.0 * dT_data[9] *
                                dnormT_data[1] * dnormT_data[7] * c_y) +
                                120120.0 * dT_data[6] * dnormT_data[2] *
                                dnormT_data[7] * c_y) + 90090.0 * dT_data[3] *
                                dnormT_data[3] * dnormT_data[7] * c_y) + 36036.0
                                * dT_data[0] * dnormT_data[4] * dnormT_data[7] *
                                c_y) + 20020.0 * dT_data[9] * dnormT_data[0] *
                                dnormT_data[8] * c_y) + 40040.0 * dT_data[6] *
                                dnormT_data[1] * dnormT_data[8] * c_y) + 40040.0
                                * dT_data[3] * dnormT_data[2] * dnormT_data[8] *
                                c_y) + 20020.0 * dT_data[0] * dnormT_data[3] *
                                dnormT_data[8] * c_y) + -1001.0 * dT_data[9] *
                                dnormT_data[9] * dnormT_tmp) + -364.0 * dT_data
                                [6] * dnormT_data[10] * dnormT_tmp) + -91.0 *
                                dT_data[3] * dnormT_data[11] * dnormT_tmp) +
                                -14.0 * dT_data[0] * dnormT_data[12] *
                                dnormT_tmp) + -14.0 * dT_data[36] * dnormT_data
                                [0] * dnormT_tmp) + -91.0 * dT_data[33] *
                                dnormT_data[1] * dnormT_tmp) + -364.0 * dT_data
                                [30] * dnormT_data[2] * dnormT_tmp) + -1001.0 *
                                dT_data[27] * dnormT_data[3] * dnormT_tmp) +
                                -2002.0 * dT_data[24] * dnormT_data[4] *
                                dnormT_tmp) + -3003.0 * dT_data[21] *
                                dnormT_data[5] * dnormT_tmp) + -3432.0 *
                                dT_data[18] * dnormT_data[6] * dnormT_tmp) +
                                -3003.0 * dT_data[15] * dnormT_data[7] *
                                dnormT_tmp) + -2002.0 * dT_data[12] *
                                dnormT_data[8] * dnormT_tmp) + dT_data[39] * y)
                                + d0 * T[0]) + d1 * T[0]) + d2 * T[0]) + d3 * T
                                [0]) + d4 * T[0]) + d5 * T[0]) + d6 * T[0]) + d7
                                * T[0]) + d8 * T[0]) + d9 * T[0]) + d10 * T[0])
                                + d11 * T[0]) + d12 * T[0]) + d13 * T[0]) + d14 *
                                T[0]) + d15 * T[0]) + d16 * T[0]) + d17 * T[0])
                                + d18 * T[0]) + d19 * T[0]) + d20 * T[0]) + d21 *
                                T[0]) + d22 * T[0]) + d23 * T[0]) + d24 * T[0])
                                + d25 * T[0]) + d26 * T[0]) + d28 * T[0]) + d29 *
                                T[0]) + d30 * T[0]) + d31 * T[0]) + d32 * T[0])
                                + d33 * T[0]) + d34 * T[0]) + d35 * T[0]) + d36 *
                                T[0]) + d37 * T[0]) + d38 * T[0]) + d39 * T[0])
                                + d40 * T[0]) + d41 * T[0]) + d42 * T[0]) + d43 *
                                T[0]) + d27 * T[0]) + d44 * T[0]) + d45 * T[0])
                                + d46 * T[0]) + d47 * T[0]) + d48 * T[0]) + d49 *
                                T[0]) + d50 * T[0]) + d51 * T[0]) + d52 * T[0])
                                + d53 * T[0]) + d54 * T[0]) + d56 * T[0]) + d57 *
                                T[0]) + d59 * T[0]) + d60 * T[0]) + d55 * T[0])
                                + d61 * T[0]) + d62 * T[0]) + d63 * T[0]) + d64 *
                                T[0]) + d65 * T[0]) + d66 * T[0]) + d67 * T[0])
                                + d68 * T[0]) + d69 * T[0]) + d70 * T[0]) + d71 *
                                T[0]) + d72 * T[0]) + d73 * T[0]) + d75 * T[0])
                                + d76 * T[0]) + d77 * T[0]) + d78 * T[0]) + d79 *
                                T[0]) + d80 * T[0]) + d81 * T[0]) + d82 * T[0])
                                + d83 * T[0]) + d84 * T[0]) + d85 * T[0]) + d86 *
                                T[0]) + d87 * T[0]) + d58 * T[0]) + d88 * T[0])
                                + d89 * T[0]) + d90 * T[0]) + d91 * T[0]) + d92 *
                                T[0]) + d93 * T[0]) + d94 * T[0]) + d95 * T[0])
                                + d96 * T[0]) + d97 * T[0]) + d98 * T[0]) + d99 *
                                T[0]) + d100 * T[0]) + d101 * T[0]) + d102 * T[0])
                                + d103 * T[0]) + d113 * T[0]) + d114 * T[0]) +
                                d115 * T[0]) + d116 * T[0]) + d74 * T[0]) + d117
                                * T[0]) + d118 * T[0]) + d119 * T[0]) + d120 *
                                T[0]) + d121 * T[0]) + d122 * T[0]) + d123 * T[0])
                                                   + d124 * T[0]) + d125 * T[0])
                                                 + d126 * T[0]) + d127 * T[0]) +
                                               d128 * T[0]) + d129 * T[0]) +
                                             d130 * T[0]) + d131 * T[0]) + d132 *
                                           T[0]) + d133 * T[0]) + d134 * T[0]) +
                                        d135 * T[0]) + d136 * T[0]) + d137 * T[0])
                                     + d138 * T[0]) + d139 * T[0]) + d140 * T[0])
                                  + d141 * T[0]) + d142 * T[0]) + dnormT * T[0];
                              d104 = 1.2108096E+8 * dT_data[4] * dnormT_data[0];
                              dq_data[40] =
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                ((((((((((((((((-8.71782912E+10 * dT_data[1] *
                                kb_y * lb_y + 4.35891456E+10 * dT_data[4] * eb_y
                                * fb_y) + 5.230697472E+11 * dT_data[1] * cb_y *
                                dnormT_data[1] * fb_y) + -1.45297152E+10 *
                                dT_data[7] * cb_y * db_y) + -2.397403008E+11 *
                                dT_data[4] * x_y * dnormT_data[1] * db_y) +
                                -1.198701504E+12 * dT_data[1] * u_y * h_y * db_y)
                                + -1.598268672E+11 * dT_data[1] * x_y *
                                dnormT_data[2] * db_y) + 3.6324288E+9 * dT_data
                                [10] * x_y * y_y) + 7.2648576E+10 * dT_data[7] *
                                u_y * dnormT_data[1] * y_y) + 4.90377888E+11 *
                                dT_data[4] * q_y * h_y * y_y) + 1.307674368E+12 *
                                dT_data[1] * o_y * m_y * y_y) + 7.2648576E+10 *
                                dT_data[4] * u_y * dnormT_data[2] * y_y) +
                                6.53837184E+11 * dT_data[1] * q_y * dnormT_data
                                [1] * dnormT_data[2] * y_y) + 3.6324288E+10 *
                                dT_data[1] * u_y * dnormT_data[3] * y_y) +
                                -7.2648576E+8 * dT_data[13] * u_y * v_y) +
                                -1.63459296E+10 * dT_data[10] * q_y *
                                dnormT_data[1] * v_y) + -1.307674368E+11 *
                                dT_data[7] * o_y * h_y * v_y) + -4.576860288E+11
                                * dT_data[4] * k_y * m_y * v_y) +
                                -6.865290432E+11 * dT_data[1] * i_y * s_y * v_y)
                                + -2.17945728E+10 * dT_data[7] * q_y *
                                dnormT_data[2] * v_y) + -2.615348736E+11 *
                                dT_data[4] * o_y * dnormT_data[1] * dnormT_data
                                [2] * v_y) + -9.153720576E+11 * dT_data[1] * k_y
                                * h_y * dnormT_data[2] * v_y) + -8.71782912E+10 *
                                dT_data[1] * o_y * n_y * v_y) + -1.63459296E+10 *
                                dT_data[4] * q_y * dnormT_data[3] * v_y) +
                                -1.307674368E+11 * dT_data[1] * o_y *
                                dnormT_data[1] * dnormT_data[3] * v_y) +
                                -6.53837184E+9 * dT_data[1] * q_y * dnormT_data
                                [4] * v_y) + 1.2108096E+8 * dT_data[16] * q_y *
                                r_y) + 2.90594304E+9 * dT_data[13] * o_y *
                                dnormT_data[1] * r_y) + 2.54270016E+10 *
                                dT_data[10] * k_y * h_y * r_y) + 1.017080064E+11
                                * dT_data[7] * i_y * m_y * r_y) + 1.90702512E+11
                                * dT_data[4] * f_y * s_y * r_y) +
                                1.525620096E+11 * dT_data[1] * d_y * ab_y * r_y)
                                + 4.8432384E+9 * dT_data[10] * o_y *
                                dnormT_data[2] * r_y) + 6.78053376E+10 *
                                dT_data[7] * k_y * dnormT_data[1] * dnormT_data
                                [2] * r_y) + 3.051240192E+11 * dT_data[4] * i_y *
                                h_y * dnormT_data[2] * r_y) + 5.08540032E+11 *
                                dT_data[1] * f_y * m_y * dnormT_data[2] * r_y) +
                                3.39026688E+10 * dT_data[4] * k_y * n_y * r_y) +
                                2.034160128E+11 * dT_data[1] * i_y *
                                dnormT_data[1] * n_y * r_y) + 4.8432384E+9 *
                                dT_data[7] * o_y * dnormT_data[3] * r_y) +
                                5.08540032E+10 * dT_data[4] * k_y * dnormT_data
                                [1] * dnormT_data[3] * r_y) + 1.525620096E+11 *
                                dT_data[1] * i_y * h_y * dnormT_data[3] * r_y) +
                                3.39026688E+10 * dT_data[1] * k_y * dnormT_data
                                [2] * dnormT_data[3] * r_y) + 2.90594304E+9 *
                                dT_data[4] * o_y * dnormT_data[4] * r_y) +
                                2.034160128E+10 * dT_data[1] * k_y *
                                dnormT_data[1] * dnormT_data[4] * r_y) +
                                9.6864768E+8 * dT_data[1] * o_y * dnormT_data[5]
                                * r_y) + -1.729728E+7 * dT_data[19] * o_y * p_y)
                                + -4.2378336E+8 * dT_data[16] * k_y *
                                dnormT_data[1] * p_y) + -3.81405024E+9 *
                                dT_data[13] * i_y * h_y * p_y) + -1.5891876E+10 *
                                dT_data[10] * f_y * m_y * p_y) + -3.1783752E+10 *
                                dT_data[7] * d_y * s_y * p_y) + -2.86053768E+10 *
                                dT_data[4] * b_y * ab_y * p_y) + -9.5351256E+9 *
                                dT_data[1] * dnormT_data[0] * gb_y * p_y) +
                                -8.4756672E+8 * dT_data[13] * k_y * dnormT_data
                                [2] * p_y) + -1.27135008E+10 * dT_data[10] * i_y
                                * dnormT_data[1] * dnormT_data[2] * p_y) +
                                -6.3567504E+10 * dT_data[7] * f_y * h_y *
                                dnormT_data[2] * p_y) + -1.27135008E+11 *
                                dT_data[4] * d_y * m_y * dnormT_data[2] * p_y) +
                                -9.5351256E+10 * dT_data[1] * b_y * s_y *
                                dnormT_data[2] * p_y) + -8.4756672E+9 * dT_data
                                [7] * i_y * n_y * p_y) + -6.3567504E+10 *
                                dT_data[4] * f_y * dnormT_data[1] * n_y * p_y) +
                                -1.27135008E+11 * dT_data[1] * d_y * h_y * n_y *
                                p_y) + -1.4126112E+10 * dT_data[1] * f_y * w_y *
                                p_y) + -1.0594584E+9 * dT_data[10] * k_y *
                                dnormT_data[3] * p_y) + -1.27135008E+10 *
                                dT_data[7] * i_y * dnormT_data[1] * dnormT_data
                                [3] * p_y) + -4.7675628E+10 * dT_data[4] * f_y *
                                h_y * dnormT_data[3] * p_y) + -6.3567504E+10 *
                                dT_data[1] * d_y * m_y * dnormT_data[3] * p_y) +
                                -1.27135008E+10 * dT_data[4] * i_y *
                                dnormT_data[2] * dnormT_data[3] * p_y) +
                                -6.3567504E+10 * dT_data[1] * f_y * dnormT_data
                                [1] * dnormT_data[2] * dnormT_data[3] * p_y) +
                                -3.1783752E+9 * dT_data[1] * i_y * t_y * p_y) +
                                -8.4756672E+8 * dT_data[7] * k_y * dnormT_data[4]
                                * p_y) + -7.62810048E+9 * dT_data[4] * i_y *
                                dnormT_data[1] * dnormT_data[4] * p_y) +
                                -1.90702512E+10 * dT_data[1] * f_y * h_y *
                                dnormT_data[4] * p_y) + -5.08540032E+9 *
                                dT_data[1] * i_y * dnormT_data[2] * dnormT_data
                                [4] * p_y) + -4.2378336E+8 * dT_data[4] * k_y *
                                dnormT_data[5] * p_y) + -2.54270016E+9 *
                                dT_data[1] * i_y * dnormT_data[1] * dnormT_data
                                [5] * p_y) + -1.2108096E+8 * dT_data[1] * k_y *
                                dnormT_data[6] * p_y) + 2.16216E+6 * dT_data[22]
                                * k_y * l_y) + 5.189184E+7 * dT_data[19] * i_y *
                                dnormT_data[1] * l_y) + 4.540536E+8 * dT_data[16]
                                * f_y * h_y * l_y) + 1.8162144E+9 * dT_data[13] *
                                d_y * m_y * l_y) + 3.405402E+9 * dT_data[10] *
                                b_y * s_y * l_y) + 2.7243216E+9 * dT_data[7] *
                                dnormT_data[0] * ab_y * l_y) + 6.810804E+8 *
                                dT_data[4] * gb_y * l_y) + 1.2108096E+8 *
                                dT_data[16] * i_y * dnormT_data[2] * l_y) +
                                1.8162144E+9 * dT_data[13] * f_y * dnormT_data[1]
                                * dnormT_data[2] * l_y) + 9.081072E+9 * dT_data
                                [10] * d_y * h_y * dnormT_data[2] * l_y) +
                                1.8162144E+10 * dT_data[7] * b_y * m_y *
                                dnormT_data[2] * l_y) + 1.3621608E+10 * dT_data
                                [4] * dnormT_data[0] * s_y * dnormT_data[2] *
                                l_y) + 2.7243216E+9 * dT_data[1] * ab_y *
                                dnormT_data[2] * l_y) + 1.513512E+9 * dT_data[10]
                                * f_y * n_y * l_y) + 1.2108096E+10 * dT_data[7] *
                                d_y * dnormT_data[1] * n_y * l_y) +
                                2.7243216E+10 * dT_data[4] * b_y * h_y * n_y *
                                l_y) + 1.8162144E+10 * dT_data[1] * dnormT_data
                                [0] * m_y * n_y * l_y) + 4.036032E+9 * dT_data[4]
                                * d_y * w_y * l_y) + 1.2108096E+10 * dT_data[1] *
                                b_y * dnormT_data[1] * w_y * l_y) + 1.8162144E+8
                                * dT_data[13] * i_y * dnormT_data[3] * l_y) +
                                2.270268E+9 * dT_data[10] * f_y * dnormT_data[1]
                                * dnormT_data[3] * l_y) + 9.081072E+9 * dT_data
                                [7] * d_y * h_y * dnormT_data[3] * l_y) +
                                1.3621608E+10 * dT_data[4] * b_y * m_y *
                                dnormT_data[3] * l_y) + 6.810804E+9 * dT_data[1]
                                * dnormT_data[0] * s_y * dnormT_data[3] * l_y) +
                                3.027024E+9 * dT_data[7] * f_y * dnormT_data[2] *
                                dnormT_data[3] * l_y) + 1.8162144E+10 * dT_data
                                [4] * d_y * dnormT_data[1] * dnormT_data[2] *
                                dnormT_data[3] * l_y) + 2.7243216E+10 * dT_data
                                [1] * b_y * h_y * dnormT_data[2] * dnormT_data[3]
                                * l_y) + 6.054048E+9 * dT_data[1] * d_y * n_y *
                                dnormT_data[3] * l_y) + 1.135134E+9 * dT_data[4]
                                * f_y * t_y * l_y) + 4.540536E+9 * dT_data[1] *
                                d_y * dnormT_data[1] * t_y * l_y) + 1.8162144E+8
                                * dT_data[10] * i_y * dnormT_data[4] * l_y) +
                                1.8162144E+9 * dT_data[7] * f_y * dnormT_data[1]
                                * dnormT_data[4] * l_y) + 5.4486432E+9 *
                                dT_data[4] * d_y * h_y * dnormT_data[4] * l_y) +
                                5.4486432E+9 * dT_data[1] * b_y * m_y *
                                dnormT_data[4] * l_y) + 1.8162144E+9 * dT_data[4]
                                * f_y * dnormT_data[2] * dnormT_data[4] * l_y) +
                                7.2648576E+9 * dT_data[1] * d_y * dnormT_data[1]
                                * dnormT_data[2] * dnormT_data[4] * l_y) +
                                9.081072E+8 * dT_data[1] * f_y * dnormT_data[3] *
                                dnormT_data[4] * l_y) + 1.2108096E+8 * dT_data[7]
                                * i_y * dnormT_data[5] * l_y) + 9.081072E+8 *
                                dT_data[4] * f_y * dnormT_data[1] * dnormT_data
                                [5] * l_y) + 1.8162144E+9 * dT_data[1] * d_y *
                                h_y * dnormT_data[5] * l_y) + 6.054048E+8 *
                                dT_data[1] * f_y * dnormT_data[2] * dnormT_data
                                [5] * l_y) + 5.189184E+7 * dT_data[4] * i_y *
                                dnormT_data[6] * l_y) + 2.594592E+8 * dT_data[1]
                                * f_y * dnormT_data[1] * dnormT_data[6] * l_y) +
                                1.297296E+7 * dT_data[1] * i_y * dnormT_data[7] *
                                l_y) + -240240.0 * dT_data[25] * i_y * j_y) +
                                -5.4054E+6 * dT_data[22] * f_y * dnormT_data[1] *
                                j_y) + -4.32432E+7 * dT_data[19] * d_y * h_y *
                                j_y) + -1.513512E+8 * dT_data[16] * b_y * m_y *
                                j_y) + -2.270268E+8 * dT_data[13] * dnormT_data
                                [0] * s_y * j_y) + -1.135134E+8 * dT_data[10] *
                                ab_y * j_y) + -1.44144E+7 * dT_data[19] * f_y *
                                dnormT_data[2] * j_y) + -2.018016E+8 * dT_data
                                [16] * d_y * dnormT_data[1] * dnormT_data[2] *
                                j_y) + -9.081072E+8 * dT_data[13] * b_y * h_y *
                                dnormT_data[2] * j_y) + -1.513512E+9 * dT_data
                                [10] * dnormT_data[0] * m_y * dnormT_data[2] *
                                j_y) + -7.56756E+8 * dT_data[7] * s_y *
                                dnormT_data[2] * j_y) + -2.018016E+8 * dT_data
                                [13] * d_y * n_y * j_y) + -1.513512E+9 *
                                dT_data[10] * b_y * dnormT_data[1] * n_y * j_y)
                                + -3.027024E+9 * dT_data[7] * dnormT_data[0] *
                                h_y * n_y * j_y) + -1.513512E+9 * dT_data[4] *
                                m_y * n_y * j_y) + -6.72672E+8 * dT_data[7] *
                                b_y * w_y * j_y) + -2.018016E+9 * dT_data[4] *
                                dnormT_data[0] * dnormT_data[1] * w_y * j_y) +
                                -1.009008E+9 * dT_data[1] * h_y * w_y * j_y) +
                                -3.36336E+8 * dT_data[1] * dnormT_data[0] * hb_y
                                * j_y) + -2.52252E+7 * dT_data[16] * f_y *
                                dnormT_data[3] * j_y) + -3.027024E+8 * dT_data
                                [13] * d_y * dnormT_data[1] * dnormT_data[3] *
                                j_y) + -1.135134E+9 * dT_data[10] * b_y * h_y *
                                dnormT_data[3] * j_y) + -1.513512E+9 * dT_data[7]
                                * dnormT_data[0] * m_y * dnormT_data[3] * j_y) +
                                -5.67567E+8 * dT_data[4] * s_y * dnormT_data[3] *
                                j_y) + -5.04504E+8 * dT_data[10] * d_y *
                                dnormT_data[2] * dnormT_data[3] * j_y) +
                                -3.027024E+9 * dT_data[7] * b_y * dnormT_data[1]
                                * dnormT_data[2] * dnormT_data[3] * j_y) +
                                -4.540536E+9 * dT_data[4] * dnormT_data[0] * h_y
                                * dnormT_data[2] * dnormT_data[3] * j_y) +
                                -1.513512E+9 * dT_data[1] * m_y * dnormT_data[2]
                                * dnormT_data[3] * j_y) + -1.513512E+9 *
                                dT_data[4] * b_y * n_y * dnormT_data[3] * j_y) +
                                -3.027024E+9 * dT_data[1] * dnormT_data[0] *
                                dnormT_data[1] * n_y * dnormT_data[3] * j_y) +
                                -2.52252E+8 * dT_data[7] * d_y * t_y * j_y) +
                                -1.135134E+9 * dT_data[4] * b_y * dnormT_data[1]
                                * t_y * j_y) + -1.135134E+9 * dT_data[1] *
                                dnormT_data[0] * h_y * t_y * j_y) + -7.56756E+8 *
                                dT_data[1] * b_y * dnormT_data[2] * t_y * j_y) +
                                -3.027024E+7 * dT_data[13] * f_y * dnormT_data[4]
                                * j_y) + -3.027024E+8 * dT_data[10] * d_y *
                                dnormT_data[1] * dnormT_data[4] * j_y) +
                                -9.081072E+8 * dT_data[7] * b_y * h_y *
                                dnormT_data[4] * j_y) + -9.081072E+8 * dT_data[4]
                                * dnormT_data[0] * m_y * dnormT_data[4] * j_y) +
                                -2.270268E+8 * dT_data[1] * s_y * dnormT_data[4]
                                * j_y) + -4.036032E+8 * dT_data[7] * d_y *
                                dnormT_data[2] * dnormT_data[4] * j_y) +
                                -1.8162144E+9 * dT_data[4] * b_y * dnormT_data[1]
                                * dnormT_data[2] * dnormT_data[4] * j_y) +
                                -1.8162144E+9 * dT_data[1] * dnormT_data[0] *
                                h_y * dnormT_data[2] * dnormT_data[4] * j_y) +
                                -6.054048E+8 * dT_data[1] * b_y * n_y *
                                dnormT_data[4] * j_y) + -3.027024E+8 * dT_data[4]
                                * d_y * dnormT_data[3] * dnormT_data[4] * j_y) +
                                -9.081072E+8 * dT_data[1] * b_y * dnormT_data[1]
                                * dnormT_data[3] * dnormT_data[4] * j_y) +
                                -6.054048E+7 * dT_data[1] * d_y * bb_y * j_y) +
                                -2.52252E+7 * dT_data[10] * f_y * dnormT_data[5]
                                * j_y) + -2.018016E+8 * dT_data[7] * d_y *
                                dnormT_data[1] * dnormT_data[5] * j_y) +
                                -4.540536E+8 * dT_data[4] * b_y * h_y *
                                dnormT_data[5] * j_y) + -3.027024E+8 * dT_data[1]
                                * dnormT_data[0] * m_y * dnormT_data[5] * j_y) +
                                -2.018016E+8 * dT_data[4] * d_y * dnormT_data[2]
                                * dnormT_data[5] * j_y) + -6.054048E+8 *
                                dT_data[1] * b_y * dnormT_data[1] * dnormT_data
                                [2] * dnormT_data[5] * j_y) + -1.009008E+8 *
                                dT_data[1] * d_y * dnormT_data[3] * dnormT_data
                                [5] * j_y) + -1.44144E+7 * dT_data[7] * f_y *
                                dnormT_data[6] * j_y) + -8.64864E+7 * dT_data[4]
                                * d_y * dnormT_data[1] * dnormT_data[6] * j_y) +
                                -1.297296E+8 * dT_data[1] * b_y * h_y *
                                dnormT_data[6] * j_y) + -5.76576E+7 * dT_data[1]
                                * d_y * dnormT_data[2] * dnormT_data[6] * j_y) +
                                -5.4054E+6 * dT_data[4] * f_y * dnormT_data[7] *
                                j_y) + -2.16216E+7 * dT_data[1] * d_y *
                                dnormT_data[1] * dnormT_data[7] * j_y) +
                                -1.2012E+6 * dT_data[1] * f_y * dnormT_data[8] *
                                j_y) + 96096.0 * dT_data[1] * dnormT_data[9] *
                                d_y * g_y) + 24024.0 * dT_data[28] * f_y * g_y)
                                + 480480.0 * dT_data[25] * d_y * dnormT_data[1] *
                                g_y) + 3.24324E+6 * dT_data[22] * b_y * h_y *
                                g_y) + 8.64864E+6 * dT_data[19] * dnormT_data[0]
                                * m_y * g_y) + 7.56756E+6 * dT_data[16] * s_y *
                                g_y) + 1.44144E+6 * dT_data[22] * d_y *
                                dnormT_data[2] * g_y) + 1.729728E+7 * dT_data[19]
                                * b_y * dnormT_data[1] * dnormT_data[2] * g_y) +
                                6.054048E+7 * dT_data[16] * dnormT_data[0] * h_y
                                * dnormT_data[2] * g_y) + 6.054048E+7 * dT_data
                                [13] * m_y * dnormT_data[2] * g_y) + 2.018016E+7
                                * dT_data[16] * b_y * n_y * g_y) + 1.2108096E+8 *
                                dT_data[13] * dnormT_data[0] * dnormT_data[1] *
                                n_y * g_y) + 1.513512E+8 * dT_data[10] * h_y *
                                n_y * g_y) + 6.72672E+7 * dT_data[10] *
                                dnormT_data[0] * w_y * g_y) + 1.345344E+8 *
                                dT_data[7] * dnormT_data[1] * w_y * g_y) +
                                3.36336E+7 * dT_data[4] * hb_y * g_y) +
                                2.88288E+6 * dT_data[19] * d_y * dnormT_data[3] *
                                g_y) + 3.027024E+7 * dT_data[16] * b_y *
                                dnormT_data[1] * dnormT_data[3] * g_y) +
                                9.081072E+7 * dT_data[13] * dnormT_data[0] * h_y
                                * dnormT_data[3] * g_y) + 7.56756E+7 * dT_data
                                [10] * m_y * dnormT_data[3] * g_y) + 6.054048E+7
                                * dT_data[13] * b_y * dnormT_data[2] *
                                dnormT_data[3] * g_y) + 3.027024E+8 * dT_data[10]
                                * dnormT_data[0] * dnormT_data[1] * dnormT_data
                                [2] * dnormT_data[3] * g_y) + 3.027024E+8 *
                                dT_data[7] * h_y * dnormT_data[2] * dnormT_data
                                [3] * g_y) + 2.018016E+8 * dT_data[7] *
                                dnormT_data[0] * n_y * dnormT_data[3] * g_y) +
                                3.027024E+8 * dT_data[4] * dnormT_data[1] * n_y *
                                dnormT_data[3] * g_y) + 6.72672E+7 * dT_data[1] *
                                w_y * dnormT_data[3] * g_y) + 3.78378E+7 *
                                dT_data[10] * b_y * t_y * g_y) + 1.513512E+8 *
                                dT_data[7] * dnormT_data[0] * dnormT_data[1] *
                                t_y * g_y) + 1.135134E+8 * dT_data[4] * h_y *
                                t_y * g_y) + 1.513512E+8 * dT_data[4] *
                                dnormT_data[0] * dnormT_data[2] * t_y * g_y) +
                                1.513512E+8 * dT_data[1] * dnormT_data[1] *
                                dnormT_data[2] * t_y * g_y) + 2.52252E+7 *
                                dT_data[1] * dnormT_data[0] * ib_y * g_y) +
                                4.036032E+6 * dT_data[16] * d_y * dnormT_data[4]
                                * g_y) + 3.6324288E+7 * dT_data[13] * b_y *
                                dnormT_data[1] * dnormT_data[4] * g_y) +
                                9.081072E+7 * dT_data[10] * dnormT_data[0] * h_y
                                * dnormT_data[4] * g_y) + 6.054048E+7 * dT_data
                                [7] * m_y * dnormT_data[4] * g_y) + 6.054048E+7 *
                                dT_data[10] * b_y * dnormT_data[2] *
                                dnormT_data[4] * g_y) + 2.4216192E+8 * dT_data[7]
                                * dnormT_data[0] * dnormT_data[1] * dnormT_data
                                [2] * dnormT_data[4] * g_y) + 1.8162144E+8 *
                                dT_data[4] * h_y * dnormT_data[2] * dnormT_data
                                [4] * g_y) + d104 * n_y * dnormT_data[4] * g_y)
                                + 1.2108096E+8 * dT_data[1] * dnormT_data[1] *
                                n_y * dnormT_data[4] * g_y) + 6.054048E+7 *
                                dT_data[7] * b_y * dnormT_data[3] * dnormT_data
                                [4] * g_y) + 1.8162144E+8 * dT_data[4] *
                                dnormT_data[0] * dnormT_data[1] * dnormT_data[3]
                                * dnormT_data[4] * g_y) + 9.081072E+7 * dT_data
                                [1] * h_y * dnormT_data[3] * dnormT_data[4] *
                                g_y) + 1.2108096E+8 * dT_data[1] * dnormT_data[0]
                                * dnormT_data[2] * dnormT_data[3] * dnormT_data
                                [4] * g_y) + 1.8162144E+7 * dT_data[4] * b_y *
                                bb_y * g_y) + 3.6324288E+7 * dT_data[1] *
                                dnormT_data[0] * dnormT_data[1] * bb_y * g_y) +
                                4.036032E+6 * dT_data[13] * d_y * dnormT_data[5]
                                * g_y) + 3.027024E+7 * dT_data[10] * b_y *
                                dnormT_data[1] * dnormT_data[5] * g_y) +
                                6.054048E+7 * dT_data[7] * dnormT_data[0] * h_y *
                                dnormT_data[5] * g_y) + 3.027024E+7 * dT_data[4]
                                * m_y * dnormT_data[5] * g_y) + 4.036032E+7 *
                                dT_data[7] * b_y * dnormT_data[2] * dnormT_data
                                [5] * g_y) + d104 * dnormT_data[1] *
                                dnormT_data[2] * dnormT_data[5] * g_y) +
                                6.054048E+7 * dT_data[1] * h_y * dnormT_data[2] *
                                dnormT_data[5] * g_y) + 4.036032E+7 * dT_data[1]
                                * dnormT_data[0] * n_y * dnormT_data[5] * g_y) +
                                3.027024E+7 * dT_data[4] * b_y * dnormT_data[3] *
                                dnormT_data[5] * g_y) + 6.054048E+7 * dT_data[1]
                                * dnormT_data[0] * dnormT_data[1] * dnormT_data
                                [3] * dnormT_data[5] * g_y) + 1.2108096E+7 *
                                dT_data[1] * b_y * dnormT_data[4] * dnormT_data
                                [5] * g_y) + 2.88288E+6 * dT_data[10] * d_y *
                                dnormT_data[6] * g_y) + 1.729728E+7 * dT_data[7]
                                * b_y * dnormT_data[1] * dnormT_data[6] * g_y) +
                                2.594592E+7 * dT_data[4] * dnormT_data[0] * h_y *
                                dnormT_data[6] * g_y) + 8.64864E+6 * dT_data[1] *
                                m_y * dnormT_data[6] * g_y) + 1.729728E+7 *
                                dT_data[4] * b_y * dnormT_data[2] * dnormT_data
                                [6] * g_y) + 3.459456E+7 * dT_data[1] *
                                dnormT_data[0] * dnormT_data[1] * dnormT_data[2]
                                * dnormT_data[6] * g_y) + 8.64864E+6 * dT_data[1]
                                * b_y * dnormT_data[3] * dnormT_data[6] * g_y) +
                                1.44144E+6 * dT_data[7] * d_y * dnormT_data[7] *
                                g_y) + 6.48648E+6 * dT_data[4] * b_y *
                                dnormT_data[1] * dnormT_data[7] * g_y) +
                                6.48648E+6 * dT_data[1] * dnormT_data[0] * h_y *
                                dnormT_data[7] * g_y) + 4.32432E+6 * dT_data[1] *
                                b_y * dnormT_data[2] * dnormT_data[7] * g_y) +
                                480480.0 * dT_data[4] * d_y * dnormT_data[8] *
                                g_y) + 1.44144E+6 * dT_data[1] * b_y *
                                dnormT_data[1] * dnormT_data[8] * g_y) +
                                -36036.0 * dT_data[4] * dnormT_data[9] * b_y *
                                e_y) + -6552.0 * dT_data[1] * dnormT_data[10] *
                                b_y * e_y) + -2184.0 * dT_data[31] * d_y * e_y)
                                + -72072.0 * dT_data[1] * dnormT_data[9] *
                                dnormT_data[0] * dnormT_data[1] * e_y) +
                                -36036.0 * dT_data[28] * b_y * dnormT_data[1] *
                                e_y) + -180180.0 * dT_data[25] * dnormT_data[0] *
                                h_y * e_y) + -270270.0 * dT_data[22] * m_y * e_y)
                                + -120120.0 * dT_data[25] * b_y * dnormT_data[2]
                                * e_y) + -1.08108E+6 * dT_data[22] *
                                dnormT_data[0] * dnormT_data[1] * dnormT_data[2]
                                * e_y) + -2.16216E+6 * dT_data[19] * h_y *
                                dnormT_data[2] * e_y) + -1.44144E+6 * dT_data[19]
                                * dnormT_data[0] * n_y * e_y) + -5.04504E+6 *
                                dT_data[16] * dnormT_data[1] * n_y * e_y) +
                                -3.36336E+6 * dT_data[13] * w_y * e_y) +
                                -270270.0 * dT_data[22] * b_y * dnormT_data[3] *
                                e_y) + -2.16216E+6 * dT_data[19] * dnormT_data[0]
                                * dnormT_data[1] * dnormT_data[3] * e_y) +
                                -3.78378E+6 * dT_data[16] * h_y * dnormT_data[3]
                                * e_y) + -5.04504E+6 * dT_data[16] *
                                dnormT_data[0] * dnormT_data[2] * dnormT_data[3]
                                * e_y) + -1.513512E+7 * dT_data[13] *
                                dnormT_data[1] * dnormT_data[2] * dnormT_data[3]
                                * e_y) + -1.26126E+7 * dT_data[10] * n_y *
                                dnormT_data[3] * e_y) + -3.78378E+6 * dT_data[13]
                                * dnormT_data[0] * t_y * e_y) + -9.45945E+6 *
                                dT_data[10] * dnormT_data[1] * t_y * e_y) +
                                -1.26126E+7 * dT_data[7] * dnormT_data[2] * t_y *
                                e_y) + -3.15315E+6 * dT_data[4] * ib_y * e_y) +
                                -432432.0 * dT_data[19] * b_y * dnormT_data[4] *
                                e_y) + -3.027024E+6 * dT_data[16] * dnormT_data
                                [0] * dnormT_data[1] * dnormT_data[4] * e_y) +
                                -4.540536E+6 * dT_data[13] * h_y * dnormT_data[4]
                                * e_y) + -6.054048E+6 * dT_data[13] *
                                dnormT_data[0] * dnormT_data[2] * dnormT_data[4]
                                * e_y) + -1.513512E+7 * dT_data[10] *
                                dnormT_data[1] * dnormT_data[2] * dnormT_data[4]
                                * e_y) + -1.009008E+7 * dT_data[7] * n_y *
                                dnormT_data[4] * e_y) + -7.56756E+6 * dT_data[10]
                                * dnormT_data[0] * dnormT_data[3] * dnormT_data
                                [4] * e_y) + -1.513512E+7 * dT_data[7] *
                                dnormT_data[1] * dnormT_data[3] * dnormT_data[4]
                                * e_y) + -1.513512E+7 * dT_data[4] *
                                dnormT_data[2] * dnormT_data[3] * dnormT_data[4]
                                * e_y) + -3.78378E+6 * dT_data[1] * t_y *
                                dnormT_data[4] * e_y) + -3.027024E+6 * dT_data[7]
                                * dnormT_data[0] * bb_y * e_y) + -4.540536E+6 *
                                dT_data[4] * dnormT_data[1] * bb_y * e_y) +
                                -3.027024E+6 * dT_data[1] * dnormT_data[2] *
                                bb_y * e_y) + -504504.0 * dT_data[16] * b_y *
                                dnormT_data[5] * e_y) + -3.027024E+6 * dT_data
                                [13] * dnormT_data[0] * dnormT_data[1] *
                                dnormT_data[5] * e_y) + -3.78378E+6 * dT_data[10]
                                * h_y * dnormT_data[5] * e_y) + -5.04504E+6 *
                                dT_data[10] * dnormT_data[0] * dnormT_data[2] *
                                dnormT_data[5] * e_y) + -1.009008E+7 * dT_data[7]
                                * dnormT_data[1] * dnormT_data[2] * dnormT_data
                                [5] * e_y) + -5.04504E+6 * dT_data[4] * n_y *
                                dnormT_data[5] * e_y) + -5.04504E+6 * dT_data[7]
                                * dnormT_data[0] * dnormT_data[3] * dnormT_data
                                [5] * e_y) + -7.56756E+6 * dT_data[4] *
                                dnormT_data[1] * dnormT_data[3] * dnormT_data[5]
                                * e_y) + -5.04504E+6 * dT_data[1] * dnormT_data
                                [2] * dnormT_data[3] * dnormT_data[5] * e_y) +
                                -3.027024E+6 * dT_data[4] * dnormT_data[0] *
                                dnormT_data[4] * dnormT_data[5] * e_y) +
                                -3.027024E+6 * dT_data[1] * dnormT_data[1] *
                                dnormT_data[4] * dnormT_data[5] * e_y) +
                                -504504.0 * dT_data[1] * dnormT_data[0] * jb_y *
                                e_y) + -432432.0 * dT_data[13] * b_y *
                                dnormT_data[6] * e_y) + d107 * dnormT_data[1] *
                                dnormT_data[6] * e_y) + -2.16216E+6 * dT_data[7]
                                * h_y * dnormT_data[6] * e_y) + -2.88288E+6 *
                                dT_data[7] * dnormT_data[0] * dnormT_data[2] *
                                dnormT_data[6] * e_y) + -4.32432E+6 * dT_data[4]
                                * dnormT_data[1] * dnormT_data[2] * dnormT_data
                                [6] * e_y) + -1.44144E+6 * dT_data[1] * n_y *
                                dnormT_data[6] * e_y) + -2.16216E+6 * dT_data[4]
                                * dnormT_data[0] * dnormT_data[3] * dnormT_data
                                [6] * e_y) + -2.16216E+6 * dT_data[1] *
                                dnormT_data[1] * dnormT_data[3] * dnormT_data[6]
                                * e_y) + -864864.0 * dT_data[1] * dnormT_data[0]
                                * dnormT_data[4] * dnormT_data[6] * e_y) +
                                -270270.0 * dT_data[10] * b_y * dnormT_data[7] *
                                e_y) + -1.08108E+6 * dT_data[7] * dnormT_data[0]
                                * dnormT_data[1] * dnormT_data[7] * e_y) +
                                -810810.0 * dT_data[4] * h_y * dnormT_data[7] *
                                e_y) + d108 * dnormT_data[2] * dnormT_data[7] *
                                e_y) + d109 * dnormT_data[2] * dnormT_data[7] *
                                e_y) + -540540.0 * dT_data[1] * dnormT_data[0] *
                                dnormT_data[3] * dnormT_data[7] * e_y) +
                                -120120.0 * dT_data[7] * b_y * dnormT_data[8] *
                                e_y) + -360360.0 * dT_data[4] * dnormT_data[0] *
                                dnormT_data[1] * dnormT_data[8] * e_y) +
                                -180180.0 * dT_data[1] * h_y * dnormT_data[8] *
                                e_y) + -240240.0 * dT_data[1] * dnormT_data[0] *
                                dnormT_data[2] * dnormT_data[8] * e_y) + 8008.0 *
                                dT_data[7] * dnormT_data[9] * dnormT_data[0] *
                                c_y) + 2184.0 * dT_data[4] * dnormT_data[10] *
                                dnormT_data[0] * c_y) + 364.0 * dT_data[1] *
                                dnormT_data[11] * dnormT_data[0] * c_y) + 182.0 *
                                dT_data[34] * b_y * c_y) + 12012.0 * dT_data[4] *
                                dnormT_data[9] * dnormT_data[1] * c_y) + 2184.0 *
                                dT_data[1] * dnormT_data[10] * dnormT_data[1] *
                                c_y) + 2184.0 * dT_data[31] * dnormT_data[0] *
                                dnormT_data[1] * c_y) + 6006.0 * dT_data[28] *
                                h_y * c_y) + 8008.0 * dT_data[1] * dnormT_data[9]
                                * dnormT_data[2] * c_y) + 8008.0 * dT_data[28] *
                                dnormT_data[0] * dnormT_data[2] * c_y) + 40040.0
                                * dT_data[25] * dnormT_data[1] * dnormT_data[2] *
                                c_y) + 60060.0 * dT_data[22] * n_y * c_y) +
                                20020.0 * dT_data[25] * dnormT_data[0] *
                                dnormT_data[3] * c_y) + 90090.0 * dT_data[22] *
                                dnormT_data[1] * dnormT_data[3] * c_y) +
                                240240.0 * dT_data[19] * dnormT_data[2] *
                                dnormT_data[3] * c_y) + 210210.0 * dT_data[16] *
                                t_y * c_y) + 36036.0 * dT_data[22] *
                                dnormT_data[0] * dnormT_data[4] * c_y) +
                                144144.0 * dT_data[19] * dnormT_data[1] *
                                dnormT_data[4] * c_y) + 336336.0 * dT_data[16] *
                                dnormT_data[2] * dnormT_data[4] * c_y) +
                                504504.0 * dT_data[13] * dnormT_data[3] *
                                dnormT_data[4] * c_y) + 252252.0 * dT_data[10] *
                                bb_y * c_y) + 48048.0 * dT_data[19] *
                                dnormT_data[0] * dnormT_data[5] * c_y) +
                                168168.0 * dT_data[16] * dnormT_data[1] *
                                dnormT_data[5] * c_y) + 336336.0 * dT_data[13] *
                                dnormT_data[2] * dnormT_data[5] * c_y) +
                                420420.0 * dT_data[10] * dnormT_data[3] *
                                dnormT_data[5] * c_y) + 336336.0 * dT_data[7] *
                                dnormT_data[4] * dnormT_data[5] * c_y) + 84084.0
                                * dT_data[4] * jb_y * c_y) + 48048.0 * dT_data
                                [16] * dnormT_data[0] * dnormT_data[6] * c_y) +
                                144144.0 * dT_data[13] * dnormT_data[1] *
                                dnormT_data[6] * c_y) + 240240.0 * dT_data[10] *
                                dnormT_data[2] * dnormT_data[6] * c_y) +
                                240240.0 * dT_data[7] * dnormT_data[3] *
                                dnormT_data[6] * c_y) + 144144.0 * dT_data[4] *
                                dnormT_data[4] * dnormT_data[6] * c_y) + 48048.0
                                * dT_data[1] * dnormT_data[5] * dnormT_data[6] *
                                c_y) + 36036.0 * dT_data[13] * dnormT_data[0] *
                                dnormT_data[7] * c_y) + 90090.0 * dT_data[10] *
                                dnormT_data[1] * dnormT_data[7] * c_y) +
                                120120.0 * dT_data[7] * dnormT_data[2] *
                                dnormT_data[7] * c_y) + 90090.0 * dT_data[4] *
                                dnormT_data[3] * dnormT_data[7] * c_y) + 36036.0
                                * dT_data[1] * dnormT_data[4] * dnormT_data[7] *
                                c_y) + 20020.0 * dT_data[10] * dnormT_data[0] *
                                dnormT_data[8] * c_y) + 40040.0 * dT_data[7] *
                                dnormT_data[1] * dnormT_data[8] * c_y) + 40040.0
                                * dT_data[4] * dnormT_data[2] * dnormT_data[8] *
                                c_y) + 20020.0 * dT_data[1] * dnormT_data[3] *
                                dnormT_data[8] * c_y) + -1001.0 * dT_data[10] *
                                dnormT_data[9] * dnormT_tmp) + -364.0 * dT_data
                                [7] * dnormT_data[10] * dnormT_tmp) + -91.0 *
                                dT_data[4] * dnormT_data[11] * dnormT_tmp) +
                                -14.0 * dT_data[1] * dnormT_data[12] *
                                dnormT_tmp) + -14.0 * dT_data[37] * dnormT_data
                                [0] * dnormT_tmp) + -91.0 * dT_data[34] *
                                dnormT_data[1] * dnormT_tmp) + -364.0 * dT_data
                                [31] * dnormT_data[2] * dnormT_tmp) + -1001.0 *
                                dT_data[28] * dnormT_data[3] * dnormT_tmp) +
                                -2002.0 * dT_data[25] * dnormT_data[4] *
                                dnormT_tmp) + -3003.0 * dT_data[22] *
                                dnormT_data[5] * dnormT_tmp) + -3432.0 *
                                dT_data[19] * dnormT_data[6] * dnormT_tmp) +
                                -3003.0 * dT_data[16] * dnormT_data[7] *
                                dnormT_tmp) + -2002.0 * dT_data[13] *
                                dnormT_data[8] * dnormT_tmp) + dT_data[40] * y)
                                + d0 * T[1]) + d1 * T[1]) + d2 * T[1]) + d3 * T
                                [1]) + d4 * T[1]) + d5 * T[1]) + d6 * T[1]) + d7
                                * T[1]) + d8 * T[1]) + d9 * T[1]) + d10 * T[1])
                                + d11 * T[1]) + d12 * T[1]) + d13 * T[1]) + d14 *
                                T[1]) + d15 * T[1]) + d16 * T[1]) + d17 * T[1])
                                + d18 * T[1]) + d19 * T[1]) + d20 * T[1]) + d21 *
                                T[1]) + d22 * T[1]) + d23 * T[1]) + d24 * T[1])
                                + d25 * T[1]) + d26 * T[1]) + d28 * T[1]) + d29 *
                                T[1]) + d30 * T[1]) + d31 * T[1]) + d32 * T[1])
                                + d33 * T[1]) + d34 * T[1]) + d35 * T[1]) + d36 *
                                T[1]) + d37 * T[1]) + d38 * T[1]) + d39 * T[1])
                                + d40 * T[1]) + d41 * T[1]) + d42 * T[1]) + d43 *
                                T[1]) + d27 * T[1]) + d44 * T[1]) + d45 * T[1])
                                + d46 * T[1]) + d47 * T[1]) + d48 * T[1]) + d49 *
                                T[1]) + d50 * T[1]) + d51 * T[1]) + d52 * T[1])
                                + d53 * T[1]) + d54 * T[1]) + d56 * T[1]) + d57 *
                                T[1]) + d59 * T[1]) + d60 * T[1]) + d55 * T[1])
                                + d61 * T[1]) + d62 * T[1]) + d63 * T[1]) + d64 *
                                T[1]) + d65 * T[1]) + d66 * T[1]) + d67 * T[1])
                                + d68 * T[1]) + d69 * T[1]) + d70 * T[1]) + d71 *
                                T[1]) + d72 * T[1]) + d73 * T[1]) + d75 * T[1])
                                + d76 * T[1]) + d77 * T[1]) + d78 * T[1]) + d79 *
                                T[1]) + d80 * T[1]) + d81 * T[1]) + d82 * T[1])
                                + d83 * T[1]) + d84 * T[1]) + d85 * T[1]) + d86 *
                                T[1]) + d87 * T[1]) + d58 * T[1]) + d88 * T[1])
                                + d89 * T[1]) + d90 * T[1]) + d91 * T[1]) + d92 *
                                T[1]) + d93 * T[1]) + d94 * T[1]) + d95 * T[1])
                                + d96 * T[1]) + d97 * T[1]) + d98 * T[1]) + d99 *
                                T[1]) + d100 * T[1]) + d101 * T[1]) + d102 * T[1])
                                + d103 * T[1]) + d113 * T[1]) + d114 * T[1]) +
                                d115 * T[1]) + d116 * T[1]) + d74 * T[1]) + d117
                                * T[1]) + d118 * T[1]) + d119 * T[1]) + d120 *
                                T[1]) + d121 * T[1]) + d122 * T[1]) + d123 * T[1])
                                                   + d124 * T[1]) + d125 * T[1])
                                                 + d126 * T[1]) + d127 * T[1]) +
                                               d128 * T[1]) + d129 * T[1]) +
                                             d130 * T[1]) + d131 * T[1]) + d132 *
                                           T[1]) + d133 * T[1]) + d134 * T[1]) +
                                        d135 * T[1]) + d136 * T[1]) + d137 * T[1])
                                     + d138 * T[1]) + d139 * T[1]) + d140 * T[1])
                                  + d141 * T[1]) + d142 * T[1]) + dnormT * T[1];
                              d104 = 1.2108096E+8 * dT_data[5] * dnormT_data[0];
                              dq_data[41] =
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                (((((((((((((((((((((((((((((((((((((((((((((((((
                                ((((((((((((((((-8.71782912E+10 * dT_data[2] *
                                kb_y * lb_y + 4.35891456E+10 * dT_data[5] * eb_y
                                * fb_y) + 5.230697472E+11 * dT_data[2] * cb_y *
                                dnormT_data[1] * fb_y) + -1.45297152E+10 *
                                dT_data[8] * cb_y * db_y) + -2.397403008E+11 *
                                dT_data[5] * x_y * dnormT_data[1] * db_y) +
                                -1.198701504E+12 * dT_data[2] * u_y * h_y * db_y)
                                + -1.598268672E+11 * dT_data[2] * x_y *
                                dnormT_data[2] * db_y) + 3.6324288E+9 * dT_data
                                [11] * x_y * y_y) + 7.2648576E+10 * dT_data[8] *
                                u_y * dnormT_data[1] * y_y) + 4.90377888E+11 *
                                dT_data[5] * q_y * h_y * y_y) + 1.307674368E+12 *
                                dT_data[2] * o_y * m_y * y_y) + 7.2648576E+10 *
                                dT_data[5] * u_y * dnormT_data[2] * y_y) +
                                6.53837184E+11 * dT_data[2] * q_y * dnormT_data
                                [1] * dnormT_data[2] * y_y) + 3.6324288E+10 *
                                dT_data[2] * u_y * dnormT_data[3] * y_y) +
                                -7.2648576E+8 * dT_data[14] * u_y * v_y) +
                                -1.63459296E+10 * dT_data[11] * q_y *
                                dnormT_data[1] * v_y) + -1.307674368E+11 *
                                dT_data[8] * o_y * h_y * v_y) + -4.576860288E+11
                                * dT_data[5] * k_y * m_y * v_y) +
                                -6.865290432E+11 * dT_data[2] * i_y * s_y * v_y)
                                + -2.17945728E+10 * dT_data[8] * q_y *
                                dnormT_data[2] * v_y) + -2.615348736E+11 *
                                dT_data[5] * o_y * dnormT_data[1] * dnormT_data
                                [2] * v_y) + -9.153720576E+11 * dT_data[2] * k_y
                                * h_y * dnormT_data[2] * v_y) + -8.71782912E+10 *
                                dT_data[2] * o_y * n_y * v_y) + -1.63459296E+10 *
                                dT_data[5] * q_y * dnormT_data[3] * v_y) +
                                -1.307674368E+11 * dT_data[2] * o_y *
                                dnormT_data[1] * dnormT_data[3] * v_y) +
                                -6.53837184E+9 * dT_data[2] * q_y * dnormT_data
                                [4] * v_y) + 1.2108096E+8 * dT_data[17] * q_y *
                                r_y) + 2.90594304E+9 * dT_data[14] * o_y *
                                dnormT_data[1] * r_y) + 2.54270016E+10 *
                                dT_data[11] * k_y * h_y * r_y) + 1.017080064E+11
                                * dT_data[8] * i_y * m_y * r_y) + 1.90702512E+11
                                * dT_data[5] * f_y * s_y * r_y) +
                                1.525620096E+11 * dT_data[2] * d_y * ab_y * r_y)
                                + 4.8432384E+9 * dT_data[11] * o_y *
                                dnormT_data[2] * r_y) + 6.78053376E+10 *
                                dT_data[8] * k_y * dnormT_data[1] * dnormT_data
                                [2] * r_y) + 3.051240192E+11 * dT_data[5] * i_y *
                                h_y * dnormT_data[2] * r_y) + 5.08540032E+11 *
                                dT_data[2] * f_y * m_y * dnormT_data[2] * r_y) +
                                3.39026688E+10 * dT_data[5] * k_y * n_y * r_y) +
                                2.034160128E+11 * dT_data[2] * i_y *
                                dnormT_data[1] * n_y * r_y) + 4.8432384E+9 *
                                dT_data[8] * o_y * dnormT_data[3] * r_y) +
                                5.08540032E+10 * dT_data[5] * k_y * dnormT_data
                                [1] * dnormT_data[3] * r_y) + 1.525620096E+11 *
                                dT_data[2] * i_y * h_y * dnormT_data[3] * r_y) +
                                3.39026688E+10 * dT_data[2] * k_y * dnormT_data
                                [2] * dnormT_data[3] * r_y) + 2.90594304E+9 *
                                dT_data[5] * o_y * dnormT_data[4] * r_y) +
                                2.034160128E+10 * dT_data[2] * k_y *
                                dnormT_data[1] * dnormT_data[4] * r_y) +
                                9.6864768E+8 * dT_data[2] * o_y * dnormT_data[5]
                                * r_y) + -1.729728E+7 * dT_data[20] * o_y * p_y)
                                + -4.2378336E+8 * dT_data[17] * k_y *
                                dnormT_data[1] * p_y) + -3.81405024E+9 *
                                dT_data[14] * i_y * h_y * p_y) + -1.5891876E+10 *
                                dT_data[11] * f_y * m_y * p_y) + -3.1783752E+10 *
                                dT_data[8] * d_y * s_y * p_y) + -2.86053768E+10 *
                                dT_data[5] * b_y * ab_y * p_y) + -9.5351256E+9 *
                                dT_data[2] * dnormT_data[0] * gb_y * p_y) +
                                -8.4756672E+8 * dT_data[14] * k_y * dnormT_data
                                [2] * p_y) + -1.27135008E+10 * dT_data[11] * i_y
                                * dnormT_data[1] * dnormT_data[2] * p_y) +
                                -6.3567504E+10 * dT_data[8] * f_y * h_y *
                                dnormT_data[2] * p_y) + -1.27135008E+11 *
                                dT_data[5] * d_y * m_y * dnormT_data[2] * p_y) +
                                -9.5351256E+10 * dT_data[2] * b_y * s_y *
                                dnormT_data[2] * p_y) + -8.4756672E+9 * dT_data
                                [8] * i_y * n_y * p_y) + -6.3567504E+10 *
                                dT_data[5] * f_y * dnormT_data[1] * n_y * p_y) +
                                -1.27135008E+11 * dT_data[2] * d_y * h_y * n_y *
                                p_y) + -1.4126112E+10 * dT_data[2] * f_y * w_y *
                                p_y) + -1.0594584E+9 * dT_data[11] * k_y *
                                dnormT_data[3] * p_y) + -1.27135008E+10 *
                                dT_data[8] * i_y * dnormT_data[1] * dnormT_data
                                [3] * p_y) + -4.7675628E+10 * dT_data[5] * f_y *
                                h_y * dnormT_data[3] * p_y) + -6.3567504E+10 *
                                dT_data[2] * d_y * m_y * dnormT_data[3] * p_y) +
                                -1.27135008E+10 * dT_data[5] * i_y *
                                dnormT_data[2] * dnormT_data[3] * p_y) +
                                -6.3567504E+10 * dT_data[2] * f_y * dnormT_data
                                [1] * dnormT_data[2] * dnormT_data[3] * p_y) +
                                -3.1783752E+9 * dT_data[2] * i_y * t_y * p_y) +
                                -8.4756672E+8 * dT_data[8] * k_y * dnormT_data[4]
                                * p_y) + -7.62810048E+9 * dT_data[5] * i_y *
                                dnormT_data[1] * dnormT_data[4] * p_y) +
                                -1.90702512E+10 * dT_data[2] * f_y * h_y *
                                dnormT_data[4] * p_y) + -5.08540032E+9 *
                                dT_data[2] * i_y * dnormT_data[2] * dnormT_data
                                [4] * p_y) + -4.2378336E+8 * dT_data[5] * k_y *
                                dnormT_data[5] * p_y) + -2.54270016E+9 *
                                dT_data[2] * i_y * dnormT_data[1] * dnormT_data
                                [5] * p_y) + -1.2108096E+8 * dT_data[2] * k_y *
                                dnormT_data[6] * p_y) + 2.16216E+6 * dT_data[23]
                                * k_y * l_y) + 5.189184E+7 * dT_data[20] * i_y *
                                dnormT_data[1] * l_y) + 4.540536E+8 * dT_data[17]
                                * f_y * h_y * l_y) + 1.8162144E+9 * dT_data[14] *
                                d_y * m_y * l_y) + 3.405402E+9 * dT_data[11] *
                                b_y * s_y * l_y) + 2.7243216E+9 * dT_data[8] *
                                dnormT_data[0] * ab_y * l_y) + 6.810804E+8 *
                                dT_data[5] * gb_y * l_y) + 1.2108096E+8 *
                                dT_data[17] * i_y * dnormT_data[2] * l_y) +
                                1.8162144E+9 * dT_data[14] * f_y * dnormT_data[1]
                                * dnormT_data[2] * l_y) + 9.081072E+9 * dT_data
                                [11] * d_y * h_y * dnormT_data[2] * l_y) +
                                1.8162144E+10 * dT_data[8] * b_y * m_y *
                                dnormT_data[2] * l_y) + 1.3621608E+10 * dT_data
                                [5] * dnormT_data[0] * s_y * dnormT_data[2] *
                                l_y) + 2.7243216E+9 * dT_data[2] * ab_y *
                                dnormT_data[2] * l_y) + 1.513512E+9 * dT_data[11]
                                * f_y * n_y * l_y) + 1.2108096E+10 * dT_data[8] *
                                d_y * dnormT_data[1] * n_y * l_y) +
                                2.7243216E+10 * dT_data[5] * b_y * h_y * n_y *
                                l_y) + 1.8162144E+10 * dT_data[2] * dnormT_data
                                [0] * m_y * n_y * l_y) + 4.036032E+9 * dT_data[5]
                                * d_y * w_y * l_y) + 1.2108096E+10 * dT_data[2] *
                                b_y * dnormT_data[1] * w_y * l_y) + 1.8162144E+8
                                * dT_data[14] * i_y * dnormT_data[3] * l_y) +
                                2.270268E+9 * dT_data[11] * f_y * dnormT_data[1]
                                * dnormT_data[3] * l_y) + 9.081072E+9 * dT_data
                                [8] * d_y * h_y * dnormT_data[3] * l_y) +
                                1.3621608E+10 * dT_data[5] * b_y * m_y *
                                dnormT_data[3] * l_y) + 6.810804E+9 * dT_data[2]
                                * dnormT_data[0] * s_y * dnormT_data[3] * l_y) +
                                3.027024E+9 * dT_data[8] * f_y * dnormT_data[2] *
                                dnormT_data[3] * l_y) + 1.8162144E+10 * dT_data
                                [5] * d_y * dnormT_data[1] * dnormT_data[2] *
                                dnormT_data[3] * l_y) + 2.7243216E+10 * dT_data
                                [2] * b_y * h_y * dnormT_data[2] * dnormT_data[3]
                                * l_y) + 6.054048E+9 * dT_data[2] * d_y * n_y *
                                dnormT_data[3] * l_y) + 1.135134E+9 * dT_data[5]
                                * f_y * t_y * l_y) + 4.540536E+9 * dT_data[2] *
                                d_y * dnormT_data[1] * t_y * l_y) + 1.8162144E+8
                                * dT_data[11] * i_y * dnormT_data[4] * l_y) +
                                1.8162144E+9 * dT_data[8] * f_y * dnormT_data[1]
                                * dnormT_data[4] * l_y) + 5.4486432E+9 *
                                dT_data[5] * d_y * h_y * dnormT_data[4] * l_y) +
                                5.4486432E+9 * dT_data[2] * b_y * m_y *
                                dnormT_data[4] * l_y) + 1.8162144E+9 * dT_data[5]
                                * f_y * dnormT_data[2] * dnormT_data[4] * l_y) +
                                7.2648576E+9 * dT_data[2] * d_y * dnormT_data[1]
                                * dnormT_data[2] * dnormT_data[4] * l_y) +
                                9.081072E+8 * dT_data[2] * f_y * dnormT_data[3] *
                                dnormT_data[4] * l_y) + 1.2108096E+8 * dT_data[8]
                                * i_y * dnormT_data[5] * l_y) + 9.081072E+8 *
                                dT_data[5] * f_y * dnormT_data[1] * dnormT_data
                                [5] * l_y) + 1.8162144E+9 * dT_data[2] * d_y *
                                h_y * dnormT_data[5] * l_y) + 6.054048E+8 *
                                dT_data[2] * f_y * dnormT_data[2] * dnormT_data
                                [5] * l_y) + 5.189184E+7 * dT_data[5] * i_y *
                                dnormT_data[6] * l_y) + 2.594592E+8 * dT_data[2]
                                * f_y * dnormT_data[1] * dnormT_data[6] * l_y) +
                                1.297296E+7 * dT_data[2] * i_y * dnormT_data[7] *
                                l_y) + -240240.0 * dT_data[26] * i_y * j_y) +
                                -5.4054E+6 * dT_data[23] * f_y * dnormT_data[1] *
                                j_y) + -4.32432E+7 * dT_data[20] * d_y * h_y *
                                j_y) + -1.513512E+8 * dT_data[17] * b_y * m_y *
                                j_y) + -2.270268E+8 * dT_data[14] * dnormT_data
                                [0] * s_y * j_y) + -1.135134E+8 * dT_data[11] *
                                ab_y * j_y) + -1.44144E+7 * dT_data[20] * f_y *
                                dnormT_data[2] * j_y) + -2.018016E+8 * dT_data
                                [17] * d_y * dnormT_data[1] * dnormT_data[2] *
                                j_y) + -9.081072E+8 * dT_data[14] * b_y * h_y *
                                dnormT_data[2] * j_y) + -1.513512E+9 * dT_data
                                [11] * dnormT_data[0] * m_y * dnormT_data[2] *
                                j_y) + -7.56756E+8 * dT_data[8] * s_y *
                                dnormT_data[2] * j_y) + -2.018016E+8 * dT_data
                                [14] * d_y * n_y * j_y) + -1.513512E+9 *
                                dT_data[11] * b_y * dnormT_data[1] * n_y * j_y)
                                + -3.027024E+9 * dT_data[8] * dnormT_data[0] *
                                h_y * n_y * j_y) + -1.513512E+9 * dT_data[5] *
                                m_y * n_y * j_y) + -6.72672E+8 * dT_data[8] *
                                b_y * w_y * j_y) + -2.018016E+9 * dT_data[5] *
                                dnormT_data[0] * dnormT_data[1] * w_y * j_y) +
                                -1.009008E+9 * dT_data[2] * h_y * w_y * j_y) +
                                -3.36336E+8 * dT_data[2] * dnormT_data[0] * hb_y
                                * j_y) + -2.52252E+7 * dT_data[17] * f_y *
                                dnormT_data[3] * j_y) + -3.027024E+8 * dT_data
                                [14] * d_y * dnormT_data[1] * dnormT_data[3] *
                                j_y) + -1.135134E+9 * dT_data[11] * b_y * h_y *
                                dnormT_data[3] * j_y) + -1.513512E+9 * dT_data[8]
                                * dnormT_data[0] * m_y * dnormT_data[3] * j_y) +
                                -5.67567E+8 * dT_data[5] * s_y * dnormT_data[3] *
                                j_y) + -5.04504E+8 * dT_data[11] * d_y *
                                dnormT_data[2] * dnormT_data[3] * j_y) +
                                -3.027024E+9 * dT_data[8] * b_y * dnormT_data[1]
                                * dnormT_data[2] * dnormT_data[3] * j_y) +
                                -4.540536E+9 * dT_data[5] * dnormT_data[0] * h_y
                                * dnormT_data[2] * dnormT_data[3] * j_y) +
                                -1.513512E+9 * dT_data[2] * m_y * dnormT_data[2]
                                * dnormT_data[3] * j_y) + -1.513512E+9 *
                                dT_data[5] * b_y * n_y * dnormT_data[3] * j_y) +
                                -3.027024E+9 * dT_data[2] * dnormT_data[0] *
                                dnormT_data[1] * n_y * dnormT_data[3] * j_y) +
                                -2.52252E+8 * dT_data[8] * d_y * t_y * j_y) +
                                -1.135134E+9 * dT_data[5] * b_y * dnormT_data[1]
                                * t_y * j_y) + -1.135134E+9 * dT_data[2] *
                                dnormT_data[0] * h_y * t_y * j_y) + -7.56756E+8 *
                                dT_data[2] * b_y * dnormT_data[2] * t_y * j_y) +
                                -3.027024E+7 * dT_data[14] * f_y * dnormT_data[4]
                                * j_y) + -3.027024E+8 * dT_data[11] * d_y *
                                dnormT_data[1] * dnormT_data[4] * j_y) +
                                -9.081072E+8 * dT_data[8] * b_y * h_y *
                                dnormT_data[4] * j_y) + -9.081072E+8 * dT_data[5]
                                * dnormT_data[0] * m_y * dnormT_data[4] * j_y) +
                                -2.270268E+8 * dT_data[2] * s_y * dnormT_data[4]
                                * j_y) + -4.036032E+8 * dT_data[8] * d_y *
                                dnormT_data[2] * dnormT_data[4] * j_y) +
                                -1.8162144E+9 * dT_data[5] * b_y * dnormT_data[1]
                                * dnormT_data[2] * dnormT_data[4] * j_y) +
                                -1.8162144E+9 * dT_data[2] * dnormT_data[0] *
                                h_y * dnormT_data[2] * dnormT_data[4] * j_y) +
                                -6.054048E+8 * dT_data[2] * b_y * n_y *
                                dnormT_data[4] * j_y) + -3.027024E+8 * dT_data[5]
                                * d_y * dnormT_data[3] * dnormT_data[4] * j_y) +
                                -9.081072E+8 * dT_data[2] * b_y * dnormT_data[1]
                                * dnormT_data[3] * dnormT_data[4] * j_y) +
                                -6.054048E+7 * dT_data[2] * d_y * bb_y * j_y) +
                                -2.52252E+7 * dT_data[11] * f_y * dnormT_data[5]
                                * j_y) + -2.018016E+8 * dT_data[8] * d_y *
                                dnormT_data[1] * dnormT_data[5] * j_y) +
                                -4.540536E+8 * dT_data[5] * b_y * h_y *
                                dnormT_data[5] * j_y) + -3.027024E+8 * dT_data[2]
                                * dnormT_data[0] * m_y * dnormT_data[5] * j_y) +
                                -2.018016E+8 * dT_data[5] * d_y * dnormT_data[2]
                                * dnormT_data[5] * j_y) + -6.054048E+8 *
                                dT_data[2] * b_y * dnormT_data[1] * dnormT_data
                                [2] * dnormT_data[5] * j_y) + -1.009008E+8 *
                                dT_data[2] * d_y * dnormT_data[3] * dnormT_data
                                [5] * j_y) + -1.44144E+7 * dT_data[8] * f_y *
                                dnormT_data[6] * j_y) + -8.64864E+7 * dT_data[5]
                                * d_y * dnormT_data[1] * dnormT_data[6] * j_y) +
                                -1.297296E+8 * dT_data[2] * b_y * h_y *
                                dnormT_data[6] * j_y) + -5.76576E+7 * dT_data[2]
                                * d_y * dnormT_data[2] * dnormT_data[6] * j_y) +
                                -5.4054E+6 * dT_data[5] * f_y * dnormT_data[7] *
                                j_y) + -2.16216E+7 * dT_data[2] * d_y *
                                dnormT_data[1] * dnormT_data[7] * j_y) +
                                -1.2012E+6 * dT_data[2] * f_y * dnormT_data[8] *
                                j_y) + 96096.0 * dT_data[2] * dnormT_data[9] *
                                d_y * g_y) + 24024.0 * dT_data[29] * f_y * g_y)
                                + 480480.0 * dT_data[26] * d_y * dnormT_data[1] *
                                g_y) + 3.24324E+6 * dT_data[23] * b_y * h_y *
                                g_y) + 8.64864E+6 * dT_data[20] * dnormT_data[0]
                                * m_y * g_y) + 7.56756E+6 * dT_data[17] * s_y *
                                g_y) + 1.44144E+6 * dT_data[23] * d_y *
                                dnormT_data[2] * g_y) + 1.729728E+7 * dT_data[20]
                                * b_y * dnormT_data[1] * dnormT_data[2] * g_y) +
                                6.054048E+7 * dT_data[17] * dnormT_data[0] * h_y
                                * dnormT_data[2] * g_y) + 6.054048E+7 * dT_data
                                [14] * m_y * dnormT_data[2] * g_y) + 2.018016E+7
                                * dT_data[17] * b_y * n_y * g_y) + 1.2108096E+8 *
                                dT_data[14] * dnormT_data[0] * dnormT_data[1] *
                                n_y * g_y) + 1.513512E+8 * dT_data[11] * h_y *
                                n_y * g_y) + 6.72672E+7 * dT_data[11] *
                                dnormT_data[0] * w_y * g_y) + 1.345344E+8 *
                                dT_data[8] * dnormT_data[1] * w_y * g_y) +
                                3.36336E+7 * dT_data[5] * hb_y * g_y) +
                                2.88288E+6 * dT_data[20] * d_y * dnormT_data[3] *
                                g_y) + 3.027024E+7 * dT_data[17] * b_y *
                                dnormT_data[1] * dnormT_data[3] * g_y) +
                                9.081072E+7 * dT_data[14] * dnormT_data[0] * h_y
                                * dnormT_data[3] * g_y) + 7.56756E+7 * dT_data
                                [11] * m_y * dnormT_data[3] * g_y) + 6.054048E+7
                                * dT_data[14] * b_y * dnormT_data[2] *
                                dnormT_data[3] * g_y) + 3.027024E+8 * dT_data[11]
                                * dnormT_data[0] * dnormT_data[1] * dnormT_data
                                [2] * dnormT_data[3] * g_y) + 3.027024E+8 *
                                dT_data[8] * h_y * dnormT_data[2] * dnormT_data
                                [3] * g_y) + 2.018016E+8 * dT_data[8] *
                                dnormT_data[0] * n_y * dnormT_data[3] * g_y) +
                                3.027024E+8 * dT_data[5] * dnormT_data[1] * n_y *
                                dnormT_data[3] * g_y) + 6.72672E+7 * dT_data[2] *
                                w_y * dnormT_data[3] * g_y) + 3.78378E+7 *
                                dT_data[11] * b_y * t_y * g_y) + 1.513512E+8 *
                                dT_data[8] * dnormT_data[0] * dnormT_data[1] *
                                t_y * g_y) + 1.135134E+8 * dT_data[5] * h_y *
                                t_y * g_y) + 1.513512E+8 * dT_data[5] *
                                dnormT_data[0] * dnormT_data[2] * t_y * g_y) +
                                1.513512E+8 * dT_data[2] * dnormT_data[1] *
                                dnormT_data[2] * t_y * g_y) + 2.52252E+7 *
                                dT_data[2] * dnormT_data[0] * ib_y * g_y) +
                                4.036032E+6 * dT_data[17] * d_y * dnormT_data[4]
                                * g_y) + 3.6324288E+7 * dT_data[14] * b_y *
                                dnormT_data[1] * dnormT_data[4] * g_y) +
                                9.081072E+7 * dT_data[11] * dnormT_data[0] * h_y
                                * dnormT_data[4] * g_y) + 6.054048E+7 * dT_data
                                [8] * m_y * dnormT_data[4] * g_y) + 6.054048E+7 *
                                dT_data[11] * b_y * dnormT_data[2] *
                                dnormT_data[4] * g_y) + 2.4216192E+8 * dT_data[8]
                                * dnormT_data[0] * dnormT_data[1] * dnormT_data
                                [2] * dnormT_data[4] * g_y) + 1.8162144E+8 *
                                dT_data[5] * h_y * dnormT_data[2] * dnormT_data
                                [4] * g_y) + d104 * n_y * dnormT_data[4] * g_y)
                                + 1.2108096E+8 * dT_data[2] * dnormT_data[1] *
                                n_y * dnormT_data[4] * g_y) + 6.054048E+7 *
                                dT_data[8] * b_y * dnormT_data[3] * dnormT_data
                                [4] * g_y) + 1.8162144E+8 * dT_data[5] *
                                dnormT_data[0] * dnormT_data[1] * dnormT_data[3]
                                * dnormT_data[4] * g_y) + 9.081072E+7 * dT_data
                                [2] * h_y * dnormT_data[3] * dnormT_data[4] *
                                g_y) + 1.2108096E+8 * dT_data[2] * dnormT_data[0]
                                * dnormT_data[2] * dnormT_data[3] * dnormT_data
                                [4] * g_y) + 1.8162144E+7 * dT_data[5] * b_y *
                                bb_y * g_y) + 3.6324288E+7 * dT_data[2] *
                                dnormT_data[0] * dnormT_data[1] * bb_y * g_y) +
                                4.036032E+6 * dT_data[14] * d_y * dnormT_data[5]
                                * g_y) + 3.027024E+7 * dT_data[11] * b_y *
                                dnormT_data[1] * dnormT_data[5] * g_y) +
                                6.054048E+7 * dT_data[8] * dnormT_data[0] * h_y *
                                dnormT_data[5] * g_y) + 3.027024E+7 * dT_data[5]
                                * m_y * dnormT_data[5] * g_y) + 4.036032E+7 *
                                dT_data[8] * b_y * dnormT_data[2] * dnormT_data
                                [5] * g_y) + d104 * dnormT_data[1] *
                                dnormT_data[2] * dnormT_data[5] * g_y) +
                                6.054048E+7 * dT_data[2] * h_y * dnormT_data[2] *
                                dnormT_data[5] * g_y) + 4.036032E+7 * dT_data[2]
                                * dnormT_data[0] * n_y * dnormT_data[5] * g_y) +
                                3.027024E+7 * dT_data[5] * b_y * dnormT_data[3] *
                                dnormT_data[5] * g_y) + 6.054048E+7 * dT_data[2]
                                * dnormT_data[0] * dnormT_data[1] * dnormT_data
                                [3] * dnormT_data[5] * g_y) + 1.2108096E+7 *
                                dT_data[2] * b_y * dnormT_data[4] * dnormT_data
                                [5] * g_y) + 2.88288E+6 * dT_data[11] * d_y *
                                dnormT_data[6] * g_y) + 1.729728E+7 * dT_data[8]
                                * b_y * dnormT_data[1] * dnormT_data[6] * g_y) +
                                2.594592E+7 * dT_data[5] * dnormT_data[0] * h_y *
                                dnormT_data[6] * g_y) + 8.64864E+6 * dT_data[2] *
                                m_y * dnormT_data[6] * g_y) + 1.729728E+7 *
                                dT_data[5] * b_y * dnormT_data[2] * dnormT_data
                                [6] * g_y) + 3.459456E+7 * dT_data[2] *
                                dnormT_data[0] * dnormT_data[1] * dnormT_data[2]
                                * dnormT_data[6] * g_y) + 8.64864E+6 * dT_data[2]
                                * b_y * dnormT_data[3] * dnormT_data[6] * g_y) +
                                1.44144E+6 * dT_data[8] * d_y * dnormT_data[7] *
                                g_y) + 6.48648E+6 * dT_data[5] * b_y *
                                dnormT_data[1] * dnormT_data[7] * g_y) +
                                6.48648E+6 * dT_data[2] * dnormT_data[0] * h_y *
                                dnormT_data[7] * g_y) + 4.32432E+6 * dT_data[2] *
                                b_y * dnormT_data[2] * dnormT_data[7] * g_y) +
                                480480.0 * dT_data[5] * d_y * dnormT_data[8] *
                                g_y) + 1.44144E+6 * dT_data[2] * b_y *
                                dnormT_data[1] * dnormT_data[8] * g_y) +
                                -36036.0 * dT_data[5] * dnormT_data[9] * b_y *
                                e_y) + -6552.0 * dT_data[2] * dnormT_data[10] *
                                b_y * e_y) + -2184.0 * dT_data[32] * d_y * e_y)
                                + -72072.0 * dT_data[2] * dnormT_data[9] *
                                dnormT_data[0] * dnormT_data[1] * e_y) +
                                -36036.0 * dT_data[29] * b_y * dnormT_data[1] *
                                e_y) + -180180.0 * dT_data[26] * dnormT_data[0] *
                                h_y * e_y) + -270270.0 * dT_data[23] * m_y * e_y)
                                + -120120.0 * dT_data[26] * b_y * dnormT_data[2]
                                * e_y) + -1.08108E+6 * dT_data[23] *
                                dnormT_data[0] * dnormT_data[1] * dnormT_data[2]
                                * e_y) + -2.16216E+6 * dT_data[20] * h_y *
                                dnormT_data[2] * e_y) + -1.44144E+6 * dT_data[20]
                                * dnormT_data[0] * n_y * e_y) + -5.04504E+6 *
                                dT_data[17] * dnormT_data[1] * n_y * e_y) +
                                -3.36336E+6 * dT_data[14] * w_y * e_y) +
                                -270270.0 * dT_data[23] * b_y * dnormT_data[3] *
                                e_y) + -2.16216E+6 * dT_data[20] * dnormT_data[0]
                                * dnormT_data[1] * dnormT_data[3] * e_y) +
                                -3.78378E+6 * dT_data[17] * h_y * dnormT_data[3]
                                * e_y) + -5.04504E+6 * dT_data[17] *
                                dnormT_data[0] * dnormT_data[2] * dnormT_data[3]
                                * e_y) + -1.513512E+7 * dT_data[14] *
                                dnormT_data[1] * dnormT_data[2] * dnormT_data[3]
                                * e_y) + -1.26126E+7 * dT_data[11] * n_y *
                                dnormT_data[3] * e_y) + -3.78378E+6 * dT_data[14]
                                * dnormT_data[0] * t_y * e_y) + -9.45945E+6 *
                                dT_data[11] * dnormT_data[1] * t_y * e_y) +
                                -1.26126E+7 * dT_data[8] * dnormT_data[2] * t_y *
                                e_y) + -3.15315E+6 * dT_data[5] * ib_y * e_y) +
                                -432432.0 * dT_data[20] * b_y * dnormT_data[4] *
                                e_y) + -3.027024E+6 * dT_data[17] * dnormT_data
                                [0] * dnormT_data[1] * dnormT_data[4] * e_y) +
                                -4.540536E+6 * dT_data[14] * h_y * dnormT_data[4]
                                * e_y) + -6.054048E+6 * dT_data[14] *
                                dnormT_data[0] * dnormT_data[2] * dnormT_data[4]
                                * e_y) + -1.513512E+7 * dT_data[11] *
                                dnormT_data[1] * dnormT_data[2] * dnormT_data[4]
                                * e_y) + -1.009008E+7 * dT_data[8] * n_y *
                                dnormT_data[4] * e_y) + -7.56756E+6 * dT_data[11]
                                * dnormT_data[0] * dnormT_data[3] * dnormT_data
                                [4] * e_y) + -1.513512E+7 * dT_data[8] *
                                dnormT_data[1] * dnormT_data[3] * dnormT_data[4]
                                * e_y) + -1.513512E+7 * dT_data[5] *
                                dnormT_data[2] * dnormT_data[3] * dnormT_data[4]
                                * e_y) + -3.78378E+6 * dT_data[2] * t_y *
                                dnormT_data[4] * e_y) + -3.027024E+6 * dT_data[8]
                                * dnormT_data[0] * bb_y * e_y) + -4.540536E+6 *
                                dT_data[5] * dnormT_data[1] * bb_y * e_y) +
                                -3.027024E+6 * dT_data[2] * dnormT_data[2] *
                                bb_y * e_y) + -504504.0 * dT_data[17] * b_y *
                                dnormT_data[5] * e_y) + -3.027024E+6 * dT_data
                                [14] * dnormT_data[0] * dnormT_data[1] *
                                dnormT_data[5] * e_y) + -3.78378E+6 * dT_data[11]
                                * h_y * dnormT_data[5] * e_y) + -5.04504E+6 *
                                dT_data[11] * dnormT_data[0] * dnormT_data[2] *
                                dnormT_data[5] * e_y) + -1.009008E+7 * dT_data[8]
                                * dnormT_data[1] * dnormT_data[2] * dnormT_data
                                [5] * e_y) + -5.04504E+6 * dT_data[5] * n_y *
                                dnormT_data[5] * e_y) + -5.04504E+6 * dT_data[8]
                                * dnormT_data[0] * dnormT_data[3] * dnormT_data
                                [5] * e_y) + -7.56756E+6 * dT_data[5] *
                                dnormT_data[1] * dnormT_data[3] * dnormT_data[5]
                                * e_y) + -5.04504E+6 * dT_data[2] * dnormT_data
                                [2] * dnormT_data[3] * dnormT_data[5] * e_y) +
                                -3.027024E+6 * dT_data[5] * dnormT_data[0] *
                                dnormT_data[4] * dnormT_data[5] * e_y) +
                                -3.027024E+6 * dT_data[2] * dnormT_data[1] *
                                dnormT_data[4] * dnormT_data[5] * e_y) +
                                -504504.0 * dT_data[2] * dnormT_data[0] * jb_y *
                                e_y) + -432432.0 * dT_data[14] * b_y *
                                dnormT_data[6] * e_y) + d110 * dnormT_data[1] *
                                dnormT_data[6] * e_y) + -2.16216E+6 * dT_data[8]
                                * h_y * dnormT_data[6] * e_y) + -2.88288E+6 *
                                dT_data[8] * dnormT_data[0] * dnormT_data[2] *
                                dnormT_data[6] * e_y) + -4.32432E+6 * dT_data[5]
                                * dnormT_data[1] * dnormT_data[2] * dnormT_data
                                [6] * e_y) + -1.44144E+6 * dT_data[2] * n_y *
                                dnormT_data[6] * e_y) + -2.16216E+6 * dT_data[5]
                                * dnormT_data[0] * dnormT_data[3] * dnormT_data
                                [6] * e_y) + -2.16216E+6 * dT_data[2] *
                                dnormT_data[1] * dnormT_data[3] * dnormT_data[6]
                                * e_y) + -864864.0 * dT_data[2] * dnormT_data[0]
                                * dnormT_data[4] * dnormT_data[6] * e_y) +
                                -270270.0 * dT_data[11] * b_y * dnormT_data[7] *
                                e_y) + -1.08108E+6 * dT_data[8] * dnormT_data[0]
                                * dnormT_data[1] * dnormT_data[7] * e_y) +
                                -810810.0 * dT_data[5] * h_y * dnormT_data[7] *
                                e_y) + d111 * dnormT_data[2] * dnormT_data[7] *
                                e_y) + d112 * dnormT_data[2] * dnormT_data[7] *
                                e_y) + -540540.0 * dT_data[2] * dnormT_data[0] *
                                dnormT_data[3] * dnormT_data[7] * e_y) +
                                -120120.0 * dT_data[8] * b_y * dnormT_data[8] *
                                e_y) + -360360.0 * dT_data[5] * dnormT_data[0] *
                                dnormT_data[1] * dnormT_data[8] * e_y) +
                                -180180.0 * dT_data[2] * h_y * dnormT_data[8] *
                                e_y) + -240240.0 * dT_data[2] * dnormT_data[0] *
                                dnormT_data[2] * dnormT_data[8] * e_y) + 8008.0 *
                                dT_data[8] * dnormT_data[9] * dnormT_data[0] *
                                c_y) + 2184.0 * dT_data[5] * dnormT_data[10] *
                                dnormT_data[0] * c_y) + 364.0 * dT_data[2] *
                                dnormT_data[11] * dnormT_data[0] * c_y) + 182.0 *
                                dT_data[35] * b_y * c_y) + 12012.0 * dT_data[5] *
                                dnormT_data[9] * dnormT_data[1] * c_y) + 2184.0 *
                                dT_data[2] * dnormT_data[10] * dnormT_data[1] *
                                c_y) + 2184.0 * dT_data[32] * dnormT_data[0] *
                                dnormT_data[1] * c_y) + 6006.0 * dT_data[29] *
                                h_y * c_y) + 8008.0 * dT_data[2] * dnormT_data[9]
                                * dnormT_data[2] * c_y) + 8008.0 * dT_data[29] *
                                dnormT_data[0] * dnormT_data[2] * c_y) + 40040.0
                                * dT_data[26] * dnormT_data[1] * dnormT_data[2] *
                                c_y) + 60060.0 * dT_data[23] * n_y * c_y) +
                                20020.0 * dT_data[26] * dnormT_data[0] *
                                dnormT_data[3] * c_y) + 90090.0 * dT_data[23] *
                                dnormT_data[1] * dnormT_data[3] * c_y) +
                                240240.0 * dT_data[20] * dnormT_data[2] *
                                dnormT_data[3] * c_y) + 210210.0 * dT_data[17] *
                                t_y * c_y) + 36036.0 * dT_data[23] *
                                dnormT_data[0] * dnormT_data[4] * c_y) +
                                144144.0 * dT_data[20] * dnormT_data[1] *
                                dnormT_data[4] * c_y) + 336336.0 * dT_data[17] *
                                dnormT_data[2] * dnormT_data[4] * c_y) +
                                504504.0 * dT_data[14] * dnormT_data[3] *
                                dnormT_data[4] * c_y) + 252252.0 * dT_data[11] *
                                bb_y * c_y) + 48048.0 * dT_data[20] *
                                dnormT_data[0] * dnormT_data[5] * c_y) +
                                168168.0 * dT_data[17] * dnormT_data[1] *
                                dnormT_data[5] * c_y) + 336336.0 * dT_data[14] *
                                dnormT_data[2] * dnormT_data[5] * c_y) +
                                420420.0 * dT_data[11] * dnormT_data[3] *
                                dnormT_data[5] * c_y) + 336336.0 * dT_data[8] *
                                dnormT_data[4] * dnormT_data[5] * c_y) + 84084.0
                                * dT_data[5] * jb_y * c_y) + 48048.0 * dT_data
                                [17] * dnormT_data[0] * dnormT_data[6] * c_y) +
                                144144.0 * dT_data[14] * dnormT_data[1] *
                                dnormT_data[6] * c_y) + 240240.0 * dT_data[11] *
                                dnormT_data[2] * dnormT_data[6] * c_y) +
                                240240.0 * dT_data[8] * dnormT_data[3] *
                                dnormT_data[6] * c_y) + 144144.0 * dT_data[5] *
                                dnormT_data[4] * dnormT_data[6] * c_y) + 48048.0
                                * dT_data[2] * dnormT_data[5] * dnormT_data[6] *
                                c_y) + 36036.0 * dT_data[14] * dnormT_data[0] *
                                dnormT_data[7] * c_y) + 90090.0 * dT_data[11] *
                                dnormT_data[1] * dnormT_data[7] * c_y) +
                                120120.0 * dT_data[8] * dnormT_data[2] *
                                dnormT_data[7] * c_y) + 90090.0 * dT_data[5] *
                                dnormT_data[3] * dnormT_data[7] * c_y) + 36036.0
                                * dT_data[2] * dnormT_data[4] * dnormT_data[7] *
                                c_y) + 20020.0 * dT_data[11] * dnormT_data[0] *
                                dnormT_data[8] * c_y) + 40040.0 * dT_data[8] *
                                dnormT_data[1] * dnormT_data[8] * c_y) + 40040.0
                                * dT_data[5] * dnormT_data[2] * dnormT_data[8] *
                                c_y) + 20020.0 * dT_data[2] * dnormT_data[3] *
                                dnormT_data[8] * c_y) + -1001.0 * dT_data[11] *
                                dnormT_data[9] * dnormT_tmp) + -364.0 * dT_data
                                [8] * dnormT_data[10] * dnormT_tmp) + -91.0 *
                                dT_data[5] * dnormT_data[11] * dnormT_tmp) +
                                -14.0 * dT_data[2] * dnormT_data[12] *
                                dnormT_tmp) + -14.0 * dT_data[38] * dnormT_data
                                [0] * dnormT_tmp) + -91.0 * dT_data[35] *
                                dnormT_data[1] * dnormT_tmp) + -364.0 * dT_data
                                [32] * dnormT_data[2] * dnormT_tmp) + -1001.0 *
                                dT_data[29] * dnormT_data[3] * dnormT_tmp) +
                                -2002.0 * dT_data[26] * dnormT_data[4] *
                                dnormT_tmp) + -3003.0 * dT_data[23] *
                                dnormT_data[5] * dnormT_tmp) + -3432.0 *
                                dT_data[20] * dnormT_data[6] * dnormT_tmp) +
                                -3003.0 * dT_data[17] * dnormT_data[7] *
                                dnormT_tmp) + -2002.0 * dT_data[14] *
                                dnormT_data[8] * dnormT_tmp) + dT_data[41] * y)
                                + d0 * T[2]) + d1 * T[2]) + d2 * T[2]) + d3 * T
                                [2]) + d4 * T[2]) + d5 * T[2]) + d6 * T[2]) + d7
                                * T[2]) + d8 * T[2]) + d9 * T[2]) + d10 * T[2])
                                + d11 * T[2]) + d12 * T[2]) + d13 * T[2]) + d14 *
                                T[2]) + d15 * T[2]) + d16 * T[2]) + d17 * T[2])
                                + d18 * T[2]) + d19 * T[2]) + d20 * T[2]) + d21 *
                                T[2]) + d22 * T[2]) + d23 * T[2]) + d24 * T[2])
                                + d25 * T[2]) + d26 * T[2]) + d28 * T[2]) + d29 *
                                T[2]) + d30 * T[2]) + d31 * T[2]) + d32 * T[2])
                                + d33 * T[2]) + d34 * T[2]) + d35 * T[2]) + d36 *
                                T[2]) + d37 * T[2]) + d38 * T[2]) + d39 * T[2])
                                + d40 * T[2]) + d41 * T[2]) + d42 * T[2]) + d43 *
                                T[2]) + d27 * T[2]) + d44 * T[2]) + d45 * T[2])
                                + d46 * T[2]) + d47 * T[2]) + d48 * T[2]) + d49 *
                                T[2]) + d50 * T[2]) + d51 * T[2]) + d52 * T[2])
                                + d53 * T[2]) + d54 * T[2]) + d56 * T[2]) + d57 *
                                T[2]) + d59 * T[2]) + d60 * T[2]) + d55 * T[2])
                                + d61 * T[2]) + d62 * T[2]) + d63 * T[2]) + d64 *
                                T[2]) + d65 * T[2]) + d66 * T[2]) + d67 * T[2])
                                + d68 * T[2]) + d69 * T[2]) + d70 * T[2]) + d71 *
                                T[2]) + d72 * T[2]) + d73 * T[2]) + d75 * T[2])
                                + d76 * T[2]) + d77 * T[2]) + d78 * T[2]) + d79 *
                                T[2]) + d80 * T[2]) + d81 * T[2]) + d82 * T[2])
                                + d83 * T[2]) + d84 * T[2]) + d85 * T[2]) + d86 *
                                T[2]) + d87 * T[2]) + d58 * T[2]) + d88 * T[2])
                                + d89 * T[2]) + d90 * T[2]) + d91 * T[2]) + d92 *
                                T[2]) + d93 * T[2]) + d94 * T[2]) + d95 * T[2])
                                + d96 * T[2]) + d97 * T[2]) + d98 * T[2]) + d99 *
                                T[2]) + d100 * T[2]) + d101 * T[2]) + d102 * T[2])
                                + d103 * T[2]) + d113 * T[2]) + d114 * T[2]) +
                                d115 * T[2]) + d116 * T[2]) + d74 * T[2]) + d117
                                * T[2]) + d118 * T[2]) + d119 * T[2]) + d120 *
                                T[2]) + d121 * T[2]) + d122 * T[2]) + d123 * T[2])
                                                   + d124 * T[2]) + d125 * T[2])
                                                 + d126 * T[2]) + d127 * T[2]) +
                                               d128 * T[2]) + d129 * T[2]) +
                                             d130 * T[2]) + d131 * T[2]) + d132 *
                                           T[2]) + d133 * T[2]) + d134 * T[2]) +
                                        d135 * T[2]) + d136 * T[2]) + d137 * T[2])
                                     + d138 * T[2]) + d139 * T[2]) + d140 * T[2])
                                  + d141 * T[2]) + d142 * T[2]) + dnormT * T[2];
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

/* End of code generation (getUnitvectorsFromTensions14.c) */
