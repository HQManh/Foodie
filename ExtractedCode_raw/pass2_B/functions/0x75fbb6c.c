// rea decompile_all
// name: System.AppDomain$$Load
// address: 0x75fbb6c
// body: available
// range: 0x75fbb6c-0x75fbc6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75fbc2c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fbc68 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_AppDomain__Load(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar1 = thunk_FUN_03fc39d4(&DAT_09217aa8);
    System_ArgumentNullException___ctor(uVar3,uVar1,0);
  }
  else {
    if (*(int *)(param_2 + 0x10) != 0) {
      uVar1 = FUN_03f6ac9c(param_1,param_2,param_3,param_4 & 1);
      uVar2 = System_Reflection_Assembly__op_Equality(uVar1,0,0);
      if ((uVar2 & 1) == 0) {
        return uVar1;
      }
      thunk_FUN_03fc39d4(&DAT_09184570);
      uVar1 = thunk_FUN_03f9944c();
      System_IO_FileNotFoundException___ctor(uVar1,0,param_2,0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091bfde0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar1,uVar3);
    }
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar3 = thunk_FUN_03f9944c();
    uVar1 = thunk_FUN_03fc39d4(&DAT_09217ab0);
    System_ArgumentException___ctor(uVar3,uVar1,0);
  }
  uVar1 = thunk_FUN_03fc39d4(&DAT_091bfde0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar1);
}

