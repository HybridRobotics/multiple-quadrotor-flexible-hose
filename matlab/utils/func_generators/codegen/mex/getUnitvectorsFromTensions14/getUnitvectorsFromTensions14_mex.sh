MATLAB="/usr/local/MATLAB/R2018b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/kotaru/.matlab/R2018b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for getUnitvectorsFromTensions14" > getUnitvectorsFromTensions14_mex.mki
echo "CC=$CC" >> getUnitvectorsFromTensions14_mex.mki
echo "CFLAGS=$CFLAGS" >> getUnitvectorsFromTensions14_mex.mki
echo "CLIBS=$CLIBS" >> getUnitvectorsFromTensions14_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> getUnitvectorsFromTensions14_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> getUnitvectorsFromTensions14_mex.mki
echo "CXX=$CXX" >> getUnitvectorsFromTensions14_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> getUnitvectorsFromTensions14_mex.mki
echo "CXXLIBS=$CXXLIBS" >> getUnitvectorsFromTensions14_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> getUnitvectorsFromTensions14_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> getUnitvectorsFromTensions14_mex.mki
echo "LDFLAGS=$LDFLAGS" >> getUnitvectorsFromTensions14_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> getUnitvectorsFromTensions14_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> getUnitvectorsFromTensions14_mex.mki
echo "Arch=$Arch" >> getUnitvectorsFromTensions14_mex.mki
echo "LD=$LD" >> getUnitvectorsFromTensions14_mex.mki
echo OMPFLAGS= >> getUnitvectorsFromTensions14_mex.mki
echo OMPLINKFLAGS= >> getUnitvectorsFromTensions14_mex.mki
echo "EMC_COMPILER=gcc" >> getUnitvectorsFromTensions14_mex.mki
echo "EMC_CONFIG=optim" >> getUnitvectorsFromTensions14_mex.mki
"/usr/local/MATLAB/R2018b/bin/glnxa64/gmake" -j 1 -B -f getUnitvectorsFromTensions14_mex.mk
