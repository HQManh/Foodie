// rea decompile_all
// name: Mono.Security.X509.X509Crl$$VerifySignature
// address: 0x73fb164
// body: available
// range: 0x73fb164-0x73fb427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73fb3cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fb424 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Mono_Security_X509_X509Crl__VerifySignature(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((DAT_09520e42 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e18);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_091831e8);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_0920c350);
    FUN_03f5c2a4(&DAT_091f97d0);
    DAT_09520e42 = 1;
  }
  uVar3 = System_String__op_Inequality(*(undefined8 *)(param_1 + 0x38),DAT_091f97d0,0);
  if ((uVar3 & 1) != 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar9 = thunk_FUN_03fc39d4(&DAT_092126d8);
    uVar9 = System_String__Concat(uVar9,uVar8,0);
    thunk_FUN_03fc39d4(&DAT_09182f98);
    uVar8 = thunk_FUN_03f9944c();
    System_Security_Cryptography_CryptographicException___ctor(uVar8,uVar9,0);
    uVar9 = thunk_FUN_03fc39d4(&DAT_091df520);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar8,uVar9);
  }
  plVar4 = (long *)thunk_FUN_03f9944c(DAT_091831e8);
  System_Security_Cryptography_DSASignatureDeformatter___ctor(plVar4,param_2,0);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x188))(plVar4,DAT_0920c350,*(undefined8 *)(*plVar4 + 400));
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    lVar5 = thunk_FUN_03f9944c(DAT_09180e18);
    Mono_Security_ASN1___ctor(lVar5,uVar9);
    if ((lVar5 != 0) && (plVar6 = *(long **)(lVar5 + 0x20), plVar6 != (long *)0x0)) {
      iVar1 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
      if (iVar1 == 2) {
        lVar7 = Mono_Security_ASN1__get_Item(lVar5,0);
        if (lVar7 != 0) {
          lVar7 = Mono_Security_ASN1__get_Value();
          lVar5 = Mono_Security_ASN1__get_Item(lVar5,1);
          if (lVar5 != 0) {
            lVar5 = Mono_Security_ASN1__get_Value();
            uVar9 = FUN_03f5c394(DAT_0917fc88,0x28);
            if (lVar7 != 0) {
              if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              iVar1 = System_Math__Max(0,*(int *)(lVar7 + 0x18) + -0x14,0);
              uVar2 = System_Math__Max(0,0x14 - *(int *)(lVar7 + 0x18),0);
              System_Buffer__BlockCopy(lVar7,iVar1,uVar9,uVar2,*(int *)(lVar7 + 0x18) - iVar1,0);
              if (lVar5 != 0) {
                iVar1 = System_Math__Max(0,*(int *)(lVar5 + 0x18) + -0x14,0);
                uVar2 = System_Math__Max(0x14,0x28 - *(int *)(lVar5 + 0x18),0);
                System_Buffer__BlockCopy(lVar5,iVar1,uVar9,uVar2,*(int *)(lVar5 + 0x18) - iVar1,0);
                uVar8 = Mono_Security_X509_X509Crl__get_Hash(param_1);
                    /* WARNING: Could not recover jumptable at 0x073fb3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar9 = (**(code **)(*plVar4 + 0x198))
                                  (plVar4,uVar8,uVar9,*(undefined8 *)(*plVar4 + 0x1a0));
                return uVar9;
              }
            }
          }
        }
        goto LAB_073fb3cc;
      }
    }
    return 0;
  }
LAB_073fb3cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

