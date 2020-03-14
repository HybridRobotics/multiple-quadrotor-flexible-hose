/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * afh_dynamics_types.h
 *
 * Code generation for function 'afh_dynamics'
 *
 */

#ifndef AFH_DYNAMICS_TYPES_H
#define AFH_DYNAMICS_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_int16_T
#define struct_emxArray_int16_T

struct emxArray_int16_T
{
  int16_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int16_T*/

#ifndef typedef_emxArray_int16_T
#define typedef_emxArray_int16_T

typedef struct emxArray_int16_T emxArray_int16_T;

#endif                                 /*typedef_emxArray_int16_T*/

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int32_T*/

#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T

typedef struct emxArray_int32_T emxArray_int32_T;

#endif                                 /*typedef_emxArray_int32_T*/

#include <stdlib.h>
#ifndef struct_emxArray_ptrdiff_t
#define struct_emxArray_ptrdiff_t

struct emxArray_ptrdiff_t
{
  ptrdiff_t *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_ptrdiff_t*/

#ifndef typedef_emxArray_ptrdiff_t
#define typedef_emxArray_ptrdiff_t

typedef struct emxArray_ptrdiff_t emxArray_ptrdiff_t;

#endif                                 /*typedef_emxArray_ptrdiff_t*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

#ifndef struct_emxArray_real_T_3x153
#define struct_emxArray_real_T_3x153

struct emxArray_real_T_3x153
{
  real_T data[459];
  int32_T size[2];
};

#endif                                 /*struct_emxArray_real_T_3x153*/

#ifndef typedef_emxArray_real_T_3x153
#define typedef_emxArray_real_T_3x153

typedef struct emxArray_real_T_3x153 emxArray_real_T_3x153;

#endif                                 /*typedef_emxArray_real_T_3x153*/

#ifndef struct_emxArray_real_T_3x3x51
#define struct_emxArray_real_T_3x3x51

struct emxArray_real_T_3x3x51
{
  real_T data[459];
  int32_T size[3];
};

#endif                                 /*struct_emxArray_real_T_3x3x51*/

#ifndef typedef_emxArray_real_T_3x3x51
#define typedef_emxArray_real_T_3x3x51

typedef struct emxArray_real_T_3x3x51 emxArray_real_T_3x3x51;

#endif                                 /*typedef_emxArray_real_T_3x3x51*/

#ifndef struct_emxArray_real_T_3x51
#define struct_emxArray_real_T_3x51

struct emxArray_real_T_3x51
{
  real_T data[153];
  int32_T size[2];
};

#endif                                 /*struct_emxArray_real_T_3x51*/

#ifndef typedef_emxArray_real_T_3x51
#define typedef_emxArray_real_T_3x51

typedef struct emxArray_real_T_3x51 emxArray_real_T_3x51;

#endif                                 /*typedef_emxArray_real_T_3x51*/

#ifndef struct_emxArray_real_T_51
#define struct_emxArray_real_T_51

struct emxArray_real_T_51
{
  real_T data[51];
  int32_T size[1];
};

#endif                                 /*struct_emxArray_real_T_51*/

#ifndef typedef_emxArray_real_T_51
#define typedef_emxArray_real_T_51

typedef struct emxArray_real_T_51 emxArray_real_T_51;

#endif                                 /*typedef_emxArray_real_T_51*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  real_T n;
  real_T nQ;
  real_T nvert;
  emxArray_real_T_3x51 mge3;
  emxArray_real_T_51 b_I;
  emxArray_real_T_51 l;
  emxArray_real_T_3x153 Mtop;
  emxArray_real_T_51 mbar;
  emxArray_real_T_3x3x51 J;
  emxArray_real_T_3x3x51 Jinv;
  emxArray_real_T *M;
} struct0_T;

#endif                                 /*typedef_struct0_T*/
#endif

/* End of code generation (afh_dynamics_types.h) */
