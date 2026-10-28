// rea decompile_all
// name: AnhPD.FoodOrder.CookingStation$$PutInIngredient
// address: 0x40ff924
// body: available
// range: 0x40ff924-0x40ffa03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ff9f8 to 0x40ffdf8 AnhPD.FoodOrder.CookingStation$$ApplyPause (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40ff9fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ffa00 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CookingStation__PutInIngredient(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  
  if ((param_2 & 0x8000000080000000) != 0) {
    return;
  }
  fVar3 = (float)AnhPD_FoodOrder_CookingStation__GetCookDuration();
  if (0.0 < fVar3) {
    if (param_1[0xe] == 0) goto LAB_040ff9fc;
    *(float *)(param_1[0xe] + 0x10) = fVar3;
  }
  lVar2 = param_1[0xb];
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= (uint)param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    if ((param_1[0xe] != 0) &&
       (lVar2 = *(long *)(lVar2 + (param_2 & 0x7fffffff) * 8 + 0x20), lVar2 != 0)) {
      AnhPD_FoodOrder_StationInteractGroup__PutInIngredient
                (lVar2,param_2 >> 0x20,(ulong)*(uint *)(param_1[0xe] + 0x10) << 0x20 | 1);
      uVar1 = (**(code **)(*param_1 + 0x208))(param_1,param_2,*(undefined8 *)(*param_1 + 0x210));
      if ((uVar1 & 1) != 0) {
        uVar1 = AnhPD_FoodOrder_CookingStation__get_IsViewIntakeBusy(param_1);
        if ((uVar1 & 1) == 0) {
          if (param_1[0xd] == 0) goto LAB_040ff9fc;
          AnhPD_FoodOrder_StationOrchestrator__TryStartProcess(param_1[0xd],param_2);
        }
        else {
          *(ulong *)((long)param_1 + 0x84) = param_2;
        }
      }
      if ((char)param_1[0x12] == '\0') {
        return;
      }
      AnhPD_FoodOrder_CookingStation__ApplyPause(param_1,1);
      return;
    }
  }
LAB_040ff9fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

