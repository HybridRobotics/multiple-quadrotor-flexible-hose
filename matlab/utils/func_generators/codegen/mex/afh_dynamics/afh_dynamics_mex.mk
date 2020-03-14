MATLAB_ROOT = /usr/local/MATLAB/R2018b
MAKEFILE = afh_dynamics_mex.mk

include afh_dynamics_mex.mki


SRC_FILES =  \
	afh_dynamics_data.c \
	afh_dynamics_initialize.c \
	afh_dynamics_terminate.c \
	afh_dynamics.c \
	indexShapeCheck.c \
	eml_int_forloop_overflow_check.c \
	assertValidSizeArg.c \
	error.c \
	toLogicalCheck.c \
	repmat.c \
	sum.c \
	norm.c \
	mldivide.c \
	xgetrf.c \
	colon.c \
	warning.c \
	qrsolve.c \
	xgeqp3.c \
	cross.c \
	_coder_afh_dynamics_info.c \
	_coder_afh_dynamics_api.c \
	_coder_afh_dynamics_mex.c \
	afh_dynamics_emxutil.c \
	c_mexapi_version.c

MEX_FILE_NAME_WO_EXT = afh_dynamics_mex
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexa64
TARGET = $(MEX_FILE_NAME)

SYS_LIBS = -lmwblas -lmwlapack 


#
#====================================================================
# gmake makefile fragment for building MEX functions using Unix
# Copyright 2007-2016 The MathWorks, Inc.
#====================================================================
#

OBJEXT = o
.SUFFIXES: .$(OBJEXT)

OBJLISTC = $(SRC_FILES:.c=.$(OBJEXT))
OBJLISTCPP  = $(OBJLISTC:.cpp=.$(OBJEXT))
OBJLIST  = $(OBJLISTCPP:.cu=.$(OBJEXT))

target: $(TARGET)

ML_INCLUDES = -I "$(MATLAB_ROOT)/simulink/include"
ML_INCLUDES+= -I "$(MATLAB_ROOT)/toolbox/shared/simtargets"
SYS_INCLUDE = $(ML_INCLUDES)

# Additional includes

SYS_INCLUDE += -I "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/codegen/mex/afh_dynamics"
SYS_INCLUDE += -I "/home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators"
SYS_INCLUDE += -I "./interface"
SYS_INCLUDE += -I "$(MATLAB_ROOT)/extern/include"
SYS_INCLUDE += -I "."

EML_LIBS = -lemlrt -lcovrt -lut -lmwmathutil 
SYS_LIBS += $(CLIBS) $(EML_LIBS)


EXPORTFILE = $(MEX_FILE_NAME_WO_EXT)_mex.map
ifeq ($(Arch),maci)
  EXPORTOPT = -Wl,-exported_symbols_list,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS)
  CXX_FLAGS = -c $(CXXFLAGS)
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS))
else ifeq ($(Arch),maci64)
  EXPORTOPT = -Wl,-exported_symbols_list,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS)
  CXX_FLAGS = -c $(CXXFLAGS)
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS)) -Wl,-rpath,@loader_path
else
  EXPORTOPT = -Wl,--version-script,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS) $(OMPFLAGS)
  CXX_FLAGS = -c $(CXXFLAGS) $(OMPFLAGS)
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS)) 
endif
LINK_FLAGS += $(OMPLINKFLAGS)
ifeq ($(Arch),maci)
  LINK_FLAGS += -L$(MATLAB_ROOT)/sys/os/maci
endif
ifeq ($(EMC_CONFIG),optim)
  ifeq ($(Arch),mac)
    COMP_FLAGS += $(CDEBUGFLAGS)
    CXX_FLAGS += $(CXXDEBUGFLAGS)
  else
    COMP_FLAGS += $(COPTIMFLAGS)
    CXX_FLAGS += $(CXXOPTIMFLAGS)
  endif
  LINK_FLAGS += $(LDOPTIMFLAGS)
else
  COMP_FLAGS += $(CDEBUGFLAGS)
  CXX_FLAGS += $(CXXDEBUGFLAGS)
  LINK_FLAGS += $(LDDEBUGFLAGS)
endif
LINK_FLAGS += -o $(TARGET)
LINK_FLAGS +=  -L"$(MATLAB_ROOT)/bin/glnxa64"

CCFLAGS = $(COMP_FLAGS) -std=c99  -DHAVE_LAPACK_CONFIG_H -DLAPACK_COMPLEX_STRUCTURE -DMW_HAVE_LAPACK_DECLS  $(USER_INCLUDE) $(SYS_INCLUDE)
CPPFLAGS = $(CXX_FLAGS) -std=c++11  -DHAVE_LAPACK_CONFIG_H -DLAPACK_COMPLEX_STRUCTURE -DMW_HAVE_LAPACK_DECLS  $(USER_INCLUDE) $(SYS_INCLUDE)

%.$(OBJEXT) : %.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : %.cpp
	$(CXX) $(CPPFLAGS) "$<"

# Additional sources

%.$(OBJEXT) : /home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : /home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/codegen/mex/afh_dynamics/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) $(CCFLAGS) "$<"



%.$(OBJEXT) : /home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : /home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/codegen/mex/afh_dynamics/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : interface/%.cpp
	$(CXX) $(CPPFLAGS) "$<"



%.$(OBJEXT) : /home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : /home/kotaru/workspace/git/HybridRobotics/mutliple-quadrotor-flexible-hose/matlab/utils/func_generators/codegen/mex/afh_dynamics/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : interface/%.cu
	$(CC) $(CCFLAGS) "$<"




$(TARGET): $(OBJLIST) $(MAKEFILE)
	$(LD) $(EXPORTOPT) $(OBJLIST) $(LINK_FLAGS) $(SYS_LIBS)

#====================================================================

