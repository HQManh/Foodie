// rea decompile_all
// name: System.Globalization.DateTimeFormatInfo$$GetMonthName
// address: 0x7504108
// body: available
// range: 0x7504108-0x75041ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75041f4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75041f8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75041fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Globalization_DateTimeFormatInfo__GetMonthName(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = param_2 - 1;
  if (0xc < uVar1) {
    local_14 = 1;
    uVar3 = FUN_03f5c42c(DAT_09535420,&local_14);
    local_18 = 0xd;
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_18);
    uVar5 = thunk_FUN_03fc39d4(&DAT_09212b18);
    uVar3 = SR__Format(uVar5,uVar3,uVar4,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0921f8e8);
    System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar3,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091c7a30);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar3);
  }
  lVar2 = *(long *)(param_1 + 0xb0);
  if ((lVar2 == 0) &&
     (lVar2 = System_Globalization_DateTimeFormatInfo__internalGetMonthNamesCore(param_1),
     lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (uVar1 < *(uint *)(lVar2 + 0x18)) {
    return *(undefined8 *)(lVar2 + (ulong)uVar1 * 8 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

