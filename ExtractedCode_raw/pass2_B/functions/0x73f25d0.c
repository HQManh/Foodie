// rea decompile_all
// name: Mono.Security.X509.PKCS12$$Decode
// address: 0x73f25d0
// body: available
// range: 0x73f25d0-0x73f2c5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f2aac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f2b48 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_X509_PKCS12__Decode(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  
  if ((DAT_09520e20 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e18);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09193130);
    FUN_03f5c2a4(&DAT_09193138);
    FUN_03f5c2a4(&DAT_091f9950);
    FUN_03f5c2a4(&DAT_091f9a88);
    FUN_03f5c2a4(&DAT_091f9938);
    DAT_09520e20 = 1;
  }
  lVar5 = thunk_FUN_03f9944c(DAT_09180e18);
  Mono_Security_ASN1___ctor(lVar5,param_2);
  if (lVar5 == 0) goto LAB_073f2aac;
  if (*(char *)(lVar5 + 0x10) == '0') {
    lVar6 = Mono_Security_ASN1__get_Item(lVar5,0);
    if (lVar6 == 0) goto LAB_073f2aac;
    if (*(char *)(lVar6 + 0x10) == '\x02') {
      uVar7 = Mono_Security_ASN1__get_Item(lVar5,1);
      lVar6 = thunk_FUN_03f9944c(DAT_09193130);
      Mono_Security_PKCS7_ContentInfo___ctor(lVar6,uVar7);
      if (lVar6 == 0) goto LAB_073f2aac;
      uVar8 = System_String__op_Inequality(*(undefined8 *)(lVar6 + 0x10),DAT_091f9938,0);
      if ((uVar8 & 1) == 0) {
        plVar9 = *(long **)(lVar5 + 0x20);
        if (plVar9 != (long *)0x0) {
          iVar1 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
          if (2 < iVar1) {
            lVar5 = Mono_Security_ASN1__get_Item(lVar5,2);
            if (lVar5 == 0) goto LAB_073f2aac;
            if (*(char *)(lVar5 + 0x10) == '0') {
              lVar10 = Mono_Security_ASN1__get_Item(lVar5,0);
              if (lVar10 == 0) goto LAB_073f2aac;
              if (*(char *)(lVar10 + 0x10) == '0') {
                lVar11 = Mono_Security_ASN1__get_Item(lVar10,0);
                if (lVar11 == 0) goto LAB_073f2aac;
                Mono_Security_ASN1__get_Item(lVar11,0);
                uVar7 = Mono_Security_ASN1Convert__ToOid();
                uVar8 = System_String__op_Inequality(uVar7,DAT_091f9a88,0);
                if ((uVar8 & 1) == 0) {
                  lVar10 = Mono_Security_ASN1__get_Item(lVar10,1);
                  if (lVar10 == 0) goto LAB_073f2aac;
                  uVar7 = Mono_Security_ASN1__get_Value();
                  lVar10 = Mono_Security_ASN1__get_Item(lVar5,1);
                  if (lVar10 == 0) goto LAB_073f2aac;
                  if (*(char *)(lVar10 + 0x10) == '\x04') {
                    plVar9 = *(long **)(lVar5 + 0x20);
                    *(undefined4 *)(param_1 + 0x34) = 1;
                    if (plVar9 != (long *)0x0) {
                      iVar1 = (**(code **)(*plVar9 + 0x298))
                                        (plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
                      if (2 < iVar1) {
                        lVar5 = Mono_Security_ASN1__get_Item(lVar5,2);
                        if (lVar5 == 0) goto LAB_073f2aac;
                        if (*(char *)(lVar5 + 0x10) != '\x02') {
                          thunk_FUN_03fc39d4(&DAT_09181548);
                          uVar7 = thunk_FUN_03f9944c();
                          puVar14 = &DAT_0921d780;
                          goto LAB_073f2b20;
                        }
                        uVar2 = Mono_Security_ASN1Convert__ToInt32();
                        *(undefined4 *)(param_1 + 0x34) = uVar2;
                      }
                    }
                    if ((*(long *)(lVar6 + 0x18) == 0) ||
                       (lVar5 = Mono_Security_ASN1__get_Item(*(long *)(lVar6 + 0x18),0), lVar5 == 0)
                       ) goto LAB_073f2aac;
                    uVar12 = Mono_Security_ASN1__get_Value();
                    puVar15 = (undefined8 *)(param_1 + 0x10);
                    uVar16 = *puVar15;
                    uVar13 = Mono_Security_ASN1__get_Value(lVar10);
                    uVar13 = Mono_Security_X509_PKCS12__MAC
                                       (uVar13,uVar16,uVar13,*(undefined4 *)(param_1 + 0x34),uVar12)
                    ;
                    uVar8 = Mono_Security_X509_PKCS12__Compare(uVar13,uVar7,uVar13);
                    if ((uVar8 & 1) == 0) {
                      uVar13 = FUN_03f5c394(DAT_0917fc88,2);
                      uVar16 = Mono_Security_ASN1__get_Value(lVar10);
                      uVar12 = Mono_Security_X509_PKCS12__MAC
                                         (uVar16,uVar13,uVar16,*(undefined4 *)(param_1 + 0x34),
                                          uVar12);
                      uVar8 = Mono_Security_X509_PKCS12__Compare(uVar12,uVar7,uVar12);
                      if ((uVar8 & 1) == 0) {
                        thunk_FUN_03fc39d4(&DAT_09182f98);
                        uVar7 = thunk_FUN_03f9944c();
                        uVar12 = thunk_FUN_03fc39d4(&DAT_09205290);
                        System_Security_Cryptography_CryptographicException___ctor(uVar7,uVar12,0);
                        goto LAB_073f2b34;
                      }
                      *puVar15 = uVar13;
                      thunk_FUN_03f5d7b8(puVar15,uVar13);
                    }
                    goto LAB_073f28ac;
                  }
                  thunk_FUN_03fc39d4(&DAT_09181548);
                  uVar7 = thunk_FUN_03f9944c();
                  puVar14 = &DAT_0921f7a8;
                }
                else {
                  thunk_FUN_03fc39d4(&DAT_09181548);
                  uVar7 = thunk_FUN_03f9944c();
                  puVar14 = &DAT_09224fd8;
                }
                goto LAB_073f2b20;
              }
            }
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar7 = thunk_FUN_03f9944c();
            puVar14 = &DAT_0921d778;
            goto LAB_073f2b20;
          }
        }
LAB_073f28ac:
        if ((*(long *)(lVar6 + 0x18) != 0) &&
           (lVar5 = Mono_Security_ASN1__get_Item(*(long *)(lVar6 + 0x18),0), lVar5 != 0)) {
          uVar7 = Mono_Security_ASN1__get_Value();
          lVar5 = thunk_FUN_03f9944c(DAT_09180e18);
          Mono_Security_ASN1___ctor(lVar5,uVar7);
          if (lVar5 != 0) {
            iVar1 = 0;
            while( true ) {
              plVar9 = *(long **)(lVar5 + 0x20);
              iVar3 = 0;
              if (plVar9 != (long *)0x0) {
                iVar3 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
              }
              if (iVar3 <= iVar1) {
                return;
              }
              uVar7 = Mono_Security_ASN1__get_Item(lVar5,iVar1);
              lVar6 = thunk_FUN_03f9944c(DAT_09193130);
              Mono_Security_PKCS7_ContentInfo___ctor(lVar6,uVar7);
              if (lVar6 == 0) break;
              uVar7 = *(undefined8 *)(lVar6 + 0x10);
              uVar8 = System_String__op_Equality(uVar7,DAT_091f9938,0);
              if ((uVar8 & 1) == 0) {
                uVar8 = System_String__op_Equality(uVar7,DAT_091f9950,0);
                if ((uVar8 & 1) == 0) {
                  uVar12 = thunk_FUN_03fc39d4(&DAT_091f9948);
                  uVar8 = System_String__op_Equality(uVar7,uVar12,0);
                  if ((uVar8 & 1) != 0) {
                    thunk_FUN_03fc39d4(&DAT_09188910);
                    uVar7 = thunk_FUN_03f9944c();
                    uVar12 = thunk_FUN_03fc39d4(&DAT_092212e0);
                    System_NotImplementedException___ctor(uVar7,uVar12,0);
                    goto LAB_073f2b34;
                  }
                  thunk_FUN_03fc39d4(&DAT_09181548);
                  uVar7 = thunk_FUN_03f9944c();
                  puVar14 = &DAT_09224f10;
                  goto LAB_073f2b20;
                }
                if (*(long *)(lVar6 + 0x18) == 0) break;
                uVar7 = Mono_Security_ASN1__get_Item(*(long *)(lVar6 + 0x18),0);
                uVar12 = thunk_FUN_03f9944c(DAT_09193138);
                Mono_Security_PKCS7_EncryptedData___ctor(uVar12,uVar7);
                uVar7 = Mono_Security_X509_PKCS12__Decrypt(param_1,uVar12);
                lVar6 = thunk_FUN_03f9944c(DAT_09180e18);
                Mono_Security_ASN1___ctor(lVar6,uVar7);
                if (lVar6 == 0) break;
                iVar3 = 0;
                while( true ) {
                  plVar9 = *(long **)(lVar6 + 0x20);
                  iVar4 = 0;
                  if (plVar9 != (long *)0x0) {
                    iVar4 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
                  }
                  if (iVar4 <= iVar3) break;
                  uVar7 = Mono_Security_ASN1__get_Item(lVar6,iVar3);
                  Mono_Security_X509_PKCS12__ReadSafeBag(param_1,uVar7);
                  iVar3 = iVar3 + 1;
                }
              }
              else {
                if ((*(long *)(lVar6 + 0x18) == 0) ||
                   (lVar6 = Mono_Security_ASN1__get_Item(*(long *)(lVar6 + 0x18),0), lVar6 == 0))
                break;
                uVar7 = Mono_Security_ASN1__get_Value();
                lVar6 = thunk_FUN_03f9944c(DAT_09180e18);
                Mono_Security_ASN1___ctor(lVar6,uVar7);
                if (lVar6 == 0) break;
                iVar3 = 0;
                while( true ) {
                  plVar9 = *(long **)(lVar6 + 0x20);
                  iVar4 = 0;
                  if (plVar9 != (long *)0x0) {
                    iVar4 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
                  }
                  if (iVar4 <= iVar3) break;
                  uVar7 = Mono_Security_ASN1__get_Item(lVar6,iVar3);
                  Mono_Security_X509_PKCS12__ReadSafeBag(param_1,uVar7);
                  iVar3 = iVar3 + 1;
                }
              }
              iVar1 = iVar1 + 1;
            }
          }
        }
LAB_073f2aac:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar7 = thunk_FUN_03f9944c();
      puVar14 = &DAT_0921d7b8;
    }
    else {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar7 = thunk_FUN_03f9944c();
      puVar14 = &DAT_0921d788;
    }
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar7 = thunk_FUN_03f9944c();
    puVar14 = &DAT_0921d7c8;
  }
LAB_073f2b20:
  uVar12 = thunk_FUN_03fc39d4(puVar14);
  System_ArgumentException___ctor(uVar7,uVar12,0);
LAB_073f2b34:
  uVar12 = thunk_FUN_03fc39d4(&DAT_091d56c8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar12);
}

