// rea decompile_all
// name: Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension$$Encode
// address: 0x73ffedc
// body: available
// range: 0x73ffedc-0x7400023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73fffd4 to 0x73eeeb8 Mono.Security.ASN1$$Add (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x740001c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7400020 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_X509_Extensions_AuthorityKeyIdentifierExtension__Encode(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  if ((DAT_09520e7f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e18);
    DAT_09520e7f = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09180e18);
  System_Object___ctor(lVar1,0);
  *(undefined1 *)(lVar1 + 0x10) = 0x30;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x18),0);
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 != 0) {
    lVar2 = thunk_FUN_03f9944c(DAT_09180e18);
    System_Object___ctor(lVar2,0);
    *(undefined1 *)(lVar2 + 0x10) = 0x80;
    *(long *)(lVar2 + 0x18) = lVar6;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x18),lVar6);
    Mono_Security_ASN1__Add(lVar1,lVar2);
    lVar6 = thunk_FUN_03f9944c(DAT_09180e18);
    System_Object___ctor(lVar6,0);
    *(undefined1 *)(lVar6 + 0x10) = 4;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x18),0);
    plVar5 = (long *)(param_1 + 0x20);
    *plVar5 = lVar6;
    thunk_FUN_03f5d7b8(plVar5,lVar6);
    if (*plVar5 != 0) {
      Mono_Security_ASN1__Add(*plVar5,lVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  thunk_FUN_03fc39d4(&DAT_091870e0);
  uVar3 = thunk_FUN_03f9944c();
  uVar4 = thunk_FUN_03fc39d4(&DAT_09205168);
  System_InvalidOperationException___ctor(uVar3,uVar4,0);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091c33f8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}

