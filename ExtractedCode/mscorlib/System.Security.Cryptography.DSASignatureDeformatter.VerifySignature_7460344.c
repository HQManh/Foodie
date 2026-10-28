// rea decompile_all
// name: System.Security.Cryptography.DSASignatureDeformatter$$VerifySignature
// address: 0x7460344
// body: available
// range: 0x7460344-0x7460423 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74603d4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7460420 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_DSASignatureDeformatter__VerifySignature
               (long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    puVar1 = &DAT_09221ba8;
  }
  else {
    if (param_3 != 0) {
      if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0746036c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x10) + 0x1d8))();
        return;
      }
      uVar2 = thunk_FUN_03fc39d4(&DAT_09208980);
      uVar2 = System_Environment__GetResourceString(uVar2,0);
      thunk_FUN_03fc39d4(&DAT_09182fa0);
      uVar3 = thunk_FUN_03f9944c();
      System_Security_Cryptography_CryptographicUnexpectedOperationException___ctor(uVar3,uVar2);
      uVar2 = thunk_FUN_03fc39d4(&DAT_091c7228);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,uVar2);
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    puVar1 = &DAT_09221bc0;
  }
  uVar3 = thunk_FUN_03fc39d4(puVar1);
  System_ArgumentNullException___ctor(uVar2,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091c7228);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar3);
}

