// rea decompile_all
// name: Mono.Security.X509.X509Store$$BuildCertificatesCollection
// address: 0x73ff038
// body: available
// range: 0x73ff038-0x73ff17b inclusive
// range: 0x73ff1bc-0x73ff1d7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73ff178 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ff1d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Security_X509_X509Store__BuildCertificatesCollection(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if ((DAT_09520e75 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_0918d130);
    FUN_03f5c2a4(&DAT_091f8668);
    FUN_03f5c2a4(&DAT_091f8670);
    DAT_09520e75 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918d130);
  System_Collections_CollectionBase___ctor(lVar2,0);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = System_IO_Path__Combine(uVar7,param_2,0);
  uVar3 = Mono_Security_X509_X509Store__CheckStore(uVar7,uVar7,0);
  if ((uVar3 & 1) != 0) {
    puVar1 = &DAT_091f8670;
    if (*(char *)(param_1 + 0x29) != '\0') {
      puVar1 = &DAT_091f8668;
    }
    lVar4 = System_IO_Directory__GetFiles(uVar7,*puVar1,0);
    if ((lVar4 != 0) && (0 < (int)*(ulong *)(lVar4 + 0x18))) {
      uVar3 = 0;
      uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      lVar5 = lVar4;
      do {
        if (uVar6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar7 = Mono_Security_X509_X509Store__LoadCertificate
                          (lVar5,*(undefined8 *)(lVar4 + 0x20 + uVar3 * 8));
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar7,uVar7);
        }
        lVar5 = Mono_Security_X509_X509CertificateCollection__Add(lVar2);
        uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
  }
  return lVar2;
}

