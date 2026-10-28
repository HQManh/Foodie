// rea decompile_all
// name: AnhPD.FoodOrder.AdaptiveTwoColumnLayout$$PreferredSize
// address: 0x4220da4
// body: available
// range: 0x4220da4-0x4220ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4220ee4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AnhPD_FoodOrder_AdaptiveTwoColumnLayout__PreferredSize(long param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_09516d22 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091af770);
    DAT_09516d22 = 1;
  }
  local_40 = 0;
  local_38 = 0;
  local_44 = 0;
  AnhPD_FoodOrder_AdaptiveTwoColumnLayout__CollectChildren(param_1);
  if (*(long *)(param_1 + 0x40) != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x40) + 0x18);
    if (iVar1 == 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        iVar1 = UnityEngine_RectOffset__get_horizontal(*(long *)(param_1 + 0x20),0);
        AnhPD_FoodOrder_AdaptiveTwoColumnLayout__get_PadVertical(param_1);
        return (float)iVar1;
      }
    }
    else {
      AnhPD_FoodOrder_AdaptiveTwoColumnLayout__Measure
                (0x3f800000,param_1,iVar1,param_2,(long)&local_38 + 4,&local_38,(long)&local_40 + 4,
                 &local_40,&local_44);
      if (local_44 < 1) {
        fVar2 = 0.0;
      }
      else {
        fVar2 = local_38._4_4_ * (float)local_44 + local_40._4_4_ * (float)(local_44 + -1);
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        iVar1 = UnityEngine_RectOffset__get_horizontal(*(long *)(param_1 + 0x20),0);
        AnhPD_FoodOrder_AdaptiveTwoColumnLayout__get_PadVertical(param_1);
        return fVar2 + (float)iVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

