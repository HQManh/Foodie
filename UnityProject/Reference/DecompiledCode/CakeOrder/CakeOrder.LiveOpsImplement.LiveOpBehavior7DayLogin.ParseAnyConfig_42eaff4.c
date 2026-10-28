// rea decompile_all
// name: CakeOrder.LiveOpsImplement.LiveOpBehavior7DayLogin$$ParseAnyConfig
// address: 0x42eaff4
// body: available
// range: 0x42eaff4-0x42eb0df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42eb09c to 0x4bdd51c FUN_04bdd51c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42eb0c8 to 0x42eb93c CakeOrder.LiveOpsImplement.LiveOpBehavior7DayLogin$$ParseConfigWithDays (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42eb0d8 to 0x42ec1f4 CakeOrder.LiveOpsImplement.LiveOpBehavior7DayLogin$$ParseConfig (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42eb0dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_LiveOpsImplement_LiveOpBehavior7DayLogin__ParseAnyConfig(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_09517483 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d1ed0);
    FUN_03f5c2a4(&DAT_09225ed0);
    FUN_03f5c2a4(&DAT_091fa098);
    DAT_09517483 = 1;
  }
  uVar1 = System_String__IsNullOrWhiteSpace(param_2,0);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  if ((param_2 == 0) || (lVar2 = System_String__TrimStart(param_2,0), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = System_String__StartsWith(lVar2,DAT_09225ed0,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = FUN_04bdd51c(param_2,DAT_091d1ed0);
    return uVar3;
  }
  uVar1 = System_String__Contains(param_2,DAT_091fa098,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = CakeOrder_LiveOpsImplement_LiveOpBehavior7DayLogin__ParseConfigWithDays(param_2);
    return uVar3;
  }
  uVar3 = CakeOrder_LiveOpsImplement_LiveOpBehavior7DayLogin__ParseConfig(uVar1,param_2);
  return uVar3;
}

