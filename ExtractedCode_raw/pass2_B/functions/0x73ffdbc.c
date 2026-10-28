// rea decompile_all
// name: Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension$$Decode
// address: 0x73ffdbc
// body: available
// range: 0x73ffdbc-0x73ffedb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73ffe90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ffed8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_X509_Extensions_AuthorityKeyIdentifierExtension__Decode(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((DAT_09520e7e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e18);
    DAT_09520e7e = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = Mono_Security_ASN1__get_Value();
    lVar3 = thunk_FUN_03f9944c(DAT_09180e18);
    Mono_Security_ASN1___ctor(lVar3,uVar2);
    if (lVar3 != 0) {
      if (*(char *)(lVar3 + 0x10) != '0') {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar2 = thunk_FUN_03f9944c();
        uVar6 = thunk_FUN_03fc39d4(&DAT_09205168);
        System_ArgumentException___ctor(uVar2,uVar6,0);
        uVar6 = thunk_FUN_03fc39d4(&DAT_091c33f0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar2,uVar6);
      }
      iVar7 = 0;
      while( true ) {
        plVar4 = *(long **)(lVar3 + 0x20);
        iVar1 = 0;
        if (plVar4 != (long *)0x0) {
          iVar1 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
        }
        if (iVar1 <= iVar7) {
          return;
        }
        lVar5 = Mono_Security_ASN1__get_Item(lVar3,iVar7);
        if (lVar5 == 0) break;
        if (*(char *)(lVar5 + 0x10) == -0x80) {
          uVar2 = Mono_Security_ASN1__get_Value();
          *(undefined8 *)(param_1 + 0x28) = uVar2;
          thunk_FUN_03f5d7b8(param_1 + 0x28,uVar2);
        }
        iVar7 = iVar7 + 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

