// rea decompile_all
// name: CakeOrder.Home.HomeRestaurantsBuildingControl$$OnSelectedMapChanged
// address: 0x431b46c
// body: available
// range: 0x431b46c-0x431b61b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x431b5fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeRestaurantsBuildingControl__OnSelectedMapChanged(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined1 auVar7 [16];
  
  if ((DAT_09517628 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba268);
    FUN_03f5c2a4(&DAT_091ba228);
    FUN_03f5c2a4(&DAT_091ba1f8);
    DAT_09517628 = 1;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    CakeOrder_Home_HomeRestaurantsBuildingControl__BeginMapTransition
              (param_1,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x28));
    uVar4 = CakeOrder_Home_HomeRestaurantsBuildingControl__RequestMoveCamera(param_1,0);
    if (*(long *)(param_1 + 0x90) != 0) {
      uVar4 = CakeOrder_Home_HomeSelectionControl__GetMapDisplayIndex
                        (uVar4,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x28));
      lVar5 = *(long *)(param_1 + 0x90);
      if (lVar5 != 0) {
        iVar2 = (int)uVar4;
        iVar6 = 0;
        do {
          if (*(long *)(lVar5 + 0x58) == 0) break;
          if (*(int *)(*(long *)(lVar5 + 0x58) + 0x18) <= iVar6) {
            return;
          }
          iVar3 = CakeOrder_Home_HomeSelectionControl__GetMapDisplayIndex(uVar4,iVar6);
          if (iVar3 < 0) {
LAB_0431b5a8:
            if (*(long *)(param_1 + 0x90) == 0) break;
            lVar5 = CakeOrder_Home_HomeSelectionControl__GetMapSectionLoadData
                              (*(long *)(param_1 + 0x90),iVar6);
            uVar4 = 0;
            if (lVar5 != 0) {
              if (*(long *)(lVar5 + 0x48) == 0) break;
              FUN_060da79c(*(long *)(lVar5 + 0x48),DAT_091ba1f8);
              if (*(long *)(lVar5 + 0x28) == 0) break;
              FUN_060da79c(*(long *)(lVar5 + 0x28),DAT_091ba228);
              if (*(long *)(lVar5 + 0x30) == 0) break;
              uVar4 = FUN_060da79c(*(long *)(lVar5 + 0x30),DAT_091ba268);
            }
          }
          else {
            if (DAT_09516086 == '\0') {
              FUN_03f5c2a4(&DAT_09187e80);
              DAT_09516086 = '\x01';
            }
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar3 = iVar3 - iVar2;
            iVar1 = -iVar3;
            if (-1 < iVar3) {
              iVar1 = iVar3;
            }
            if ((*(int *)(param_1 + 0x4c) < iVar1) && (iVar6 != *(int *)(param_1 + 0x6c)))
            goto LAB_0431b5a8;
            auVar7 = CakeOrder_Home_HomeRestaurantsBuildingControl__LoadAndSetUpBuildings
                               (param_1,iVar6);
            uVar4 = Cysharp_Threading_Tasks_UniTaskExtensions__Forget(auVar7._0_8_,auVar7._8_8_,0);
          }
          lVar5 = *(long *)(param_1 + 0x90);
          iVar6 = iVar6 + 1;
        } while (lVar5 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

