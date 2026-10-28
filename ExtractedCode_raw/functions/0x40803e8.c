// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaSauceStation$$TryGetIntakeGroup
// address: 0x40803e8
// body: available
// range: 0x40803e8-0x40804fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40804a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40804f8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint CakeOrder_InGame_Pasta_PastaSauceStation__TryGetIntakeGroup
               (long param_1,undefined8 param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  uVar1 = AnhPD_FoodOrder_CookingStation__TryGetIntakeGroup();
  if (((uVar1 & 1) != 0) && ((int)*param_3 < 0)) {
    uVar4 = AnhPD_FoodOrder_CookingStationCombineMultiChoice__get_BaseIngId(param_1,0);
    uVar5 = System_String__op_Equality(param_2,uVar4,0);
    if ((uVar5 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x58);
      if (lVar7 != 0) {
        uVar8 = 0;
        do {
          if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar8) goto LAB_040804e0;
          if (*(uint *)(lVar7 + 0x18) <= uVar8) {
LAB_040804f8:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar6 = *(long *)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
          if (lVar6 == 0) break;
          if ((*(char *)(lVar6 + 0x38) != '\0') && (*(char *)(lVar6 + 0x39) == '\0')) {
            iVar2 = AnhPD_FoodOrder_StationInteractGroup__CountFreeSlots(lVar6,param_2,0);
            lVar7 = *(long *)(param_1 + 0x58);
            if (0 < iVar2) {
              *param_3 = uVar8;
              if (lVar7 != 0) {
                if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_040804f8;
                lVar7 = *(long *)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
                if (lVar7 != 0) {
                  iVar2 = *param_4;
                  iVar3 = AnhPD_FoodOrder_StationInteractGroup__CountFreeSlots(lVar7,param_2,0);
                  if (iVar3 <= iVar2) {
                    iVar2 = iVar3;
                  }
                  *param_4 = iVar2;
                  goto LAB_040804e0;
                }
              }
              break;
            }
          }
          uVar8 = uVar8 + 1;
        } while (lVar7 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_040804e0:
  return uVar1 & 1;
}

