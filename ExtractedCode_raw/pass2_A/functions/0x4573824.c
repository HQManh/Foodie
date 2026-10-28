// rea decompile_all
// name: DG.Tweening.Core.TweenManager$$Despawn
// address: 0x4573824
// body: available
// range: 0x4573824-0x4573d13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4573cf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4573cfc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4573d04 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4573d10 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Core_TweenManager__Despawn(long *param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  
  if ((DAT_095188c2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1158);
    FUN_03f5c2a4(&DAT_091b1160);
    FUN_03f5c2a4(&DAT_0918a868);
    FUN_03f5c2a4(&DAT_091bb458);
    FUN_03f5c2a4(&DAT_0918c158);
    DAT_095188c2 = 1;
  }
  if (param_1 == (long *)0x0) goto LAB_04573cf8;
  if (param_1[0x11] != 0) {
    DG_Tweening_Tween__OnTweenCallback(param_1[0x11],param_1,0);
  }
  if ((param_2 & 1) != 0) {
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    DG_Tweening_Core_TweenManager__RemoveActiveTween(param_1);
  }
  iVar6 = (int)param_1[2];
  if (*(char *)((long)param_1 + 0x9a) == '\0') {
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar2 = DAT_0918a868;
        *(int *)(*(long *)(DAT_0918c158 + 0xb8) + 0x40) =
             *(int *)(*(long *)(DAT_0918c158 + 0xb8) + 0x40) + -1;
        if (*param_1 != lVar2) {
LAB_04573d00:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(param_1);
        }
        if (param_1[0x24] == 0) goto LAB_04573cf8;
        iVar6 = *(int *)(param_1[0x24] + 0x18);
        if (0 < iVar6) {
          iVar7 = 0;
          do {
            if (param_1[0x24] == 0) goto LAB_04573cf8;
            uVar3 = FUN_057e0998(param_1[0x24],iVar7,DAT_091b1160);
            if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918c158);
            }
            DG_Tweening_Core_TweenManager__Despawn(uVar3,0);
            iVar7 = iVar7 + 1;
          } while (iVar6 != iVar7);
        }
      }
      goto LAB_04573cd4;
    }
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar6 = -1;
    piVar5 = (int *)(*(long *)(DAT_0918c158 + 0xb8) + 0x3c);
  }
  else {
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar2 = *(long *)(*(long *)(DAT_0918c158 + 0xb8) + 0x58);
        if (lVar2 != 0) {
          FUN_061a19e4(lVar2,param_1,DAT_091bb458);
          lVar2 = DAT_0918a868;
          *(int *)(*(long *)(DAT_0918c158 + 0xb8) + 0x38) =
               *(int *)(*(long *)(DAT_0918c158 + 0xb8) + 0x38) + 1;
          if (*param_1 != lVar2) goto LAB_04573d00;
          if (param_1[0x24] != 0) {
            iVar6 = *(int *)(param_1[0x24] + 0x18);
            if (0 < iVar6) {
              iVar7 = 0;
              do {
                if (param_1[0x24] == 0) goto LAB_04573cf8;
                uVar3 = FUN_057e0998(param_1[0x24],iVar7,DAT_091b1160);
                if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_0918c158);
                }
                DG_Tweening_Core_TweenManager__Despawn(uVar3,0);
                iVar7 = iVar7 + 1;
              } while (iVar6 != iVar7);
            }
            goto LAB_04573cd4;
          }
        }
LAB_04573cf8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_04573cd4;
    }
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(DAT_0918c158 + 0xb8);
    lVar2 = DAT_0918c158;
    if (*(int *)(lVar4 + 0x84) == -1) {
      if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar4 = *(long *)(DAT_0918c158 + 0xb8);
      }
      lVar2 = DAT_0918c158;
      iVar6 = *(int *)(lVar4 + 8) + -1;
      *(int *)(lVar4 + 0x80) = iVar6;
      *(int *)(lVar4 + 0x84) = iVar6;
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar2 = DAT_0918c158;
    }
    lVar4 = *(long *)(lVar2 + 0xb8);
    uVar8 = *(uint *)(lVar4 + 0x84);
    if ((int)uVar8 < *(int *)(lVar4 + 8) + -1) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar4 = *(long *)(DAT_0918c158 + 0xb8);
        uVar8 = *(uint *)(lVar4 + 0x84);
      }
      plVar9 = *(long **)(lVar4 + 0x50);
      if (plVar9 == (long *)0x0) goto LAB_04573cf8;
      lVar2 = thunk_FUN_03f99350(param_1,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar2 == 0) {
LAB_04573d08:
        uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar3,0);
      }
      if (*(uint *)(plVar9 + 3) <= uVar8 + 1) {
LAB_04573cfc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar9[(long)(int)(uVar8 + 1) + 4] = (long)param_1;
      thunk_FUN_03f5d7b8(plVar9 + (long)(int)(uVar8 + 1) + 4,param_1);
      lVar2 = DAT_0918c158;
      lVar4 = *(long *)(DAT_0918c158 + 0xb8);
      iVar6 = *(int *)(lVar4 + 0x84) + 1;
      *(int *)(lVar4 + 0x84) = iVar6;
      if (iVar6 < *(int *)(lVar4 + 0x80)) {
        if (*(int *)(lVar2 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar4 = *(long *)(DAT_0918c158 + 0xb8);
          iVar6 = *(int *)(lVar4 + 0x84);
          lVar2 = DAT_0918c158;
        }
        *(int *)(lVar4 + 0x80) = iVar6;
      }
    }
    else {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        FUN_03f5c424();
        uVar8 = *(uint *)(*(long *)(DAT_0918c158 + 0xb8) + 0x84);
        lVar2 = DAT_0918c158;
      }
      if (-1 < (int)uVar8) {
        do {
          if (*(int *)(lVar2 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar2 = DAT_0918c158;
          }
          plVar9 = *(long **)(*(long *)(lVar2 + 0xb8) + 0x50);
          if (plVar9 == (long *)0x0) goto LAB_04573cf8;
          if (*(uint *)(plVar9 + 3) <= uVar8) goto LAB_04573cfc;
          if (plVar9[(ulong)uVar8 + 4] == 0) {
            if (*(int *)(lVar2 + 0xe4) == 0) {
              FUN_03f5c424();
              plVar9 = *(long **)(*(long *)(DAT_0918c158 + 0xb8) + 0x50);
              if (plVar9 == (long *)0x0) goto LAB_04573cf8;
            }
            lVar2 = thunk_FUN_03f99350(param_1,*(undefined8 *)(*plVar9 + 0x40));
            if (lVar2 == 0) goto LAB_04573d08;
            if (*(uint *)(plVar9 + 3) <= uVar8) goto LAB_04573cfc;
            plVar9[(ulong)uVar8 + 4] = (long)param_1;
            thunk_FUN_03f5d7b8(plVar9 + (ulong)uVar8 + 4,param_1);
            lVar4 = *(long *)(DAT_0918c158 + 0xb8);
            lVar2 = DAT_0918c158;
            if ((int)uVar8 < *(int *)(lVar4 + 0x80)) {
              if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
                FUN_03f5c424();
                lVar4 = *(long *)(DAT_0918c158 + 0xb8);
              }
              lVar2 = DAT_0918c158;
              *(uint *)(lVar4 + 0x80) = uVar8;
            }
            if (*(int *)(lVar2 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar2 = DAT_0918c158;
            }
            lVar4 = *(long *)(lVar2 + 0xb8);
            iVar6 = *(int *)(lVar4 + 0x80);
            if (*(int *)(lVar4 + 0x84) < iVar6) {
              if (*(int *)(lVar2 + 0xe4) == 0) {
                FUN_03f5c424();
                lVar4 = *(long *)(DAT_0918c158 + 0xb8);
                iVar6 = *(int *)(lVar4 + 0x80);
                lVar2 = DAT_0918c158;
              }
              *(int *)(lVar4 + 0x84) = iVar6;
            }
            break;
          }
          bVar1 = 0 < (int)uVar8;
          uVar8 = uVar8 - 1;
        } while (bVar1);
      }
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar2 = DAT_0918c158;
    }
    iVar6 = 1;
    piVar5 = (int *)(*(long *)(lVar2 + 0xb8) + 0x34);
  }
  *piVar5 = *piVar5 + iVar6;
LAB_04573cd4:
  *(undefined1 *)(param_1 + 0x1d) = 0;
                    /* WARNING: Could not recover jumptable at 0x04573cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  return;
}

