// rea decompile_all
// name: _GAME.WeeklyContest.PlayerWCRankItemUICtrl$$UpdateUIData
// address: 0x77e0c60
// body: available
// range: 0x77e0c60-0x77e1117 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77e1114 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_WeeklyContest_PlayerWCRankItemUICtrl__UpdateUIData(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_0952305b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_091fa028);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_0920c878);
    DAT_0952305b = 1;
  }
  plVar5 = (long *)(param_1 + 0x68);
  *plVar5 = param_2;
  thunk_FUN_03f5d7b8(plVar5,param_2);
  if (*plVar5 != 0) {
    lVar7 = *(long *)(*plVar5 + 0x10);
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522cb0 == '\0') {
      FUN_03f5c2a4(&DAT_09180dc0);
      DAT_09522cb0 = '\x01';
    }
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar7 != 0) {
      uVar2 = System_String__Equals(lVar7,**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
        if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
          UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x28),0,0);
        }
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
        if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
          UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x20),1,0);
        }
        if (((*(long *)(param_1 + 0x68) == 0) ||
            (lVar7 = *(long *)(*(long *)(param_1 + 0x68) + 0x20), lVar7 == 0)) ||
           (plVar9 = *(long **)(param_1 + 0x38), plVar9 == (long *)0x0)) goto LAB_077e1114;
        (**(code **)(*plVar9 + 0x178))
                  (plVar9,*(undefined4 *)(lVar7 + 0x20),*(undefined8 *)(*plVar9 + 0x180));
        if (((*(long *)(param_1 + 0x68) == 0) ||
            (lVar7 = *(long *)(*(long *)(param_1 + 0x68) + 0x20), lVar7 == 0)) ||
           (plVar9 = *(long **)(param_1 + 0x40), plVar9 == (long *)0x0)) goto LAB_077e1114;
        (**(code **)(*plVar9 + 0x178))
                  (plVar9,*(undefined4 *)(lVar7 + 0x24),*(undefined8 *)(*plVar9 + 0x180));
        if (((*(long *)(param_1 + 0x68) == 0) ||
            (lVar7 = *(long *)(*(long *)(param_1 + 0x68) + 0x20), lVar7 == 0)) ||
           (plVar9 = *(long **)(param_1 + 0x48), plVar9 == (long *)0x0)) goto LAB_077e1114;
        (**(code **)(*plVar9 + 0x178))
                  (plVar9,*(undefined4 *)(lVar7 + 0x28),*(undefined8 *)(*plVar9 + 0x180));
        lVar7 = *(long *)(param_1 + 0x68);
        if (((lVar7 == 0) || (*(long *)(lVar7 + 0x20) == 0)) ||
           (plVar9 = *(long **)(param_1 + 0x48), plVar9 == (long *)0x0)) goto LAB_077e1114;
        iVar1 = *(int *)(lVar7 + 0x18);
        lVar4 = *plVar9;
        uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0x20) + 0x18);
      }
      else {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
        if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
          UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x28),1,0);
        }
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar8,0,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_077e1114;
          UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x20),0,0);
        }
        plVar9 = *(long **)(param_1 + 0x38);
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if ((**(long **)(DAT_091896c0 + 0xb8) == 0) || (plVar9 == (long *)0x0)) goto LAB_077e1114;
        (**(code **)(*plVar9 + 0x178))
                  (plVar9,*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x20),
                   *(undefined8 *)(*plVar9 + 0x180));
        if ((**(long **)(DAT_091896c0 + 0xb8) == 0) ||
           (plVar9 = *(long **)(param_1 + 0x40), plVar9 == (long *)0x0)) goto LAB_077e1114;
        (**(code **)(*plVar9 + 0x178))
                  (plVar9,*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x24),
                   *(undefined8 *)(*plVar9 + 0x180));
        if ((**(long **)(DAT_091896c0 + 0xb8) == 0) ||
           (plVar9 = *(long **)(param_1 + 0x48), plVar9 == (long *)0x0)) goto LAB_077e1114;
        (**(code **)(*plVar9 + 0x178))
                  (plVar9,*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x28),
                   *(undefined8 *)(*plVar9 + 0x180));
        if ((**(long **)(DAT_091896c0 + 0xb8) == 0) ||
           ((*plVar5 == 0 || (plVar9 = *(long **)(param_1 + 0x48), plVar9 == (long *)0x0))))
        goto LAB_077e1114;
        iVar1 = *(int *)(*plVar5 + 0x18);
        lVar4 = *plVar9;
        uVar8 = *(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x18);
      }
      (**(code **)(lVar4 + 0x188))(plVar9,uVar8,iVar1 < 3,*(undefined8 *)(lVar4 + 400));
      lVar7 = DAT_091c0310;
      lVar4 = *plVar5;
      if (lVar4 != 0) {
        lVar6 = *(long *)(param_1 + 0x50);
        if (*(int *)(lVar4 + 0x18) < 3) {
          lVar4 = *(long *)(DAT_091c0310 + 0x38);
          if (lVar4 == 0) {
            FUN_03f95ac8(DAT_091c0310);
            lVar4 = *(long *)(lVar7 + 0x38);
          }
          lVar4 = *(long *)(lVar4 + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03f95a6c();
          }
          if (*(int *)(lVar4 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c();
          }
          uVar8 = _GAME_Localize_LocalizeManager__GetTextByLanguageByKey
                            (DAT_0920c878,**(undefined8 **)(lVar7 + 0xb8),0);
          if (*plVar5 == 0) goto LAB_077e1114;
          local_34 = *(undefined4 *)(*plVar5 + 0x1c);
          uVar3 = FUN_03f5c42c(DAT_09535420,&local_34);
          uVar3 = System_String__Format(DAT_091fa028,uVar3,0);
          uVar8 = System_String__Concat(uVar8,uVar3,0);
        }
        else {
          local_38 = *(undefined4 *)(lVar4 + 0x1c);
          uVar8 = FUN_03f5c42c(DAT_09535420,&local_38);
          uVar8 = System_String__Format(DAT_09226038,uVar8,0);
        }
        if (lVar6 != 0) {
          TMPro_TMP_Text__SetText(lVar6,uVar8,0);
          return;
        }
      }
    }
  }
LAB_077e1114:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

