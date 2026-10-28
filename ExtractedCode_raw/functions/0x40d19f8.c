// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.<>c__DisplayClass140_0$$<ServePlateTo>b__3
// address: 0x40d19f8
// body: available
// range: 0x40d19f8-0x40d1b23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d1b20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController_<>c__DisplayClass140_0__<ServePlateTo>b__3
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((DAT_09515fe3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd4c8);
    FUN_03f5c2a4(&DAT_09184b58);
    FUN_03f5c2a4(&DAT_09184fd8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515fe3 = 1;
  }
  local_30 = 0;
  local_28 = 0;
  if (*(int *)(DAT_09184fd8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Lofelt_NiceVibrations_HapticPatterns__PlayPreset(4,0);
  local_30 = *(undefined8 *)(param_3 + 0x18);
  local_28 = 0;
  thunk_FUN_03f5d7b8(&local_30);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_3 + 0x18) == 0) goto LAB_040d1b20;
    lVar3 = AnhPD_FoodOrder_DragItemBase__get_Tf(*(long *)(param_3 + 0x18),0);
  }
  else {
    lVar3 = *(long *)(param_3 + 0x20);
  }
  if (lVar3 != 0) {
    uVar5 = UnityEngine_Transform__get_position(lVar3,0);
    uVar4 = local_30;
    local_28 = CONCAT44(param_2,uVar5);
    uVar1 = local_28;
    if (*(int *)(DAT_09184b58 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04b788e4(uVar4,uVar1,DAT_091cd4c8);
    return;
  }
LAB_040d1b20:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

