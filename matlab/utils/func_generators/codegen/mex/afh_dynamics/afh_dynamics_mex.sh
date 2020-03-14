MATLAB="/usr/local/MATLAB/R2018b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/kotaru/.matlab/R2018b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for afh_dynamics" > afh_dynamics_mex.mki
echo "CC=$CC" >> afh_dynamics_mex.mki
echo "CFLAGS=$CFLAGS" >> afh_dynamics_mex.mki
echo "CLIBS=$CLIBS" >> afh_dynamics_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> afh_dynamics_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> afh_dynamics_mex.mki
echo "CXX=$CXX" >> afh_dynamics_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> afh_dynamics_mex.mki
echo "CXXLIBS=$CXXLIBS" >> afh_dynamics_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> afh_dynamics_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> afh_dynamics_mex.mki
echo "LDFLAGS=$LDFLAGS" >> afh_dynamics_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> afh_dynamics_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> afh_dynamics_mex.mki
echo "Arch=$Arch" >> afh_dynamics_mex.mki
echo "LD=$LD" >> afh_dynamics_mex.mki
echo OMPFLAGS= >> afh_dynamics_mex.mki
echo OMPLINKFLAGS= >> afh_dynamics_mex.mki
echo "EMC_COMPILER=gcc" >> afh_dynamics_mex.mki
echo "EMC_CONFIG=optim" >> afh_dynamics_mex.mki
"/usr/local/MATLAB/R2018b/bin/glnxa64/gmake" -j 1 -B -f afh_dynamics_mex.mk
