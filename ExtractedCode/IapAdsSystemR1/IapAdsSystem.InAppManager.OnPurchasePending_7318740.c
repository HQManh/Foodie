// rea decompile_all
// name: IapAdsSystem.InAppManager$$OnPurchasePending
// address: 0x7318740
// body: available
// range: 0x7318740-0x7318dcf inclusive
// range: 0x7318ed4-0x7318fc7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7318dcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7318f90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7318f94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7318f98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7318f9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7318fa0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7318fa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7318fa8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7318fac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7318fb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7318fb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7318fb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07318f54) */
/* WARNING: Removing unreachable block (ram,0x07318b3c) */
/* WARNING: Removing unreachable block (ram,0x07318fc0) */
/* WARNING: Removing unreachable block (ram,0x07318fc4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void IapAdsSystem_InAppManager__OnPurchasePending(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  long local_78;
  
  if ((DAT_0952055b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a03a8);
    FUN_03f5c2a4(&DAT_091a03b0);
    FUN_03f5c2a4(&DAT_09185728);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a390);
    FUN_03f5c2a4(&DAT_0917aa30);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091861e0);
    FUN_03f5c2a4(&DAT_09189800);
    FUN_03f5c2a4(&DAT_0921d850);
    FUN_03f5c2a4(&DAT_0921b508);
    DAT_0952055b = 1;
  }
  local_78 = 0;
  if ((param_2 != 0) && (plVar8 = *(long **)(param_2 + 0x18), plVar8 != (long *)0x0)) {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091861e0) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar7 + 4) * 0x10 + 0x138);
          goto LAB_07318870;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091861e0,4);
LAB_07318870:
    uVar2 = (*(code *)*puVar1)(plVar8,puVar1[1]);
    uVar6 = IapAdsSystem_InAppManager__ValidateProductReceipt(param_1,uVar2);
    if ((uVar6 & 1) == 0) {
      plVar8 = *(long **)(param_2 + 0x10);
      if (plVar8 != (long *)0x0) {
        lVar4 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_09185728) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_07318b94;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar1 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185728,0);
LAB_07318b94:
        plVar8 = (long *)(*(code *)*puVar1)(plVar8,puVar1[1]);
        if (plVar8 != (long *)0x0) {
          lVar4 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917a390) {
                puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_07318bf4;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar1 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a390,0);
LAB_07318bf4:
          plVar8 = (long *)(*(code *)*puVar1)(plVar8,puVar1[1]);
          do {
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_09185b10) {
                  puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_07318c8c;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar1 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_07318c8c:
            uVar6 = (*(code *)*puVar1)(plVar8,puVar1[1]);
            if ((uVar6 & 1) == 0) {
              if (plVar8 == (long *)0x0) goto LAB_07318f58;
              lVar4 = *plVar8;
              uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar6 == 0) goto LAB_07318f1c;
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              goto LAB_07318f04;
            }
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_0917aa30) {
                  puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_07318cf0;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar1 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917aa30,0);
LAB_07318cf0:
            lVar4 = (*(code *)*puVar1)(plVar8,puVar1[1]);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = UnityEngine_Purchasing_Product__get_definition(*(long *)(lVar4 + 0x10),0);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar5 = *(long *)(param_1 + 0x80);
            uVar2 = *(undefined8 *)(lVar4 + 0x18);
            if (lVar5 != 0) {
              (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),uVar2,*(undefined8 *)(lVar5 + 0x28));
            }
            IapAdsSystem_InAppManager__TrackIap(uVar2,DAT_0921b508,DAT_0921d850);
            if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar6 = FUN_06fd9fbc(*(long *)(param_1 + 0x50),uVar2,&local_78,DAT_091a03b0);
            if ((uVar6 & 1) != 0) {
              if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_06fd9970(*(long *)(param_1 + 0x50),uVar2,DAT_091a03a8);
              if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar4 = *(long *)(local_78 + 0x18);
              if (lVar4 != 0) {
                lVar5 = thunk_FUN_03f9944c(DAT_09189800);
                System_Object___ctor(lVar5,0);
                *(undefined8 *)(lVar5 + 0x18) = 0;
                *(undefined8 *)(lVar5 + 0x10) = 2;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x18),0);
                (**(code **)(lVar4 + 0x18))
                          (*(undefined8 *)(lVar4 + 0x40),lVar5,*(undefined8 *)(lVar4 + 0x28));
              }
            }
          } while( true );
        }
      }
    }
    else {
      plVar8 = *(long **)(param_2 + 0x10);
      if (plVar8 != (long *)0x0) {
        lVar4 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_09185728) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_07318900;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar1 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185728,0);
LAB_07318900:
        plVar8 = (long *)(*(code *)*puVar1)(plVar8,puVar1[1]);
        if (plVar8 != (long *)0x0) {
          lVar4 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917a390) {
                puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_07318960;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar1 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a390,0);
LAB_07318960:
          plVar8 = (long *)(*(code *)*puVar1)(plVar8,puVar1[1]);
          do {
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_09185b10) {
                  puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_073189cc;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar1 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_073189cc:
            uVar6 = (*(code *)*puVar1)(plVar8,puVar1[1]);
            if ((uVar6 & 1) == 0) {
              if (plVar8 == (long *)0x0) goto LAB_07318f58;
              lVar4 = *plVar8;
              uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar6 == 0) goto LAB_07318b08;
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              goto LAB_07318af0;
            }
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_0917aa30) {
                  puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_07318a30;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar1 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917aa30,0);
LAB_07318a30:
            lVar4 = (*(code *)*puVar1)(plVar8,puVar1[1]);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar9 = *(long **)(param_2 + 0x18);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar5 = *plVar9;
            uVar2 = *(undefined8 *)(lVar4 + 0x10);
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_091861e0) {
                  puVar1 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                  goto LAB_07318a9c;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar1 = (undefined8 *)FUN_03f95da8(plVar9,DAT_091861e0,5);
LAB_07318a9c:
            uVar3 = (*(code *)*puVar1)(plVar9,puVar1[1]);
            IapAdsSystem_InAppManager__GrantProduct(param_1,uVar2,uVar3);
          } while( true );
        }
      }
    }
  }
  goto LAB_07318fbc;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_07318af0:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_07318b24;
    }
  }
LAB_07318b08:
  puVar1 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a58,0);
LAB_07318b24:
  (*(code *)*puVar1)(plVar8,puVar1[1]);
  goto LAB_07318f58;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_07318f04:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_07318f38;
    }
  }
LAB_07318f1c:
  puVar1 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a58,0);
LAB_07318f38:
  (*(code *)*puVar1)(plVar8,puVar1[1]);
LAB_07318f58:
  if (*(long *)(param_1 + 0x30) != 0) {
    UnityEngine_Purchasing_StoreController__ConfirmPurchase(*(long *)(param_1 + 0x30),param_2,0);
    return;
  }
LAB_07318fbc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

