// rea decompile_all
// name: Mono.Security.Authenticode.AuthenticodeDeformatter$$CheckSignature
// address: 0x740b9b8
// body: available
// range: 0x740b9b8-0x740bc9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x740bc9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Mono_Security_Authenticode_AuthenticodeDeformatter__CheckSignature(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if ((DAT_09520ee3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09193130);
    FUN_03f5c2a4(&DAT_09193140);
    FUN_03f5c2a4(&DAT_091f9b50);
    FUN_03f5c2a4(&DAT_091f9940);
    DAT_09520ee3 = 1;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    Mono_Security_Authenticode_AuthenticodeBase__Open(param_1,*(undefined8 *)(param_1 + 0x48));
  }
  else {
    Mono_Security_Authenticode_AuthenticodeBase__Open(param_1);
  }
  lVar2 = Mono_Security_Authenticode_AuthenticodeBase__GetSecurityEntry(param_1);
  plVar7 = (long *)(param_1 + 0x80);
  *plVar7 = lVar2;
  thunk_FUN_03f5d7b8(plVar7,lVar2);
  lVar2 = *plVar7;
  if (lVar2 != 0) {
    lVar3 = thunk_FUN_03f9944c(DAT_09193130);
    Mono_Security_PKCS7_ContentInfo___ctor(lVar3,lVar2,0);
    if (lVar3 == 0) goto LAB_0740bc9c;
    uVar4 = System_String__op_Inequality(*(undefined8 *)(lVar3 + 0x10),DAT_091f9940,0);
    if ((uVar4 & 1) != 0) goto LAB_0740bb84;
    uVar8 = *(undefined8 *)(lVar3 + 0x18);
    lVar2 = thunk_FUN_03f9944c(DAT_09193140);
    Mono_Security_PKCS7_SignedData___ctor(lVar2,uVar8,0);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) goto LAB_0740bc9c;
    uVar4 = System_String__op_Inequality
                      (*(undefined8 *)(*(long *)(lVar2 + 0x20) + 0x10),DAT_091f9b50,0);
    if ((uVar4 & 1) != 0) goto LAB_0740bb84;
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar2 + 0x28);
    thunk_FUN_03f5d7b8();
    if ((((*(long *)(lVar2 + 0x20) == 0) ||
         (lVar3 = *(long *)(*(long *)(lVar2 + 0x20) + 0x18), lVar3 == 0)) ||
        (lVar5 = Mono_Security_ASN1__get_Item(lVar3,0,0), lVar5 == 0)) ||
       (lVar5 = Mono_Security_ASN1__get_Item(lVar5,1,0), lVar5 == 0)) goto LAB_0740bc9c;
    lVar5 = Mono_Security_ASN1__get_Item(lVar5,1,0);
    plVar7 = (long *)(param_1 + 0x60);
    *plVar7 = lVar5;
    thunk_FUN_03f5d7b8(plVar7,lVar5);
    if (*plVar7 == 0) goto LAB_0740bc9c;
    iVar1 = Mono_Security_ASN1__get_Length(*plVar7,0);
    if (iVar1 < 0x15) {
      if (iVar1 == 0x10) {
        plVar7 = (long *)System_Security_Cryptography_MD5__Create(0);
      }
      else {
        if (iVar1 != 0x14) {
LAB_0740bbbc:
          uVar6 = 5;
          goto LAB_0740bb80;
        }
        plVar7 = (long *)System_Security_Cryptography_SHA1__Create(0);
      }
    }
    else if (iVar1 == 0x20) {
      plVar7 = (long *)System_Security_Cryptography_SHA256__Create(0);
    }
    else if (iVar1 == 0x30) {
      plVar7 = (long *)System_Security_Cryptography_SHA384__Create(0);
    }
    else {
      if (iVar1 != 0x40) goto LAB_0740bbbc;
      plVar7 = (long *)System_Security_Cryptography_SHA512__Create(0);
    }
    uVar8 = Mono_Security_Authenticode_AuthenticodeBase__GetHash(param_1,plVar7);
    *(undefined8 *)(param_1 + 0x50) = uVar8;
    thunk_FUN_03f5d7b8();
    Mono_Security_Authenticode_AuthenticodeBase__Close(param_1);
    if (*(long *)(param_1 + 0x60) != 0) {
      uVar4 = Mono_Security_ASN1__CompareValue
                        (*(long *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x50),0);
      if ((uVar4 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x78) = 2;
      }
      lVar3 = Mono_Security_ASN1__get_Item(lVar3,0,0);
      if ((lVar3 != 0) && (uVar8 = Mono_Security_ASN1__get_Value(lVar3,0), plVar7 != (long *)0x0)) {
        (**(code **)(*plVar7 + 600))(plVar7,*(undefined8 *)(*plVar7 + 0x260));
        uVar8 = System_Security_Cryptography_HashAlgorithm__ComputeHash(plVar7,uVar8,0);
        uVar4 = Mono_Security_Authenticode_AuthenticodeDeformatter__VerifySignature
                          (param_1,lVar2,uVar8,plVar7);
        if ((uVar4 & 1) == 0) {
          return false;
        }
        return *(int *)(param_1 + 0x78) == 0;
      }
    }
LAB_0740bc9c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar6 = 1;
LAB_0740bb80:
  *(undefined4 *)(param_1 + 0x78) = uVar6;
LAB_0740bb84:
  Mono_Security_Authenticode_AuthenticodeBase__Close(param_1);
  return false;
}

