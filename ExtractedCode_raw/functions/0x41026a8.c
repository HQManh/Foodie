// rea decompile_all
// name: AnhPD.FoodOrder.CookingStationCombineMultiChoice$$NotifyBaseTaken
// address: 0x41026a8
// body: available
// range: 0x41026a8-0x41027f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41027d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41027f0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CookingStationCombineMultiChoice__NotifyBaseTaken(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((DAT_09516177 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516177 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x58);
  if (lVar5 != 0) {
    uVar6 = 0;
    do {
      if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar6) {
        return;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar6) {
LAB_041027f0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (*(long *)(lVar5 + uVar6 * 8 + 0x20) == 0) {
        plVar1 = (long *)0x0;
      }
      else {
        plVar1 = (long *)AnhPD_FoodOrder_StationInteractGroup__get_View();
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(plVar1,0);
      if ((uVar2 & 1) != 0) {
        if (uVar6 != 0) {
          uVar2 = 0;
          do {
            lVar5 = *(long *)(param_1 + 0x58);
            if (lVar5 == 0) goto LAB_041027d8;
            if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_041027f0;
            if (*(long *)(lVar5 + uVar2 * 8 + 0x20) == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = AnhPD_FoodOrder_StationInteractGroup__get_View();
            }
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = UnityEngine_Object__op_Equality(uVar3,plVar1,0);
            if ((uVar4 & 1) != 0) goto LAB_041027cc;
            uVar2 = uVar2 + 1;
          } while (uVar6 != uVar2);
        }
        AnhPD_FoodOrder_CookingStationCombineMultiChoice__EnsureResolved(param_1);
        if (plVar1 == (long *)0x0) break;
        (**(code **)(*plVar1 + 0x208))
                  (plVar1,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(*plVar1 + 0x210));
      }
LAB_041027cc:
      lVar5 = *(long *)(param_1 + 0x58);
      uVar6 = uVar6 + 1;
    } while (lVar5 != 0);
  }
LAB_041027d8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

