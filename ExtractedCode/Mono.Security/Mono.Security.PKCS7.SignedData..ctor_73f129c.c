// rea decompile_all
// name: Mono.Security.PKCS7.SignedData$$.ctor
// address: 0x73f129c
// body: available
// range: 0x73f129c-0x73f17b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f1634 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f17ac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f17b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_PKCS7_SignedData___ctor(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  if ((DAT_09520e19 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181588);
    FUN_03f5c2a4(&DAT_09193130);
    FUN_03f5c2a4(&DAT_09193148);
    FUN_03f5c2a4(&DAT_0918d130);
    FUN_03f5c2a4(&DAT_0918d0f8);
    DAT_09520e19 = 1;
  }
  System_Object___ctor(param_1,0);
  if ((param_2 == 0) || (lVar4 = Mono_Security_ASN1__get_Item(param_2,0), lVar4 == 0))
  goto LAB_073f1634;
  if (*(char *)(lVar4 + 0x10) == '0') {
    lVar4 = Mono_Security_ASN1__get_Item(param_2,0);
    if (lVar4 == 0) goto LAB_073f1634;
    plVar5 = *(long **)(lVar4 + 0x20);
    if ((plVar5 != (long *)0x0) &&
       (iVar1 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0)), 3 < iVar1))
    {
      lVar4 = Mono_Security_ASN1__get_Item(param_2,0);
      if ((lVar4 == 0) || (lVar4 = Mono_Security_ASN1__get_Item(lVar4,0), lVar4 == 0)) {
LAB_073f1634:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(lVar4 + 0x10) == '\x02') {
        lVar4 = Mono_Security_ASN1__get_Item(param_2,0);
        if (((lVar4 != 0) && (lVar4 = Mono_Security_ASN1__get_Item(lVar4,0), lVar4 != 0)) &&
           (lVar4 = Mono_Security_ASN1__get_Value(), lVar4 != 0)) {
          if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(lVar4 + 0x20);
          lVar4 = Mono_Security_ASN1__get_Item(param_2,0);
          if (lVar4 != 0) {
            uVar6 = Mono_Security_ASN1__get_Item(lVar4,2);
            uVar7 = thunk_FUN_03f9944c(DAT_09193130);
            Mono_Security_PKCS7_ContentInfo___ctor(uVar7,uVar6);
            *(undefined8 *)(param_1 + 0x20) = uVar7;
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),uVar7);
            lVar4 = thunk_FUN_03f9944c(DAT_0918d130);
            System_Collections_CollectionBase___ctor(lVar4,0);
            plVar5 = (long *)(param_1 + 0x28);
            *plVar5 = lVar4;
            thunk_FUN_03f5d7b8(plVar5,lVar4);
            lVar4 = Mono_Security_ASN1__get_Item(param_2,0);
            if ((lVar4 != 0) && (lVar4 = Mono_Security_ASN1__get_Item(lVar4,3), lVar4 != 0)) {
              if (*(char *)(lVar4 + 0x10) == -0x60) {
                lVar4 = Mono_Security_ASN1__get_Item(param_2,0);
                if (lVar4 != 0) {
                  iVar1 = 0;
                  while (lVar4 = Mono_Security_ASN1__get_Item(lVar4,3), lVar4 != 0) {
                    plVar8 = *(long **)(lVar4 + 0x20);
                    iVar2 = 0;
                    if (plVar8 != (long *)0x0) {
                      iVar2 = (**(code **)(*plVar8 + 0x298))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
                    }
                    if (iVar2 <= iVar1) {
                      iVar1 = 4;
                      goto LAB_073f1534;
                    }
                    lVar11 = *plVar5;
                    lVar4 = Mono_Security_ASN1__get_Item(param_2,0);
                    if (((lVar4 == 0) || (lVar4 = Mono_Security_ASN1__get_Item(lVar4,3), lVar4 == 0)
                        ) || (plVar8 = (long *)Mono_Security_ASN1__get_Item(lVar4,iVar1),
                             plVar8 == (long *)0x0)) break;
                    uVar6 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
                    uVar7 = thunk_FUN_03f9944c(DAT_0918d0f8);
                    Mono_Security_X509_X509Certificate___ctor(uVar7,uVar6);
                    if (lVar11 == 0) break;
                    Mono_Security_X509_X509CertificateCollection__Add(lVar11,uVar7);
                    iVar1 = iVar1 + 1;
                    lVar4 = Mono_Security_ASN1__get_Item(param_2,0);
                    if (lVar4 == 0) break;
                  }
                }
              }
              else {
                iVar1 = 3;
LAB_073f1534:
                uVar6 = thunk_FUN_03f9944c(DAT_09181588);
                System_Collections_ArrayList___ctor(uVar6,0);
                puVar10 = (undefined8 *)(param_1 + 0x30);
                *puVar10 = uVar6;
                thunk_FUN_03f5d7b8(puVar10,uVar6);
                lVar4 = Mono_Security_ASN1__get_Item(param_2,0);
                if ((lVar4 != 0) && (lVar4 = Mono_Security_ASN1__get_Item(lVar4,iVar1), lVar4 != 0))
                {
                  if (*(char *)(lVar4 + 0x10) == -0x5f) {
                    lVar4 = Mono_Security_ASN1__get_Item(param_2,0);
                    if (lVar4 != 0) {
                      iVar2 = 0;
                      while (lVar4 = Mono_Security_ASN1__get_Item(lVar4,iVar1), lVar4 != 0) {
                        plVar5 = *(long **)(lVar4 + 0x20);
                        iVar3 = 0;
                        if (plVar5 != (long *)0x0) {
                          iVar3 = (**(code **)(*plVar5 + 0x298))
                                            (plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
                        }
                        if (iVar3 <= iVar2) {
                          iVar1 = iVar1 + 1;
                          goto LAB_073f163c;
                        }
                        plVar5 = (long *)*puVar10;
                        lVar4 = Mono_Security_ASN1__get_Item(param_2,0);
                        if ((((lVar4 == 0) ||
                             (lVar4 = Mono_Security_ASN1__get_Item(lVar4,iVar1), lVar4 == 0)) ||
                            (plVar8 = (long *)Mono_Security_ASN1__get_Item(lVar4,iVar2),
                            plVar8 == (long *)0x0)) ||
                           (uVar6 = (**(code **)(*plVar8 + 0x178))
                                              (plVar8,*(undefined8 *)(*plVar8 + 0x180)),
                           plVar5 == (long *)0x0)) break;
                        (**(code **)(*plVar5 + 0x308))
                                  (plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x310));
                        iVar2 = iVar2 + 1;
                        lVar4 = Mono_Security_ASN1__get_Item(param_2,0);
                        if (lVar4 == 0) break;
                      }
                    }
                  }
                  else {
LAB_073f163c:
                    lVar4 = Mono_Security_ASN1__get_Item(param_2,0);
                    if ((lVar4 != 0) &&
                       (lVar4 = Mono_Security_ASN1__get_Item(lVar4,iVar1), lVar4 != 0)) {
                      plVar5 = *(long **)(lVar4 + 0x20);
                      if ((plVar5 == (long *)0x0) ||
                         (iVar2 = (**(code **)(*plVar5 + 0x298))
                                            (plVar5,*(undefined8 *)(*plVar5 + 0x2a0)), iVar2 < 1)) {
                        uVar6 = thunk_FUN_03f9944c(DAT_09193148);
                        Mono_Security_PKCS7_SignerInfo___ctor();
                        *(undefined8 *)(param_1 + 0x38) = uVar6;
                      }
                      else {
                        lVar4 = Mono_Security_ASN1__get_Item(param_2,0);
                        if (lVar4 == 0) goto LAB_073f1634;
                        uVar7 = Mono_Security_ASN1__get_Item(lVar4,iVar1);
                        uVar6 = thunk_FUN_03f9944c(DAT_09193148);
                        Mono_Security_PKCS7_SignerInfo___ctor(uVar6,uVar7);
                        *(undefined8 *)(param_1 + 0x38) = uVar6;
                      }
                      thunk_FUN_03f5d7b8(param_1 + 0x38,uVar6);
                      lVar4 = *(long *)(param_1 + 0x38);
                      if (lVar4 != 0) {
                        if (*(long *)(lVar4 + 0x18) != 0) {
                          uVar6 = Mono_Security_PKCS7_SignedData__OidToName();
                          Mono_Security_PKCS7_SignedData__set_HashName(param_1,uVar6);
                          lVar4 = *(long *)(param_1 + 0x38);
                          if (lVar4 == 0) goto LAB_073f1634;
                        }
                        plVar5 = *(long **)(lVar4 + 0x20);
                        if (plVar5 != (long *)0x0) {
                          iVar1 = (**(code **)(*plVar5 + 0x298))
                                            (plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
                          *(bool *)(param_1 + 0x40) = 0 < iVar1;
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_073f1634;
      }
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar6 = thunk_FUN_03f9944c();
      puVar9 = &DAT_09205bb8;
      goto LAB_073f1784;
    }
  }
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar6 = thunk_FUN_03f9944c();
  puVar9 = &DAT_09205348;
LAB_073f1784:
  uVar7 = thunk_FUN_03fc39d4(puVar9);
  System_ArgumentException___ctor(uVar6,uVar7,0);
  uVar7 = thunk_FUN_03fc39d4(&DAT_091ee288);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar7);
}

