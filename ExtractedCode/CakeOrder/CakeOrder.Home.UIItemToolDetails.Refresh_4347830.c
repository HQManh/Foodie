// rea decompile_all
// name: CakeOrder.Home.UIItemToolDetails$$Refresh
// address: 0x4347830
// body: available
// range: 0x4347830-0x4347c9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4347c8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4347c90 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4347c9c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIItemToolDetails__Refresh(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  int local_48;
  int local_44;
  
  if ((DAT_09517776 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0921eca0);
    FUN_03f5c2a4(&DAT_0921eca8);
    DAT_09517776 = 1;
  }
  local_44 = 0;
  if (*(int *)(param_1 + 0x98) < 0) {
    return;
  }
  lVar3 = *(long *)(DAT_091b4a58 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x88);
    lVar10 = **(long **)(lVar3 + 0xb8);
    lVar3 = CakeOrder_MapToolConfig__GetToolSO
                      (*(long *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98),0);
    if ((lVar3 != 0) && (lVar10 != 0)) {
      iVar1 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetToolLevel
                        (lVar10,uVar11,*(undefined8 *)(lVar3 + 0x18),0);
      iVar1 = iVar1 + 1;
      iVar2 = CakeOrder_Home_UIItemToolDetails__GetMaxLevel(param_1);
      uVar11 = *(undefined8 *)(param_1 + 0x60);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar11,0);
      if ((uVar4 & 1) != 0) {
        plVar12 = *(long **)(param_1 + 0x60);
        if (iVar1 < iVar2) {
          plVar5 = (long *)FUN_03f5c394(DAT_09180318,1);
          local_48 = iVar1;
          lVar3 = FUN_03f5c42c(DAT_09535420,&local_48);
          if (plVar5 == (long *)0x0) goto LAB_04347c8c;
          if ((lVar3 != 0) &&
             (lVar10 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0)) {
            uVar11 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar11,0);
          }
          if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar5[4] = lVar3;
          thunk_FUN_03f5d7b8(plVar5 + 4,lVar3);
          if (*(int *)(DAT_09182278 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar11 = CakeOrder_Localization_CakeLocalization__TrFormat(DAT_0921eca8,plVar5,0);
        }
        else {
          if (*(int *)(DAT_09182278 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar11 = CakeOrder_Localization_CakeLocalization__Tr(DAT_0921eca0,0);
        }
        if (plVar12 == (long *)0x0) goto LAB_04347c8c;
        (**(code **)(*plVar12 + 0x558))(plVar12,uVar11,*(undefined8 *)(*plVar12 + 0x560));
      }
      uVar11 = *(undefined8 *)(param_1 + 0x78);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar11,0);
      if ((uVar4 & 1) != 0) {
        if ((*(long *)(param_1 + 0x78) == 0) ||
           (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x78),0), lVar3 == 0))
        goto LAB_04347c8c;
        UnityEngine_GameObject__SetActive(lVar3,iVar1 < iVar2,0);
      }
      if (iVar1 < iVar2) {
        local_44 = CakeOrder_Home_UIItemToolDetails__GetUpgradeCost(param_1,iVar1);
        lVar3 = *(long *)(DAT_091b4b60 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c(lVar3);
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c();
        }
        if (**(long **)(lVar3 + 0xb8) != 0) {
          lVar10 = *(long *)(**(long **)(lVar3 + 0xb8) + 0x48);
          lVar3 = *(long *)(DAT_091b4b48 + 0x20);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03f95a6c();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03f95a6c();
          }
          if ((lVar10 != 0) && (**(long **)(lVar3 + 0xb8) != 0)) {
            iVar1 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                              (**(long **)(lVar3 + 0xb8),*(undefined8 *)(lVar10 + 0x18),0);
            uVar11 = *(undefined8 *)(param_1 + 0x80);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar4 = UnityEngine_Object__op_Implicit(uVar11,0);
            if ((uVar4 & 1) == 0) {
              return;
            }
            plVar12 = *(long **)(param_1 + 0x80);
            uVar11 = System_Int32__ToString(&local_44,0);
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x558))(plVar12,uVar11,*(undefined8 *)(*plVar12 + 0x560));
              plVar12 = *(long **)(param_1 + 0x80);
              if (iVar1 < local_44) {
                puVar6 = (undefined4 *)(lVar10 + 0x50);
                puVar7 = (undefined4 *)(lVar10 + 0x54);
                puVar8 = (undefined4 *)(lVar10 + 0x58);
                puVar9 = (undefined4 *)(lVar10 + 0x5c);
              }
              else {
                puVar6 = (undefined4 *)(lVar10 + 0x40);
                puVar7 = (undefined4 *)(lVar10 + 0x44);
                puVar8 = (undefined4 *)(lVar10 + 0x48);
                puVar9 = (undefined4 *)(lVar10 + 0x4c);
              }
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 0x2a8))
                          (*puVar6,*puVar7,*puVar8,*puVar9,plVar12,*(undefined8 *)(*plVar12 + 0x2b0)
                          );
                return;
              }
            }
          }
        }
      }
      else {
        uVar11 = *(undefined8 *)(param_1 + 0x80);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(uVar11,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        plVar12 = *(long **)(param_1 + 0x80);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x558))
                    (plVar12,**(undefined8 **)(DAT_09535468 + 0xb8),
                     *(undefined8 *)(*plVar12 + 0x560));
          return;
        }
      }
    }
  }
LAB_04347c8c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

