// rea decompile_all
// name: IngameDebugConsole.DebugLogConsole$$ParseDecimal
// address: 0x7334fb4
// body: available
// range: 0x7334fb4-0x73350d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73350d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73350d4 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint IngameDebugConsole_DebugLogConsole__ParseDecimal(long param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_0952062f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_0921b400);
    DAT_0952062f = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  if (param_1 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    uVar3 = System_String__EndsWith(param_1,DAT_0921b400,5,0);
    if ((uVar3 & 1) != 0) {
      param_1 = System_String__Substring(param_1,0,*(int *)(param_1 + 0x10) + -1,0);
    }
    if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Decimal__TryParse(param_1,&local_48,0);
    uStack_58 = uStack_40;
    local_60 = local_48;
    uVar4 = FUN_03f5c42c(DAT_091837d8,&local_60);
    *param_2 = uVar4;
    thunk_FUN_03f5d7b8(param_2,uVar4);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return uVar2 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

