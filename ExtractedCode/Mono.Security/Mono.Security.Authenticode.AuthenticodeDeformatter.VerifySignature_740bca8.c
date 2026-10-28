// rea decompile_all
// name: Mono.Security.Authenticode.AuthenticodeDeformatter$$VerifySignature
// address: 0x740bca8
// body: available
// range: 0x740bca8-0x740c587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x740bf08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740c2f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740c538 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740c540 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740c544 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740c548 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740c54c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740c554 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740c558 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740c55c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740c560 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740c564 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0740c380) */
/* WARNING: Removing unreachable block (ram,0x0740c194) */
/* WARNING: Removing unreachable block (ram,0x0740c578) */
/* WARNING: Removing unreachable block (ram,0x0740c570) */

bool Mono_Security_Authenticode_AuthenticodeDeformatter__VerifySignature
               (long param_1,long param_2,undefined8 param_3,long *param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if ((DAT_09520ee4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e18);
    FUN_03f5c2a4(&DAT_09182f88);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091899f0);
    FUN_03f5c2a4(&DAT_09193148);
    FUN_03f5c2a4(&DAT_091f99a0);
    FUN_03f5c2a4(&DAT_091f9b40);
    FUN_03f5c2a4(&DAT_091f9998);
    FUN_03f5c2a4(&DAT_091f99b0);
    FUN_03f5c2a4(&DAT_091f9b50);
    FUN_03f5c2a4(&DAT_091f9b48);
    DAT_09520ee4 = 1;
  }
  if ((param_2 != 0) && (lVar13 = *(long *)(param_2 + 0x38), lVar13 != 0)) {
    iVar4 = 0;
    lVar15 = 0;
    uVar17 = 0;
    while (plVar5 = *(long **)(lVar13 + 0x20), plVar5 != (long *)0x0) {
      iVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
      if (iVar3 <= iVar4) {
        uVar7 = System_String__op_Inequality(uVar17,DAT_091f9b50,0);
        if ((uVar7 & 1) != 0) {
          return false;
        }
        if (lVar15 == 0) {
          return false;
        }
        uVar7 = Mono_Security_ASN1__CompareValue(lVar15,param_3,0);
        if ((uVar7 & 1) == 0) {
          return false;
        }
        if (param_4 != (long *)0x0) {
          uVar17 = (**(code **)(*param_4 + 0x168))(param_4,*(undefined8 *)(*param_4 + 0x170));
          if (*(int *)(DAT_09182f88 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182f88);
          }
          uVar17 = System_Security_Cryptography_CryptoConfig__MapNameToOID(uVar17,0);
          plVar5 = (long *)thunk_FUN_03f9944c(DAT_09180e18);
          Mono_Security_ASN1___ctor(plVar5,0x31,0);
          if ((*(long *)(param_2 + 0x38) != 0) &&
             (plVar8 = *(long **)(*(long *)(param_2 + 0x38) + 0x20), plVar8 != (long *)0x0)) {
            plVar8 = (long *)(**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390))
            ;
            goto LAB_0740bfe4;
          }
        }
        break;
      }
      if (((*(long *)(param_2 + 0x38) == 0) ||
          (plVar5 = *(long **)(*(long *)(param_2 + 0x38) + 0x20), plVar5 == (long *)0x0)) ||
         (plVar5 = (long *)(**(code **)(*plVar5 + 0x2e8))
                                     (plVar5,iVar4,*(undefined8 *)(*plVar5 + 0x2f0)),
         plVar5 == (long *)0x0)) break;
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_09180e18 + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_09180e18 + 0x130) * 8 + -8) !=
          DAT_09180e18)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar5);
      }
      uVar6 = Mono_Security_ASN1__get_Item(plVar5,0,0);
      uVar6 = Mono_Security_ASN1Convert__ToOid(uVar6,0);
      uVar7 = System_String__op_Equality(uVar6,DAT_091f9998,0);
      if ((uVar7 & 1) == 0) {
        uVar7 = System_String__op_Equality(uVar6,DAT_091f99a0,0);
        if ((uVar7 & 1) == 0) {
          uVar7 = System_String__op_Equality(uVar6,DAT_091f9b40,0);
          if ((uVar7 & 1) == 0) {
            System_String__op_Equality(uVar6,DAT_091f9b48,0);
          }
        }
        else {
          lVar13 = Mono_Security_ASN1__get_Item(plVar5,1,0);
          if (lVar13 == 0) break;
          lVar15 = Mono_Security_ASN1__get_Item(lVar13,0,0);
        }
      }
      else {
        lVar13 = Mono_Security_ASN1__get_Item(plVar5,1,0);
        if (lVar13 == 0) break;
        uVar17 = Mono_Security_ASN1__get_Item(lVar13,0,0);
        uVar17 = Mono_Security_ASN1Convert__ToOid(uVar17,0);
      }
      lVar13 = *(long *)(param_2 + 0x38);
      iVar4 = iVar4 + 1;
      if (lVar13 == 0) break;
    }
  }
  goto LAB_0740bf08;
LAB_0740bfe4:
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar13 = *plVar8;
  uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar7 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == DAT_09185b10) {
        puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_0740c038;
      }
      uVar7 = uVar7 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_0740c038:
  uVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
  if ((uVar7 & 1) == 0) {
    plVar8 = (long *)thunk_FUN_03f99350(plVar8,DAT_09185a58);
    if (plVar8 == (long *)0x0) goto LAB_0740c188;
    lVar13 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar7 == 0) goto LAB_0740c160;
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    goto LAB_0740c148;
  }
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar13 = *plVar8;
  uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar7 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == DAT_09185b10) {
        puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
        goto LAB_0740c0a0;
      }
      uVar7 = uVar7 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,1);
LAB_0740c0a0:
  plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
  if (plVar10 != (long *)0x0) {
    if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(DAT_09180e18 + 0x130)) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(DAT_09180e18 + 0x130) * 8 + -8) !=
        DAT_09180e18)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar10);
    }
  }
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  Mono_Security_ASN1__Add(plVar5,plVar10,0);
  goto LAB_0740bfe4;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar14 = piVar14 + 4;
    if (uVar7 == 0) break;
LAB_0740c148:
    if (*(long *)(piVar14 + -2) == DAT_09185a58) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0740c17c;
    }
  }
LAB_0740c160:
  puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a58,0);
LAB_0740c17c:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_0740c188:
  (**(code **)(*param_4 + 600))(param_4,*(undefined8 *)(*param_4 + 0x260));
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    uVar6 = System_Security_Cryptography_HashAlgorithm__ComputeHash(param_4,uVar6,0);
    if (*(long *)(param_2 + 0x38) != 0) {
      lVar13 = Mono_Security_PKCS7_SignerInfo__get_Signature(*(long *)(param_2 + 0x38),0);
      lVar15 = *(long *)(param_2 + 0x38);
      if (lVar15 != 0) {
        uVar16 = *(undefined8 *)(lVar15 + 0x38);
        uVar11 = Mono_Security_PKCS7_SignerInfo__get_SerialNumber(lVar15,0);
        if (*(long *)(param_1 + 0x58) != 0) {
          lVar15 = Mono_Security_X509_X509CertificateCollection__GetEnumerator
                             (*(long *)(param_1 + 0x58),0);
          do {
            do {
              do {
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar7 = Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator__MoveNext
                                  (lVar15,0);
                if ((uVar7 & 1) == 0) goto LAB_0740c2f8;
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                plVar5 = (long *)Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator__get_Current
                                           (lVar15,0);
                uVar7 = Mono_Security_Authenticode_AuthenticodeDeformatter__CompareIssuerSerial
                                  (plVar5,uVar16,uVar11,plVar5);
              } while ((uVar7 & 1) == 0);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar12 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
            } while (*(int *)(lVar12 + 0x18) <= *(int *)(lVar13 + 0x18) >> 3);
            *(long **)(param_1 + 0x70) = plVar5;
            thunk_FUN_03f5d7b8(param_1 + 0x70,plVar5);
            plVar8 = (long *)(**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0))
            ;
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*plVar8 != DAT_091899f0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0();
            }
            uVar7 = System_Security_Cryptography_RSACryptoServiceProvider__VerifyHash
                              (plVar8,uVar6,uVar17,lVar13,0);
          } while ((uVar7 & 1) == 0);
          if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          Mono_Security_X509_X509Chain__LoadCertificates
                    (*(long *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x58),0);
          if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          bVar2 = Mono_Security_X509_X509Chain__Build(*(long *)(param_1 + 0x88),plVar5,0);
          *(byte *)(param_1 + 0x7c) = bVar2 & 1;
LAB_0740c2f8:
          plVar5 = (long *)thunk_FUN_03f99350(lVar15,DAT_09185a58);
          if (plVar5 != (long *)0x0) {
            lVar15 = *plVar5;
            uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar7 != 0) {
              piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == DAT_09185a58) {
                  puVar9 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0740c368;
                }
                uVar7 = uVar7 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar7 != 0);
            }
            puVar9 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_0740c368:
            (*(code *)*puVar9)(plVar5,puVar9[1]);
          }
          if ((*(long *)(param_2 + 0x38) != 0) &&
             (plVar5 = *(long **)(*(long *)(param_2 + 0x38) + 0x28), plVar5 != (long *)0x0)) {
            iVar4 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
            if (iVar4 == 0) {
              *(undefined1 *)(param_1 + 0x7d) = 1;
LAB_0740c4c4:
              bVar1 = false;
              if (*(char *)(param_1 + 0x7c) != '\0') {
                bVar1 = *(char *)(param_1 + 0x7d) != '\0';
              }
              return bVar1;
            }
            lVar15 = *(long *)(param_2 + 0x38);
            if (lVar15 != 0) {
              iVar4 = 0;
              while (plVar5 = *(long **)(lVar15 + 0x28), plVar5 != (long *)0x0) {
                iVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
                if (iVar3 <= iVar4) goto LAB_0740c4c4;
                if (((*(long *)(param_2 + 0x38) == 0) ||
                    (plVar5 = *(long **)(*(long *)(param_2 + 0x38) + 0x28), plVar5 == (long *)0x0))
                   || (plVar5 = (long *)(**(code **)(*plVar5 + 0x2e8))
                                                  (plVar5,iVar4,*(undefined8 *)(*plVar5 + 0x2f0)),
                      plVar5 == (long *)0x0)) break;
                if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_09180e18 + 0x130)) ||
                   (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_09180e18 + 0x130) * 8
                             + -8) != DAT_09180e18)) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c8d0(plVar5);
                }
                uVar17 = Mono_Security_ASN1__get_Item(plVar5,0,0);
                uVar17 = Mono_Security_ASN1Convert__ToOid(uVar17,0);
                uVar7 = System_String__op_Equality(uVar17,DAT_091f99b0,0);
                if ((uVar7 & 1) != 0) {
                  uVar17 = Mono_Security_ASN1__get_Item(plVar5,1,0);
                  uVar6 = thunk_FUN_03f9944c(DAT_09193148);
                  Mono_Security_PKCS7_SignerInfo___ctor(uVar6,uVar17,0);
                  bVar2 = Mono_Security_Authenticode_AuthenticodeDeformatter__VerifyCounterSignature
                                    (param_1,uVar6,lVar13);
                  *(byte *)(param_1 + 0x7d) = bVar2 & 1;
                }
                lVar15 = *(long *)(param_2 + 0x38);
                iVar4 = iVar4 + 1;
                if (lVar15 == 0) break;
              }
            }
          }
        }
      }
    }
  }
LAB_0740bf08:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

