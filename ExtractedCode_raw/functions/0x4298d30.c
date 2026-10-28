// rea decompile_all
// name: CakeOrder.InGame.UICakeTimeCounterInGame.<IEUpdateTimeCounterUI>d__25$$MoveNext
// address: 0x4298d30
// body: available
// range: 0x4298d30-0x42990f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42990f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UICakeTimeCounterInGame_<IEUpdateTimeCounterUI>d__25__MoveNext(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  float extraout_s0;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  int local_54;
  undefined8 local_50;
  double local_48;
  
  uVar1 = param_1;
  if ((DAT_095171e4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918bd60);
    uVar1 = FUN_03f5c2a4(&DAT_0921f850);
    DAT_095171e4 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  local_50 = 0;
  local_54 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0x7f7fffff;
  }
  if (lVar5 == 0) goto LAB_042990f0;
  if (*(int *)(lVar5 + 0x54) == 1) {
    if (*(long *)(lVar5 + 0x98) == 0) goto LAB_042990f0;
    fVar11 = *(float *)(*(long *)(lVar5 + 0x98) + 0x68);
  }
  else {
    fVar11 = 0.0;
    if (*(int *)(lVar5 + 0x54) == 0) {
      if (*(long *)(lVar5 + 0x98) == 0) goto LAB_042990f0;
      fVar11 = *(float *)(*(long *)(lVar5 + 0x98) + 100);
    }
  }
  uVar3 = *(undefined8 *)(lVar5 + 0x48);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) != 0) {
    if (*(char *)(lVar5 + 0x50) == '\0') {
      plVar4 = *(long **)(lVar5 + 0x48);
      if (DAT_09515cf4 == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09515cf4 = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar10 = (double)fVar11;
      dVar6 = modf(dVar10,&local_48);
      if (0.0 <= fVar11) {
        if (dVar6 == 0.5) {
          dVar6 = 1.0;
          goto LAB_04298ef0;
        }
        dVar10 = (double)(long)(dVar10 + 0.5);
      }
      else if (dVar6 == -0.5) {
        dVar6 = -1.0;
LAB_04298ef0:
        dVar10 = local_48;
        if (((long)local_48 & 1U) != 0) {
          dVar10 = local_48 + dVar6;
        }
      }
      else {
        dVar10 = (double)(long)(dVar10 + -0.5);
      }
      local_54 = -0x80000000;
      if (dVar10 != INFINITY) {
        local_54 = (int)dVar10;
      }
      uVar1 = System_Int32__ToString(&local_54,0);
    }
    else {
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_50 = System_TimeSpan__FromSeconds((double)fVar11,0);
      plVar4 = *(long **)(lVar5 + 0x48);
      uVar1 = System_TimeSpan__ToString(&local_50,DAT_0921f850,0);
    }
    if (plVar4 == (long *)0x0) goto LAB_042990f0;
    uVar1 = (**(code **)(*plVar4 + 0x558))(plVar4,uVar1,*(undefined8 *)(*plVar4 + 0x560));
  }
  if (*(int *)(lVar5 + 0x54) != 0) goto LAB_042990c0;
  if (*(long *)(lVar5 + 0x98) == 0) goto LAB_042990f0;
  fVar11 = *(float *)(*(long *)(lVar5 + 0x98) + 100);
  if (((0.0 < fVar11) && (fVar11 < *(float *)(lVar5 + 0x68))) &&
     (fVar11 + 1.0 < *(float *)(param_1 + 0x28))) {
    dVar6 = modf((double)fVar11,&local_48);
    if (0.0 <= fVar11) {
      if (dVar6 == 0.5) {
        fVar11 = 1.0;
        goto LAB_04298fd8;
      }
      fVar8 = (float)(int)(fVar11 + 0.5);
    }
    else if (dVar6 == -0.5) {
      fVar11 = -1.0;
LAB_04298fd8:
      fVar8 = (float)local_48;
      if (((long)local_48 & 1U) != 0) {
        fVar8 = (float)local_48 + fVar11;
      }
    }
    else {
      fVar8 = (float)(int)(fVar11 + -0.5);
    }
    *(float *)(param_1 + 0x28) = fVar8;
    DG_Tweening_TweenExtensions__Restart(0xbf800000,*(undefined8 *)(lVar5 + 0xa8),1,0);
  }
  uVar3 = *(undefined8 *)(lVar5 + 0x80);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) == 0) {
LAB_042990c0:
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return;
  }
  plVar4 = *(long **)(lVar5 + 0x80);
  if (plVar4 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar4 + 0x418))(plVar4,*(undefined8 *)(*plVar4 + 0x420));
    lVar2 = *(long *)(lVar5 + 0x98);
    if (lVar2 != 0) {
      fVar11 = 0.0;
      if (0.0 < *(float *)(lVar2 + 0x60)) {
        fVar11 = *(float *)(lVar2 + 100) / *(float *)(lVar2 + 0x60);
      }
      fVar9 = *(float *)(lVar5 + 0x88);
      fVar8 = 1.0;
      if (fVar9 <= 1.0) {
        fVar8 = fVar9;
      }
      fVar7 = 0.0;
      if (0.0 <= fVar9) {
        fVar7 = fVar8;
      }
      (**(code **)(*plVar4 + 0x428))
                (extraout_s0 + (fVar11 - extraout_s0) * fVar7,plVar4,
                 *(undefined8 *)(*plVar4 + 0x430));
      goto LAB_042990c0;
    }
  }
LAB_042990f0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(uVar1);
}

