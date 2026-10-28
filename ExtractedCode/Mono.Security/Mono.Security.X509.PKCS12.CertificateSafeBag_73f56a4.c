// rea decompile_all
// name: Mono.Security.X509.PKCS12$$CertificateSafeBag
// address: 0x73f56a4
// body: available
// range: 0x73f56a4-0x73f60e7 inclusive
// range: 0x73f60ec-0x73f60ef inclusive
// range: 0x73f60f4-0x73f60f7 inclusive
// range: 0x73f60fc-0x73f6107 inclusive
// range: 0x73f610c-0x73f610f inclusive
// range: 0x73f6114-0x73f6117 inclusive
// range: 0x73f611c-0x73f611f inclusive
// range: 0x73f6124-0x73f612f inclusive
// range: 0x73f61bc-0x73f622b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f60e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f60ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f60f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f6104 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f610c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f6114 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f611c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f612c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f6214 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f6218 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f6220 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73f6228 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073f60b8) */
/* WARNING: Removing unreachable block (ram,0x073f6224) */

long Mono_Security_X509_PKCS12__CertificateSafeBag(undefined8 param_1,long *param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((DAT_09520e2a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e18);
    FUN_03f5c2a4(&DAT_09181588);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09193130);
    FUN_03f5c2a4(&DAT_09185a30);
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091f9980);
    FUN_03f5c2a4(&DAT_091f9990);
    FUN_03f5c2a4(&DAT_091f9988);
    FUN_03f5c2a4(&DAT_091f98e0);
    DAT_09520e2a = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0x1f8))(param_2,*(undefined8 *)(*param_2 + 0x200));
    lVar3 = thunk_FUN_03f9944c(DAT_09180e18);
    System_Object___ctor(lVar3,0);
    *(undefined1 *)(lVar3 + 0x10) = 4;
    *(undefined8 *)(lVar3 + 0x18) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x18),uVar2);
    lVar4 = thunk_FUN_03f9944c(DAT_09193130);
    Mono_Security_PKCS7_ContentInfo___ctor();
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x10) = DAT_091f9990;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10));
      if (*(long *)(lVar4 + 0x18) != 0) {
        Mono_Security_ASN1__Add(*(long *)(lVar4 + 0x18),lVar3);
        lVar3 = thunk_FUN_03f9944c(DAT_09180e18);
        System_Object___ctor(lVar3,0);
        *(undefined1 *)(lVar3 + 0x10) = 0xa0;
        *(undefined8 *)(lVar3 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x18),0);
        uVar2 = Mono_Security_PKCS7_ContentInfo__GetASN1(lVar4);
        Mono_Security_ASN1__Add(lVar3,uVar2);
        lVar4 = thunk_FUN_03f9944c(DAT_09180e18);
        System_Object___ctor(lVar4,0);
        *(undefined1 *)(lVar4 + 0x10) = 0x30;
        *(undefined8 *)(lVar4 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x18),0);
        uVar2 = Mono_Security_ASN1Convert__FromOid(DAT_091f98e0);
        Mono_Security_ASN1__Add(lVar4,uVar2);
        Mono_Security_ASN1__Add(lVar4,lVar3);
        if (param_3 == (long *)0x0) {
          return lVar4;
        }
        lVar3 = thunk_FUN_03f9944c(DAT_09180e18);
        System_Object___ctor(lVar3,0);
        *(undefined1 *)(lVar3 + 0x10) = 0x31;
        *(undefined8 *)(lVar3 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x18),0);
        lVar10 = *param_3;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_09185a20) {
              puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 9) * 0x10 + 0x138);
              goto LAB_073f5928;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(param_3,DAT_09185a20,9);
LAB_073f5928:
        plVar6 = (long *)(*(code *)*puVar5)(param_3,puVar5[1]);
        if (plVar6 != (long *)0x0) {
LAB_073f595c:
          do {
            lVar10 = *plVar6;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == DAT_09185b10) {
                  puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_073f59a8;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_073f59a8:
            uVar12 = (*(code *)*puVar5)(plVar6,puVar5[1]);
            if ((uVar12 & 1) == 0) {
              if (lVar3 != 0) {
                plVar6 = *(long **)(lVar3 + 0x20);
                if (plVar6 == (long *)0x0) {
                  return lVar4;
                }
                iVar1 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
                if (iVar1 < 1) {
                  return lVar4;
                }
                Mono_Security_ASN1__Add(lVar4,lVar3);
                return lVar4;
              }
              break;
            }
            lVar10 = *plVar6;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == DAT_09185a30) {
                  puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_073f5a04;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a30,0);
LAB_073f5a04:
            plVar7 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
            if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar7);
            }
            uVar12 = System_String__op_Equality(plVar7,DAT_091f9980,0);
            if ((uVar12 & 1) != 0) {
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == DAT_09185a30) {
                    puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_073f5af8;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar5 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a30,1);
LAB_073f5af8:
              plVar7 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
              if (plVar7 == (long *)0x0) break;
              lVar10 = *plVar7;
              if ((*(byte *)(lVar10 + 0x130) < *(byte *)(DAT_09181588 + 0x130)) ||
                 (*(long *)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(DAT_09181588 + 0x130) * 8 +
                           -8) != DAT_09181588)) {
LAB_073f6210:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0(plVar7);
              }
              iVar1 = (**(code **)(lVar10 + 0x298))(plVar7,*(undefined8 *)(lVar10 + 0x2a0));
              if (0 < iVar1) {
                lVar10 = thunk_FUN_03f9944c(DAT_09180e18);
                System_Object___ctor(lVar10,0);
                *(undefined1 *)(lVar10 + 0x10) = 0x30;
                *(undefined8 *)(lVar10 + 0x18) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x18),0);
                uVar2 = Mono_Security_ASN1Convert__FromOid(DAT_091f9980);
                Mono_Security_ASN1__Add(lVar10,uVar2);
                lVar8 = thunk_FUN_03f9944c(DAT_09180e18);
                System_Object___ctor(lVar8,0);
                *(undefined1 *)(lVar8 + 0x10) = 0x31;
                *(undefined8 *)(lVar8 + 0x18) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x18),0);
                plVar7 = (long *)(**(code **)(*plVar7 + 0x388))
                                           (plVar7,*(undefined8 *)(*plVar7 + 0x390));
                do {
                  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar11 = *plVar7;
                  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == DAT_09185b10) {
                        puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                        goto LAB_073f5c48;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_073f5c48:
                  uVar12 = (*(code *)*puVar5)(plVar7,puVar5[1]);
                  if ((uVar12 & 1) == 0) goto LAB_073f5d2c;
                  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar11 = *plVar7;
                  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == DAT_09185b10) {
                        puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                        goto LAB_073f5cb0;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,1);
LAB_073f5cb0:
                  lVar11 = (*(code *)*puVar5)(plVar7,puVar5[1]);
                  uVar2 = DAT_0917fc88;
                  if (lVar11 == 0) {
                    lVar9 = 0;
                  }
                  else {
                    lVar9 = thunk_FUN_03f99350(lVar11,DAT_0917fc88);
                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c8d0(lVar11,uVar2);
                    }
                  }
                  lVar11 = thunk_FUN_03f9944c(DAT_09180e18);
                  System_Object___ctor(lVar11,0);
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  *(undefined1 *)(lVar11 + 0x10) = 0x1e;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar11 + 0x18),0);
                  Mono_Security_ASN1__set_Value(lVar11,lVar9);
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  Mono_Security_ASN1__Add(lVar8,lVar11);
                } while( true );
              }
              goto LAB_073f595c;
            }
            uVar12 = System_String__op_Equality(plVar7,DAT_091f9988,0);
            if ((uVar12 & 1) != 0) {
              lVar10 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == DAT_09185a30) {
                    puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_073f5db8;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar5 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a30,1);
LAB_073f5db8:
              plVar7 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
              if (plVar7 == (long *)0x0) break;
              lVar10 = *plVar7;
              if ((*(byte *)(lVar10 + 0x130) < *(byte *)(DAT_09181588 + 0x130)) ||
                 (*(long *)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(DAT_09181588 + 0x130) * 8 +
                           -8) != DAT_09181588)) goto LAB_073f6210;
              iVar1 = (**(code **)(lVar10 + 0x298))(plVar7,*(undefined8 *)(lVar10 + 0x2a0));
              if (0 < iVar1) {
                lVar10 = thunk_FUN_03f9944c(DAT_09180e18);
                System_Object___ctor(lVar10,0);
                *(undefined1 *)(lVar10 + 0x10) = 0x30;
                *(undefined8 *)(lVar10 + 0x18) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x18),0);
                uVar2 = Mono_Security_ASN1Convert__FromOid(DAT_091f9988);
                Mono_Security_ASN1__Add(lVar10,uVar2);
                lVar8 = thunk_FUN_03f9944c(DAT_09180e18);
                System_Object___ctor(lVar8,0);
                *(undefined1 *)(lVar8 + 0x10) = 0x31;
                *(undefined8 *)(lVar8 + 0x18) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x18),0);
                plVar7 = (long *)(**(code **)(*plVar7 + 0x388))
                                           (plVar7,*(undefined8 *)(*plVar7 + 0x390));
                do {
                  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar11 = *plVar7;
                  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == DAT_09185b10) {
                        puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                        goto LAB_073f5f0c;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_073f5f0c:
                  uVar12 = (*(code *)*puVar5)(plVar7,puVar5[1]);
                  if ((uVar12 & 1) == 0) goto LAB_073f5ff0;
                  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar11 = *plVar7;
                  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == DAT_09185b10) {
                        puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                        goto LAB_073f5f74;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,1);
LAB_073f5f74:
                  lVar11 = (*(code *)*puVar5)(plVar7,puVar5[1]);
                  uVar2 = DAT_0917fc88;
                  if (lVar11 == 0) {
                    lVar9 = 0;
                  }
                  else {
                    lVar9 = thunk_FUN_03f99350(lVar11,DAT_0917fc88);
                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c8d0(lVar11,uVar2);
                    }
                  }
                  lVar11 = thunk_FUN_03f9944c(DAT_09180e18);
                  System_Object___ctor(lVar11,0);
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  *(undefined1 *)(lVar11 + 0x10) = 4;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar11 + 0x18),0);
                  Mono_Security_ASN1__set_Value(lVar11,lVar9);
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  Mono_Security_ASN1__Add(lVar8,lVar11);
                } while( true );
              }
            }
          } while( true );
        }
      }
    }
  }
LAB_073f6218:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_073f5ff0:
  plVar7 = (long *)thunk_FUN_03f99350(plVar7,DAT_09185a58);
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_09185a58) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_073f60a0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_073f60a0:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  goto LAB_073f60bc;
LAB_073f5d2c:
  plVar7 = (long *)thunk_FUN_03f99350(plVar7,DAT_09185a58);
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == DAT_09185a58) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_073f6078;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_073f6078:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
LAB_073f60bc:
  Mono_Security_ASN1__Add(lVar10,lVar8);
  if (lVar3 == 0) goto LAB_073f6218;
  Mono_Security_ASN1__Add(lVar3,lVar10);
  goto LAB_073f595c;
}

