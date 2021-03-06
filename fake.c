#include "../ravi/include/lstate.h"
#include "../ravi/include/lobject.h"

#define ravi_lua_State lua_State
#define ravi_TValue lua_TValue
#define ravi_LClosure LClosure

extern int
ravif1 (struct ravi_lua_State *L)
{
  struct ravi_TValue *base;
  struct ravi_LClosure *cl;
  long long ilimit_0_3;
  long long iidx_0_4;

  struct ravi_TValue REG_0;
  struct ravi_TValue REG_1;
  struct ravi_TValue REG_2;
  struct ravi_TValue REG_3;
  struct ravi_TValue REG_4;
#if 1
#define COPY_FROM_BASE() \
  do {                     \
    REG_0 = base[(int) 0]; \
    REG_1 = base[(int) 1]; \
    REG_2 = base[(int) 2]; \
    REG_3 = base[(int) 3]; \
    REG_4 = base[(int) 4]; \
  } while (0)
#define COPY_TO_BASE() \
  do {                     \
    base[(int) 0] = REG_0; \
    base[(int) 1] = REG_1; \
    base[(int) 2] = REG_2; \
    base[(int) 3] = REG_3; \
    base[(int) 4] = REG_4; \
  } while (0)
#else
#define COPY_FROM_BASE()
#define COPY_TO_BASE()
#endif

entry:
  cl = (struct ravi_LClosure *) L->ci->func->value_.gc;
  base = L->ci->u.l.base;
  COPY_FROM_BASE ();
  base = L->ci->u.l.base;
  REG_0 = cl->p->k[(int) 0];
  base = L->ci->u.l.base;
  REG_1 = cl->p->k[(int) 1];
  base = L->ci->u.l.base;
  REG_2 = cl->p->k[(int) 2];
  base = L->ci->u.l.base;
  REG_3 = cl->p->k[(int) 3];
  base = L->ci->u.l.base;
  iidx_0_4 = REG_1.value_.i - (long long) 1;
  ilimit_0_3 = REG_2.value_.i;
  goto forloop_7_1;

/* The loop conditional.  *************************************************/
forloop_7_1:
  iidx_0_4 = iidx_0_4 + (long long) 1;
  if (iidx_0_4 > ilimit_0_3)
    goto FORLOOP_I1_exit_0_5;
  else
    goto FORLOOP_I1_updatei_0_6;

/* The loop body.  ********************************************************/
FORLOOP_I1_updatei_0_6:
  base = L->ci->u.l.base;
  REG_4.value_.i = iidx_0_4;
  REG_4.tt_ = (int) 19; /* was ->value_.tt_ */
  goto forbody_6_2;

forbody_6_2:
  base = L->ci->u.l.base;
  REG_0 = REG_4;
  goto forloop_7_1;

/* After the loop.  *******************************************************/

FORLOOP_I1_exit_0_5:
  base = L->ci->u.l.base;
  L->top = &base[(int) 1];
  if (cl->p->sizep > (int) 0)
    goto OP_RETURN_if_sizep_gt_0_7_7;
  else
    goto OP_RETURN_else_sizep_gt_0_7_8;

OP_RETURN_if_sizep_gt_0_7_7:
  COPY_TO_BASE ();
  (void) luaF_close (L, base);
  COPY_FROM_BASE ();
  goto OP_RETURN_else_sizep_gt_0_7_8;

OP_RETURN_else_sizep_gt_0_7_8:
  COPY_TO_BASE ();
  (void) luaD_poscall (L, &base[(int) 0]);
  COPY_FROM_BASE ();
  return (int) 1;

OP_RETURN_8_9:
  base = L->ci->u.l.base;
  L->top = &base[(int) 0];
  if (cl->p->sizep > (int) 0)
    goto OP_RETURN_if_sizep_gt_0_8_10;
  else
    goto OP_RETURN_else_sizep_gt_0_8_11;

OP_RETURN_if_sizep_gt_0_8_10:
  COPY_TO_BASE ();
  (void) luaF_close (L, base);
  COPY_FROM_BASE ();
  goto OP_RETURN_else_sizep_gt_0_8_11;

OP_RETURN_else_sizep_gt_0_8_11:
  COPY_TO_BASE ();
  (void) luaD_poscall (L, &base[(int) 0]);
  COPY_FROM_BASE ();
  return (int) 1;
}
