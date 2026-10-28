// rea decompile_all
// name: Datpt.Cook_Order.LevelControlCookOrder$$GenerateNewIngredientCutted
// address: 0x41acd48
// body: available
// range: 0x41acd48-0x41acedf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41aced8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41acedc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Datpt_Cook_Order_LevelControlCookOrder__GenerateNewIngredientCutted
                 (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,int param_5)

{
  ulong uVar1;
  long *plVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_095168ff & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3320);
    FUN_03f5c2a4(&DAT_091a3328);
    FUN_03f5c2a4(&DAT_091a3330);
    FUN_03f5c2a4(&DAT_09186bf0);
    FUN_03f5c2a4(&DAT_091ad998);
    FUN_03f5c2a4(&DAT_091d4ff8);
    DAT_095168ff = 1;
  }
  uStack_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  if (*(long *)(param_4 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057849ac(&local_60,*(long *)(param_4 + 0x178),DAT_091ad998);
  do {
    uVar1 = FUN_071a9a8c(&local_60,DAT_091a3328);
    if ((uVar1 & 1) == 0) goto LAB_041ace90;
  } while ((int)local_50 != param_5);
  plVar2 = (long *)FUN_04c384b8(param_1,param_2,param_3,local_48,0,DAT_091d4ff8);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  (**(code **)(*plVar2 + 0x488))(plVar2,1,0,*(undefined8 *)(*plVar2 + 0x490));
  if (*(byte *)(*plVar2 + 0x130) < *(byte *)(DAT_09186bf0 + 0x130)) {
LAB_041ace90:
    plVar2 = (long *)0x0;
  }
  else if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_09186bf0 + 0x130) * 8 + -8) !=
           DAT_09186bf0) {
    plVar2 = (long *)0x0;
  }
  FUN_071a9a88(&local_60,DAT_091a3320);
  return plVar2;
}

