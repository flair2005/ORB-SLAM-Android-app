#ifndef G2O_CONFIG_H
#define G2O_CONFIG_H

/* #undef G2O_HAVE_OPENGL */
/* #undef G2O_OPENGL_FOUND */
/* #undef G2O_OPENMP */
#define G2O_SHARED_LIBS 1
/* #undef G2O_LGPL_SHARED_LIBS */

// available sparse matrix libraries
#define G2O_HAVE_CHOLMOD 1
/* #undef G2O_HAVE_CSPARSE */

#define G2O_CXX_COMPILER "GNU /home/cmaster11/Android/Sdk/ndk/android-ndk-r10d/toolchains/arm-linux-androideabi-4.9/prebuilt/linux-x86_64/bin/arm-linux-androideabi-g++"

// give a warning if Eigen defaults to row-major matrices.
// We internally assume column-major matrices throughout the code.
#ifdef EIGEN_DEFAULT_TO_ROW_MAJOR
#  error "g2o requires column major Eigen matrices (see http://eigen.tuxfamily.org/bz/show_bug.cgi?id=422)"
#endif

#endif
