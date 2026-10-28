// rea decompile_all
// name: CakeOrder.InGame.UIButtonHUDBooster$$UpdateVisual
// address: 0x4291740
// body: available
// range: 0x4291740-0x4291c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4291b44 to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4291b64 to 0x42c8d14 CakeOrder.BaseUI.UIElementAbstract$$Hide (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4291c90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIButtonHUDBooster__UpdateVisual(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined4 local_28;
  int local_24;
  
  if ((DAT_0951719b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_091b4b50);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09226038);
    DAT_0951719b = 1;
  }
  local_24 = 0;
  uVar2 = FUN_05a8f088(DAT_091b4b50);
  if ((uVar2 & 1) == 0) {
LAB_042918f4:
    local_24 = 0;
LAB_042918f8:
    uVar9 = *(undefined8 *)(param_1 + 0x98);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(param_1 + 0xd0) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0xd0) + 0x18), lVar3 == 0)) goto LAB_04291c90;
      if (0 < *(int *)(lVar3 + 0x24)) {
        uVar9 = *(undefined8 *)(param_1 + 0x80);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar9,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x80) == 0) goto LAB_04291c90;
          UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x80),0,0);
        }
        uVar9 = *(undefined8 *)(param_1 + 0x98);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar9,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0x98) == 0) goto LAB_04291c90;
          UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x98),1,0);
          if ((*(long *)(param_1 + 0xd0) == 0) ||
             (lVar3 = *(long *)(*(long *)(param_1 + 0xd0) + 0x18), lVar3 == 0)) goto LAB_04291c90;
          local_28 = *(undefined4 *)(lVar3 + 0x24);
          plVar10 = *(long **)(param_1 + 0xa0);
          uVar9 = FUN_03f5c42c(DAT_09535420,&local_28);
          uVar9 = System_String__Format(DAT_09226038,uVar9,0);
          if (plVar10 == (long *)0x0) goto LAB_04291c90;
          (**(code **)(*plVar10 + 0x558))(plVar10,uVar9,*(undefined8 *)(*plVar10 + 0x560));
          uVar2 = FUN_05a8f088(DAT_091b4b68);
          if ((uVar2 & 1) == 0) {
            lVar3 = 0;
          }
          else {
            lVar3 = *(long *)(DAT_091b4b60 + 0x20);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03f95a6c();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03f95a6c();
            }
            if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_04291c90;
            lVar3 = *(long *)(**(long **)(lVar3 + 0xb8) + 0x40);
          }
          uVar2 = FUN_05a8f088(DAT_091b4b50);
          if ((uVar2 & 1) == 0) {
            iVar1 = 0;
          }
          else {
            lVar4 = *(long *)(DAT_091b4b48 + 0x20);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_03f95a6c();
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_03f95a6c();
            }
            if (lVar3 == 0) goto LAB_04291c90;
            if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_04291c90;
            iVar1 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                              (**(long **)(lVar4 + 0xb8),*(undefined8 *)(lVar3 + 0x18),0);
          }
          if ((*(long *)(param_1 + 0xd0) == 0) ||
             (lVar4 = *(long *)(*(long *)(param_1 + 0xd0) + 0x18), lVar4 == 0)) goto LAB_04291c90;
          plVar10 = *(long **)(param_1 + 0xa0);
          if (iVar1 < *(int *)(lVar4 + 0x24)) {
            if (lVar3 == 0) goto LAB_04291c90;
            puVar5 = (undefined4 *)(lVar3 + 0x50);
            puVar6 = (undefined4 *)(lVar3 + 0x54);
            puVar7 = (undefined4 *)(lVar3 + 0x58);
            puVar8 = (undefined4 *)(lVar3 + 0x5c);
          }
          else {
            if (lVar3 == 0) goto LAB_04291c90;
            puVar5 = (undefined4 *)(lVar3 + 0x40);
            puVar6 = (undefined4 *)(lVar3 + 0x44);
            puVar7 = (undefined4 *)(lVar3 + 0x48);
            puVar8 = (undefined4 *)(lVar3 + 0x4c);
          }
          if (plVar10 == (long *)0x0) goto LAB_04291c90;
          (**(code **)(*plVar10 + 0x2a8))
                    (*puVar5,*puVar6,*puVar7,*puVar8,plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
        }
        goto LAB_04291c48;
      }
    }
    uVar9 = *(undefined8 *)(param_1 + 0x90);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar2 & 1) == 0) {
      CakeOrder_BaseUI_UIElementAbstract__Hide(0,param_1,0,0);
      return;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x80);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x80) == 0) goto LAB_04291c90;
      UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x80),0,0);
    }
    uVar9 = *(undefined8 *)(param_1 + 0x98);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x98) == 0) goto LAB_04291c90;
      UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x98),0,0);
    }
    uVar9 = *(undefined8 *)(param_1 + 0x90);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x90) != 0) {
        UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x90),1,0);
        return;
      }
LAB_04291c90:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 200);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar2 & 1) == 0) goto LAB_042918f4;
    lVar3 = *(long *)(DAT_091b4b48 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if ((*(long *)(param_1 + 200) == 0) || (**(long **)(lVar3 + 0xb8) == 0)) goto LAB_04291c90;
    local_24 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                         (**(long **)(lVar3 + 0xb8),*(undefined8 *)(*(long *)(param_1 + 200) + 0x18)
                          ,0);
    if (local_24 < 1) goto LAB_042918f8;
    uVar9 = *(undefined8 *)(param_1 + 0x80);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x80) == 0) goto LAB_04291c90;
      UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x80),1,0);
      plVar10 = *(long **)(param_1 + 0x88);
      uVar9 = System_Int32__ToString(&local_24,0);
      if (plVar10 == (long *)0x0) goto LAB_04291c90;
      (**(code **)(*plVar10 + 0x558))(plVar10,uVar9,*(undefined8 *)(*plVar10 + 0x560));
    }
    uVar9 = *(undefined8 *)(param_1 + 0x98);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x98) == 0) goto LAB_04291c90;
      UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x98),0,0);
    }
LAB_04291c48:
    uVar9 = *(undefined8 *)(param_1 + 0x90);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x90) == 0) goto LAB_04291c90;
      UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x90),0,0);
    }
  }
  return;
}

