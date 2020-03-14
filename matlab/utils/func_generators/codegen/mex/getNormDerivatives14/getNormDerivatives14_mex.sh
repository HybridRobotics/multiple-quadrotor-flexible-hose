MATLAB="/usr/local/MATLAB/R2018b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/kotaru/.matlab/R2018b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for getNormDerivatives14" > getNormDerivatives14_mex.mki
echo "CC=$CC" >> getNormDerivatives14_mex.mki
echo "CFLAGS=$CFLAGS" >> getNormDerivatives14_mex.mki
echo "CLIBS=$CLIBS" >> getNormDerivatives14_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> getNormDerivatives14_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> getNormDerivatives14_mex.mki
echo "CXX=$CXX" >> getNormDerivatives14_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> getNormDerivatives14_mex.mki
echo "CXXLIBS=$CXXLIBS" >> getNormDerivatives14_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> getNormDerivatives14_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> getNormDerivatives14_mex.mki
echo "LDFLAGS=$LDFLAGS" >> getNormDerivatives14_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> getNormDerivatives14_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> getNormDerivatives14_mex.mki
echo "Arch=$Arch" >> getNormDerivatives14_mex.mki
echo "LD=$LD" >> getNormDerivatives14_mex.mki
echo OMPFLAGS= >> getNormDerivatives14_mex.mki
echo OMPLINKFLAGS= >> getNormDerivatives14_mex.mki
echo "EMC_COMPILER=gcc" >> getNormDerivatives14_mex.mki
echo "EMC_CONFIG=optim" >> getNormDerivatives14_mex.mki
"/usr/local/MATLAB/R2018b/bin/glnxa64/gmake" -j 1 -B -f getNormDerivatives14_mex.mk
