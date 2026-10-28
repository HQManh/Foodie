// rea decompile_all
// name: Cysharp.Threading.Tasks.UnityBindingExtensions.<BindToCore>d__9$$MoveNext
// address: 0x7db6e9c
// body: available
// range: 0x7db6e9c-0x7db7287 inclusive
// range: 0x7db7358-0x7db7363 inclusive
// range: 0x7db741c-0x7db7727 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7db7240 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7db7244 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7db7248 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7db7284 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7db7720 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7db7724 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UnityBindingExtensions_<BindToCore>d__9__MoveNext(int *param_1)

{
  undefined1 auVar1 [16];
  undefined2 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  
  if ((DAT_09525fb2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c27a8);
    FUN_03f5c2a4(&DAT_091c2878);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091842a0);
    FUN_03f5c2a4(&DAT_091868b8);
    FUN_03f5c2a4(&DAT_0917b5e8);
    FUN_03f5c2a4(&DAT_0917b5f8);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525fb2 = 1;
  }
  local_90 = ZEXT816(0);
  iVar14 = *param_1;
  local_a0 = ZEXT816(0);
  auVar15 = ZEXT816(0);
  auVar1 = ZEXT816(0);
  if (iVar14 == 0) goto LAB_07db7048;
  if (iVar14 != 1) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    goto LAB_07db6fb4;
  }
  local_a0 = *(undefined1 (*) [16])(param_1 + 0x18);
  iVar14 = -1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *param_1 = -1;
  local_90 = ZEXT816(0);
LAB_07db7570:
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar11 = local_a0._0_8_;
  if ((long *)local_a0._0_8_ != (long *)0x0) {
    lVar8 = *(long *)local_a0._0_8_;
    uVar12 = local_a0._8_8_ & 0xffff;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091868c0) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_07db75ec;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(local_a0._0_8_,DAT_091868c0,2);
LAB_07db75ec:
    (*(code *)*puVar6)(uVar11,uVar12,puVar6[1]);
  }
LAB_07db75fc:
  piVar10 = param_1 + 0x10;
  plVar13 = *(long **)piVar10;
  if (plVar13 != (long *)0x0) {
    if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_091842a0 + 0x130)) ||
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_091842a0 + 0x130) * 8 + -8) !=
        DAT_091842a0)) {
      uVar11 = thunk_FUN_03fc39d4(&DAT_091f1f88);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(plVar13,uVar11);
    }
    lVar8 = System_Runtime_ExceptionServices_ExceptionDispatchInfo__Capture(plVar13,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    System_Runtime_ExceptionServices_ExceptionDispatchInfo__Throw(lVar8,0);
  }
  if (param_1[0x12] != 1) {
    if (param_1[0x12] != 2) {
      piVar10[0] = 0;
      piVar10[1] = 0;
      thunk_FUN_03f5d7b8(piVar10,0);
      piVar10 = param_1 + 0xe;
      piVar10[0] = 0;
      piVar10[1] = 0;
      thunk_FUN_03f5d7b8(piVar10,0);
    }
    piVar10 = param_1 + 0xe;
    piVar10[0] = 0;
    piVar10[1] = 0;
    *param_1 = -2;
    thunk_FUN_03f5d7b8(piVar10,0);
    FUN_042dada8(param_1 + 2,0);
    return;
  }
LAB_07db6fb4:
  plVar13 = *(long **)(param_1 + 4);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar8 = *plVar13;
  uVar11 = *(undefined8 *)(param_1 + 6);
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == DAT_0917b5e8) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_07db7014;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917b5e8,0);
LAB_07db7014:
  uVar11 = (*(code *)*puVar6)(plVar13,uVar11,puVar6[1]);
  *(undefined8 *)(param_1 + 0xe) = uVar11;
  thunk_FUN_03f5d7b8();
  piVar10 = param_1 + 0x10;
  piVar10[0] = 0;
  piVar10[1] = 0;
  thunk_FUN_03f5d7b8(piVar10,0);
  param_1[0x12] = 0;
  auVar15 = local_90;
  auVar1 = local_a0;
LAB_07db7048:
  do {
    if (iVar14 == 0) {
      local_90 = *(undefined1 (*) [16])(param_1 + 0x14);
      iVar14 = -1;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = -1;
    }
    else {
      plVar13 = *(long **)(param_1 + 0xe);
      local_90 = auVar15;
      local_a0 = auVar1;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_0917b5f8) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_07db70bc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917b5f8,1);
      auVar15 = local_90;
      auVar1 = local_a0;
LAB_07db70bc:
      local_90 = auVar15;
      local_a0 = auVar1;
      auVar15 = (*(code *)*puVar6)(plVar13,puVar6[1]);
      local_80._0_8_ = 0;
      local_80._8_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_80 = auVar15;
      thunk_FUN_03f5d7b8(local_80,0);
      local_90 = local_80;
      uVar9 = FUN_0430cf0c(local_90,DAT_0919a588);
      auVar1 = local_a0;
      if ((uVar9 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x14) = local_90;
        thunk_FUN_03f5d7b8(param_1 + 0x14,0);
        FUN_049b4884(param_1 + 2,local_90,param_1,DAT_091c27a8);
        return;
      }
    }
    uVar11 = local_90._0_8_;
    local_a0 = auVar1;
    if ((long *)local_90._0_8_ == (long *)0x0) {
      *(undefined1 *)(param_1 + 0xc) = 0;
      if (local_90[8] == '\0') break;
    }
    else {
      uVar2 = local_90._10_2_;
      lVar8 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c(lVar8);
      }
      lVar7 = *(long *)uVar11;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_07db71ac;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(uVar11,lVar8,0);
LAB_07db71ac:
      uVar9 = (*(code *)*puVar6)(uVar11,uVar2,puVar6[1]);
      *(undefined1 *)(param_1 + 0xc) = 0;
      auVar1 = local_a0;
      if ((uVar9 & 1) == 0) break;
    }
    plVar13 = *(long **)(param_1 + 0xe);
    local_a0 = auVar1;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *plVar13;
    lVar7 = *(long *)(param_1 + 10);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_0917b5f8) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_07db721c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917b5f8,0);
    auVar1 = local_a0;
LAB_07db721c:
    local_a0 = auVar1;
    uVar4 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_UI_Selectable__set_interactable(lVar7,uVar4 & 1,0);
    auVar15 = local_90;
    auVar1 = local_a0;
  } while( true );
  param_1[0x12] = 2;
  plVar13 = *(long **)(param_1 + 0xe);
  if (plVar13 != (long *)0x0) goto code_r0x07db7424;
  goto LAB_07db75fc;
code_r0x07db7424:
  lVar8 = *plVar13;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == DAT_091868b8) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_07db7478;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_03f95da8(plVar13,DAT_091868b8,0);
LAB_07db7478:
  auVar15 = (*(code *)*puVar6)(plVar13,puVar6[1]);
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_70 = auVar15;
  thunk_FUN_03f5d7b8(local_70,0);
  uVar3 = local_70._8_8_;
  uVar11 = local_70._0_8_;
  local_a0 = local_70;
  if (DAT_095162d4 == '\0') {
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095162d4 = '\x01';
  }
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095162d5 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d5 = '\x01';
  }
  if ((long *)uVar11 != (long *)0x0) {
    lVar8 = *(long *)uVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091868c0) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_07db755c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(uVar11,DAT_091868c0,0);
LAB_07db755c:
    iVar5 = (*(code *)*puVar6)(uVar11,uVar3 & 0xffffffff,puVar6[1]);
    if (iVar5 == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x18) = local_a0;
      thunk_FUN_03f5d7b8(param_1 + 0x18,0);
      FUN_049d1bc8(param_1 + 2,local_a0,param_1,DAT_091c2878);
      return;
    }
  }
  goto LAB_07db7570;
}

