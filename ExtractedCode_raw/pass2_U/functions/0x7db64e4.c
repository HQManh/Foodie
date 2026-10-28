// rea decompile_all
// name: Cysharp.Threading.Tasks.UnityBindingExtensions.<BindToCore>d__2$$MoveNext
// address: 0x7db64e4
// body: available
// range: 0x7db64e4-0x7db68d7 inclusive
// range: 0x7db69a8-0x7db69b3 inclusive
// range: 0x7db6a6c-0x7db6d77 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7db6890 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7db6894 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7db6898 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7db68d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7db6d70 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7db6d74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UnityBindingExtensions_<BindToCore>d__2__MoveNext(int *param_1)

{
  undefined1 auVar1 [16];
  undefined2 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  
  if ((DAT_09525fb1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c27a0);
    FUN_03f5c2a4(&DAT_091c2870);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091842a0);
    FUN_03f5c2a4(&DAT_091868b8);
    FUN_03f5c2a4(&DAT_0917b5f0);
    FUN_03f5c2a4(&DAT_0917b600);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525fb1 = 1;
  }
  local_90 = ZEXT816(0);
  iVar14 = *param_1;
  local_a0 = ZEXT816(0);
  auVar15 = ZEXT816(0);
  auVar1 = ZEXT816(0);
  if (iVar14 == 0) goto LAB_07db6690;
  if (iVar14 != 1) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    goto LAB_07db65fc;
  }
  local_a0 = *(undefined1 (*) [16])(param_1 + 0x18);
  iVar14 = -1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *param_1 = -1;
  local_90 = ZEXT816(0);
LAB_07db6bc0:
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar11 = local_a0._0_8_;
  if ((long *)local_a0._0_8_ != (long *)0x0) {
    lVar7 = *(long *)local_a0._0_8_;
    uVar12 = local_a0._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091868c0) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_07db6c3c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(local_a0._0_8_,DAT_091868c0,2);
LAB_07db6c3c:
    (*(code *)*puVar5)(uVar11,uVar12,puVar5[1]);
  }
LAB_07db6c4c:
  piVar9 = param_1 + 0x10;
  plVar13 = *(long **)piVar9;
  if (plVar13 != (long *)0x0) {
    if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_091842a0 + 0x130)) ||
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_091842a0 + 0x130) * 8 + -8) !=
        DAT_091842a0)) {
      uVar11 = thunk_FUN_03fc39d4(&DAT_091f1f80);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(plVar13,uVar11);
    }
    lVar7 = System_Runtime_ExceptionServices_ExceptionDispatchInfo__Capture(plVar13,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    System_Runtime_ExceptionServices_ExceptionDispatchInfo__Throw(lVar7,0);
  }
  if (param_1[0x12] != 1) {
    if (param_1[0x12] != 2) {
      piVar9[0] = 0;
      piVar9[1] = 0;
      thunk_FUN_03f5d7b8(piVar9,0);
      piVar9 = param_1 + 0xe;
      piVar9[0] = 0;
      piVar9[1] = 0;
      thunk_FUN_03f5d7b8(piVar9,0);
    }
    piVar9 = param_1 + 0xe;
    piVar9[0] = 0;
    piVar9[1] = 0;
    *param_1 = -2;
    thunk_FUN_03f5d7b8(piVar9,0);
    FUN_042dada8(param_1 + 2,0);
    return;
  }
LAB_07db65fc:
  plVar13 = *(long **)(param_1 + 4);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar7 = *plVar13;
  uVar11 = *(undefined8 *)(param_1 + 6);
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_0917b5f0) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_07db665c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917b5f0,0);
LAB_07db665c:
  uVar11 = (*(code *)*puVar5)(plVar13,uVar11,puVar5[1]);
  *(undefined8 *)(param_1 + 0xe) = uVar11;
  thunk_FUN_03f5d7b8();
  piVar9 = param_1 + 0x10;
  piVar9[0] = 0;
  piVar9[1] = 0;
  thunk_FUN_03f5d7b8(piVar9,0);
  param_1[0x12] = 0;
  auVar15 = local_90;
  auVar1 = local_a0;
LAB_07db6690:
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
      lVar7 = *plVar13;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917b600) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_07db6704;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917b600,1);
      auVar15 = local_90;
      auVar1 = local_a0;
LAB_07db6704:
      local_90 = auVar15;
      local_a0 = auVar1;
      auVar15 = (*(code *)*puVar5)(plVar13,puVar5[1]);
      local_80._0_8_ = 0;
      local_80._8_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_80 = auVar15;
      thunk_FUN_03f5d7b8(local_80,0);
      local_90 = local_80;
      uVar8 = FUN_0430cf0c(local_90,DAT_0919a588);
      auVar1 = local_a0;
      if ((uVar8 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x14) = local_90;
        thunk_FUN_03f5d7b8(param_1 + 0x14,0);
        FUN_049b4778(param_1 + 2,local_90,param_1,DAT_091c27a0);
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
      lVar7 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c(lVar7);
      }
      lVar6 = *(long *)uVar11;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07db67f4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(uVar11,lVar7,0);
LAB_07db67f4:
      uVar8 = (*(code *)*puVar5)(uVar11,uVar2,puVar5[1]);
      *(undefined1 *)(param_1 + 0xc) = 0;
      auVar1 = local_a0;
      if ((uVar8 & 1) == 0) break;
    }
    plVar13 = *(long **)(param_1 + 0xe);
    local_a0 = auVar1;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar13;
    plVar10 = *(long **)(param_1 + 10);
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917b600) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07db6864;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917b600,0);
    auVar1 = local_a0;
LAB_07db6864:
    local_a0 = auVar1;
    uVar11 = (*(code *)*puVar5)(plVar13,puVar5[1]);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar11,uVar11);
    }
    (**(code **)(*plVar10 + 0x5e8))(plVar10,uVar11,*(undefined8 *)(*plVar10 + 0x5f0));
    auVar15 = local_90;
    auVar1 = local_a0;
  } while( true );
  param_1[0x12] = 2;
  plVar13 = *(long **)(param_1 + 0xe);
  if (plVar13 != (long *)0x0) goto code_r0x07db6a74;
  goto LAB_07db6c4c;
code_r0x07db6a74:
  lVar7 = *plVar13;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_091868b8) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_07db6ac8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_091868b8,0);
LAB_07db6ac8:
  auVar15 = (*(code *)*puVar5)(plVar13,puVar5[1]);
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
    lVar7 = *(long *)uVar11;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091868c0) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07db6bac;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(uVar11,DAT_091868c0,0);
LAB_07db6bac:
    iVar4 = (*(code *)*puVar5)(uVar11,uVar3 & 0xffffffff,puVar5[1]);
    if (iVar4 == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x18) = local_a0;
      thunk_FUN_03f5d7b8(param_1 + 0x18,0);
      FUN_049d1abc(param_1 + 2,local_a0,param_1,DAT_091c2870);
      return;
    }
  }
  goto LAB_07db6bc0;
}

