// rea decompile_all
// name: Mono.Security.X509.PKCS12$$GetBytes
// address: 0x73f62c4
// body: available
// range: 0x73f62c4-0x73f6873 inclusive
// range: 0x73f6878-0x73f694b inclusive
// range: 0x73f6950-0x73f6953 inclusive
// range: 0x73f6958-0x73f695b inclusive
// range: 0x73f6960-0x73f6963 inclusive
// range: 0x73f69c8-0x73f6c27 inclusive
// range: 0x73f6c2c-0x73f6cfb inclusive
// range: 0x73f6d00-0x73f6d03 inclusive
// range: 0x73f6d08-0x73f6d0b inclusive
// range: 0x73f6d6c-0x73f7ef3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f65f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f6870 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f6948 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f6950 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f6958 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f6960 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f6c24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f6cf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f6d00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f6d08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f7368 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f7628 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073f71ac) */
/* WARNING: Removing unreachable block (ram,0x073f7a00) */
/* WARNING: Removing unreachable block (ram,0x073f6cc8) */
/* WARNING: Removing unreachable block (ram,0x073f6914) */
/* WARNING: Removing unreachable block (ram,0x073f7ee0) */
/* WARNING: Removing unreachable block (ram,0x073f7e78) */
/* WARNING: Removing unreachable block (ram,0x073f7e38) */
/* WARNING: Removing unreachable block (ram,0x073f7ee8) */
/* WARNING: Removing unreachable block (ram,0x073f6fe0) */
/* WARNING: Removing unreachable block (ram,0x073f76b8) */
/* WARNING: Removing unreachable block (ram,0x073f6a60) */
/* WARNING: Removing unreachable block (ram,0x073f73f8) */
/* WARNING: Removing unreachable block (ram,0x073f6fb8) */
/* WARNING: Removing unreachable block (ram,0x073f7ee4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Mono_Security_X509_PKCS12__GetBytes(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  uint uVar21;
  
  if ((DAT_09520e2c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e18);
    FUN_03f5c2a4(&DAT_09181588);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09193130);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0918a4f8);
    FUN_03f5c2a4(&DAT_0918d0f8);
    FUN_03f5c2a4(&DAT_091f98d0);
    FUN_03f5c2a4(&DAT_091f98b0);
    FUN_03f5c2a4(&DAT_091f98f0);
    FUN_03f5c2a4(&DAT_091f9a88);
    FUN_03f5c2a4(&DAT_091f98d8);
    FUN_03f5c2a4(&DAT_091f9938);
    FUN_03f5c2a4(&DAT_091f98e0);
    DAT_09520e2c = 1;
  }
  plVar4 = (long *)thunk_FUN_03f9944c(DAT_09180e18);
  System_Object___ctor(plVar4,0);
  *(undefined1 *)(plVar4 + 2) = 0x30;
  plVar4[3] = 0;
  thunk_FUN_03f5d7b8(plVar4 + 3,0);
  plVar5 = (long *)thunk_FUN_03f9944c(DAT_09181588);
  System_Collections_ArrayList___ctor(plVar5,0);
  plVar6 = *(long **)(param_1 + 0x38);
  if (plVar6 != (long *)0x0) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
    do {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar17 = *plVar6;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == DAT_09185b10) {
            puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_073f64b0;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_073f64b0:
      uVar19 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar19 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_03f99350(plVar6,DAT_09185a58);
        if (plVar6 == (long *)0x0) goto LAB_073f6688;
        lVar17 = *plVar6;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 == 0) goto LAB_073f6660;
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        goto LAB_073f6648;
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar17 = *plVar6;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == DAT_09185b10) {
            puVar7 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_073f6518;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,1);
LAB_073f6518:
      plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(DAT_0918a4f8 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(DAT_0918a4f8 + 0x130) * 8 + -8) !=
          DAT_0918a4f8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar8);
      }
      if (plVar8[2] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar19 = System_String__Equals(plVar8[2],DAT_091f98e0,0);
      if ((uVar19 & 1) != 0) {
        if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar17 = Mono_Security_ASN1__get_Item(plVar8[3],1);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar9 = Mono_Security_ASN1__get_Value();
        lVar17 = thunk_FUN_03f9944c(DAT_09193130);
        Mono_Security_PKCS7_ContentInfo___ctor(lVar17,uVar9);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar17 = Mono_Security_ASN1__get_Item(*(long *)(lVar17 + 0x18),0);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar9 = Mono_Security_ASN1__get_Value();
        uVar10 = thunk_FUN_03f9944c(DAT_0918d0f8);
        Mono_Security_X509_X509Certificate___ctor(uVar10,uVar9);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*plVar5 + 0x308))(plVar5,uVar10,*(undefined8 *)(*plVar5 + 0x310));
      }
    } while( true );
  }
  goto LAB_073f7eac;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_073f6648:
    if (*(long *)(piVar20 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_073f667c;
    }
  }
LAB_073f6660:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_073f667c:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_073f6688:
  plVar6 = (long *)thunk_FUN_03f9944c(DAT_09181588);
  System_Collections_ArrayList___ctor(plVar6,0);
  plVar8 = (long *)thunk_FUN_03f9944c(DAT_09181588);
  System_Collections_ArrayList___ctor(plVar8,0);
  lVar17 = Mono_Security_X509_PKCS12__get_Certificates(param_1);
  if (lVar17 != 0) {
    lVar17 = Mono_Security_X509_X509CertificateCollection__GetEnumerator();
joined_r0x073f66d8:
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar19 = Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator__MoveNext();
    if ((uVar19 & 1) != 0) {
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar11 = (long *)Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator__get_Current
                                  ();
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar12 = (long *)(**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
      uVar21 = 0;
      do {
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar18 = *plVar12;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == DAT_09185b10) {
              puVar7 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_073f6784;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185b10,0);
LAB_073f6784:
        uVar19 = (*(code *)*puVar7)(plVar12,puVar7[1]);
        if ((uVar19 & 1) == 0) goto LAB_073f6878;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar18 = *plVar12;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == DAT_09185b10) {
              puVar7 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_073f67ec;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185b10,1);
LAB_073f67ec:
        plVar13 = (long *)(*(code *)*puVar7)(plVar12,puVar7[1]);
        if (plVar13 != (long *)0x0) {
          if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_0918d0f8 + 0x130)) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_0918d0f8 + 0x130) * 8 + -8)
              != DAT_0918d0f8)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar13);
          }
        }
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar9 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200));
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar10 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200));
        uVar2 = Mono_Security_X509_PKCS12__Compare(uVar10,uVar9,uVar10);
        uVar21 = uVar2 | uVar21;
      } while( true );
    }
    plVar11 = (long *)thunk_FUN_03f99350(lVar17,DAT_09185a58);
    if (plVar11 == (long *)0x0) goto LAB_073f6a50;
    lVar17 = *plVar11;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 == 0) goto LAB_073f6a28;
    piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    goto LAB_073f6a10;
  }
  goto LAB_073f7eac;
LAB_073f6878:
  plVar12 = (long *)thunk_FUN_03f99350(plVar12,DAT_09185a58);
  if (plVar12 != (long *)0x0) {
    lVar18 = *plVar12;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == DAT_09185a58) {
          puVar7 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_073f68fc;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185a58,0);
LAB_073f68fc:
    (*(code *)*puVar7)(plVar12,puVar7[1]);
  }
  if ((uVar21 & 1) == 0) {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar6 + 0x308))(plVar6,plVar11,*(undefined8 *)(*plVar6 + 0x310));
  }
  goto joined_r0x073f66d8;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_073f6a10:
    if (*(long *)(piVar20 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_073f6a44;
    }
  }
LAB_073f6a28:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185a58,0);
LAB_073f6a44:
  (*(code *)*puVar7)(plVar11,puVar7[1]);
LAB_073f6a50:
  if (plVar5 != (long *)0x0) {
    plVar5 = (long *)(**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
    do {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar17 = *plVar5;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == DAT_09185b10) {
            puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_073f6af8;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_073f6af8:
      uVar19 = (*(code *)*puVar7)(plVar5,puVar7[1]);
      if ((uVar19 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_03f99350(plVar5,DAT_09185a58);
        if (plVar5 == (long *)0x0) goto LAB_073f6df0;
        lVar17 = *plVar5;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 == 0) goto LAB_073f6dc8;
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        goto LAB_073f6db0;
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar17 = *plVar5;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == DAT_09185b10) {
            puVar7 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_073f6b60;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,1);
LAB_073f6b60:
      plVar11 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
      if (plVar11 != (long *)0x0) {
        if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(DAT_0918d0f8 + 0x130)) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(DAT_0918d0f8 + 0x130) * 8 + -8)
            != DAT_0918d0f8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar11);
        }
      }
      lVar17 = Mono_Security_X509_PKCS12__get_Certificates(param_1);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar17 = Mono_Security_X509_X509CertificateCollection__GetEnumerator();
      uVar21 = 0;
      while( true ) {
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar19 = Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator__MoveNext();
        if ((uVar19 & 1) == 0) break;
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar12 = (long *)Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator__get_Current
                                    ();
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar9 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200));
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar10 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200));
        uVar2 = Mono_Security_X509_PKCS12__Compare(uVar10,uVar9,uVar10);
        uVar21 = uVar2 | uVar21;
      }
      plVar12 = (long *)thunk_FUN_03f99350(lVar17,DAT_09185a58);
      if (plVar12 != (long *)0x0) {
        lVar17 = *plVar12;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == DAT_09185a58) {
              puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_073f6cb0;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09185a58,0);
LAB_073f6cb0:
        (*(code *)*puVar7)(plVar12,puVar7[1]);
      }
      if ((uVar21 & 1) == 0) {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*plVar8 + 0x308))(plVar8,plVar11,*(undefined8 *)(*plVar8 + 0x310));
      }
    } while( true );
  }
  goto LAB_073f7eac;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_073f6db0:
    if (*(long *)(piVar20 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_073f6de4;
    }
  }
LAB_073f6dc8:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_073f6de4:
  (*(code *)*puVar7)(plVar5,puVar7[1]);
LAB_073f6df0:
  if (plVar8 != (long *)0x0) {
    plVar5 = (long *)(**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390));
    do {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar17 = *plVar5;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == DAT_09185b10) {
            puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_073f6e94;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_073f6e94:
      uVar19 = (*(code *)*puVar7)(plVar5,puVar7[1]);
      if ((uVar19 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_03f99350(plVar5,DAT_09185a58);
        if (plVar5 == (long *)0x0) goto LAB_073f6fd4;
        lVar17 = *plVar5;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 == 0) goto LAB_073f6fa8;
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        goto LAB_073f6f90;
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar17 = *plVar5;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == DAT_09185b10) {
            puVar7 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_073f6efc;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,1);
LAB_073f6efc:
      plVar8 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
      if (plVar8 != (long *)0x0) {
        if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(DAT_0918d0f8 + 0x130)) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(DAT_0918d0f8 + 0x130) * 8 + -8) !=
            DAT_0918d0f8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar8);
        }
      }
      Mono_Security_X509_PKCS12__RemoveCertificate(param_1,plVar8,0);
    } while( true );
  }
  goto LAB_073f7eac;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_073f6f90:
    if (*(long *)(piVar20 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_073f6fc8;
    }
  }
LAB_073f6fa8:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_073f6fc8:
  (*(code *)*puVar7)(plVar5,puVar7[1]);
LAB_073f6fd4:
  if (plVar6 != (long *)0x0) {
    plVar5 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
    do {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar17 = *plVar5;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == DAT_09185b10) {
            puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_073f7064;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_073f7064:
      uVar19 = (*(code *)*puVar7)(plVar5,puVar7[1]);
      if ((uVar19 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_03f99350(plVar5,DAT_09185a58);
        if (plVar5 == (long *)0x0) goto LAB_073f71a0;
        lVar17 = *plVar5;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 == 0) goto LAB_073f7178;
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        goto LAB_073f7160;
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar17 = *plVar5;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == DAT_09185b10) {
            puVar7 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_073f70cc;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,1);
LAB_073f70cc:
      plVar6 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
      if (plVar6 != (long *)0x0) {
        if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_0918d0f8 + 0x130)) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_0918d0f8 + 0x130) * 8 + -8) !=
            DAT_0918d0f8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar6);
        }
      }
      Mono_Security_X509_PKCS12__AddCertificate(param_1,plVar6,0);
    } while( true );
  }
  goto LAB_073f7eac;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_073f7160:
    if (*(long *)(piVar20 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_073f7194;
    }
  }
LAB_073f7178:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_073f7194:
  (*(code *)*puVar7)(plVar5,puVar7[1]);
LAB_073f71a0:
  plVar5 = *(long **)(param_1 + 0x38);
  if (plVar5 == (long *)0x0) goto LAB_073f7eac;
  iVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
  if (0 < iVar3) {
    lVar17 = thunk_FUN_03f9944c(DAT_09180e18);
    System_Object___ctor(lVar17,0);
    *(undefined1 *)(lVar17 + 0x10) = 0x30;
    *(undefined8 *)(lVar17 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar17 + 0x18),0);
    plVar5 = *(long **)(param_1 + 0x38);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
      do {
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar18 = *plVar5;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == DAT_09185b10) {
              puVar7 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_073f7294;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_073f7294:
        uVar19 = (*(code *)*puVar7)(plVar5,puVar7[1]);
        if ((uVar19 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_03f99350(plVar5,DAT_09185a58);
          if (plVar5 == (long *)0x0) goto LAB_073f73ec;
          lVar18 = *plVar5;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar19 == 0) goto LAB_073f73c4;
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          goto LAB_073f73ac;
        }
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar18 = *plVar5;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == DAT_09185b10) {
              puVar7 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_073f72fc;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,1);
LAB_073f72fc:
        plVar6 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_0918a4f8 + 0x130)) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_0918a4f8 + 0x130) * 8 + -8) !=
            DAT_0918a4f8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar6);
        }
        if (plVar6[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar19 = System_String__Equals(plVar6[2],DAT_091f98e0,0);
        if ((uVar19 & 1) != 0) {
          Mono_Security_ASN1__Add(lVar17,plVar6[3]);
        }
      } while( true );
    }
    goto LAB_073f7eac;
  }
  goto LAB_073f7458;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_073f766c:
    if (*(long *)(piVar20 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_073f76a0;
    }
  }
LAB_073f7684:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_073f76a0:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_073f76ac:
  if (plVar5 == (long *)0x0) goto LAB_073f7eac;
  plVar6 = (long *)plVar5[4];
  if ((plVar6 != (long *)0x0) &&
     (iVar3 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0)), 0 < iVar3)) {
    lVar17 = thunk_FUN_03f9944c(DAT_09180e18);
    System_Object___ctor(lVar17,0);
    *(undefined1 *)(lVar17 + 0x10) = 0xa0;
    *(undefined8 *)(lVar17 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar17 + 0x18),0);
    uVar9 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    lVar18 = thunk_FUN_03f9944c(DAT_09180e18);
    System_Object___ctor(lVar18,0);
    *(undefined1 *)(lVar18 + 0x10) = 4;
    *(undefined8 *)(lVar18 + 0x18) = uVar9;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar18 + 0x18),uVar9);
    Mono_Security_ASN1__Add(lVar17,lVar18);
    lVar18 = thunk_FUN_03f9944c(DAT_09193130);
    uVar9 = DAT_091f9938;
    Mono_Security_PKCS7_ContentInfo___ctor();
    *(undefined8 *)(lVar18 + 0x10) = uVar9;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar18 + 0x10),uVar9);
    *(long *)(lVar18 + 0x18) = lVar17;
    thunk_FUN_03f5d7b8((long *)(lVar18 + 0x18),lVar17);
    uVar9 = Mono_Security_PKCS7_ContentInfo__GetASN1(lVar18);
    if (plVar4 == (long *)0x0) goto LAB_073f7eac;
    Mono_Security_ASN1__Add(plVar4,uVar9);
  }
  goto LAB_073f77c0;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_073f79b4:
    if (*(long *)(piVar20 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_073f79e8;
    }
  }
LAB_073f79cc:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_073f79e8:
  (*(code *)*puVar7)(plVar5,puVar7[1]);
LAB_073f79f4:
  if (lVar17 == 0) goto LAB_073f7eac;
  plVar5 = *(long **)(lVar17 + 0x20);
  if ((plVar5 == (long *)0x0) ||
     (iVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0)), iVar3 < 1))
  goto LAB_073f7a68;
  lVar17 = Mono_Security_X509_PKCS12__EncryptedContentInfo(param_1,lVar17,DAT_091f98b0);
  if ((lVar17 == 0) || (uVar9 = Mono_Security_PKCS7_ContentInfo__GetASN1(), plVar4 == (long *)0x0))
  goto LAB_073f7eac;
  Mono_Security_ASN1__Add(plVar4,uVar9);
  goto LAB_073f7a70;
code_r0x073f75fc:
  if (plVar8[2] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar19 = System_String__Equals(plVar8[2],DAT_091f98d8,0);
  if ((uVar19 & 1) != 0) {
LAB_073f7614:
    Mono_Security_ASN1__Add(plVar5,plVar8[3]);
  }
  goto joined_r0x073f74d0;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_073f73ac:
    if (*(long *)(piVar20 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_073f73e0;
    }
  }
LAB_073f73c4:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_073f73e0:
  (*(code *)*puVar7)(plVar5,puVar7[1]);
LAB_073f73ec:
  if (lVar17 == 0) goto LAB_073f7eac;
  plVar5 = *(long **)(lVar17 + 0x20);
  if ((plVar5 != (long *)0x0) &&
     (iVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0)), 0 < iVar3)) {
    lVar17 = Mono_Security_X509_PKCS12__EncryptedContentInfo(param_1,lVar17,DAT_091f98b0);
    if ((lVar17 == 0) || (uVar9 = Mono_Security_PKCS7_ContentInfo__GetASN1(), plVar4 == (long *)0x0)
       ) goto LAB_073f7eac;
    Mono_Security_ASN1__Add(plVar4,uVar9);
  }
LAB_073f7458:
  plVar5 = *(long **)(param_1 + 0x38);
  if (plVar5 != (long *)0x0) {
    iVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
    if (iVar3 < 1) {
LAB_073f77c0:
      plVar5 = *(long **)(param_1 + 0x38);
      if (plVar5 != (long *)0x0) {
        iVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
        if (iVar3 < 1) {
LAB_073f7a68:
          if (plVar4 != (long *)0x0) {
LAB_073f7a70:
            uVar9 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
            lVar17 = thunk_FUN_03f9944c(DAT_09180e18);
            System_Object___ctor(lVar17,0);
            *(undefined1 *)(lVar17 + 0x10) = 4;
            *(undefined8 *)(lVar17 + 0x18) = uVar9;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar17 + 0x18),uVar9);
            lVar18 = thunk_FUN_03f9944c(DAT_09180e18);
            System_Object___ctor(lVar18,0);
            *(undefined1 *)(lVar18 + 0x10) = 0xa0;
            *(undefined8 *)(lVar18 + 0x18) = 0;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar18 + 0x18),0);
            Mono_Security_ASN1__Add(lVar18,lVar17);
            lVar17 = thunk_FUN_03f9944c(DAT_09193130);
            uVar9 = DAT_091f9938;
            Mono_Security_PKCS7_ContentInfo___ctor();
            *(undefined8 *)(lVar17 + 0x10) = uVar9;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar17 + 0x10),uVar9);
            plVar4 = (long *)(lVar17 + 0x18);
            *plVar4 = lVar18;
            thunk_FUN_03f5d7b8(plVar4,lVar18);
            lVar18 = thunk_FUN_03f9944c(DAT_09180e18);
            System_Object___ctor(lVar18,0);
            *(undefined1 *)(lVar18 + 0x10) = 0x30;
            *(undefined8 *)(lVar18 + 0x18) = 0;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar18 + 0x18),0);
            if (*(long *)(param_1 + 0x10) != 0) {
              uVar9 = FUN_03f5c394(DAT_0917fc88,0x14);
              plVar5 = (long *)Mono_Security_X509_PKCS12__get_RNG(param_1);
              if (plVar5 == (long *)0x0) goto LAB_073f7eac;
              (**(code **)(*plVar5 + 0x198))(plVar5,uVar9,*(undefined8 *)(*plVar5 + 0x1a0));
              if (*plVar4 == 0) goto LAB_073f7eac;
              uVar10 = *(undefined8 *)(param_1 + 0x10);
              uVar1 = *(undefined4 *)(param_1 + 0x34);
              lVar14 = Mono_Security_ASN1__get_Item(*plVar4,0);
              if (lVar14 == 0) goto LAB_073f7eac;
              uVar15 = Mono_Security_ASN1__get_Value();
              uVar10 = Mono_Security_X509_PKCS12__MAC(uVar15,uVar10,uVar9,uVar1,uVar15);
              lVar14 = thunk_FUN_03f9944c(DAT_09180e18);
              System_Object___ctor(lVar14,0);
              *(undefined1 *)(lVar14 + 0x10) = 0x30;
              *(undefined8 *)(lVar14 + 0x18) = 0;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar14 + 0x18),0);
              uVar15 = Mono_Security_ASN1Convert__FromOid(DAT_091f9a88);
              Mono_Security_ASN1__Add(lVar14,uVar15);
              lVar16 = thunk_FUN_03f9944c(DAT_09180e18);
              System_Object___ctor(lVar16,0);
              *(undefined1 *)(lVar16 + 0x10) = 5;
              *(undefined8 *)(lVar16 + 0x18) = 0;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar16 + 0x18),0);
              Mono_Security_ASN1__Add(lVar14,lVar16);
              lVar16 = thunk_FUN_03f9944c(DAT_09180e18);
              System_Object___ctor(lVar16,0);
              *(undefined1 *)(lVar16 + 0x10) = 0x30;
              *(undefined8 *)(lVar16 + 0x18) = 0;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar16 + 0x18),0);
              Mono_Security_ASN1__Add(lVar16,lVar14);
              lVar14 = thunk_FUN_03f9944c(DAT_09180e18);
              System_Object___ctor(lVar14,0);
              *(undefined1 *)(lVar14 + 0x10) = 4;
              *(undefined8 *)(lVar14 + 0x18) = uVar10;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar14 + 0x18),uVar10);
              Mono_Security_ASN1__Add(lVar16,lVar14);
              Mono_Security_ASN1__Add(lVar18,lVar16);
              lVar14 = thunk_FUN_03f9944c(DAT_09180e18);
              System_Object___ctor(lVar14,0);
              *(undefined1 *)(lVar14 + 0x10) = 4;
              *(undefined8 *)(lVar14 + 0x18) = uVar9;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar14 + 0x18),uVar9);
              Mono_Security_ASN1__Add(lVar18,lVar14);
              uVar9 = Mono_Security_ASN1Convert__FromInt32(*(undefined4 *)(param_1 + 0x34));
              Mono_Security_ASN1__Add(lVar18,uVar9);
            }
            lVar14 = FUN_03f5c394(DAT_0917fc88,1);
            if (lVar14 != 0) {
              if (*(int *)(lVar14 + 0x18) != 0) {
                *(undefined1 *)(lVar14 + 0x20) = 3;
                lVar16 = thunk_FUN_03f9944c(DAT_09180e18);
                System_Object___ctor(lVar16,0);
                *(undefined1 *)(lVar16 + 0x10) = 2;
                *(long *)(lVar16 + 0x18) = lVar14;
                thunk_FUN_03f5d7b8((long *)(lVar16 + 0x18),lVar14);
                plVar4 = (long *)thunk_FUN_03f9944c(DAT_09180e18);
                System_Object___ctor(plVar4,0);
                *(undefined1 *)(plVar4 + 2) = 0x30;
                plVar4[3] = 0;
                thunk_FUN_03f5d7b8(plVar4 + 3,0);
                Mono_Security_ASN1__Add(plVar4,lVar16);
                uVar9 = Mono_Security_PKCS7_ContentInfo__GetASN1(lVar17);
                Mono_Security_ASN1__Add(plVar4,uVar9);
                plVar5 = *(long **)(lVar18 + 0x20);
                if ((plVar5 != (long *)0x0) &&
                   (iVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0)),
                   0 < iVar3)) {
                  Mono_Security_ASN1__Add(plVar4,lVar18);
                }
                (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
          }
        }
        else {
          lVar17 = thunk_FUN_03f9944c(DAT_09180e18);
          System_Object___ctor(lVar17,0);
          *(undefined1 *)(lVar17 + 0x10) = 0x30;
          *(undefined8 *)(lVar17 + 0x18) = 0;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar17 + 0x18),0);
          plVar5 = *(long **)(param_1 + 0x38);
          if (plVar5 != (long *)0x0) {
            plVar5 = (long *)(**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390))
            ;
            do {
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar18 = *plVar5;
              uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == DAT_09185b10) {
                    puVar7 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_073f789c;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              puVar7 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_073f789c:
              uVar19 = (*(code *)*puVar7)(plVar5,puVar7[1]);
              if ((uVar19 & 1) == 0) {
                plVar5 = (long *)thunk_FUN_03f99350(plVar5,DAT_09185a58);
                if (plVar5 == (long *)0x0) goto LAB_073f79f4;
                lVar18 = *plVar5;
                uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
                if (uVar19 == 0) goto LAB_073f79cc;
                piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                goto LAB_073f79b4;
              }
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar18 = *plVar5;
              uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == DAT_09185b10) {
                    puVar7 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                    goto LAB_073f7904;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              puVar7 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,1);
LAB_073f7904:
              plVar6 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_0918a4f8 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_0918a4f8 + 0x130) * 8 +
                           -8) != DAT_0918a4f8)) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0(plVar6);
              }
              if (plVar6[2] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar19 = System_String__Equals(plVar6[2],DAT_091f98f0,0);
              if ((uVar19 & 1) != 0) {
                Mono_Security_ASN1__Add(lVar17,plVar6[3]);
              }
            } while( true );
          }
        }
      }
    }
    else {
      plVar5 = (long *)thunk_FUN_03f9944c(DAT_09180e18);
      System_Object___ctor(plVar5,0);
      *(undefined1 *)(plVar5 + 2) = 0x30;
      plVar5[3] = 0;
      thunk_FUN_03f5d7b8(plVar5 + 3,0);
      plVar6 = *(long **)(param_1 + 0x38);
      if (plVar6 != (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
joined_r0x073f74d0:
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar17 = *plVar6;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == DAT_09185b10) {
              puVar7 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_073f753c;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_073f753c:
        uVar19 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar19 & 1) != 0) {
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar17 = *plVar6;
          uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == DAT_09185b10) {
                puVar7 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_073f75a4;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,1);
LAB_073f75a4:
          plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(DAT_0918a4f8 + 0x130)) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(DAT_0918a4f8 + 0x130) * 8 + -8)
              != DAT_0918a4f8)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar8);
          }
          if (plVar8[2] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar19 = System_String__Equals(plVar8[2],DAT_091f98d0,0);
          if ((uVar19 & 1) == 0) goto code_r0x073f75fc;
          goto LAB_073f7614;
        }
        plVar6 = (long *)thunk_FUN_03f99350(plVar6,DAT_09185a58);
        if (plVar6 == (long *)0x0) goto LAB_073f76ac;
        lVar17 = *plVar6;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 == 0) goto LAB_073f7684;
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        goto LAB_073f766c;
      }
    }
  }
LAB_073f7eac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

