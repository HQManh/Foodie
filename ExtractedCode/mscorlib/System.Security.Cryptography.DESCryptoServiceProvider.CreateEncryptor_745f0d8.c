// rea decompile_all
// name: System.Security.Cryptography.DESCryptoServiceProvider$$CreateEncryptor
// address: 0x745f0d8
// body: available
// range: 0x745f0d8-0x745f207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x745f204 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Security_Cryptography_DESCryptoServiceProvider__CreateEncryptor
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_0952116d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183188);
    FUN_03f5c2a4(&DAT_09183178);
    DAT_0952116d = 1;
  }
  if (*(int *)(DAT_09183178 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Security_Cryptography_DES__IsWeakKey(param_2);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(DAT_09183178 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_Security_Cryptography_DES__IsSemiWeakKey(param_2);
    if ((uVar1 & 1) == 0) {
      uVar2 = thunk_FUN_03f9944c(DAT_09183188);
      System_Security_Cryptography_DESTransform___ctor(uVar2,param_1,1,param_2,param_3,0);
      return uVar2;
    }
    puVar3 = &DAT_0920d658;
  }
  else {
    puVar3 = &DAT_0920d660;
  }
  uVar2 = thunk_FUN_03fc39d4(puVar3);
  uVar2 = System_Environment__GetResourceString(uVar2,0);
  thunk_FUN_03fc39d4(&DAT_09182f98);
  uVar4 = thunk_FUN_03f9944c();
  uVar5 = thunk_FUN_03fc39d4(&DAT_091ffc18);
  System_Security_Cryptography_CryptographicException___ctor(uVar4,uVar2,uVar5);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091c7118);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar2);
}

