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

entry:
  cl = (struct ravi_LClosure *) L->ci->func->value_.gc;
  base = L->ci->u.l.base;
  base = L->ci->u.l.base;
  *&base[(int) 0] = *&cl->p->k[(int) 0];
  base = L->ci->u.l.base;
  *&base[(int) 1] = *&cl->p->k[(int) 1];
  base = L->ci->u.l.base;
  *&base[(int) 2] = *&cl->p->k[(int) 2];
  base = L->ci->u.l.base;
  *&base[(int) 3] = *&cl->p->k[(int) 3];
  base = L->ci->u.l.base;
  iidx_0_4 = (&base[(int) 1])->value_.i - (long long) 1;
  ilimit_0_3 = (&base[(int) 2])->value_.i;
  goto forloop_7_1;

forloop_7_1:
  iidx_0_4 = iidx_0_4 + (long long) 1;
  if (iidx_0_4 > ilimit_0_3)
    goto FORLOOP_I1_exit_0_5;
  else
    goto FORLOOP_I1_updatei_0_6;

forbody_6_2:
  base = L->ci->u.l.base;
  *&base[(int) 0] = *&base[(int) 4];
  goto forloop_7_1;

FORLOOP_I1_exit_0_5:
  base = L->ci->u.l.base;
  L->top = &base[(int) 1];
  if (cl->p->sizep > (int) 0)
    goto OP_RETURN_if_sizep_gt_0_7_7;
  else
    goto OP_RETURN_else_sizep_gt_0_7_8;

FORLOOP_I1_updatei_0_6:
  base = L->ci->u.l.base;
  (&base[(int) 4])->value_.i = iidx_0_4;
  (&base[(int) 4])->tt_ = (int) 19; /* was ->value_.tt_ */
  goto forbody_6_2;

OP_RETURN_if_sizep_gt_0_7_7:
  (void) luaF_close (L, base);
  goto OP_RETURN_else_sizep_gt_0_7_8;

OP_RETURN_else_sizep_gt_0_7_8:
  (void) luaD_poscall (L, &base[(int) 0]);
  return (int) 1;

OP_RETURN_8_9:
  base = L->ci->u.l.base;
  L->top = &base[(int) 0];
  if (cl->p->sizep > (int) 0)
    goto OP_RETURN_if_sizep_gt_0_8_10;
  else
    goto OP_RETURN_else_sizep_gt_0_8_11;

OP_RETURN_if_sizep_gt_0_8_10:
  (void) luaF_close (L, base);
  goto OP_RETURN_else_sizep_gt_0_8_11;

OP_RETURN_else_sizep_gt_0_8_11:
  (void) luaD_poscall (L, &base[(int) 0]);
  return (int) 1;
}
