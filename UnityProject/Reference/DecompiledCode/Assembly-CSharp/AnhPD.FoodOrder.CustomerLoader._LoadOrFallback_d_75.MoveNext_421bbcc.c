// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLoader.<LoadOrFallback>d__75$$MoveNext
// address: 0x421bbcc
// body: available
// range: 0x421bbcc-0x421bdcb inclusive
// range: 0x421bdf4-0x421c0cf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x421bdc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421bdc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421c0b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421c0b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421c0b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421c0bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421c0c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421c0c4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421c0c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421c0cc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLoader_<LoadOrFallback>d__75__MoveNext(int *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  undefined8 local_48;
  
  if ((DAT_09516cfa & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199138);
    FUN_03f5c2a4(&DAT_09199218);
    FUN_03f5c2a4(&DAT_091752d0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091bc2b8);
    FUN_03f5c2a4(&DAT_091bc2c0);
    FUN_03f5c2a4(&DAT_091bcba8);
    FUN_03f5c2a4(&DAT_091f7800);
    FUN_03f5c2a4(&DAT_091f7320);
    FUN_03f5c2a4(&DAT_091f77f8);
    FUN_03f5c2a4(&DAT_09213c28);
    DAT_09516cfa = 1;
  }
  lVar5 = *(long *)(param_1 + 8);
  local_48 = 0;
  if (*param_1 == 0) {
    local_48 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_48 = *(undefined8 *)(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
      goto LAB_0421bea8;
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = UnityEngine_MonoBehaviour__get_destroyCancellationToken(lVar5,0);
    *(undefined8 *)(param_1 + 0xe) = uVar3;
    thunk_FUN_03f5d7b8(param_1 + 0xe,0);
    lVar1 = AnhPD_FoodOrder_CustomerLoader__TryEnsureLoaded
                      (lVar5,*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0xe));
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_48 = FUN_062e8294(lVar1,DAT_091bcba8);
    uVar2 = FUN_062098a0(&local_48,DAT_091bc2c0);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x12) = local_48;
      thunk_FUN_03f5d7b8(param_1 + 0x12,0);
      if (*(int *)(DAT_091752d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_045e2d38(param_1 + 2,&local_48,param_1,DAT_09199138);
      return;
    }
  }
  uVar2 = FUN_062098e0(&local_48,DAT_091bc2b8);
  uVar3 = *(undefined8 *)(param_1 + 10);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    thunk_FUN_03f5d7b8(param_1 + 0x10,uVar3);
    iVar4 = 0;
    param_1[0x14] = 0;
    while (iVar4 < 3) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = 0;
      if (param_1[0xc] < 1) {
        uVar3 = AnhPD_FoodOrder_CustomerLoader__RandomIdFromList(lVar5);
      }
      piVar6 = param_1 + 0x16;
      *(undefined8 *)piVar6 = uVar3;
      thunk_FUN_03f5d7b8(piVar6);
      uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)piVar6,0);
      if ((uVar2 & 1) != 0) break;
      piVar7 = param_1 + 0x10;
      uVar2 = System_String__op_Equality(*(undefined8 *)(param_1 + 0x16),*(undefined8 *)piVar7,0);
      if ((uVar2 & 1) != 0) break;
      *(undefined8 *)piVar7 = *(undefined8 *)piVar6;
      thunk_FUN_03f5d7b8(piVar7);
      lVar1 = AnhPD_FoodOrder_CustomerLoader__TryEnsureLoaded
                        (lVar5,*(undefined8 *)(param_1 + 0x16),*(undefined8 *)(param_1 + 0xe));
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_48 = FUN_062e8294(lVar1,DAT_091bcba8);
      uVar2 = FUN_062098a0(&local_48,DAT_091bc2c0);
      if ((uVar2 & 1) == 0) {
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0x12) = local_48;
        thunk_FUN_03f5d7b8(param_1 + 0x12,0);
        if (*(int *)(DAT_091752d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_045e2d38(param_1 + 2,&local_48,param_1,DAT_09199138);
        return;
      }
LAB_0421bea8:
      uVar2 = FUN_062098e0(&local_48,DAT_091bc2b8);
      if ((uVar2 & 1) != 0) {
        lVar1 = FUN_03f5c394(DAT_091805f8,5);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined8 *)(lVar1 + 0x20) = DAT_09213c28;
        thunk_FUN_03f5d7b8();
        if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_1 + 10);
        thunk_FUN_03f5d7b8();
        if (*(uint *)(lVar1 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined8 *)(lVar1 + 0x30) = DAT_091f7800;
        thunk_FUN_03f5d7b8();
        if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(param_1 + 0x16);
        thunk_FUN_03f5d7b8();
        if (*(uint *)(lVar1 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined8 *)(lVar1 + 0x40) = DAT_091f7320;
        thunk_FUN_03f5d7b8();
        uVar3 = System_String__Concat(lVar1,0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__LogWarning(uVar3,lVar5,0);
        uVar3 = *(undefined8 *)(param_1 + 0x16);
        goto LAB_0421c01c;
      }
      iVar4 = param_1[0x14] + 1;
      param_1[0x14] = iVar4;
    }
    uVar3 = System_String__Concat(DAT_09213c28,*(undefined8 *)(param_1 + 10),DAT_091f77f8,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(uVar3,lVar5,0);
    uVar3 = 0;
  }
LAB_0421c01c:
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = -2;
  piVar6 = param_1 + 0x10;
  piVar6[0] = 0;
  piVar6[1] = 0;
  thunk_FUN_03f5d7b8(piVar6,0);
  if (*(int *)(DAT_091752d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_069f7d10(param_1 + 2,uVar3,DAT_09199218);
  return;
}

