// rea decompile_all
// name: DG.Tweening.Core.TweenManager$$AddActiveTween
// address: 0x4572a38
// body: available
// range: 0x4572a38-0x4572d0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4572cf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4572d04 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4572d08 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Core_TweenManager__AddActiveTween(long param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if ((DAT_095188de & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_0918c158);
    FUN_03f5c2a4(&DAT_092241b8);
    DAT_095188de = 1;
  }
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(char *)(*(long *)(DAT_0918c158 + 0xb8) + 0x78) != '\0') {
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    DG_Tweening_Core_TweenManager__ReorganizeActiveTweens();
  }
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = DAT_0918c158;
  if (*(int *)(*(long *)(DAT_0918c158 + 0xb8) + 0x18) < 0) {
    DG_Tweening_Core_Debugger__LogAddActiveTweenError(DAT_092241b8,param_1,0);
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = DAT_0918c158;
    *(undefined4 *)(*(long *)(DAT_0918c158 + 0xb8) + 0x18) = 0;
  }
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0xe8) = 1;
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183190);
      lVar6 = DAT_0918c158;
    }
    iVar1 = *(int *)(lVar6 + 0xe4);
    uVar3 = *(undefined1 *)(*(long *)(DAT_09183190 + 0xb8) + 0x40);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(*(long *)(DAT_09183190 + 0xb8) + 0x3c);
    *(undefined1 *)(param_1 + 0x54) = uVar3;
    if (iVar1 == 0) {
      FUN_03f5c424();
      lVar6 = DAT_0918c158;
    }
    lVar6 = *(long *)(lVar6 + 0xb8);
    uVar4 = *(uint *)(lVar6 + 0x18);
    plVar8 = *(long **)(lVar6 + 0x48);
    *(uint *)(lVar6 + 0x74) = uVar4;
    *(uint *)(param_1 + 0xf8) = uVar4;
    if (plVar8 != (long *)0x0) {
      lVar6 = thunk_FUN_03f99350(param_1,*(undefined8 *)(*plVar8 + 0x40));
      if (lVar6 == 0) {
        uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,0);
      }
      if (uVar4 < *(uint *)(plVar8 + 3)) {
        plVar8[(long)(int)uVar4 + 4] = param_1;
        thunk_FUN_03f5d7b8(plVar8 + (long)(int)uVar4 + 4,param_1);
        iVar1 = *(int *)(param_1 + 0x50);
        iVar2 = *(int *)(DAT_0918c158 + 0xe4);
        if (iVar1 == 2) {
          if (iVar2 == 0) {
            FUN_03f5c424();
          }
          lVar6 = DAT_0918c158;
          lVar7 = *(long *)(DAT_0918c158 + 0xb8);
          *(undefined1 *)(lVar7 + 0x13) = 1;
          *(int *)(lVar7 + 0x24) = *(int *)(lVar7 + 0x24) + 1;
        }
        else if (iVar1 == 1) {
          if (iVar2 == 0) {
            FUN_03f5c424();
          }
          lVar6 = DAT_0918c158;
          lVar7 = *(long *)(DAT_0918c158 + 0xb8);
          *(undefined1 *)(lVar7 + 0x12) = 1;
          *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + 1;
        }
        else if (iVar1 == 0) {
          if (iVar2 == 0) {
            FUN_03f5c424();
          }
          lVar6 = DAT_0918c158;
          lVar7 = *(long *)(DAT_0918c158 + 0xb8);
          *(undefined1 *)(lVar7 + 0x11) = 1;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        }
        else {
          if (iVar2 == 0) {
            FUN_03f5c424();
          }
          lVar6 = DAT_0918c158;
          lVar7 = *(long *)(DAT_0918c158 + 0xb8);
          *(undefined1 *)(lVar7 + 0x14) = 1;
          *(int *)(lVar7 + 0x28) = *(int *)(lVar7 + 0x28) + 1;
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar6 = DAT_0918c158;
        }
        lVar7 = *(long *)(lVar6 + 0xb8);
        iVar1 = *(int *)(param_1 + 0x10);
        iVar2 = *(int *)(lVar6 + 0xe4);
        *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
        if (iVar1 == 0) {
          if (iVar2 == 0) {
            FUN_03f5c424();
            lVar7 = *(long *)(DAT_0918c158 + 0xb8);
            lVar6 = DAT_0918c158;
          }
          *(int *)(lVar7 + 0x2c) = *(int *)(lVar7 + 0x2c) + 1;
        }
        else {
          if (iVar2 == 0) {
            FUN_03f5c424();
            lVar7 = *(long *)(DAT_0918c158 + 0xb8);
            lVar6 = DAT_0918c158;
          }
          *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + 1;
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar6 = DAT_0918c158;
        }
        *(undefined1 *)(*(long *)(lVar6 + 0xb8) + 0x10) = 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

