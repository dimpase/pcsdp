#
# Use this line to specify your C compiler.
#
CC=mpicc
#
# Specify flags to use in compiling the code.  
#
CFLAGS= -Wall -g -O0 -I../include -DBIT64
#
#  This is used to build the library.  
#
libsdp.a: readprob.o sdp.o op_o.o psd_feas.o op_a.o op_at.o  Fnorm.o calc_pobj.o calc_dobj.o trace_prod.o zero_mat.o mat_mult.o sym_mat.o copy_mat.o addscaledmat.o  make_i.o allocmat.o initsoln.o initparams.o add_mat.o writesol.o readsol.o easysdp.o writeprob.o solvesys.o makefill.o mat_multsp.o norms.o linesearch.o matvec.o chol.o  qreig.o tweakgap.o freeprob.o packed.o  sortentries.o mat_redist.o
	ar cr libsdp.a  readprob.o sdp.o op_o.o psd_feas.o op_a.o op_at.o  Fnorm.o calc_pobj.o calc_dobj.o trace_prod.o zero_mat.o mat_mult.o sym_mat.o copy_mat.o addscaledmat.o make_i.o allocmat.o initsoln.o initparams.o add_mat.o writesol.o readsol.o easysdp.o writeprob.o solvesys.o makefill.o mat_multsp.o norms.o linesearch.o matvec.o chol.o qreig.o tweakgap.o freeprob.o packed.o sortentries.o mat_redist.o 
#
# On some systems, you might need to add after "ar cr libsdp.a ..."
#        ranlib libsdp.a
#
#
# To clean things up.
#
clean:
	rm -f *.o
	rm -f libsdp.a





