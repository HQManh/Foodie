// rea decompile_all
// name: DG.Tweening.Core.TweenManager$$RemoveActiveTween
// address: 0x4573224
// body: available
// range: 0x4573224-0x457369f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4573694 to 0x4570034 DG.Tweening.Core.Debugger$$LogRemoveActiveTweenError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4573698 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x457369c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Core_TweenManager__RemoveActiveTween(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_095188e1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c158);
    FUN_03f5c2a4(&DAT_092241b8);
    FUN_03f5c2a4(&DAT_09224188);
    FUN_03f5c2a4(&DAT_092241b0);
    FUN_03f5c2a4(&DAT_09224190);
    FUN_03f5c2a4(&DAT_09224198);
    FUN_03f5c2a4(&DAT_092241a0);
    FUN_03f5c2a4(&DAT_092241a8);
    DAT_095188e1 = 1;
  }
  if (param_1 == 0) goto LAB_04573698;
  uVar1 = *(uint *)(param_1 + 0xf8);
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (0 < *(int *)(*(long *)(DAT_0918c158 + 0xb8) + 0x70)) {
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    DG_Tweening_Core_TweenManager__RemoveTweenLink(param_1);
  }
  lVar6 = DAT_0918c158;
  iVar5 = *(int *)(DAT_0918c158 + 0xe4);
  *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
  if (iVar5 == 0) {
    FUN_03f5c424();
    lVar6 = DAT_0918c158;
  }
  iVar5 = *(int *)(*(long *)(lVar6 + 0xb8) + 0x7c);
  *(undefined1 *)(*(long *)(lVar6 + 0xb8) + 0x78) = 1;
  if (iVar5 == -1) {
LAB_04573340:
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar6 = DAT_0918c158;
    }
    *(uint *)(*(long *)(lVar6 + 0xb8) + 0x7c) = uVar1;
  }
  else {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_03f5c424();
      iVar5 = *(int *)(*(long *)(DAT_0918c158 + 0xb8) + 0x7c);
      lVar6 = DAT_0918c158;
    }
    if ((int)uVar1 < iVar5) goto LAB_04573340;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar6 = DAT_0918c158;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x48);
  if (lVar6 == 0) {
LAB_04573698:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  puVar4 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
  *puVar4 = 0;
  thunk_FUN_03f5d7b8(puVar4,0);
  iVar5 = *(int *)(param_1 + 0x50);
  iVar2 = *(int *)(DAT_0918c158 + 0xe4);
  if (iVar5 == 2) {
    if (iVar2 == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(DAT_0918c158 + 0xb8);
    iVar5 = *(int *)(lVar6 + 0x24);
    if (0 < iVar5) {
      if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar6 = *(long *)(DAT_0918c158 + 0xb8);
        iVar5 = *(int *)(lVar6 + 0x24);
      }
      *(int *)(lVar6 + 0x24) = iVar5 + -1;
      *(bool *)(lVar6 + 0x13) = 0 < iVar5 + -1;
      goto LAB_04573520;
    }
    puVar4 = &DAT_09224190;
  }
  else if (iVar5 == 1) {
    if (iVar2 == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(DAT_0918c158 + 0xb8);
    iVar5 = *(int *)(lVar6 + 0x20);
    if (0 < iVar5) {
      if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar6 = *(long *)(DAT_0918c158 + 0xb8);
        iVar5 = *(int *)(lVar6 + 0x20);
      }
      *(int *)(lVar6 + 0x20) = iVar5 + -1;
      *(bool *)(lVar6 + 0x12) = 0 < iVar5 + -1;
      goto LAB_04573520;
    }
    puVar4 = &DAT_09224198;
  }
  else if (iVar5 == 0) {
    if (iVar2 == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(DAT_0918c158 + 0xb8);
    iVar5 = *(int *)(lVar6 + 0x1c);
    if (0 < iVar5) {
      if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar6 = *(long *)(DAT_0918c158 + 0xb8);
        iVar5 = *(int *)(lVar6 + 0x1c);
      }
      *(int *)(lVar6 + 0x1c) = iVar5 + -1;
      *(bool *)(lVar6 + 0x11) = 0 < iVar5 + -1;
      goto LAB_04573520;
    }
    puVar4 = &DAT_09224188;
  }
  else {
    if (iVar2 == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(DAT_0918c158 + 0xb8);
    iVar5 = *(int *)(lVar6 + 0x28);
    if (0 < iVar5) {
      if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar6 = *(long *)(DAT_0918c158 + 0xb8);
        iVar5 = *(int *)(lVar6 + 0x28);
      }
      *(int *)(lVar6 + 0x28) = iVar5 + -1;
      *(bool *)(lVar6 + 0x14) = 0 < iVar5 + -1;
      goto LAB_04573520;
    }
    puVar4 = &DAT_092241a0;
  }
  DG_Tweening_Core_Debugger__LogRemoveActiveTweenError(*puVar4,param_1,0);
LAB_04573520:
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = DAT_0918c158;
  lVar7 = *(long *)(DAT_0918c158 + 0xb8);
  iVar5 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(lVar7 + 0x18) + -1;
  *(int *)(lVar7 + 0x18) = iVar3;
  iVar2 = *(int *)(lVar6 + 0xe4);
  *(bool *)(lVar7 + 0x10) = 0 < iVar3;
  if (iVar5 == 0) {
    if (iVar2 == 0) {
      FUN_03f5c424();
      lVar7 = *(long *)(DAT_0918c158 + 0xb8);
      lVar6 = DAT_0918c158;
    }
    *(int *)(lVar7 + 0x2c) = *(int *)(lVar7 + 0x2c) + -1;
  }
  else {
    if (iVar2 == 0) {
      FUN_03f5c424();
      lVar7 = *(long *)(DAT_0918c158 + 0xb8);
      lVar6 = DAT_0918c158;
    }
    *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + -1;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar6 = DAT_0918c158;
  }
  lVar7 = *(long *)(lVar6 + 0xb8);
  if (*(int *)(lVar7 + 0x18) < 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar7 = *(long *)(DAT_0918c158 + 0xb8);
    }
    *(undefined4 *)(lVar7 + 0x18) = 0;
    DG_Tweening_Core_Debugger__LogRemoveActiveTweenError(DAT_092241b8,param_1,0);
    lVar6 = DAT_0918c158;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar6 = DAT_0918c158;
  }
  lVar7 = *(long *)(lVar6 + 0xb8);
  if (*(int *)(lVar7 + 0x2c) < 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar7 = *(long *)(DAT_0918c158 + 0xb8);
    }
    *(undefined4 *)(lVar7 + 0x2c) = 0;
    DG_Tweening_Core_Debugger__LogRemoveActiveTweenError(DAT_092241b0,param_1,0);
    lVar6 = DAT_0918c158;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar6 = DAT_0918c158;
  }
  lVar7 = *(long *)(lVar6 + 0xb8);
  if (-1 < *(int *)(lVar7 + 0x30)) {
    return;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar7 = *(long *)(DAT_0918c158 + 0xb8);
  }
  *(undefined4 *)(lVar7 + 0x30) = 0;
  DG_Tweening_Core_Debugger__LogRemoveActiveTweenError(DAT_092241a8,param_1,0);
  return;
}

