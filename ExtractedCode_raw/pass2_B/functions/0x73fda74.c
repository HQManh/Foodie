// rea decompile_all
// name: Mono.Security.X509.X509StoreManager$$get_TrustedRootCertificates
// address: 0x73fda74
// body: available
// range: 0x73fda74-0x73fdb0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73fdb0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Security_X509_X509StoreManager__get_TrustedRootCertificates(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_09520e7b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918d130);
    DAT_09520e7b = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918d130);
  System_Collections_CollectionBase___ctor(lVar1,0);
  lVar2 = Mono_Security_X509_X509StoreManager__get_CurrentUser();
  if (((lVar2 != 0) && (lVar2 = Mono_Security_X509_X509Stores__get_TrustedRoot(), lVar2 != 0)) &&
     (uVar3 = Mono_Security_X509_X509Store__get_Certificates(), lVar1 != 0)) {
    Mono_Security_X509_X509CertificateCollection__AddRange(lVar1,uVar3);
    lVar2 = Mono_Security_X509_X509StoreManager__get_LocalMachine();
    if ((lVar2 != 0) && (lVar2 = Mono_Security_X509_X509Stores__get_TrustedRoot(), lVar2 != 0)) {
      uVar3 = Mono_Security_X509_X509Store__get_Certificates();
      Mono_Security_X509_X509CertificateCollection__AddRange(lVar1,uVar3);
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

