// rea decompile_all
// name: Mono.Security.X509.X509Crl$$Parse
// address: 0x73fa3fc
// body: available
// range: 0x73fa3fc-0x73fa95b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73fa860 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fa898 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fa8d0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fa8d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fa8d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fa8dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fa8e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fa8e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fa8e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fa940 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fa944 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fa948 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Mono_Security_X509_X509Crl__Parse(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  char cVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  
  if ((DAT_09520e3f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e18);
    FUN_03f5c2a4(&DAT_09181588);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_0918d0e0);
    FUN_03f5c2a4(&DAT_09195ff0);
    FUN_03f5c2a4(&DAT_0918d1c0);
    FUN_03f5c2a4(&DAT_09204c50);
    DAT_09520e3f = 1;
  }
  uVar9 = DAT_09204c50;
  uVar11 = *(undefined8 *)(param_1 + 0x50);
  lVar3 = thunk_FUN_03f9944c(DAT_09180e18);
  Mono_Security_ASN1___ctor(lVar3,uVar11);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((*(char *)(lVar3 + 0x10) != '0') || (plVar4 = *(long **)(lVar3 + 0x20), plVar4 == (long *)0x0)
     ) {
LAB_073fa864:
    thunk_FUN_03fc39d4(&DAT_09182f98);
    uVar11 = thunk_FUN_03f9944c();
    System_Security_Cryptography_CryptographicException___ctor(uVar11,uVar9,0);
    uVar9 = thunk_FUN_03fc39d4(&DAT_091df510);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar11,uVar9);
  }
  iVar1 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
  if (iVar1 != 3) goto LAB_073fa864;
  lVar5 = Mono_Security_ASN1__get_Item(lVar3,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((*(char *)(lVar5 + 0x10) != '0') || (plVar4 = *(long **)(lVar5 + 0x20), plVar4 == (long *)0x0)
     ) {
LAB_073fa89c:
    thunk_FUN_03fc39d4(&DAT_09182f98);
    uVar11 = thunk_FUN_03f9944c();
    System_Security_Cryptography_CryptographicException___ctor(uVar11,uVar9,0);
    uVar9 = thunk_FUN_03fc39d4(&DAT_091df510);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar11,uVar9);
  }
  iVar1 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
  if (iVar1 < 3) goto LAB_073fa89c;
  lVar6 = Mono_Security_ASN1__get_Item(lVar5,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(char *)(lVar6 + 0x10) == '\x02') {
    lVar6 = Mono_Security_ASN1__get_Item(lVar5,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = Mono_Security_ASN1__get_Value();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar12 = 1;
    cVar10 = *(char *)(lVar6 + 0x20) + '\x01';
  }
  else {
    uVar12 = 0;
    cVar10 = '\x01';
  }
  *(char *)(param_1 + 0x18) = cVar10;
  lVar6 = Mono_Security_ASN1__get_Item(lVar5,uVar12);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  Mono_Security_ASN1__get_Item(lVar6,0);
  uVar11 = Mono_Security_ASN1Convert__ToOid();
  *(undefined8 *)(param_1 + 0x38) = uVar11;
  thunk_FUN_03f5d7b8();
  uVar11 = Mono_Security_ASN1__get_Item(lVar5,uVar12 + 1);
  if (*(int *)(DAT_0918d0e0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar11 = Mono_Security_X509_X501__ToString(uVar11);
  *(undefined8 *)(param_1 + 0x10) = uVar11;
  thunk_FUN_03f5d7b8();
  Mono_Security_ASN1__get_Item(lVar5,uVar12 | 2);
  uVar11 = Mono_Security_ASN1Convert__ToDateTime();
  *(undefined8 *)(param_1 + 0x20) = uVar11;
  lVar6 = Mono_Security_ASN1__get_Item(lVar5,uVar12 + 3);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar14 = uVar12 | 4;
  if (*(byte *)(lVar6 + 0x10) - 0x17 < 2) {
    uVar11 = Mono_Security_ASN1Convert__ToDateTime(lVar6);
    *(undefined8 *)(param_1 + 0x28) = uVar11;
    lVar6 = Mono_Security_ASN1__get_Item(lVar5,uVar14);
    uVar14 = uVar12 + 5;
  }
  uVar11 = thunk_FUN_03f9944c(DAT_09181588);
  System_Collections_ArrayList___ctor(uVar11,0);
  puVar13 = (undefined8 *)(param_1 + 0x30);
  *puVar13 = uVar11;
  thunk_FUN_03f5d7b8(puVar13,uVar11);
  if ((lVar6 == 0) || (*(char *)(lVar6 + 0x10) != '0')) {
    uVar14 = uVar14 - 1;
  }
  else {
    iVar1 = 0;
    while( true ) {
      plVar4 = *(long **)(lVar6 + 0x20);
      iVar2 = 0;
      if (plVar4 != (long *)0x0) {
        iVar2 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
      }
      if (iVar2 <= iVar1) break;
      plVar4 = (long *)*puVar13;
      uVar11 = Mono_Security_ASN1__get_Item(lVar6,iVar1);
      uVar7 = thunk_FUN_03f9944c(DAT_09195ff0);
      Mono_Security_X509_X509Crl_X509CrlEntry___ctor(uVar7,uVar11);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar4 + 0x308))(plVar4,uVar7,*(undefined8 *)(*plVar4 + 0x310));
      iVar1 = iVar1 + 1;
    }
  }
  lVar5 = Mono_Security_ASN1__get_Item(lVar5,uVar14);
  if (((lVar5 != 0) && (*(char *)(lVar5 + 0x10) == -0x60)) &&
     (plVar4 = *(long **)(lVar5 + 0x20), plVar4 != (long *)0x0)) {
    iVar1 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
    if (iVar1 == 1) {
      uVar11 = Mono_Security_ASN1__get_Item(lVar5,0);
      uVar7 = thunk_FUN_03f9944c(DAT_0918d1c0);
      Mono_Security_X509_X509ExtensionCollection___ctor(uVar7,uVar11);
      *(undefined8 *)(param_1 + 0x48) = uVar7;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),uVar7);
      goto LAB_073fa7a8;
    }
  }
  uVar11 = thunk_FUN_03f9944c(DAT_0918d1c0);
  Mono_Security_X509_X509ExtensionCollection___ctor(uVar11,0);
  *(undefined8 *)(param_1 + 0x48) = uVar11;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),uVar11);
LAB_073fa7a8:
  lVar5 = Mono_Security_ASN1__get_Item(lVar3,1);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  Mono_Security_ASN1__get_Item(lVar5,0);
  uVar11 = Mono_Security_ASN1Convert__ToOid();
  uVar8 = System_String__op_Inequality(*(undefined8 *)(param_1 + 0x38),uVar11,0);
  if ((uVar8 & 1) != 0) {
    uVar11 = thunk_FUN_03fc39d4(&DAT_091f6070);
    uVar9 = System_String__Concat(uVar9,uVar11,0);
    thunk_FUN_03fc39d4(&DAT_09182f98);
    uVar11 = thunk_FUN_03f9944c();
    System_Security_Cryptography_CryptographicException___ctor(uVar11,uVar9,0);
    uVar9 = thunk_FUN_03fc39d4(&DAT_091df510);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar11,uVar9);
  }
  lVar3 = Mono_Security_ASN1__get_Item(lVar3,2);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = Mono_Security_ASN1__get_Value();
  if (lVar3 != 0) {
    lVar5 = FUN_03f5c394(DAT_0917fc88,*(int *)(lVar3 + 0x18) + -1);
    plVar4 = (long *)(param_1 + 0x40);
    *plVar4 = lVar5;
    thunk_FUN_03f5d7b8(plVar4);
    lVar5 = *plVar4;
    if (lVar5 != 0) {
      System_Buffer__BlockCopy(lVar3,1,lVar5,0,*(undefined4 *)(lVar5 + 0x18),0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

