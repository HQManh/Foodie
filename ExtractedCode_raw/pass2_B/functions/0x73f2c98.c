// rea decompile_all
// name: Mono.Security.X509.PKCS12$$MAC
// address: 0x73f2c98
// body: available
// range: 0x73f2c98-0x73f2df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f2dd4 to 0x745d938 System.Security.Cryptography.HashAlgorithm$$ComputeHash (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73f2dd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f2de0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f2df0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_X509_PKCS12__MAC
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               long param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((DAT_09520e2b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09193128);
    FUN_03f5c2a4(&DAT_09184f80);
    FUN_03f5c2a4(&DAT_0920c350);
    DAT_09520e2b = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09193128);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = DAT_0920c350;
    thunk_FUN_03f5d7b8();
    Mono_Security_X509_PKCS12_DeriveBytes__set_Password(lVar1,param_2);
    Mono_Security_X509_PKCS12_DeriveBytes__set_Salt(lVar1,param_3);
    *(undefined4 *)(lVar1 + 0x18) = param_4;
    plVar2 = (long *)System_Security_Cryptography_HMAC__Create(0);
    if (plVar2 == (long *)0x0) {
      Mono_Security_X509_PKCS12_DeriveBytes__DeriveMAC(lVar1,0x14);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(DAT_09184f80 + 0x130)) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_09184f80 + 0x130) * 8 + -8) !=
        DAT_09184f80)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar2);
    }
    uVar3 = Mono_Security_X509_PKCS12_DeriveBytes__DeriveMAC(lVar1,0x14);
    (**(code **)(*plVar2 + 0x278))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x280));
    if (param_5 != 0) {
      System_Security_Cryptography_HashAlgorithm__ComputeHash
                (plVar2,param_5,0,*(undefined4 *)(param_5 + 0x18),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

