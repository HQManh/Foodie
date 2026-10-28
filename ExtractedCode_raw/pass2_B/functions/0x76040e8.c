// rea decompile_all
// name: System.MonoCustomAttrs$$GetCustomAttributesData
// address: 0x76040e8
// body: available
// range: 0x76040e8-0x76047d3 inclusive
// range: 0x76047d8-0x7604907 inclusive
// range: 0x760490c-0x760490f inclusive
// range: 0x7604914-0x7604917 inclusive
// range: 0x760491c-0x760491f inclusive
// range: 0x7604924-0x7604927 inclusive
// range: 0x760492c-0x760492f inclusive
// range: 0x7604934-0x7604937 inclusive
// range: 0x760493c-0x760493f inclusive
// range: 0x76049b4-0x76052e3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76047d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7604904 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760490c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7604914 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760491c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7604924 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760492c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7604934 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760493c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7604cb4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7604eb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76051c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076051cc) */
/* WARNING: Removing unreachable block (ram,0x0760508c) */
/* WARNING: Removing unreachable block (ram,0x07604858) */
/* WARNING: Removing unreachable block (ram,0x07604aa0) */
/* WARNING: Removing unreachable block (ram,0x07605298) */

long * System_MonoCustomAttrs__GetCustomAttributesData(long param_1,long *param_2,byte param_3)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  long local_88;
  long local_70;
  long *local_68;
  
  if ((DAT_09521fec & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0140);
    FUN_03f5c2a4(&DAT_09192a30);
    FUN_03f5c2a4(&DAT_0917fdb0);
    FUN_03f5c2a4(&DAT_091a0f70);
    FUN_03f5c2a4(&DAT_091a0f78);
    FUN_03f5c2a4(&DAT_091a0f68);
    FUN_03f5c2a4(&DAT_09176fc8);
    FUN_03f5c2a4(&DAT_0917a020);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a488);
    FUN_03f5c2a4(&DAT_0917ab38);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b038);
    FUN_03f5c2a4(&DAT_091ac1c8);
    FUN_03f5c2a4(&DAT_091ac1d0);
    FUN_03f5c2a4(&DAT_091ac1c0);
    FUN_03f5c2a4(&DAT_0917bfb8);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09172498);
    FUN_03f5c2a4(&DAT_09188378);
    DAT_09521fec = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar8 = thunk_FUN_03f9944c();
    puVar11 = &DAT_092201e0;
  }
  else {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = System_Type__op_Equality(param_2,0,0);
    uVar8 = DAT_09172498;
    if ((uVar7 & 1) == 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = System_Type__GetTypeFromHandle(uVar8,0);
      uVar7 = System_Type__op_Equality(param_2,uVar8,0);
      plVar14 = (long *)0x0;
      if ((uVar7 & 1) == 0) {
        plVar14 = param_2;
      }
      if (*(int *)(DAT_09188378 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar9 = (long *)System_MonoCustomAttrs__GetCustomAttributesDataBase(param_1,plVar14,0);
      if ((param_3 & 1) == 0) {
        if (plVar9 == (long *)0x0) goto LAB_076051c8;
        lVar10 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 != 0) {
          piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == DAT_0917a020) {
              puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_07604340;
            }
            uVar7 = uVar7 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar7 != 0);
        }
        puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a020,0);
LAB_07604340:
        iVar5 = (*(code *)*puVar11)(plVar9,puVar11[1]);
        if (iVar5 == 1) {
          lVar10 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar7 != 0) {
            piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == DAT_0917b038) {
                puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_07604ab0;
              }
              uVar7 = uVar7 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar7 != 0);
          }
          puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917b038,0);
LAB_07604ab0:
          lVar10 = (*(code *)*puVar11)(plVar9,0,puVar11[1]);
          if (lVar10 == 0) {
            thunk_FUN_03fc39d4(&DAT_09183048);
            uVar8 = thunk_FUN_03f9944c();
            uVar13 = thunk_FUN_03fc39d4(&DAT_092056d8);
            System_Reflection_CustomAttributeFormatException___ctor(uVar8,uVar13,0);
            goto LAB_07605280;
          }
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = System_Type__op_Inequality(plVar14,0,0);
          if ((uVar7 & 1) == 0) {
            plVar14 = (long *)FUN_03f5c394(DAT_0917fdb0,1);
            lVar10 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == DAT_0917b038) goto LAB_07605010;
                uVar7 = uVar7 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar7 != 0);
            }
          }
          else {
            lVar10 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == DAT_0917b038) {
                  puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_07604f18;
                }
                uVar7 = uVar7 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar7 != 0);
            }
            puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917b038,0);
LAB_07604f18:
            lVar10 = (*(code *)*puVar11)(plVar9,0,puVar11[1]);
            if ((lVar10 == 0) ||
               (uVar8 = System_Reflection_CustomAttributeData__get_AttributeType(lVar10,0),
               plVar14 == (long *)0x0)) goto LAB_076051c8;
            uVar7 = (**(code **)(*plVar14 + 0x2b8))(plVar14,uVar8,*(undefined8 *)(*plVar14 + 0x2c0))
            ;
            lVar10 = DAT_091c0140;
            if ((uVar7 & 1) == 0) {
              lVar12 = *(long *)(DAT_091c0140 + 0x38);
              if (lVar12 == 0) {
                FUN_03f95ac8(DAT_091c0140);
                lVar12 = *(long *)(lVar10 + 0x38);
              }
              lVar12 = *(long *)(lVar12 + 0x10);
              if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = FUN_03f95a6c();
              }
              if (*(int *)(lVar12 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
              if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_03f95a6c();
              }
              return (long *)**(undefined8 **)(lVar10 + 0xb8);
            }
            plVar14 = (long *)FUN_03f5c394(DAT_0917fdb0,1);
            lVar10 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == DAT_0917b038) goto LAB_07605010;
                uVar7 = uVar7 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar7 != 0);
            }
          }
          puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917b038,0);
          goto LAB_0760501c;
        }
        bVar3 = false;
      }
      else {
        if (*(int *)(DAT_09188378 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar10 = System_MonoCustomAttrs__GetBase(param_1);
        bVar3 = (bool)(lVar10 != 0 & param_3);
      }
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = System_Type__op_Inequality(plVar14,0,0);
      if ((uVar7 & 1) != 0) {
        if (plVar14 == (long *)0x0) goto LAB_076051c8;
        bVar4 = System_Type__get_IsSealed(plVar14,0);
        if ((bVar3 & bVar4) == 1) {
          if (*(int *)(DAT_09188378 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar10 = System_MonoCustomAttrs__RetrieveAttributeUsage(plVar14);
          if (lVar10 == 0) goto LAB_076051c8;
          bVar3 = *(char *)(lVar10 + 0x15) != '\0';
        }
      }
      if (plVar9 != (long *)0x0) {
        lVar10 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 != 0) {
          piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == DAT_0917a020) {
              puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_07604460;
            }
            uVar7 = uVar7 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar7 != 0);
        }
        puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a020,0);
LAB_07604460:
        uVar6 = (*(code *)*puVar11)(plVar9,puVar11[1]);
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09187e80);
        }
        uVar6 = System_Math__Max(uVar6,0x10,0);
        if (bVar3 == false) {
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = System_Type__op_Equality(plVar14,0,0);
          if ((uVar7 & 1) == 0) {
            lVar10 = thunk_FUN_03f9944c(DAT_0917bfb8);
            FUN_057e0478(lVar10,uVar6,DAT_091ac1c0);
            lVar12 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar7 != 0) {
              piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == DAT_0917a488) {
                  puVar11 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_07604d20;
                }
                uVar7 = uVar7 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar7 != 0);
            }
            puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a488,0);
LAB_07604d20:
            plVar9 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
joined_r0x07604d38:
            do {
              local_68 = plVar9;
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar12 = *plVar9;
              uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar7 != 0) {
                piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == DAT_09185b10) {
                    puVar11 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_07604da4;
                  }
                  uVar7 = uVar7 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar7 != 0);
              }
              puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185b10,0);
LAB_07604da4:
              uVar7 = (*(code *)*puVar11)(plVar9,puVar11[1]);
              plVar9 = local_68;
              if ((uVar7 & 1) == 0) {
                if (local_68 == (long *)0x0) goto joined_r0x07605188;
                lVar12 = *local_68;
                uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar7 == 0) goto LAB_07604efc;
                piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                goto LAB_07604ee4;
              }
              if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar12 = *local_68;
              uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar7 != 0) {
                piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == DAT_0917ab38) {
                    puVar11 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_07604e08;
                  }
                  uVar7 = uVar7 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar7 != 0);
              }
              puVar11 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917ab38,0);
LAB_07604e08:
              lVar12 = (*(code *)*puVar11)(plVar9,puVar11[1]);
              if (lVar12 == 0) {
                thunk_FUN_03fc39d4(&DAT_09183048);
                uVar8 = thunk_FUN_03f9944c();
                uVar13 = thunk_FUN_03fc39d4(&DAT_092056d8);
                System_Reflection_CustomAttributeFormatException___ctor(uVar8,uVar13,0);
                uVar13 = thunk_FUN_03fc39d4(&DAT_091d3c40);
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar8,uVar13);
              }
              uVar8 = System_Reflection_CustomAttributeData__get_AttributeType(lVar12,0);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550(uVar8,uVar8);
              }
              uVar7 = (**(code **)(*plVar14 + 0x2b8))
                                (plVar14,uVar8,*(undefined8 *)(*plVar14 + 0x2c0));
              lVar15 = DAT_091ac1c8;
              plVar9 = local_68;
            } while ((uVar7 & 1) == 0);
            if (lVar10 != 0) {
              lVar18 = *(long *)(lVar10 + 0x10);
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar18 != 0) {
                uVar1 = *(uint *)(lVar10 + 0x18);
                if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                  plVar9 = (long *)(lVar18 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar9 = lVar12;
                  thunk_FUN_03f5d7b8(plVar9,lVar12);
                  plVar9 = local_68;
                }
                else {
                  FUN_057e0c68(lVar10,lVar12,
                               *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                  plVar9 = local_68;
                }
                goto joined_r0x07604d38;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar10 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar7 != 0) {
            piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == DAT_0917a488) {
                puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_07604b80;
              }
              uVar7 = uVar7 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar7 != 0);
          }
          puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a488,0);
LAB_07604b80:
          local_68 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
          do {
            plVar14 = local_68;
            if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar10 = *local_68;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == DAT_09185b10) {
                  puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_07604bfc;
                }
                uVar7 = uVar7 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar7 != 0);
            }
            puVar11 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185b10,0);
LAB_07604bfc:
            uVar7 = (*(code *)*puVar11)(plVar14,puVar11[1]);
            plVar14 = local_68;
            if ((uVar7 & 1) == 0) {
              if (local_68 == (long *)0x0) goto LAB_07605080;
              lVar10 = *local_68;
              uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar7 == 0) goto LAB_07604d04;
              piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              goto LAB_07604cec;
            }
            if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar10 = *local_68;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == DAT_0917ab38) {
                  puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_07604c60;
                }
                uVar7 = uVar7 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar7 != 0);
            }
            puVar11 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917ab38,0);
LAB_07604c60:
            lVar10 = (*(code *)*puVar11)(plVar14,puVar11[1]);
            if (lVar10 == 0) {
              thunk_FUN_03fc39d4(&DAT_09183048);
              uVar8 = thunk_FUN_03f9944c();
              uVar13 = thunk_FUN_03fc39d4(&DAT_092056d8);
              System_Reflection_CustomAttributeFormatException___ctor(uVar8,uVar13,0);
              uVar13 = thunk_FUN_03fc39d4(&DAT_091d3c40);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar8,uVar13);
            }
          } while( true );
        }
        lVar12 = thunk_FUN_03f9944c(DAT_09176fc8);
        FUN_06fd76d4(lVar12,uVar6,DAT_091a0f68);
        lVar10 = thunk_FUN_03f9944c(DAT_0917bfb8);
        FUN_057e0478(lVar10,uVar6,DAT_091ac1c0);
        iVar5 = 0;
        local_88 = param_1;
        do {
          lVar15 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar7 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == DAT_0917a488) {
                puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0760455c;
              }
              uVar7 = uVar7 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar7 != 0);
          }
          puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a488,0);
LAB_0760455c:
          plVar9 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
joined_r0x07604578:
          local_68 = plVar9;
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar15 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar7 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == DAT_09185b10) {
                puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_076045c8;
              }
              uVar7 = uVar7 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar7 != 0);
          }
          puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185b10,0);
LAB_076045c8:
          uVar7 = (*(code *)*puVar11)(plVar9,puVar11[1]);
          plVar9 = local_68;
          if ((uVar7 & 1) != 0) {
            if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar15 = *local_68;
            uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar7 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == DAT_0917ab38) {
                  puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_0760462c;
                }
                uVar7 = uVar7 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar7 != 0);
            }
            puVar11 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917ab38,0);
LAB_0760462c:
            lVar15 = (*(code *)*puVar11)(plVar9,puVar11[1]);
            if (lVar15 == 0) {
              thunk_FUN_03fc39d4(&DAT_09183048);
              uVar8 = thunk_FUN_03f9944c();
              uVar13 = thunk_FUN_03fc39d4(&DAT_092056d8);
              System_Reflection_CustomAttributeFormatException___ctor(uVar8,uVar13,0);
              uVar13 = thunk_FUN_03fc39d4(&DAT_091d3c40);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar8,uVar13);
            }
            uVar8 = System_Reflection_CustomAttributeData__get_AttributeType(lVar15,0);
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = System_Type__op_Inequality(plVar14,0,0);
            if ((uVar7 & 1) != 0) goto code_r0x07604674;
            goto LAB_07604694;
          }
          if (local_68 != (long *)0x0) {
            lVar15 = *local_68;
            uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar7 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == DAT_09185a58) {
                  puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_07604840;
                }
                uVar7 = uVar7 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar7 != 0);
            }
            puVar11 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185a58,0);
LAB_07604840:
            (*(code *)*puVar11)(plVar9,puVar11[1]);
          }
          if (*(int *)(DAT_09188378 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          local_88 = System_MonoCustomAttrs__GetBase(local_88);
          if (local_88 == 0) goto joined_r0x07605188;
          if (*(int *)(DAT_09188378 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar5 = iVar5 + 1;
          plVar9 = (long *)System_MonoCustomAttrs__GetCustomAttributesDataBase(local_88,plVar14,1);
        } while (plVar9 != (long *)0x0);
      }
LAB_076051c8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar8 = thunk_FUN_03f9944c();
    puVar11 = &DAT_09217bc0;
  }
  uVar13 = thunk_FUN_03fc39d4(puVar11);
  System_ArgumentNullException___ctor(uVar8,uVar13,0);
LAB_07605280:
  uVar13 = thunk_FUN_03fc39d4(&DAT_091d3c40);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar8,uVar13);
LAB_07605010:
  puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
LAB_0760501c:
  lVar10 = (*(code *)*puVar11)(plVar9,0,puVar11[1]);
  if (plVar14 != (long *)0x0) {
    if ((lVar10 != 0) &&
       (lVar12 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0)) {
      uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar8,0);
    }
    if ((int)plVar14[3] != 0) {
      plVar14[4] = lVar10;
      thunk_FUN_03f5d7b8(plVar14 + 4,lVar10);
      return plVar14;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  goto LAB_076051c8;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar17 = piVar17 + 4;
    if (uVar7 == 0) break;
LAB_07604ee4:
    if (*(long *)(piVar17 + -2) == DAT_09185a58) {
      puVar11 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_07605178;
    }
  }
LAB_07604efc:
  puVar11 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185a58,0);
LAB_07605178:
  (*(code *)*puVar11)(plVar9,puVar11[1]);
joined_r0x07605188:
  if (lVar10 != 0) {
    plVar14 = (long *)FUN_057e28a4(lVar10,DAT_091ac1d0);
    return plVar14;
  }
  goto LAB_076051c8;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar17 = piVar17 + 4;
    if (uVar7 == 0) break;
LAB_07604cec:
    if (*(long *)(piVar17 + -2) == DAT_09185a58) {
      puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_07605074;
    }
  }
LAB_07604d04:
  puVar11 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185a58,0);
LAB_07605074:
  (*(code *)*puVar11)(plVar14,puVar11[1]);
LAB_07605080:
  lVar10 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar7 != 0) {
    piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == DAT_0917a020) {
        puVar11 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_076050dc;
      }
      uVar7 = uVar7 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar7 != 0);
  }
  puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a020,0);
LAB_076050dc:
  uVar6 = (*(code *)*puVar11)(plVar9,puVar11[1]);
  plVar14 = (long *)FUN_03f5c394(DAT_0917fdb0,uVar6);
  lVar10 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar7 != 0) {
    piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == DAT_0917a020) {
        puVar11 = (undefined8 *)(lVar10 + (long)(*piVar17 + 5) * 0x10 + 0x138);
        goto LAB_07605154;
      }
      uVar7 = uVar7 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar7 != 0);
  }
  puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a020,5);
LAB_07605154:
  (*(code *)*puVar11)(plVar9,plVar14,0,puVar11[1]);
  return plVar14;
code_r0x07604674:
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar7 = (**(code **)(*plVar14 + 0x2b8))(plVar14,uVar8,*(undefined8 *)(*plVar14 + 0x2c0));
  plVar9 = local_68;
  if ((uVar7 & 1) == 0) goto joined_r0x07604578;
LAB_07604694:
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar7 = FUN_06fd9fbc(lVar12,uVar8,&local_70,DAT_091a0f78);
  if ((uVar7 & 1) == 0) {
    if (*(int *)(DAT_09188378 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar18 = System_MonoCustomAttrs__RetrieveAttributeUsage(uVar8);
    if (iVar5 == 0) goto LAB_076046f8;
LAB_076046c0:
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar18 + 0x15) == '\0') goto LAB_07604780;
  }
  else {
    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar18 = *(long *)(local_70 + 0x10);
    if (iVar5 != 0) goto LAB_076046c0;
LAB_076046f8:
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  lVar2 = DAT_091ac1c8;
  if (((*(char *)(lVar18 + 0x14) == '\0') && (local_70 != 0)) &&
     (*(int *)(local_70 + 0x18) != iVar5)) {
LAB_07604780:
    plVar9 = local_68;
    if (local_70 == 0) {
      lVar15 = thunk_FUN_03f9944c(DAT_09192a30);
      *(long *)(lVar15 + 0x10) = lVar18;
      thunk_FUN_03f5d7b8((long *)(lVar15 + 0x10),lVar18);
      *(int *)(lVar15 + 0x18) = iVar5;
      FUN_06fd8454(lVar12,uVar8,lVar15,DAT_091a0f70);
      plVar9 = local_68;
    }
    goto joined_r0x07604578;
  }
  if (lVar10 != 0) {
    lVar16 = *(long *)(lVar10 + 0x10);
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar16 != 0) {
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        plVar9 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
        *plVar9 = lVar15;
        thunk_FUN_03f5d7b8(plVar9,lVar15);
      }
      else {
        FUN_057e0c68(lVar10,lVar15,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                    );
      }
      goto LAB_07604780;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

