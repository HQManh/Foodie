// rea decompile_all
// name: System.Convert$$ToInt64
// address: 0x7528240
// body: available
// range: 0x7528240-0x7528313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75282bc to 0x75c59e8 System.ParseNumbers$$StringToLong (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7528310 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Convert__ToInt64(long param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = (uint)(CONCAT44(param_2,param_2 + -2) >> 1);
  if (7 < uVar1 || (1 << (ulong)(uVar1 & 0x1f) & 0x99U) == 0) {
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar2 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_09205170);
    System_ArgumentException___ctor(uVar2,uVar3);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091c61d0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar3);
  }
  if (param_1 != 0) {
    if (DAT_09515cf2 == '\0') {
      FUN_03f5c2a4(&DAT_091b97b8);
      DAT_09515cf2 = '\x01';
    }
    uVar2 = System_String__GetRawStringData(param_1,0);
    uVar2 = System_ParseNumbers__StringToLong
                      (uVar2,*(undefined4 *)(param_1 + 0x10),param_2,0x1000,0);
    return uVar2;
  }
  return 0;
}

