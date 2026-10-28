// rea decompile_all
// name: Mono.Security.X509.PKCS12$$EncryptedContentInfo
// address: 0x73f8280
// body: available
// range: 0x73f8280-0x73f85cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f85cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Security_X509_PKCS12__EncryptedContentInfo(long param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_09520e2d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e18);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09193130);
    FUN_03f5c2a4(&DAT_091f9950);
    FUN_03f5c2a4(&DAT_091f9938);
    DAT_09520e2d = 1;
  }
  uVar2 = FUN_03f5c394(DAT_0917fc88,8);
  plVar3 = (long *)Mono_Security_X509_PKCS12__get_RNG(param_1);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x198))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x1a0));
    lVar4 = thunk_FUN_03f9944c(DAT_09180e18);
    System_Object___ctor(lVar4,0);
    *(undefined1 *)(lVar4 + 0x10) = 0x30;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x18),0);
    lVar5 = thunk_FUN_03f9944c(DAT_09180e18);
    System_Object___ctor(lVar5,0);
    *(undefined1 *)(lVar5 + 0x10) = 4;
    *(undefined8 *)(lVar5 + 0x18) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x18),uVar2);
    Mono_Security_ASN1__Add(lVar4,lVar5);
    uVar6 = Mono_Security_ASN1Convert__FromInt32(*(undefined4 *)(param_1 + 0x34));
    Mono_Security_ASN1__Add(lVar4,uVar6);
    lVar5 = thunk_FUN_03f9944c(DAT_09180e18);
    System_Object___ctor(lVar5,0);
    *(undefined1 *)(lVar5 + 0x10) = 0x30;
    *(undefined8 *)(lVar5 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x18),0);
    uVar6 = Mono_Security_ASN1Convert__FromOid(param_3);
    Mono_Security_ASN1__Add(lVar5,uVar6);
    Mono_Security_ASN1__Add(lVar5,lVar4);
    if (param_2 != (long *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 0x34);
      uVar6 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
      uVar2 = Mono_Security_X509_PKCS12__Encrypt(param_1,param_3,uVar2,uVar1,uVar6);
      lVar4 = thunk_FUN_03f9944c(DAT_09180e18);
      System_Object___ctor(lVar4,0);
      *(undefined1 *)(lVar4 + 0x10) = 0x80;
      *(undefined8 *)(lVar4 + 0x18) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x18),uVar2);
      lVar7 = thunk_FUN_03f9944c(DAT_09180e18);
      System_Object___ctor(lVar7,0);
      *(undefined1 *)(lVar7 + 0x10) = 0x30;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x18),0);
      uVar2 = Mono_Security_ASN1Convert__FromOid(DAT_091f9938);
      Mono_Security_ASN1__Add(lVar7,uVar2);
      Mono_Security_ASN1__Add(lVar7,lVar5);
      Mono_Security_ASN1__Add(lVar7,lVar4);
      uVar2 = FUN_03f5c394(DAT_0917fc88,1);
      lVar4 = thunk_FUN_03f9944c(DAT_09180e18);
      System_Object___ctor(lVar4,0);
      *(undefined1 *)(lVar4 + 0x10) = 2;
      *(undefined8 *)(lVar4 + 0x18) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x18),uVar2);
      lVar5 = thunk_FUN_03f9944c(DAT_09180e18);
      System_Object___ctor(lVar5,0);
      *(undefined1 *)(lVar5 + 0x10) = 0x30;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x18),0);
      Mono_Security_ASN1__Add(lVar5,lVar4);
      Mono_Security_ASN1__Add(lVar5,lVar7);
      lVar4 = thunk_FUN_03f9944c(DAT_09180e18);
      System_Object___ctor(lVar4,0);
      *(undefined1 *)(lVar4 + 0x10) = 0xa0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x18),0);
      Mono_Security_ASN1__Add(lVar4,lVar5);
      lVar5 = thunk_FUN_03f9944c(DAT_09193130);
      uVar2 = DAT_091f9950;
      Mono_Security_PKCS7_ContentInfo___ctor();
      *(undefined8 *)(lVar5 + 0x10) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x10),uVar2);
      *(long *)(lVar5 + 0x18) = lVar4;
      thunk_FUN_03f5d7b8((long *)(lVar5 + 0x18),lVar4);
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

