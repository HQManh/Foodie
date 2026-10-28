// rea decompile_all
// name: Mono.Security.Authenticode.AuthenticodeDeformatter$$VerifyCounterSignature
// address: 0x740c768
// body: available
// range: 0x740c768-0x740cfdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x740c9f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740ceb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740cf48 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740cf98 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740cfa0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740cfa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740cfa8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740cfac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740cfb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740cfb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740cfb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740cfbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0740cd08) */
/* WARNING: Removing unreachable block (ram,0x0740cf44) */
/* WARNING: Removing unreachable block (ram,0x0740cfd0) */

uint Mono_Security_Authenticode_AuthenticodeDeformatter__VerifyCounterSignature
               (long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *local_b0;
  long *local_a8;
  undefined8 local_a0;
  long **pplStack_98;
  long **local_90;
  
  if ((DAT_09520ee5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e18);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09188d80);
    FUN_03f5c2a4(&DAT_091899f0);
    FUN_03f5c2a4(&DAT_09189a00);
    FUN_03f5c2a4(&DAT_0920c360);
    FUN_03f5c2a4(&DAT_0920c358);
    FUN_03f5c2a4(&DAT_091f99a0);
    FUN_03f5c2a4(&DAT_091f99a8);
    FUN_03f5c2a4(&DAT_091f9998);
    FUN_03f5c2a4(&DAT_0920c350);
    FUN_03f5c2a4(&DAT_09207318);
    FUN_03f5c2a4(&DAT_0920c368);
    FUN_03f5c2a4(&DAT_091f9938);
    DAT_09520ee5 = 1;
  }
  local_b0 = (long *)0x0;
  local_a8 = (long *)0x0;
  if (param_2 != 0) {
    if (1 < *(byte *)(param_2 + 0x10)) {
LAB_0740cc44:
      uVar3 = 0;
      goto LAB_0740cc48;
    }
    plVar4 = *(long **)(param_2 + 0x20);
    if (plVar4 != (long *)0x0) {
      uVar16 = 0;
      lVar14 = 0;
      iVar2 = 0;
      while (iVar1 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0)),
            iVar2 < iVar1) {
        plVar4 = *(long **)(param_2 + 0x20);
        if ((plVar4 == (long *)0x0) ||
           (plVar4 = (long *)(**(code **)(*plVar4 + 0x2e8))
                                       (plVar4,iVar2,*(undefined8 *)(*plVar4 + 0x2f0)),
           plVar4 == (long *)0x0)) goto LAB_0740c9f8;
        if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_09180e18 + 0x130)) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_09180e18 + 0x130) * 8 + -8) !=
            DAT_09180e18)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar4);
        }
        uVar5 = Mono_Security_ASN1__get_Item(plVar4,0,0);
        uVar5 = Mono_Security_ASN1Convert__ToOid(uVar5,0);
        uVar6 = System_String__op_Equality(uVar5,DAT_091f9998,0);
        if ((uVar6 & 1) == 0) {
          uVar6 = System_String__op_Equality(uVar5,DAT_091f99a0,0);
          if ((uVar6 & 1) == 0) {
            uVar6 = System_String__op_Equality(uVar5,DAT_091f99a8,0);
            if ((uVar6 & 1) != 0) {
              lVar7 = Mono_Security_ASN1__get_Item(plVar4,1,0);
              if (lVar7 == 0) goto LAB_0740c9f8;
              uVar5 = Mono_Security_ASN1__get_Item(lVar7,0,0);
              uVar5 = Mono_Security_ASN1Convert__ToDateTime(uVar5,0);
              *(undefined8 *)(param_1 + 0x68) = uVar5;
            }
          }
          else {
            lVar14 = Mono_Security_ASN1__get_Item(plVar4,1,0);
            if (lVar14 == 0) goto LAB_0740c9f8;
            lVar14 = Mono_Security_ASN1__get_Item(lVar14,0,0);
          }
        }
        else {
          lVar7 = Mono_Security_ASN1__get_Item(plVar4,1,0);
          if (lVar7 == 0) goto LAB_0740c9f8;
          uVar16 = Mono_Security_ASN1__get_Item(lVar7,0,0);
          uVar16 = Mono_Security_ASN1Convert__ToOid(uVar16,0);
        }
        plVar4 = *(long **)(param_2 + 0x20);
        iVar2 = iVar2 + 1;
        if (plVar4 == (long *)0x0) goto LAB_0740c9f8;
      }
      uVar6 = System_String__op_Inequality(uVar16,DAT_091f9938,0);
      uVar3 = 0;
      if (((uVar6 & 1) != 0) || (lVar14 == 0)) goto LAB_0740cc48;
      iVar2 = Mono_Security_ASN1__get_Length(lVar14,0);
      if (iVar2 < 0x15) {
        if (iVar2 == 0x10) {
          puVar11 = &DAT_09207318;
          goto LAB_0740ca9c;
        }
        if (iVar2 == 0x14) {
          puVar11 = &DAT_0920c350;
          goto LAB_0740ca9c;
        }
LAB_0740ca74:
        uVar16 = 0;
      }
      else {
        if (iVar2 == 0x20) {
          puVar11 = &DAT_0920c358;
        }
        else if (iVar2 == 0x30) {
          puVar11 = &DAT_0920c360;
        }
        else {
          if (iVar2 != 0x40) goto LAB_0740ca74;
          puVar11 = &DAT_0920c368;
        }
LAB_0740ca9c:
        uVar16 = *puVar11;
      }
      lVar7 = System_Security_Cryptography_HashAlgorithm__Create(uVar16,0);
      if (lVar7 != 0) {
        uVar16 = System_Security_Cryptography_HashAlgorithm__ComputeHash(lVar7,param_3,0);
        uVar6 = Mono_Security_ASN1__CompareValue(lVar14,uVar16,0);
        if ((uVar6 & 1) == 0) goto LAB_0740cc44;
        lVar14 = Mono_Security_PKCS7_SignerInfo__get_Signature(param_2,0);
        plVar4 = (long *)thunk_FUN_03f9944c(DAT_09180e18);
        Mono_Security_ASN1___ctor(plVar4,0x31,0);
        plVar8 = *(long **)(param_2 + 0x20);
        if (plVar8 != (long *)0x0) {
          local_a8 = (long *)(**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390))
          ;
          pplStack_98 = &local_a8;
          local_a0 = 0;
          local_90 = &local_b0;
          goto LAB_0740cb30;
        }
      }
    }
  }
  goto LAB_0740c9f8;
LAB_0740cb30:
  plVar8 = local_a8;
  if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar12 = *local_a8;
  uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar6 != 0) {
    piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == DAT_09185b10) {
        puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_0740cb84;
      }
      uVar6 = uVar6 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar6 != 0);
  }
  puVar11 = (undefined8 *)FUN_03f95da8(local_a8,DAT_09185b10,0);
LAB_0740cb84:
  uVar6 = (*(code *)*puVar11)(plVar8,puVar11[1]);
  plVar8 = local_a8;
  if ((uVar6 & 1) == 0) {
    plVar8 = (long *)thunk_FUN_03f99350(local_a8,DAT_09185a58);
    local_b0 = plVar8;
    if (plVar8 == (long *)0x0) goto LAB_0740ccfc;
    lVar12 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar6 == 0) goto LAB_0740ccd4;
    piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    goto LAB_0740ccbc;
  }
  if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar12 = *local_a8;
  uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar6 != 0) {
    piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == DAT_09185b10) {
        puVar11 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
        goto LAB_0740cbec;
      }
      uVar6 = uVar6 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar6 != 0);
  }
  puVar11 = (undefined8 *)FUN_03f95da8(local_a8,DAT_09185b10,1);
LAB_0740cbec:
  plVar8 = (long *)(*(code *)*puVar11)(plVar8,puVar11[1]);
  if (plVar8 != (long *)0x0) {
    if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(DAT_09180e18 + 0x130)) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(DAT_09180e18 + 0x130) * 8 + -8) !=
        DAT_09180e18)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar8);
    }
  }
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  Mono_Security_ASN1__Add(plVar4,plVar8,0);
  goto LAB_0740cb30;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar13 = piVar13 + 4;
    if (uVar6 == 0) break;
LAB_0740ccbc:
    if (*(long *)(piVar13 + -2) == DAT_09185a58) {
      puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0740ccf0;
    }
  }
LAB_0740ccd4:
  puVar11 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a58,0);
LAB_0740ccf0:
  (*(code *)*puVar11)(plVar8,puVar11[1]);
LAB_0740ccfc:
  if (plVar4 != (long *)0x0) {
    uVar16 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
    uVar16 = System_Security_Cryptography_HashAlgorithm__ComputeHash(lVar7,uVar16,0);
    uVar15 = *(undefined8 *)(param_2 + 0x38);
    uVar5 = Mono_Security_PKCS7_SignerInfo__get_SerialNumber(param_2,0);
    if (*(long *)(param_1 + 0x58) != 0) {
      lVar12 = Mono_Security_X509_X509CertificateCollection__GetEnumerator
                         (*(long *)(param_1 + 0x58),0);
      do {
        do {
          do {
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar6 = Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator__MoveNext
                              (lVar12,0);
            if ((uVar6 & 1) == 0) {
              uVar3 = 0;
              goto LAB_0740ced0;
            }
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar4 = (long *)Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator__get_Current
                                       (lVar12,0);
            uVar6 = Mono_Security_Authenticode_AuthenticodeDeformatter__CompareIssuerSerial
                              (plVar4,uVar15,uVar5,plVar4);
          } while ((uVar6 & 1) == 0);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        } while (*(int *)(lVar9 + 0x18) <= *(int *)(lVar14 + 0x18));
        plVar8 = (long *)(**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
        if ((plVar8 != (long *)0x0) && (*plVar8 != DAT_091899f0)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar8);
        }
        plVar10 = (long *)thunk_FUN_03f9944c(DAT_09189a00);
        Mono_Security_Cryptography_RSAManaged___ctor(plVar10,0x400);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*plVar8 + 0x1e8))(&local_a0,plVar8,0,*(undefined8 *)(*plVar8 + 0x1f0));
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*plVar10 + 0x1f8))(plVar10,&local_a0,*(undefined8 *)(*plVar10 + 0x200));
        if (*(int *)(DAT_09188d80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = Mono_Security_Cryptography_PKCS1__Verify_v15(plVar10,lVar7,uVar16,lVar14,1);
      } while ((uVar6 & 1) == 0);
      if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      Mono_Security_X509_X509Chain__LoadCertificates
                (*(long *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x58),0);
      if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = Mono_Security_X509_X509Chain__Build(*(long *)(param_1 + 0x90),plVar4,0);
LAB_0740ced0:
      plVar4 = (long *)thunk_FUN_03f99350(lVar12,DAT_09185a58);
      if (plVar4 != (long *)0x0) {
        lVar14 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar14 + 0x12e);
        local_b0 = plVar4;
        if (uVar6 != 0) {
          piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_09185a58) {
              puVar11 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0740cf34;
            }
            uVar6 = uVar6 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar6 != 0);
        }
        puVar11 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_0740cf34:
        (*(code *)*puVar11)(plVar4,puVar11[1]);
      }
LAB_0740cc48:
      return uVar3 & 1;
    }
  }
LAB_0740c9f8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

