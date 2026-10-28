// rea decompile_all
// name: AnhPD.FoodOrder.ServeService$$IsReserved
// address: 0x41e5d48
// body: available
// range: 0x41e5d48-0x41e5eaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e5ea4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e5ea8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e5eac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_ServeService__IsReserved(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  if ((DAT_09516bca & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4268);
    FUN_03f5c2a4(&DAT_091a4270);
    FUN_03f5c2a4(&DAT_091a4278);
    FUN_03f5c2a4(&DAT_091adcb0);
    FUN_03f5c2a4(&DAT_091afe70);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516bca = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  AnhPD_FoodOrder_ServeService__Prune(param_1);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_68,*(long *)(param_1 + 0x10),DAT_091afe70);
  do {
    do {
      uVar2 = FUN_071bd28c(&local_68,DAT_091a4270);
      lVar1 = local_58;
      if ((uVar2 & 1) == 0) goto LAB_041e5e78;
      if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = *(undefined8 *)(local_58 + 0x18);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Equality(uVar4,param_2,0);
    } while ((uVar3 & 1) == 0);
    if (*(long *)(lVar1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = FUN_05797528(*(long *)(lVar1 + 0x20),param_3,DAT_091adcb0);
  } while ((uVar3 & 1) == 0);
LAB_041e5e78:
  FUN_071bd288(&local_68,DAT_091a4268);
  return uVar2 & 1;
}

