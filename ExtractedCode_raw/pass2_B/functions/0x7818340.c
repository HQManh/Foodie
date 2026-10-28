// rea decompile_all
// name: _GAME.DreamyPass.PopupDreamyPassFirstOpenCtrl.<OnStartStep3>d__19$$MoveNext
// address: 0x7818340
// body: available
// range: 0x7818340-0x781849b inclusive
// range: 0x78184b4-0x781877b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7818488 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x781848c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7818490 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7818494 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7818498 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7818774 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7818778 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_PopupDreamyPassFirstOpenCtrl_<OnStartStep3>d__19__MoveNext(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  
  if ((DAT_0952329f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2d30);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091b8548);
    FUN_03f5c2a4(&DAT_091b8558);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_0952329f = 1;
  }
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  lVar10 = *(long *)(param_1 + 10);
  if (*param_1 == 0) {
    local_80 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
    goto LAB_078185a4;
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar7 = *(long **)(lVar10 + 0x138);
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  (**(code **)(*plVar7 + 0x178))
            (plVar7,*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x20),
             *(undefined8 *)(*plVar7 + 0x180));
  if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar7 = *(long **)(lVar10 + 0x140);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  (**(code **)(*plVar7 + 0x188))
            (plVar7,*(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x18),0,
             *(undefined8 *)(*plVar7 + 400));
  do {
    do {
      lVar4 = *(long *)(DAT_091b8558 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      uVar8 = **(undefined8 **)(lVar4 + 0xb8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar5 & 1) == 0) {
        lVar4 = *(long *)(DAT_091b8548 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        uVar8 = **(undefined8 **)(lVar4 + 0xb8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar5 = UnityEngine_Object__op_Equality(uVar8,0,0);
        if ((uVar5 & 1) == 0) {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(long *)(lVar10 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          UnityEngine_GameObject__SetActive(*(long *)(lVar10 + 0x130),1,0);
        }
        *param_1 = -2;
        System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
        return;
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar11 = Cysharp_Threading_Tasks_UniTask__WaitForEndOfFrame(0,0);
      local_70 = auVar11;
      thunk_FUN_03f5d7b8(local_70,0);
      uVar1 = local_70._8_8_;
      uVar8 = local_70._0_8_;
      local_80 = local_70;
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
      if ((long *)uVar8 != (long *)0x0) {
        lVar4 = *(long *)uVar8;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_091868c0) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_07818590;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(uVar8,DAT_091868c0,0);
LAB_07818590:
        iVar2 = (*(code *)*puVar3)(uVar8,uVar1 & 0xffffffff,puVar3[1]);
        if (iVar2 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0xc) = local_80;
          thunk_FUN_03f5d7b8(param_1 + 0xc,0);
          FUN_049c88a0(param_1 + 2,local_80,param_1,DAT_091c2d30);
          return;
        }
      }
LAB_078185a4:
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar8 = local_80._0_8_;
    } while ((long *)local_80._0_8_ == (long *)0x0);
    lVar4 = *(long *)local_80._0_8_;
    uVar9 = local_80._8_8_ & 0xffff;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091868c0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_07818620;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,2);
LAB_07818620:
    (*(code *)*puVar3)(uVar8,uVar9,puVar3[1]);
  } while( true );
}

