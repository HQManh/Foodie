// rea decompile_all
// name: AnhPD.FoodOrder.OrderBoard$$BuildPreviewQueue
// address: 0x4226f30
// body: available
// range: 0x4226f30-0x42271a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42271a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_OrderBoard__BuildPreviewQueue(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined1 auStack_138 [72];
  undefined1 auStack_f0 [72];
  undefined1 auStack_a8 [72];
  
  if ((DAT_09516d73 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091aed20);
    FUN_03f5c2a4(&DAT_091aed10);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_091aed50);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917c850);
    DAT_09516d73 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917c850);
  FUN_057ee92c(lVar3,DAT_091aed10);
  lVar4 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(lVar4,DAT_091adc70);
  if ((*(long *)(param_1 + 0x90) != 0) &&
     (iVar1 = *(int *)(*(long *)(param_1 + 0x90) + 0x18), 0 < iVar1)) {
    iVar8 = 0;
    do {
      uVar5 = AnhPD_FoodOrder_OrderBoard__InPreview(param_1,iVar8);
      if ((uVar5 & 1) != 0) {
        if ((*(long *)(param_1 + 0x90) == 0) ||
           (FUN_057eeec4(auStack_138,*(long *)(param_1 + 0x90),iVar8,DAT_091aed50), lVar3 == 0))
        goto LAB_042271a4;
        memcpy(auStack_f0,auStack_138,0x48);
        lVar9 = DAT_091aed20;
        lVar7 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_042271a4;
        uVar2 = *(uint *)(lVar3 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar2 * 0x48;
          *(uint *)(lVar3 + 0x18) = uVar2 + 1;
          memcpy((void *)(lVar7 + 0x20),auStack_f0,0x48);
          thunk_FUN_03f5d7b8(lVar7 + 0x20,0);
        }
        else {
          uVar6 = *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70);
          memcpy(auStack_a8,auStack_f0,0x48);
          FUN_057ef254(lVar3,auStack_a8,uVar6);
        }
        lVar9 = DAT_091adc88;
        if (lVar4 == 0) goto LAB_042271a4;
        lVar7 = *(long *)(lVar4 + 0x10);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_042271a4;
        uVar2 = *(uint *)(lVar4 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar2 + 1;
          *(int *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = iVar8;
        }
        else {
          FUN_057971a8(lVar4,iVar8,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
  }
  lVar9 = *(long *)(param_1 + 0x40);
  uVar6 = AnhPD_FoodOrder_OrderBoard__PreviewSlots(param_1,lVar4);
  if (lVar9 != 0) {
    AnhPD_FoodOrder_OrderIngredientList__SetSlots(lVar9,uVar6);
    return lVar3;
  }
LAB_042271a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

