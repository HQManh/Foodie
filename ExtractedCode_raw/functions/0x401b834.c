// rea decompile_all
// name: FUN_0401b834
// address: 0x401b834
// body: available
// range: 0x401b834-0x401ba9b inclusive
// range: 0x401baa4-0x401bb2b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x401bae0 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x401bb14 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x401bb28 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0401b834(__shared_weak_count *param_1,__shared_weak_count *param_2,long *param_3,
                 ulong param_4)

{
  bool bVar1;
  __shared_weak_count *__s;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *unaff_x20;
  __shared_weak_count *p_Var8;
  size_t __n;
  ulong uVar9;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(param_2 + 0x18);
  *(undefined **)param_1 = &UNK_08faab28;
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  p_Var8 = param_1 + 0x10;
  *(undefined8 *)p_Var8 = 0;
  lVar4 = lVar4 - lVar3 >> 3;
  param_1[0x118] = (__shared_weak_count)0x0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar6 = lVar4 + 1;
  lVar3 = 0x1e;
  if (0x1e < uVar6) {
    lVar3 = lVar4 + 1;
  }
  if (uVar6 >> 0x3d != 0) {
    uVar2 = FUN_0402c214(p_Var8);
    if (unaff_x20 != (long *)0x0) {
      lVar3 = FUN_0404c020(0xffffffffffffffff,unaff_x20 + 1);
      if (lVar3 == 0) {
        (**(code **)(*unaff_x20 + 0x10))();
      }
      lVar3 = FUN_0404c020(0xffffffffffffffff,unaff_x20 + 1);
      if (lVar3 == 0) {
        (**(code **)(*unaff_x20 + 0x10))();
      }
    }
    if (((byte)param_1[0x120] & 1) == 0) {
      p_Var8 = *(__shared_weak_count **)p_Var8;
    }
    else {
      operator_delete(*(void **)(param_1 + 0x130));
      p_Var8 = *(__shared_weak_count **)p_Var8;
    }
    if (p_Var8 == (__shared_weak_count *)0x0) {
      std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_0404c2dc(uVar2);
    }
    *(__shared_weak_count **)(param_1 + 0x18) = p_Var8;
    if (p_Var8 != param_1 + 0x28) {
      operator_delete(p_Var8);
      std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_0404c2dc(uVar2);
    }
    param_1[0x118] = (__shared_weak_count)0x0;
    std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_0404c2dc(uVar2);
  }
  if (uVar6 < 0x1f) {
    __s = param_1 + 0x28;
    __n = 0xf0;
    param_1[0x118] = (__shared_weak_count)0x1;
  }
  else {
    __n = lVar3 << 3;
    __s = operator_new(__n);
  }
  *(__shared_weak_count **)(param_1 + 0x10) = __s;
  *(__shared_weak_count **)(param_1 + 0x20) = __s + lVar3 * 8;
  memset(__s,0,__n);
  *(__shared_weak_count **)(param_1 + 0x18) = __s + __n;
  *(undefined2 *)(param_1 + 0x120) = 0x2a02;
  param_1[0x122] = (__shared_weak_count)0x0;
  FUN_0404bff0(1,param_3 + 1);
  if (param_1 != param_2) {
    FUN_0402c22c(p_Var8,*(long *)(param_2 + 0x10),*(long *)(param_2 + 0x18),
                 *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) >> 3);
  }
  lVar3 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(param_2 + 0x18);
  if (lVar4 != lVar3) {
    uVar6 = 0;
    uVar9 = 1;
    do {
      lVar5 = *(long *)(*(long *)p_Var8 + uVar6 * 8);
      if (lVar5 != 0) {
        FUN_0404bff0(1,lVar5 + 8);
        lVar3 = *(long *)(param_2 + 0x10);
        lVar4 = *(long *)(param_2 + 0x18);
      }
      bVar1 = uVar9 < (ulong)(lVar4 - lVar3 >> 3);
      uVar6 = uVar9;
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (bVar1);
  }
  FUN_0404bff0(1,param_3 + 1);
  lVar3 = *(long *)(param_1 + 0x10);
  uVar6 = *(long *)(param_1 + 0x18) - lVar3 >> 3;
  if (uVar6 <= param_4) {
    uVar9 = param_4 + 1;
    if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
      if (uVar9 < uVar6) {
        *(ulong *)(param_1 + 0x18) = lVar3 + uVar9 * 8;
      }
    }
    else {
      FUN_0402c39c(p_Var8,uVar9 - uVar6);
      lVar3 = *(long *)p_Var8;
    }
  }
  plVar7 = *(long **)(lVar3 + param_4 * 8);
  if ((plVar7 == (long *)0x0) || (lVar3 = FUN_0404c020(0xffffffffffffffff,plVar7 + 1), lVar3 != 0))
  {
    *(long **)(*(long *)p_Var8 + param_4 * 8) = param_3;
  }
  else {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    *(long **)(*(long *)p_Var8 + param_4 * 8) = param_3;
  }
  if ((param_3 != (long *)0x0) && (lVar3 = FUN_0404c020(0xffffffffffffffff,param_3 + 1), lVar3 == 0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x0401ba64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x10))(param_3);
    return;
  }
  return;
}

