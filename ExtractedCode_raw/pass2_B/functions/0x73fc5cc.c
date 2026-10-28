// rea decompile_all
// name: Mono.Security.X509.X509Certificate$$get_RSA
// address: 0x73fc5cc
// body: available
// range: 0x73fc5cc-0x73fc77f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73fc77c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Security_X509_X509Certificate__get_RSA(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 local_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((DAT_09520e4e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e18);
    FUN_03f5c2a4(&DAT_091899f0);
    FUN_03f5c2a4(&DAT_091f9848);
    DAT_09520e4e = 1;
  }
  plVar6 = (long *)(param_1 + 0x88);
  lStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if ((*plVar6 == 0) &&
     (uVar2 = System_String__op_Equality(*(undefined8 *)(param_1 + 0x40),DAT_091f9848,0),
     (uVar2 & 1) != 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    lStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    lVar3 = thunk_FUN_03f9944c(DAT_09180e18);
    Mono_Security_ASN1___ctor(lVar3,uVar7);
    if (lVar3 == 0) goto LAB_073fc77c;
    lVar4 = Mono_Security_ASN1__get_Item(lVar3,0);
    if (lVar4 == 0) {
      return 0;
    }
    if (*(char *)(lVar4 + 0x10) == '\x02') {
      lVar3 = Mono_Security_ASN1__get_Item(lVar3,1);
      if (lVar3 == 0) goto LAB_073fc77c;
      if (*(char *)(lVar3 + 0x10) == '\x02') {
        uVar7 = Mono_Security_ASN1__get_Value(lVar4);
        lStack_98 = Mono_Security_X509_X509Certificate__GetUnsignedBigInteger(uVar7,uVar7);
        thunk_FUN_03f5d7b8((ulong)&local_a0 | 8,lStack_98);
        local_a0 = Mono_Security_ASN1__get_Value(lVar3);
        thunk_FUN_03f5d7b8(&local_a0,local_a0);
        if (lStack_98 == 0) {
LAB_073fc77c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar1 = *(int *)(lStack_98 + 0x18);
        lVar3 = thunk_FUN_03f9944c(DAT_091899f0);
        System_Security_Cryptography_RSACryptoServiceProvider___ctor(lVar3,iVar1 << 3,0);
        *plVar6 = lVar3;
        thunk_FUN_03f5d7b8(plVar6,lVar3);
        plVar5 = (long *)*plVar6;
        if (plVar5 == (long *)0x0) goto LAB_073fc77c;
        lStack_58 = lStack_98;
        local_60 = local_a0;
        uStack_48 = uStack_88;
        uStack_50 = uStack_90;
        uStack_38 = uStack_78;
        local_40 = local_80;
        uStack_28 = uStack_68;
        uStack_30 = uStack_70;
        (**(code **)(*plVar5 + 0x1f8))(plVar5,&local_60,*(undefined8 *)(*plVar5 + 0x200));
        goto LAB_073fc760;
      }
    }
    lVar3 = 0;
  }
  else {
LAB_073fc760:
    lVar3 = *plVar6;
  }
  return lVar3;
}

