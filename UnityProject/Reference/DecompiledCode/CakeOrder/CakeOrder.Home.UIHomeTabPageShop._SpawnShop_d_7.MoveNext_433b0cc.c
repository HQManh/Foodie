// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageShop.<SpawnShop>d__7$$MoveNext
// address: 0x433b0cc
// body: available
// range: 0x433b0cc-0x433b687 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x433b658 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433b65c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433b660 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433b664 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433b668 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433b66c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433b670 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433b674 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433b67c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433b680 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433b684 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageShop_<SpawnShop>d__7__MoveNext(int *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_48;
  undefined8 local_38;
  
  if ((DAT_0951771b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c10a0);
    FUN_03f5c2a4(&DAT_09197800);
    FUN_03f5c2a4(&DAT_09197808);
    FUN_03f5c2a4(&DAT_09197810);
    FUN_03f5c2a4(&DAT_09199ff0);
    FUN_03f5c2a4(&DAT_0919a010);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091cd658);
    FUN_03f5c2a4(&DAT_091cd930);
    FUN_03f5c2a4(&DAT_091cda90);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_091bc308);
    FUN_03f5c2a4(&DAT_091bc310);
    FUN_03f5c2a4(&DAT_091bcc08);
    FUN_03f5c2a4(&DAT_091f9f60);
    FUN_03f5c2a4(&DAT_091f64e0);
    DAT_0951771b = 1;
  }
  lVar10 = *(long *)(param_1 + 8);
  local_38 = 0;
  local_48 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_0433b2f4:
    FUN_06209cec(&local_38,DAT_091bc308);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = FUN_0640f818(lVar10 + 0xc0,DAT_09197808);
    if (iVar1 == 1) {
      uVar5 = FUN_0640f7ac(lVar10 + 0xc0,DAT_09197800);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(lVar10,0);
        if ((uVar3 & 1) != 0) {
          uVar5 = *(undefined8 *)(lVar10 + 0xa0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
          if ((uVar3 & 1) == 0) {
            plVar2 = (long *)UnityEngine_Component__get_transform(lVar10,0);
            if ((plVar2 != (long *)0x0) && (*plVar2 != DAT_09189c98)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar2);
            }
          }
          else {
            plVar2 = *(long **)(lVar10 + 0xa0);
          }
          uVar5 = FUN_0640f7ac(lVar10 + 0xc0,DAT_09197800);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar4 = FUN_04c35338(uVar5,plVar2,DAT_091d4bc0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = FUN_04b7c324(lVar4,DAT_091cda90);
          uVar3 = UnityEngine_Object__op_Implicit(lVar4,0);
          if ((uVar3 & 1) == 0) {
            uVar5 = UnityEngine_Object__GetName(lVar10,0);
            lVar4 = FUN_0640f7ac(lVar10 + 0xc0,DAT_09197800);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar8 = UnityEngine_Object__GetName(lVar4,0);
            uVar5 = System_String__Concat(uVar5,DAT_091f9f60,uVar8,DAT_091f64e0,0);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            UnityEngine_Debug__LogError(uVar5,lVar10,0);
            lVar4 = 0;
          }
          else {
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = UnityEngine_Component__get_transform(lVar4,0);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            UnityEngine_Transform__SetAsLastSibling(lVar7,0);
            uVar5 = *(undefined8 *)(lVar4 + 0x138);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
            if ((uVar3 & 1) != 0) {
              if (*(long *)(lVar4 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar7 = UnityEngine_Component__get_gameObject(*(long *)(lVar4 + 0x138),0);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar5 = FUN_04b7c324(lVar7,DAT_091cd930);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
              if ((uVar3 & 1) == 0) {
                uVar5 = FUN_04b7c294(lVar7,DAT_091cd658);
              }
              CakeOrder_Home_UIHomeTabPage__RegisterDragToChangeTab(lVar10,uVar5,0);
            }
          }
          goto LAB_0433b3b8;
        }
      }
    }
  }
  else {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar2 = *(long **)(lVar10 + 0x98);
    if ((plVar2 != (long *)0x0) &&
       (uVar3 = (**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(*plVar2 + 0x250)),
       (uVar3 & 1) != 0)) {
      plVar2 = *(long **)(lVar10 + 0x98);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = FUN_03f5c420(*(undefined8 *)
                            (*plVar2 + (ulong)*(ushort *)(DAT_091c10a0 + 0x50) * 0x10 + 0x140));
      (**(code **)(lVar4 + 8))(&local_88,plVar2);
      uStack_68 = uStack_80;
      local_70 = local_88;
      local_60 = local_78;
      *(undefined8 *)(lVar10 + 200) = uStack_80;
      *(undefined8 *)(lVar10 + 0xc0) = local_88;
      *(undefined8 *)(lVar10 + 0xd0) = local_78;
      thunk_FUN_03f5d7b8(lVar10 + 0xc0,0);
      lVar4 = FUN_0640f884(lVar10 + 0xc0,DAT_09197810);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_38 = FUN_062ee710(lVar4,DAT_091bcc08);
      uVar3 = FUN_06209cac(&local_38,DAT_091bc310);
      if ((uVar3 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 10) = local_38;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_04341dac(param_1 + 2,&local_38,param_1,DAT_09199ff0);
        return;
      }
      goto LAB_0433b2f4;
    }
  }
  lVar4 = 0;
LAB_0433b3b8:
  plVar2 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar2 == (long *)0x0) {
    *(long *)(param_1 + 6) = lVar4;
    thunk_FUN_03f5d7b8(param_1 + 6,lVar4);
  }
  else {
    lVar10 = *(long *)(DAT_0919a010 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c(lVar10);
    }
    lVar7 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0433b468;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar2,lVar10,2);
LAB_0433b468:
    (*(code *)*puVar6)(plVar2,lVar4,puVar6[1]);
  }
  return;
}

