// rea decompile_all
// name: Mono.Security.X509.PKCS12$$AddCertificate
// address: 0x73f85d0
// body: available
// range: 0x73f85d0-0x73f8813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f879c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f8810 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_X509_PKCS12__AddCertificate(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if ((DAT_09520e2e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09193130);
    FUN_03f5c2a4(&DAT_0918a4f8);
    FUN_03f5c2a4(&DAT_0918d0f8);
    FUN_03f5c2a4(&DAT_091f98e0);
    DAT_09520e2e = 1;
  }
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 != (long *)0x0) {
    iVar6 = 0;
    while( true ) {
      uVar2 = (**(code **)(*plVar1 + 0x298))(plVar1,*(undefined8 *)(*plVar1 + 0x2a0));
      plVar1 = *(long **)(param_1 + 0x38);
      if ((int)uVar2 <= iVar6) break;
      if ((plVar1 == (long *)0x0) ||
         (plVar1 = (long *)(**(code **)(*plVar1 + 0x2e8))
                                     (plVar1,iVar6,*(undefined8 *)(*plVar1 + 0x2f0)),
         plVar1 == (long *)0x0)) goto LAB_073f879c;
      if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_0918a4f8 + 0x130)) ||
         (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_0918a4f8 + 0x130) * 8 + -8) !=
          DAT_0918a4f8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar1);
      }
      if (plVar1[2] == 0) goto LAB_073f879c;
      uVar3 = System_String__Equals(plVar1[2],DAT_091f98e0,0);
      if ((uVar3 & 1) != 0) {
        if ((plVar1[3] == 0) || (lVar4 = Mono_Security_ASN1__get_Item(plVar1[3],1), lVar4 == 0))
        goto LAB_073f879c;
        uVar2 = Mono_Security_ASN1__get_Value();
        lVar4 = thunk_FUN_03f9944c(DAT_09193130);
        Mono_Security_PKCS7_ContentInfo___ctor(lVar4,uVar2);
        if ((lVar4 == 0) ||
           ((*(long *)(lVar4 + 0x18) == 0 ||
            (lVar4 = Mono_Security_ASN1__get_Item(*(long *)(lVar4 + 0x18),0), lVar4 == 0))))
        goto LAB_073f879c;
        uVar2 = Mono_Security_ASN1__get_Value();
        plVar1 = (long *)thunk_FUN_03f9944c(DAT_0918d0f8);
        Mono_Security_X509_X509Certificate___ctor(plVar1,uVar2);
        if ((param_2 == (long *)0x0) ||
           (uVar2 = (**(code **)(*param_2 + 0x1f8))(param_2,*(undefined8 *)(*param_2 + 0x200)),
           plVar1 == (long *)0x0)) goto LAB_073f879c;
        uVar5 = (**(code **)(*plVar1 + 0x1f8))(plVar1,*(undefined8 *)(*plVar1 + 0x200));
        uVar3 = Mono_Security_X509_PKCS12__Compare(uVar5,uVar2,uVar5);
        if ((uVar3 & 1) != 0) {
          return;
        }
      }
      plVar1 = *(long **)(param_1 + 0x38);
      iVar6 = iVar6 + 1;
      if (plVar1 == (long *)0x0) goto LAB_073f879c;
    }
    uVar2 = Mono_Security_X509_PKCS12__CertificateSafeBag(uVar2,param_2,param_3);
    uVar5 = thunk_FUN_03f9944c(DAT_0918a4f8);
    Mono_Security_X509_SafeBag___ctor(uVar5,DAT_091f98e0,uVar2);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x308))(plVar1,uVar5,*(undefined8 *)(*plVar1 + 0x310));
      *(undefined1 *)(param_1 + 0x32) = 1;
      return;
    }
  }
LAB_073f879c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

