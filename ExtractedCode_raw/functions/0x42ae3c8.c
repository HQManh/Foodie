// rea decompile_all
// name: CakeOrder.InGame.UIPopupBoosterSaveMeBase$$UpdateTextAndButton
// address: 0x42ae3c8
// body: available
// range: 0x42ae3c8-0x42ae5fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ae5f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIPopupBoosterSaveMeBase__UpdateTextAndButton(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  long *plVar11;
  undefined4 local_34;
  
  if ((DAT_0951729a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_091b4b50);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951729a = 1;
  }
  local_34 = 0;
  lVar3 = *(long *)(DAT_091b4b48 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar10 = **(long **)(lVar3 + 0xb8);
  lVar3 = CakeOrder_InGame_UIPopupBoosterSaveMeBase__get_HardCurrencySO(param_1);
  if ((lVar3 != 0) && (lVar10 != 0)) {
    iVar2 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                      (lVar10,*(undefined8 *)(lVar3 + 0x18),0);
    if (*(long *)(param_1 + 0x168) != 0) {
      plVar11 = *(long **)(param_1 + 0xd8);
      iVar1 = *(int *)(*(long *)(param_1 + 0x168) + 0x20);
      lVar3 = CakeOrder_InGame_UIPopupBoosterSaveMeBase__get_HardCurrencySO(param_1);
      if (iVar2 < iVar1) {
        if (lVar3 == 0) goto LAB_042ae5f8;
        puVar6 = (undefined4 *)(lVar3 + 0x50);
        puVar7 = (undefined4 *)(lVar3 + 0x54);
        puVar8 = (undefined4 *)(lVar3 + 0x58);
        puVar9 = (undefined4 *)(lVar3 + 0x5c);
      }
      else {
        if (lVar3 == 0) goto LAB_042ae5f8;
        puVar6 = (undefined4 *)(lVar3 + 0x40);
        puVar7 = (undefined4 *)(lVar3 + 0x44);
        puVar8 = (undefined4 *)(lVar3 + 0x48);
        puVar9 = (undefined4 *)(lVar3 + 0x4c);
      }
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x2a8))
                  (*puVar6,*puVar7,*puVar8,*puVar9,plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
        if (*(long *)(param_1 + 0x168) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x168) + 0x28);
        }
        uVar5 = System_String__IsNullOrEmpty(uVar4,0);
        if ((uVar5 & 1) == 0) {
          uVar4 = *(undefined8 *)(param_1 + 0x138);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = UnityEngine_Object__op_Implicit(uVar4,0);
          if ((uVar5 & 1) != 0) {
            uVar5 = FUN_05a8f088(DAT_091b4b50);
            if ((uVar5 & 1) == 0) {
              local_34 = 0;
            }
            else {
              lVar3 = *(long *)(DAT_091b4b48 + 0x20);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_03f95a6c();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_03f95a6c();
              }
              if (*(long *)(param_1 + 0x168) == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x168) + 0x28);
              }
              if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_042ae5f8;
              local_34 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                                   (**(long **)(lVar3 + 0xb8),uVar4,0);
            }
            plVar11 = *(long **)(param_1 + 0x138);
            uVar4 = System_Int32__ToString(&local_34,0);
            if (plVar11 == (long *)0x0) goto LAB_042ae5f8;
            (**(code **)(*plVar11 + 0x558))(plVar11,uVar4,*(undefined8 *)(*plVar11 + 0x560));
          }
        }
        return;
      }
    }
  }
LAB_042ae5f8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

