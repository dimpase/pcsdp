#
# Use this line to specify the C and Fortran compilers.
#
CC=mpicc
F77=mpif77
#
# Use this line to specify options for the C compiler.  You'll probably
# want to turn on optimizations. You may also have to use some of the 
# following flags:
#
#  -DCAPSBLAS         if BLAS routine names are capitalized.
#  -DCAPSLAPACK       if LAPACK routine names are capitalized.
#  -DNOUNDERBLAS      if BLAS routine names have no underscore.
#  -DNOUNDERLAPACK    if LAPACK routine names have no underscore.
#  -DBIT64            For I32LP64 systems.
#
CFLAGS= -Wall -g -O0 -I../include  -DBIT64 
#
# Use this line to specify options for the Fortran compiler. In fact
# Fortran is used only to link the code with the external libraries.
# In case  you expirience problems as second_underscore in the filenames 
# of you BLAS, LAPACK or ScaLAPACk libraties it is a good idea to
# use the option -fno-second-underscore.
# 
FFLAGS= -fno-second-underscore
#
# Use this line to specify where the SDP and linear algebra libraries are
# to be found. 
#
# -L../lib            look in the ../lib directory
# -lsdp               get libsdp.a
# -llapack            get liblapack.a
# -lblas              get libblas.a
# -lm                 Get C math library.
#
# It's extremely likely that you'll have to change the LIBS= line for
# your particular system.  
# BLACS library might have slightly different names than the specified here,
# so use the proper names available on your cluster. Please, pay attention 
# on the order of ScaLAPACK and BLACS libs.
#  
LIBS=-L../lib -lsdp 
SCALAPACKLIB= -lscalapack -lblacsCinit -lblacs  -lblacsCinit 
BLAS= -lblas -llapack
LIBLM=  -lm  -lg2c
 
#
#  This builds the pcsdp program.  
#
pcsdp: pcsdp.o 
	$(F77) $(FFLAGS) pcsdp.o $(LIBS) $(SCALAPACKLIB) $(BLAS) $(LIBLM)  -o pcsdp
	rm -f *.o
#
# To clean out the directory:
#
clean:
	rm -f *.o*
	rm -f *.e*
	rm -f *.po*
	rm -f *.pe*
