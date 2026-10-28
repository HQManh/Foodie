// rea decompile_all
// name: Mono.Security.X509.X509Crl$$VerifySignature
// address: 0x73fb428
// body: available
// range: 0x73fb428-0x73fb4fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73fb4f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_X509_X509Crl__VerifySignature(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  if ((DAT_09520e43 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188d80);
    FUN_03f5c2a4(&DAT_09189a30);
    DAT_09520e43 = 1;
  }
  plVar1 = (long *)thunk_FUN_03f9944c(DAT_09189a30);
  System_Security_Cryptography_RSAPKCS1SignatureDeformatter___ctor(plVar1,param_2,0);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(DAT_09188d80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = Mono_Security_Cryptography_PKCS1__HashNameFromOid(uVar2,1,0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,uVar2,*(undefined8 *)(*plVar1 + 400));
    uVar2 = Mono_Security_X509_X509Crl__get_Hash(param_1);
                    /* WARNING: Could not recover jumptable at 0x073fb4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x198))
              (plVar1,uVar2,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(*plVar1 + 0x1a0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

