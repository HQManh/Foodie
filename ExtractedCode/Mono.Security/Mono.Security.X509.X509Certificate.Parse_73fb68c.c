// rea decompile_all
// name: Mono.Security.X509.X509Certificate$$Parse
// address: 0x73fb68c
// body: available
// range: 0x73fb68c-0x73fbe4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73fbc88 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fbcb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fbd1c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fbd20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fbd84 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fbd88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fbd8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fbd90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fbd94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fbd98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fbd9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fbda0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Mono_Security_X509_X509Certificate__Parse(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  long *plVar10;
  uint uVar11;
  undefined8 *puVar12;
  
  if ((DAT_09520e47 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e18);
    FUN_03f5c2a4(&DAT_091c06d0);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_0918d0e0);
    FUN_03f5c2a4(&DAT_0918d1c0);
    DAT_09520e47 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09180e18);
  Mono_Security_ASN1___ctor(lVar2,param_2);
  plVar10 = (long *)(param_1 + 0x10);
  *plVar10 = lVar2;
  thunk_FUN_03f5d7b8(plVar10,lVar2);
  lVar2 = *plVar10;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(char *)(lVar2 + 0x10) != '0') {
    lVar2 = thunk_FUN_03fc39d4(&DAT_0918d0f8);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = thunk_FUN_03fc39d4(&DAT_0918d0f8);
    uVar8 = **(undefined8 **)(lVar2 + 0xb8);
    thunk_FUN_03fc39d4(&DAT_09182f98);
    uVar5 = thunk_FUN_03f9944c();
    System_Security_Cryptography_CryptographicException___ctor(uVar5,uVar8,0);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091df400);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar8);
  }
  lVar2 = Mono_Security_ASN1__get_Item(lVar2,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(char *)(lVar2 + 0x10) != '0') {
    lVar2 = thunk_FUN_03fc39d4(&DAT_0918d0f8);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = thunk_FUN_03fc39d4(&DAT_0918d0f8);
    uVar8 = **(undefined8 **)(lVar2 + 0xb8);
    thunk_FUN_03fc39d4(&DAT_09182f98);
    uVar5 = thunk_FUN_03f9944c();
    System_Security_Cryptography_CryptographicException___ctor(uVar5,uVar8,0);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091df400);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar8);
  }
  if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar2 = Mono_Security_ASN1__get_Item(*plVar10,0);
  if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = Mono_Security_ASN1__get_Item(*plVar10,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = Mono_Security_ASN1__get_Item(lVar3,0);
  *(undefined4 *)(param_1 + 0x98) = 1;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((*(char *)(lVar3 + 0x10) == -0x60) &&
     (plVar4 = *(long **)(lVar3 + 0x20), plVar4 != (long *)0x0)) {
    iVar1 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
    if (iVar1 < 1) goto LAB_073fb800;
    iVar1 = *(int *)(param_1 + 0x98);
    lVar3 = Mono_Security_ASN1__get_Item(lVar3,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = Mono_Security_ASN1__get_Value();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar11 = 1;
    *(uint *)(param_1 + 0x98) = iVar1 + (uint)*(byte *)(lVar3 + 0x20);
  }
  else {
LAB_073fb800:
    uVar11 = 0;
  }
  if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = Mono_Security_ASN1__get_Item(*plVar10,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = Mono_Security_ASN1__get_Item(lVar3,uVar11);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(char *)(lVar3 + 0x10) != '\x02') {
    lVar2 = thunk_FUN_03fc39d4(&DAT_0918d0f8);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = thunk_FUN_03fc39d4(&DAT_0918d0f8);
    uVar8 = **(undefined8 **)(lVar2 + 0xb8);
    thunk_FUN_03fc39d4(&DAT_09182f98);
    uVar5 = thunk_FUN_03f9944c();
    System_Security_Cryptography_CryptographicException___ctor(uVar5,uVar8,0);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091df400);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar8);
  }
  lVar3 = Mono_Security_ASN1__get_Value();
  plVar4 = (long *)(param_1 + 0xa0);
  *plVar4 = lVar3;
  thunk_FUN_03f5d7b8(plVar4);
  lVar3 = *plVar4;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_04939bc0(lVar3,0,*(undefined4 *)(lVar3 + 0x18),DAT_091c06d0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = Mono_Security_ASN1__Element(lVar2,uVar11 | 2,0x30);
  puVar12 = (undefined8 *)(param_1 + 0x30);
  *puVar12 = uVar5;
  thunk_FUN_03f5d7b8(puVar12);
  uVar5 = *puVar12;
  if (*(int *)(DAT_0918d0e0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = Mono_Security_X509_X501__ToString(uVar5);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  thunk_FUN_03f5d7b8();
  lVar3 = Mono_Security_ASN1__Element(lVar2,uVar11 + 3,0x30);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  Mono_Security_ASN1__get_Item(lVar3,0);
  uVar5 = Mono_Security_ASN1Convert__ToDateTime();
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  Mono_Security_ASN1__get_Item(lVar3,1);
  uVar5 = Mono_Security_ASN1Convert__ToDateTime();
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  uVar5 = Mono_Security_ASN1__Element(lVar2,uVar11 | 4,0x30);
  puVar12 = (undefined8 *)(param_1 + 0x50);
  *puVar12 = uVar5;
  thunk_FUN_03f5d7b8(puVar12);
  uVar5 = Mono_Security_X509_X501__ToString(*puVar12);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  thunk_FUN_03f5d7b8();
  lVar3 = Mono_Security_ASN1__Element(lVar2,uVar11 + 5,0x30);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = Mono_Security_ASN1__Element(lVar3,0,0x30);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  Mono_Security_ASN1__Element(lVar6,0,6);
  uVar5 = Mono_Security_ASN1Convert__ToOid();
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  thunk_FUN_03f5d7b8();
  plVar4 = (long *)Mono_Security_ASN1__get_Item(lVar6,1);
  plVar7 = *(long **)(lVar6 + 0x20);
  if (plVar7 == (long *)0x0) {
LAB_073fb9e0:
    uVar5 = 0;
  }
  else {
    iVar1 = (**(code **)(*plVar7 + 0x298))(plVar7,*(undefined8 *)(*plVar7 + 0x2a0));
    if (iVar1 < 2) goto LAB_073fb9e0;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
  }
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  thunk_FUN_03f5d7b8();
  lVar3 = Mono_Security_ASN1__Element(lVar3,1,3);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = 0;
  if (*(long *)(lVar3 + 0x18) != 0) {
    iVar1 = *(int *)(*(long *)(lVar3 + 0x18) + 0x18);
  }
  uVar5 = FUN_03f5c394(DAT_0917fc88,iVar1 + -1);
  puVar12 = (undefined8 *)(param_1 + 0x60);
  *puVar12 = uVar5;
  thunk_FUN_03f5d7b8(puVar12);
  uVar5 = Mono_Security_ASN1__get_Value(lVar3);
  System_Buffer__BlockCopy(uVar5,1,*puVar12,0,iVar1 + -1,0);
  if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = Mono_Security_ASN1__get_Item(*plVar10,2);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = Mono_Security_ASN1__get_Value();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = FUN_03f5c394(DAT_0917fc88,*(int *)(lVar3 + 0x18) + -1);
  plVar4 = (long *)(param_1 + 0x68);
  *plVar4 = lVar6;
  thunk_FUN_03f5d7b8(plVar4);
  lVar6 = *plVar4;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  System_Buffer__BlockCopy(lVar3,1,lVar6,0,*(undefined4 *)(lVar6 + 0x18),0);
  if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = Mono_Security_ASN1__get_Item(*plVar10,1);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  Mono_Security_ASN1__Element(lVar3,0,6);
  uVar5 = Mono_Security_ASN1Convert__ToOid();
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  thunk_FUN_03f5d7b8();
  plVar10 = (long *)Mono_Security_ASN1__get_Item(lVar3,1);
  if (plVar10 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x78),0);
  }
  else {
    uVar5 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
    *(undefined8 *)(param_1 + 0x78) = uVar5;
    thunk_FUN_03f5d7b8();
  }
  uVar9 = uVar11 | 6;
  lVar3 = Mono_Security_ASN1__Element(lVar2,uVar9,0x81);
  if (lVar3 != 0) {
    uVar5 = Mono_Security_ASN1__get_Value();
    *(undefined8 *)(param_1 + 0xa8) = uVar5;
    thunk_FUN_03f5d7b8();
    uVar9 = uVar11 + 7;
  }
  lVar3 = Mono_Security_ASN1__Element(lVar2,uVar9,0x82);
  if (lVar3 != 0) {
    uVar5 = Mono_Security_ASN1__get_Value();
    *(undefined8 *)(param_1 + 0xb0) = uVar5;
    thunk_FUN_03f5d7b8();
    uVar9 = uVar9 + 1;
  }
  lVar2 = Mono_Security_ASN1__Element(lVar2,uVar9,0xa3);
  if ((lVar2 == 0) || (plVar10 = *(long **)(lVar2 + 0x20), plVar10 == (long *)0x0)) {
LAB_073fbc14:
    uVar5 = thunk_FUN_03f9944c(DAT_0918d1c0);
    Mono_Security_X509_X509ExtensionCollection___ctor(uVar5,0);
    *(undefined8 *)(param_1 + 0xb8) = uVar5;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xb8),uVar5);
  }
  else {
    iVar1 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
    if (iVar1 != 1) goto LAB_073fbc14;
    uVar5 = Mono_Security_ASN1__get_Item(lVar2,0);
    uVar8 = thunk_FUN_03f9944c(DAT_0918d1c0);
    Mono_Security_X509_X509ExtensionCollection___ctor(uVar8,uVar5);
    *(undefined8 *)(param_1 + 0xb8) = uVar8;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xb8),uVar8);
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar2 = System_Array__Clone(param_2,0);
  uVar5 = DAT_0917fc88;
  if (lVar2 != 0) {
    lVar3 = thunk_FUN_03f99350(lVar2,DAT_0917fc88);
    uVar8 = DAT_0917fc88;
    if (lVar3 != 0) {
      *(long *)(param_1 + 0x18) = lVar3;
      lVar3 = thunk_FUN_03f99350(lVar2,uVar8);
      uVar5 = uVar8;
      if (lVar3 != 0) goto LAB_073fbc94;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(lVar2,uVar5);
  }
  lVar3 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
LAB_073fbc94:
  thunk_FUN_03f5d7b8(param_1 + 0x18,lVar3);
  return;
}

