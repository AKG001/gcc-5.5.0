/* { dg-additional-options "-fdump-tree-original" } */

void
f (char *cp)
{
#pragma acc parallel pcopyin(cp[4:6])
  ;
}

/* { dg-final { scan-tree-dump-times "#pragma acc parallel map\\(to:\\*\\(cp \\+ 4\\) \\\[len: 6]\\) map\\(alloc:cp \\\[pointer assign, bias: 4]\\)" 1 "original" } } */
/* { dg-final { cleanup-tree-dump "original" } } */
