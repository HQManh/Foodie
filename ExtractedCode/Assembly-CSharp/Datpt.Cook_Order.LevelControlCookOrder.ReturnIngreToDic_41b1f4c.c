// rea decompile_all
// name: Datpt.Cook_Order.LevelControlCookOrder$$ReturnIngreToDic
// address: 0x41b1f4c
// body: available
// range: 0x41b1f4c-0x41b20cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b2094 to 0x41b15b0 Datpt.Cook_Order.LevelControlCookOrder$$GenerateNewIngredient (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41b20c8 to 0x41a2474 Datpt.Cook_Order.LevelControlCookOrder$$AddItemNum (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41b20cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_LevelControlCookOrder__ReturnIngreToDic
               (float param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  
  if ((DAT_09516908 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919caf8);
    FUN_03f5c2a4(&DAT_0919cb08);
    FUN_03f5c2a4(&DAT_0919cb20);
    DAT_09516908 = 1;
  }
  if (*(long *)(param_2 + 0x1a8) != 0) {
    uVar1 = FUN_06f37834(*(long *)(param_2 + 0x1a8),param_3,DAT_0919caf8);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(char *)(param_2 + 0x19c) != '\0') {
      return;
    }
    lVar2 = *(long *)(param_2 + 0x1a8);
    if (lVar2 != 0) {
      fVar3 = (float)FUN_06f375a0(lVar2,param_3,DAT_0919cb08);
      FUN_06f37628(fVar3 + param_1,lVar2,param_3,DAT_0919cb20);
      if (*(long *)(param_2 + 0x1a8) != 0) {
        fVar3 = (float)FUN_06f375a0(*(long *)(param_2 + 0x1a8),param_3,DAT_0919cb08);
        if (fVar3 < 1.0) {
          return;
        }
        if (*(long *)(param_2 + 0x1a8) != 0) {
          FUN_06f37628(0,*(long *)(param_2 + 0x1a8),param_3,DAT_0919cb20);
          if (*(char *)(param_2 + 0x19e) == '\0') {
            if (*(char *)(param_2 + 0x19d) == '\0') {
              return;
            }
            Datpt_Cook_Order_LevelControlCookOrder__AddWeightInDicRandomConfig(0,param_2,param_3);
            Datpt_Cook_Order_LevelControlCookOrder__AddItemNum(param_2,1);
            return;
          }
          lVar2 = UnityEngine_Camera__get_main(0);
          UnityEngine_Input__get_mousePosition(0);
          if (lVar2 != 0) {
            UnityEngine_Camera__ScreenToWorldPoint(lVar2,0);
            Datpt_Cook_Order_LevelControlCookOrder__GenerateNewIngredient(param_2,param_3);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

