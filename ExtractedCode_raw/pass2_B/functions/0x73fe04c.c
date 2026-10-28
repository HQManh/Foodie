// rea decompile_all
// name: Mono.Security.X509.X509Chain$$FindCertificateRoot
// address: 0x73fe04c
// body: available
// range: 0x73fe04c-0x73fe203 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73fe1f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fe1f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fe1f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fe200 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073fe1fc) */

long Mono_Security_X509_X509Chain__FindCertificateRoot(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  
  if ((DAT_09520e68 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    DAT_09520e68 = 1;
  }
  if (param_2 != 0) {
    uVar1 = Mono_Security_X509_X509Chain__IsTrusted(param_1,param_2);
    if ((uVar1 & 1) != 0) {
      return param_2;
    }
    lVar2 = Mono_Security_X509_X509Chain__get_TrustAnchors(param_1);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = Mono_Security_X509_X509CertificateCollection__GetEnumerator();
    do {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator__MoveNext();
      if ((uVar1 & 1) == 0) {
        lVar3 = 0;
        iVar7 = 7;
        goto LAB_073fe118;
      }
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator__get_Current();
      uVar1 = Mono_Security_X509_X509Chain__IsParent(param_1,param_2,lVar3);
    } while ((uVar1 & 1) == 0);
    iVar7 = 6;
LAB_073fe118:
    plVar4 = (long *)thunk_FUN_03f99350(lVar2,DAT_09185a58);
    if (plVar4 != (long *)0x0) {
      lVar2 = *plVar4;
      uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185a58) {
            puVar5 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_073fe18c;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_073fe18c:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
    if ((iVar7 != 7) && (iVar7 != 0)) {
      return lVar3;
    }
    uVar1 = Mono_Security_X509_X509Certificate__get_IsSelfSigned(param_2);
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = 0x20;
      return param_2;
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0x10000;
  return 0;
}

