// rea decompile_all
// name: Datpt.ObserverPattern.EventsGroup$$Contains
// address: 0x41a0138
// body: available
// range: 0x41a0138-0x41a021f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a021c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Datpt_ObserverPattern_EventsGroup__Contains(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_09516836 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a5240);
    FUN_03f5c2a4(&DAT_091a5248);
    FUN_03f5c2a4(&DAT_091a5250);
    FUN_03f5c2a4(&DAT_091b2a60);
    DAT_09516836 = 1;
  }
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_05906608(&local_50,*(long *)(param_1 + 0x10),DAT_091b2a60);
  do {
    uVar1 = FUN_072230a4(&local_50,DAT_091a5248);
    if ((uVar1 & 1) == 0) break;
    uVar2 = System_String__op_Equality(local_40,param_2,0);
  } while ((uVar2 & 1) == 0);
  FUN_072230a0(&local_50,DAT_091a5240);
  return uVar1 & 1;
}

