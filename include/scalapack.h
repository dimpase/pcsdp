/* 
 *  scalapack.h
 *
 *  A collection of prototypes of scalapack routines
 *  needed for distributed computations of CSDP.
 *
 *  Modified by Ivan Ivanov  31 Jan 2007
 */


extern int sl_init_(int *ictxt, int *nprow, int *npcol);
extern void pdgemr2d_  (int *m, int *n, double *a, int *ia, int *ja, int *desc_a, double *b, int *ib, int *jb, int *desc_b, int *ictxt);
extern int ddbtf2_(int *m, int *n, int *kl, int *ku, double *ab, int *ldab, int *info);
extern int ddbtrf_(int *m, int *n, int *kl, int *ku, double *ab, int *ldab, int *info);
extern int dddot_(int *n, double *dot, double *x, int *incx, double *y, int *incy);
extern int ddttrf_(int *n, double *dl, double *d__, double *du, int *info);
extern int ddttrsv_(char *uplo, char *trans, int *n, int *nrhs, double *dl, double *d__, double *du, double *b, int *ldb, int *info);
extern int desc_convert__(int *desc_in__, int *desc_out__, int *info);
extern int descinit_(int *desc, int *m, int *n, int *mb, int *nb, int *irsrc, int *icsrc, int *ictxt, int *lld, int *info);
extern int descset_(int *desc, int *m, int *n, int *mb, int *nb, int *irsrc, int *icsrc, int *ictxt, int *lld);
extern int dlamsh_(double *s, int *lds, int *nbulge, int *jblk, double *h__, int *ldh, int *n, double *ulp);

extern int dlasorte_(double *s, int *lds, int *j, double *out, int *info);
extern int dlasrt2_(char *id, int *n, double *d__, int *key, int *info);
extern int dlatcpy_(char *uplo, int *m, int *n, double *a, int *lda, double *b, int *ldb);
extern int dmatadd_(int *m, int *n, double *alpha, double *a, int *lda, double *beta, double *c__, int *ldc);
extern int dpttrsv_(char *trans, int *n, int *nrhs, double *d__, double *e, double *b, int *ldb, int *info);

extern int dtrmvt_(char *uplo, int *n, double *t, int *ldt, double *x, int *incx, double *y, int *incy, double *w, int *incw, double *z__, int *incz);
extern int iceil_(int *inum, int *idenom);
extern int ilacpy_(char *uplo, int *m, int *n, int *a, int *lda, int *b, int *ldb);
extern int ilcm_(int *m, int *n);
extern int indxg2l_(int *indxglob, int *nb, int *iproc, int *isrcproc, int *nprocs);
extern int indxg2p_(int *indxglob, int *nb, int *iproc, int *isrcproc, int *nprocs);
extern int indxl2g_(int *indxloc, int *nb, int *iproc, int *isrcproc, int *nprocs);
extern int infog1l_(int *gindx, int *nb, int *nprocs, int *myroc, int *isrcproc, int *lindx, int *rocsrc);
extern int infog2l_(int *grindx, int *gcindx, int *desc, int *nprow, int *npcol, int *myrow, int *mycol, int *lrindx, int *lcindx, int *rsrc, int *csrc);
extern int npreroc_(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs);
extern int numroc_(int *n, int *nb, int *iproc, int *isrcproc, int *nprocs);

extern int pdchekpad_(int *ictxt, char *mess, int *m, int *n, double *a, int *lda, int *ipre, int *ipost, double *chkval);
extern int pdcol2row_(int *ictxt, int *m, int *n, int *nb, double *vs, int *ldvs, double *vd, int *ldvd, int *rsrc, int *csrc, int *rdest, int *cdest, double *work);
extern int pddbsv_(int *n, int *bwl, int *bwu, int *nrhs, double *a, int *ja, int *desca, double *b, int *ib, int *descb, double *work, int *lwork, int *info);
extern int pddbtrf_(int *n, int *bwl, int *bwu, double *a, int *ja, int *desca, double *af, int *laf, double *work, int *lwork, int *info);
extern int pddbtrs_(char *trans, int *n, int *bwl, int *bwu, int *nrhs, double *a, int *ja, int *desca, double *b, int *ib, int *descb, double *af, int *laf, double *work, int *lwork, int *info);
extern int pddbtrsv_(char *uplo, char *trans, int *n, int *bwl, int *bwu, int *nrhs, double *a, int *ja, int *desca, double *b, int *ib, int *descb, double *af, int *laf, double *work, int *lwork, int *info);
extern int pddtsv_(int *n, int *nrhs, double *dl, double *d__, double *du, int *ja, int *desca, double *b, int *ib, int *descb, double *work, int *lwork, int *info);
extern int pddttrf_(int *n, double *dl, double *d__, double *du, int *ja, int *desca, double *af, int *laf, double *work, int *lwork, int *info);
extern int pddttrs_(char *trans, int *n, int *nrhs, double *dl, double *d__, double *du, int *ja, int *desca, double *b, int *ib, int *descb, double *af, int *laf, double *work, int *lwork, int *info);
extern int pddttrsv_(char *uplo, char *trans, int *n, int *nrhs, double *dl, double *d__, double *du, int *ja, int *desca, double *b, int *ib, int *descb, double *af, int *laf, double *work, int *lwork, int *info);
extern int pdelget_(char *scope, char *top, double *alpha, double *a, int *ia, int *ja, int *desca);
extern int pdelset_(double *a, int *ia, int *ja, int *desca, double *alpha);
extern int pdelset2_(double *alpha, double *a, int *ia, int *ja, int *desca, double *beta);
extern int pdfillpad_(int *ictxt, int *m, int *n, double *a, int *lda, int *ipre, int *ipost, double *chkval);
extern int pdgbsv_(int *n, int *bwl, int *bwu, int *nrhs, double *a, int *ja, int *desca, int *ipiv, double *b, int *ib, int *descb, double *work, int *lwork, int *info);
extern int pdgbtrf_(int *n, int *bwl, int *bwu, double *a, int *ja, int *desca, int *ipiv, double *af, int *laf, double *work, int *lwork, int *info);
extern int pdgbtrs_(char *trans, int *n, int *bwl, int *bwu, int *nrhs, double *a, int *ja, int *desca, int *ipiv, double *b, int *ib, int *descb, double *af, int *laf, double *work, int *lwork, int *info);
extern int pdgebd2_(int *m, int *n, double *a, int *ia, int *ja, int *desca, double *d__, double *e, double *tauq, double *taup, double *work, int *lwork, int *info);
extern int pdgebrd_(int *m, int *n, double *a, int *ia, int *ja, int *desca, double *d__, double *e, double *tauq, double *taup, double *work, int *lwork, int *info);
extern int pdgecon_(char *norm, int *n, double *a, int *ia, int *ja, int *desca, double *anorm, double *rcond, double *work, int *lwork, int *iwork, int *liwork, int *info);
extern int pdgeequ_(int *m, int *n, double *a, int *ia, int *ja, int *desca, double *r__, double *c__, double *rowcnd, double *colcnd, double *amax, int *info);
extern int pdgehd2_(int *n, int *ilo, int *ihi, double *a, int *ia, int *ja, int *desca, double *tau, double *work, int *lwork, int *info);
extern int pdgehrd_(int *n, int *ilo, int *ihi, double *a, int *ia, int *ja, int *desca, double *tau, double *work, int *lwork, int *info);
extern int pdgelq2_(int *m, int *n, double *a, int *ia, int *ja, int *desca, double *tau, double *work, int *lwork, int *info);
extern int pdgelqf_(int *m, int *n, double *a, int *ia, int *ja, int *desca, double *tau, double *work, int *lwork, int *info);
extern int pdgels_(char *trans, int *m, int *n, int *nrhs, double *a, int *ia, int *ja, int *desca, double *b, int *ib, int *jb, int *descb, double *work, int *lwork, int *info);
extern int pdgeql2_(int *m, int *n, double *a, int *ia, int *ja, int *desca, double *tau, double *work, int *lwork, int *info);
extern int pdgeqlf_(int *m, int *n, double *a, int *ia, int *ja, int *desca, double *tau, double *work, int *lwork, int *info);
extern int pdgeqpf_(int *m, int *n, double *a, int *ia, int *ja, int *desca, int *ipiv, double *tau, double *work, int *lwork, int *info);
extern int pdgeqr2_(int *m, int *n, double *a, int *ia, int *ja, int *desca, double *tau, double *work, int *lwork, int *info);
extern int pdgeqrf_(int *m, int *n, double *a, int *ia, int *ja, int *desca, double *tau, double *work, int *lwork, int *info);
extern int pdgerfs_(char *trans, int *n, int *nrhs, double *a, int *ia, int *ja, int *desca, double *af, int *iaf, int *jaf, int *descaf, int *ipiv, double *b, int *ib, int *jb, int *descb, double *x, int *ix, int *jx, int *descx, double *ferr, double *berr, double *work, int *lwork, int *iwork, int *liwork, int *info);
extern int pdgerq2_(int *m, int *n, double *a, int *ia, int *ja, int *desca, double *tau, double *work, int *lwork, int *info);
extern int pdgerqf_(int *m, int *n, double *a, int *ia, int *ja, int *desca, double *tau, double *work, int *lwork, int *info);
extern int pdgesv_(int *n, int *nrhs, double *a, int *ia, int *ja, int *desca, int *ipiv, double *b, int *ib, int *jb, int *descb, int *info);
extern int pdgesvd_(char *jobu, char *jobvt, int *m, int *n, double *a, int *ia, int *ja, int *desca, double *s, double *u, int *iu, int *ju, int *descu, double *vt, int *ivt, int *jvt, int *descvt, double *work, int *lwork, int *info);
extern int pdgesvx_(char *fact, char *trans, int *n, int *nrhs, double *a, int *ia, int *ja, int *desca, double *af, int *iaf, int *jaf, int *descaf, int *ipiv, char *equed, double *r__, double *c__, double *b, int *ib, int *jb, int *descb, double *x, int *ix, int *jx, int *descx, double *rcond, double *ferr, double *berr, double *work, int *lwork, int *iwork, int *liwork, int *info);
extern int pdgetf2_(int *m, int *n, double *a, int *ia, int *ja, int *desca, int *ipiv, int *info);
extern int pdgetrf_(int *m, int *n, double *a, int *ia, int *ja, int *desca, int *ipiv, int *info);
extern int pdgetri_(int *n, double *a, int *ia, int *ja, int *desca, int *ipiv, double *work, int *lwork, int *iwork, int *liwork, int *info);
extern int pdgetrs_(char *trans, int *n, int *nrhs, double *a, int *ia, int *ja, int *desca, int *ipiv, double *b, int *ib, int *jb, int *descb, int *info);
extern int pdggqrf_(int *n, int *m, int *p, double *a, int *ia, int *ja, int *desca, double *taua, double *b, int *ib, int *jb, int *descb, double *taub, double *work, int *lwork, int *info);
extern int pdggrqf_(int *m, int *p, int *n, double *a, int *ia, int *ja, int *desca, double *taua, double *b, int *ib, int *jb, int *descb, double *taub, double *work, int *lwork, int *info);
extern int pdlabad_(int *ictxt, double *small, double *large);
extern int pdlabrd_(int *m, int *n, int *nb, double *a, int *ia, int *ja, int *desca, double *d__, double *e, double *tauq, double *taup, double *x, int *ix, int *jx, int *descx, double *y, int *iy, int *jy, int *descy, double *work);
extern int pdlacon_(int *n, double *v, int *iv, int *jv, int *descv, double *x, int *ix, int *jx, int *descx, int *isgn, double *est, int *kase);
extern int pdlaconsb_(double *a, int *desca, int *i__, int *l, int *m, double *h44, double *h33, double *h43h34, double *buf, int *lwork);
extern int pdlacp2_(char *uplo, int *m, int *n, double *a, int *ia, int *ja, int *desca, double *b, int *ib, int *jb, int *descb);
extern int pdlacp3_(int *m, int *i__, double *a, int *desca, double *b, int *ldb, int *ii, int *jj, int *rev);
extern int pdlacpy_(char *uplo, int *m, int *n, double *a, int *ia, int *ja, int *desca, double *b, int *ib, int *jb, int *descb);
extern int pdlaed0_(int *n, double *d__, double *e, double *q, int *iq, int *jq, int *descq, double *work, int *iwork, int *info);
extern int pdlaed1_(int *n, int *n1, double *d__, int *id, double *q, int *iq, int *jq, int *descq, double *rho, double *work, int *iwork, int *info);
extern int pdlaed2_(int *ictxt, int *k, int *n, int *n1, int *nb, double *d__, int *drow, int *dcol, double *q, int *ldq, double *rho, double *z__, double *w, double *dlamda, double *q2, int *ldq2, double *qbuf, int *ctot, int *psm, int *npcol, int *indx, int *indxc, int *indxp, int *indcol, int *coltyp, int *nn, int *nn1, int *nn2, int *ib1, int *ib2);
extern int pdlaed3_(int *ictxt, int *k, int *n, int *nb, double *d__, int *drow, int *dcol, double *rho, double *dlamda, double *w, double *z__, double *u, int *ldu, double *buf, int *indx, int *indcol, int *indrow, int *indxr, int *indxc, int *ctot, int *npcol, int *info);
extern int pdlaedz_(int *n, int *n1, int *id, double *q, int *iq, int *jq, int *ldq, int *descq, double *z__, double *work);
extern int pdlaevswp_(int *n, double *zin, int *ldzi, double *z__, int *iz, int *jz, int *descz, int *nvs, int *key, double *work, int *lwork);
extern int pdlahrd_(int *n, int *k, int *nb, double *a, int *ia, int *ja, int *desca, double *tau, double *t, double *y, int *iy, int *jy, int *descy, double *work);
extern double pdlange_(char *norm, int *m, int *n, double *a, int *ia, int *ja, int *desca, double *work);
extern double pdlanhs_(char *norm, int *n, double *a, int *ia, int *ja, int *desca, double *work);
extern double pdlansy_(char *norm, char *uplo, int *n, double *a, int *ia, int *ja, int *desca, double *work);
extern double pdlantr_(char *norm, char *uplo, char *diag, int *m, int *n, double *a, int *ia, int *ja, int *desca, double *work);
extern int pdlapiv_(char *direc, char *rowcol, char *pivroc, int *m, int *n, double *a, int *ia, int *ja, int *desca, int *ipiv, int *ip, int *jp, int *descip, int *iwork);
extern int pdlaprnt_(int *m, int *n, double *a, int *ia, int *ja, int *desca, int *irprnt, int *icprnt, char *cmatnm, int *nout, double *work);
extern int pdlapv2_(char *direc, char *rowcol, int *m, int *n, double *a, int *ia, int *ja, int *desca, int *ipiv, int *ip, int *jp, int *descip);
extern int pdlaqge_(int *m, int *n, double *a, int *ia, int *ja, int *desca, double *r__, double *c__, double *rowcnd, double *colcnd, double *amax, char *equed);
extern int pdlaqsy_(char *uplo, int *n, double *a, int *ia, int *ja, int *desca, double *sr, double *sc, double *scond, double *amax, char *equed);
extern int pdlared1d_(int *n, int *ia, int *ja, int *desc, double *bycol, double *byall, double *work, int *lwork);
extern int pdlared2d_(int *n, int *ia, int *ja, int *desc, double *byrow, double *byall, double *work, int *lwork);
extern int pdlarf_(char *side, int *m, int *n, double *v, int *iv, int *jv, int *descv, int *incv, double *tau, double *c__, int *ic, int *jc, int *descc, double *work);
extern int pdlarfb_(char *side, char *trans, char *direct, char *storev, int *m, int *n, int *k, double *v, int *iv, int *jv, int *descv, double *t, double *c__, int *ic, int *jc, int *descc, double *work);
extern int pdlarfg_(int *n, double *alpha, int *iax, int *jax, double *x, int *ix, int *jx, int *descx, int *incx, double *tau);
extern int pdlarft_(char *direct, char *storev, int *n, int *k, double *v, int *iv, int *jv, int *descv, double *tau, double *t, double *work);
extern int pdlarz_(char *side, int *m, int *n, int *l, double *v, int *iv, int *jv, int *descv, int *incv, double *tau, double *c__, int *ic, int *jc, int *descc, double *work);
extern int pdlarzb_(char *side, char *trans, char *direct, char *storev, int *m, int *n, int *k, int *l, double *v, int *iv, int *jv, int *descv, double *t, double *c__, int *ic, int *jc, int *descc, double *work);
extern int pdlarzt_(char *direct, char *storev, int *n, int *k, double *v, int *iv, int *jv, int *descv, double *tau, double *t, double *work);
extern int pdlascl_(char *type__, double *cfrom, double *cto, int *m, int *n, double *a, int *ia, int *ja, int *desca, int *info);
extern int pdlase2_(char *uplo, int *m, int *n, double *alpha, double *beta, double *a, int *ia, int *ja, int *desca);
extern int pdlaset_(char *uplo, int *m, int *n, double *alpha, double *beta, double *a, int *ia, int *ja, int *desca);
extern int pdlasmsub_(double *a, int *desca, int *i__, int *l, int *k, double *smlnum, double *buf, int *lwork);
extern int pdlasrt_(char *id, int *n, double *d__, double *q, int *iq, int *jq, int *descq, double *work, int *lwork, int *iwork, int *liwork, int *info);
extern int pdlassq_(int *n, double *x, int *ix, int *jx, int *descx, int *incx, double *scale, double *sumsq);
extern int pdlaswp_(char *direc, char *rowcol, int *n, double *a, int *ia, int *ja, int *desca, int *k1, int *k2, int *ipiv);
extern double pdlatra_(int *n, double *a, int *ia, int *ja, int *desca);
extern int pdlatrd_(char *uplo, int *n, int *nb, double *a, int *ia, int *ja, int *desca, double *d__, double *e, double *tau, double *w, int *iw, int *jw, int *descw, double *work);
extern int pdlatrs_(char *uplo, char *trans, char *diag, char *normin, int *n, double *a, int *ia, int *ja, int *desca, double *x, int *ix, int *jx, int *descx, double *scale, double *cnorm, double *work);
extern int pdlatrz_(int *m, int *n, int *l, double *a, int *ia, int *ja, int *desca, double *tau, double *work);
extern int pdlauu2_(char *uplo, int *n, double *a, int *ia, int *ja, int *desca);
extern int pdlauum_(char *uplo, int *n, double *a, int *ia, int *ja, int *desca);
extern int pdlawil_(int *ii, int *jj, int *m, double *a, int *desca, double *h44, double *h33, double *h43h34, double *v);
extern int pdmatadd_(int *m, int *n, double *alpha, double *a, int *ia, int *ja, int *desca, double *beta, double *c__, int *ic, int *jc, int *descc);
extern int pdorg2l_(int *m, int *n, int *k, double *a, int *ia, int *ja, int *desca, double *tau, double *work, int *lwork, int *info);
extern int pdorg2r_(int *m, int *n, int *k, double *a, int *ia, int *ja, int *desca, double *tau, double *work, int *lwork, int *info);
extern int pdorgl2_(int *m, int *n, int *k, double *a, int *ia, int *ja, int *desca, double *tau, double *work, int *lwork, int *info);
extern int pdorglq_(int *m, int *n, int *k, double *a, int *ia, int *ja, int *desca, double *tau, double *work, int *lwork, int *info);
extern int pdorgql_(int *m, int *n, int *k, double *a, int *ia, int *ja, int *desca, double *tau, double *work, int *lwork, int *info);
extern int pdorgqr_(int *m, int *n, int *k, double *a, int *ia, int *ja, int *desca, double *tau, double *work, int *lwork, int *info);
extern int pdorgr2_(int *m, int *n, int *k, double *a, int *ia, int *ja, int *desca, double *tau, double *work, int *lwork, int *info);
extern int pdorgrq_(int *m, int *n, int *k, double *a, int *ia, int *ja, int *desca, double *tau, double *work, int *lwork, int *info);
extern int pdorm2l_(char *side, char *trans, int *m, int *n, int *k, double *a, int *ia, int *ja, int *desca, double *tau, double *c__, int *ic, int *jc, int *descc, double *work, int *lwork, int *info);
extern int pdorm2r_(char *side, char *trans, int *m, int *n, int *k, double *a, int *ia, int *ja, int *desca, double *tau, double *c__, int *ic, int *jc, int *descc, double *work, int *lwork, int *info);
extern int pdormbr_(char *vect, char *side, char *trans, int *m, int *n, int *k, double *a, int *ia, int *ja, int *desca, double *tau, double *c__, int *ic, int *jc, int *descc, double *work, int *lwork, int *info);
extern int pdormhr_(char *side, char *trans, int *m, int *n, int *ilo, int *ihi, double *a, int *ia, int *ja, int *desca, double *tau, double *c__, int *ic, int *jc, int *descc, double *work, int *lwork, int *info);
extern int pdorml2_(char *side, char *trans, int *m, int *n, int *k, double *a, int *ia, int *ja, int *desca, double *tau, double *c__, int *ic, int *jc, int *descc, double *work, int *lwork, int *info);
extern int pdormlq_(char *side, char *trans, int *m, int *n, int *k, double *a, int *ia, int *ja, int *desca, double *tau, double *c__, int *ic, int *jc, int *descc, double *work, int *lwork, int *info);
extern int pdormql_(char *side, char *trans, int *m, int *n, int *k, double *a, int *ia, int *ja, int *desca, double *tau, double *c__, int *ic, int *jc, int *descc, double *work, int *lwork, int *info);
extern int pdormqr_(char *side, char *trans, int *m, int *n, int *k, double *a, int *ia, int *ja, int *desca, double *tau, double *c__, int *ic, int *jc, int *descc, double *work, int *lwork, int *info);
extern int pdormr2_(char *side, char *trans, int *m, int *n, int *k, double *a, int *ia, int *ja, int *desca, double *tau, double *c__, int *ic, int *jc, int *descc, double *work, int *lwork, int *info);
extern int pdormr3_(char *side, char *trans, int *m, int *n, int *k, int *l, double *a, int *ia, int *ja, int *desca, double *tau, double *c__, int *ic, int *jc, int *descc, double *work, int *lwork, int *info);
extern int pdormrq_(char *side, char *trans, int *m, int *n, int *k, double *a, int *ia, int *ja, int *desca, double *tau, double *c__, int *ic, int *jc, int *descc, double *work, int *lwork, int *info);
extern int pdormrz_(char *side, char *trans, int *m, int *n, int *k, int *l, double *a, int *ia, int *ja, int *desca, double *tau, double *c__, int *ic, int *jc, int *descc, double *work, int *lwork, int *info);
extern int pdormtr_(char *side, char *uplo, char *trans, int *m, int *n, double *a, int *ia, int *ja, int *desca, double *tau, double *c__, int *ic, int *jc, int *descc, double *work, int *lwork, int *info);
extern int pdpbsv_(char *uplo, int *n, int *bw, int *nrhs, double *a, int *ja, int *desca, double *b, int *ib, int *descb, double *work, int *lwork, int *info);
extern int pdpbtrf_(char *uplo, int *n, int *bw, double *a, int *ja, int *desca, double *af, int *laf, double *work, int *lwork, int *info);
extern int pdpbtrs_(char *uplo, int *n, int *bw, int *nrhs, double *a, int *ja, int *desca, double *b, int *ib, int *descb, double *af, int *laf, double *work, int *lwork, int *info);
extern int pdpbtrsv_(char *uplo, char *trans, int *n, int *bw, int *nrhs, double *a, int *ja, int *desca, double *b, int *ib, int *descb, double *af, int *laf, double *work, int *lwork, int *info);
extern int pdpocon_(char *uplo, int *n, double *a, int *ia, int *ja, int *desca, double *anorm, double *rcond, double *work, int *lwork, int *iwork, int *liwork, int *info);
extern int pdpoequ_(int *n, double *a, int *ia, int *ja, int *desca, double *sr, double *sc, double *scond, double *amax, int *info);
extern int pdporfs_(char *uplo, int *n, int *nrhs, double *a, int *ia, int *ja, int *desca, double *af, int *iaf, int *jaf, int *descaf, double *b, int *ib, int *jb, int *descb, double *x, int *ix, int *jx, int *descx, double *ferr, double *berr, double *work, int *lwork, int *iwork, int *liwork, int *info);
extern int pdposv_(char *uplo, int *n, int *nrhs, double *a, int *ia, int *ja, int *desca, double *b, int *ib, int *jb, int *descb, int *info);
extern int pdposvx_(char *fact, char *uplo, int *n, int *nrhs, double *a, int *ia, int *ja, int *desca, double *af, int *iaf, int *jaf, int *descaf, char *equed, double *sr, double *sc, double *b, int *ib, int *jb, int *descb, double *x, int *ix, int *jx, int *descx, double *rcond, double *ferr, double *berr, double *work, int *lwork, int *iwork, int *liwork, int *info);
extern int pdpotf2_(char *uplo, int *n, double *a, int *ia, int *ja, int *desca, int *info);
extern int pdpotrf_(char *uplo, int *n, double *a, int *ia, int *ja, int *desca, int *info);
extern int pdpotri_(char *uplo, int *n, double *a, int *ia, int *ja, int *desca, int *info);
extern int pdpotrs_(char *uplo, int *n, int *nrhs, double *a, int *ia, int *ja, int *desca, double *b, int *ib, int *jb, int *descb, int *info);
extern int pdptsv_(int *n, int *nrhs, double *d__, double *e, int *ja, int *desca, double *b, int *ib, int *descb, double *work, int *lwork, int *info);
extern int pdpttrf_(int *n, double *d__, double *e, int *ja, int *desca, double *af, int *laf, double *work, int *lwork, int *info);
extern int pdpttrs_(int *n, int *nrhs, double *d__, double *e, int *ja, int *desca, double *b, int *ib, int *descb, double *af, int *laf, double *work, int *lwork, int *info);
extern int pdpttrsv_(char *uplo, int *n, int *nrhs, double *d__, double *e, int *ja, int *desca, double *b, int *ib, int *descb, double *af, int *laf, double *work, int *lwork, int *info);
extern int pdrow2col_(int *ictxt, int *m, int *n, int *nb, double *vs, int *ldvs, double *vd, int *ldvd, int *rsrc, int *csrc, int *rdest, int *cdest, double *work);
extern int pdrscl_(int *n, double *sa, double *sx, int *ix, int *jx, int *descx, int *incx);
extern int pdstebz_(int *ictxt, char *range, char *order, int *n, double *vl, double *vu, int *il, int *iu, double *abstol, double *d__, double *e, int *m, int *nsplit, double *w, int *iblock, int *isplit, double *work, int *lwork, int *iwork, int *liwork, int *info);
extern int pdlaebz_(int *ijob, int *n, int *mmax, int *minp, double *abstol, double *reltol, double *pivmin, double *d__, int *nval, double *intvl, int *intvlct, int *mout, double *lsave, int *ieflag, int *info);
extern int pdlaecv_(int *ijob, int *kf, int *kl, double *intvl, int *intvlct, int *nval, double *abstol, double *reltol);
extern int pdlapdct_(double *sigma, int *n, double *d__, double *pivmin, int *count);
extern int pdstedc_(char *compz, int *n, double *d__, double *e, double *q, int *iq, int *jq, int *descq, double *work, int *lwork, int *iwork, int *liwork, int *info);
extern int pdstein_(int *n, double *d__, double *e, int *m, double *w, int *iblock, int *isplit, double *orfac, double *z__, int *iz, int *jz, int *descz, double *work, int *lwork, int *iwork, int *liwork, int *ifail, int *iclustr, double *gap, int *info);
extern int pdsyev_(char *jobz, char *uplo, int *n, double *a, int *ia, int *ja, int *desca, double *w, double *z__, int *iz, int *jz, int *descz, double *work, int *lwork, int *info);
extern int pdsyevd_(char *jobz, char *uplo, int *n, double *a, int *ia, int *ja, int *desca, double *w, double *z__, int *iz, int *jz, int *descz, double *work, int *lwork, int *iwork, int *liwork, int *info);
extern int pdsyevx_(char *jobz, char *range, char *uplo, int *n, double *a, int *ia, int *ja, int *desca, double *vl, double *vu, int *il, int *iu, double *abstol, int *m, int *nz, double *w, double *orfac, double *z__, int *iz, int *jz, int *descz, double *work, int *lwork, int *iwork, int *liwork, int *ifail, int *iclustr, double *gap, int *info);
extern int pdsygs2_(int *ibtype, char *uplo, int *n, double *a, int *ia, int *ja, int *desca, double *b, int *ib, int *jb, int *descb, int *info);
extern int pdsygst_(int *ibtype, char *uplo, int *n, double *a, int *ia, int *ja, int *desca, double *b, int *ib, int *jb, int *descb, double *scale, int *info);
extern int pdsygvx_(int *ibtype, char *jobz, char *range, char *uplo, int *n, double *a, int *ia, int *ja, int *desca, double *b, int *ib, int *jb, int *descb, double *vl, double *vu, int *il, int *iu, double *abstol, int *m, int *nz, double *w, double *orfac, double *z__, int *iz, int *jz, int *descz, double *work, int *lwork, int *iwork, int *liwork, int *ifail, int *iclustr, double *gap, int *info);
extern int pdsyngst_(int *ibtype, char *uplo, int *n, double *a, int *ia, int *ja, int *desca, double *b, int *ib, int *jb, int *descb, double *scale, double *work, int *lwork, int *info);
extern int pdsyntrd_(char *uplo, int *n, double *a, int *ia, int *ja, int *desca, double *d__, double *e, double *tau, double *work, int *lwork, int *info);
extern int pdsytd2_(char *uplo, int *n, double *a, int *ia, int *ja, int *desca, double *d__, double *e, double *tau, double *work, int *lwork, int *info);
extern int pdsytrd_(char *uplo, int *n, double *a, int *ia, int *ja, int *desca, double *d__, double *e, double *tau, double *work, int *lwork, int *info);
extern int pdsyttrd_(char *uplo, int *n, double *a, int *ia, int *ja, int *desca, double *d__, double *e, double *tau, double *work, int *lwork, int *info);
extern int pdtrcon_(char *norm, char *uplo, char *diag, int *n, double *a, int *ia, int *ja, int *desca, double *rcond, double *work, int *lwork, int *iwork, int *liwork, int *info);
extern int pdtreecomb_(int *ictxt, char *scope, int *n, double *mine, int *rdest0, int *cdest0);
extern int dcombamax_(double *v1, double *v2);
extern int dcombssq_(double *v1, double *v2);
extern int dcombnrm2_(double *x, double *y);
extern int pdtrrfs_(char *uplo, char *trans, char *diag, int *n, int *nrhs, double *a, int *ia, int *ja, int *desca, double *b, int *ib, int *jb, int *descb, double *x, int *ix, int *jx, int *descx, double *ferr, double *berr, double *work, int *lwork, int *iwork, int *liwork, int *info);
extern int pdtrti2_(char *uplo, char *diag, int *n, double *a, int *ia, int *ja, int *desca, int *info);
extern int pdtrtri_(char *uplo, char *diag, int *n, double *a, int *ia, int *ja, int *desca, int *info);
extern int pdtrtrs_(char *uplo, char *trans, char *diag, int *n, int *nrhs, double *a, int *ia, int *ja, int *desca, double *b, int *ib, int *jb, int *descb, int *info);
extern int pdtzrzf_(int *m, int *n, double *a, int *ia, int *ja, int *desca, double *tau, double *work, int *lwork, int *info);

extern int pichekpad_(int *ictxt, char *mess, int *m, int *n, int *a, int *lda, int *ipre, int *ipost, int *chkval);
extern int picol2row_(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs, int *vd, int *ldvd, int *rsrc, int *csrc, int *rdest, int *cdest, int *work);
extern int pielget_(char *scope, char *top, int *alpha, int *a, int *ia, int *ja, int *desca);
extern int pielset_(int *a, int *ia, int *ja, int *desca, int *alpha);
extern int pielset2_(int *alpha, int *a, int *ia, int *ja, int *desca, int *beta);
extern int pifillpad_(int *ictxt, int *m, int *n, int *a, int *lda, int *ipre, int *ipost, int *chkval);
extern int pilaprnt_(int *m, int *n, int *a, int *ia, int *ja, int *desca, int *irprnt, int *icprnt, char *cmatnm, int *nout, int *work);
extern int pirow2col_(int *ictxt, int *m, int *n, int *nb, int *vs, int *ldvs, int *vd, int *ldvd, int *rsrc, int *csrc, int *rdest, int *cdest, int *work);
extern int pitreecomb_(int *ictxt, char *scope, int *n, int *mine, int *rdest0, int *cdest0);
extern int pjlaenv_(int *ictxt, int *ispec, char *name__, char *opts, int *n1, int *n2, int *n3, int *n4);