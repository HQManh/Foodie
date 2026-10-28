// rea decompile_all
// name: System.MonoCustomAttrs$$GetCustomAttributes
// address: 0x7602dd4
// body: available
// range: 0x7602dd4-0x760377b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x760331c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7603648 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7603700 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7603760 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760376c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7603778 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_MonoCustomAttrs__GetCustomAttributes(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  long local_70;
  long local_68;
  
  if ((DAT_09521fe9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09192a30);
    FUN_03f5c2a4(&DAT_0917fbf0);
    FUN_03f5c2a4(&DAT_091a0f70);
    FUN_03f5c2a4(&DAT_091a0f78);
    FUN_03f5c2a4(&DAT_091a0f68);
    FUN_03f5c2a4(&DAT_09176fc8);
    FUN_03f5c2a4(&DAT_091aeac8);
    FUN_03f5c2a4(&DAT_091aeae8);
    FUN_03f5c2a4(&DAT_091aeac0);
    FUN_03f5c2a4(&DAT_091aeb08);
    FUN_03f5c2a4(&DAT_0917c7e0);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09172498);
    FUN_03f5c2a4(&DAT_09188378);
    FUN_03f5c2a4(&DAT_09180318);
    DAT_09521fe9 = 1;
  }
  local_68 = 0;
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    puVar13 = &DAT_092201e0;
  }
  else {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Type__op_Equality(param_2,0,0);
    uVar6 = DAT_09172498;
    if ((uVar5 & 1) == 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
      uVar5 = System_Type__op_Equality(param_2,uVar6,0);
      plVar11 = (long *)0x0;
      if ((uVar5 & 1) == 0) {
        plVar11 = param_2;
      }
      if (*(int *)(DAT_09188378 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = System_MonoCustomAttrs__GetCustomAttributesBase(param_1,plVar11,0);
      if ((param_3 & 1) == 0) {
        if (lVar7 == 0) goto LAB_0760331c;
        if (*(int *)(lVar7 + 0x18) == 1) {
          if (*(long *)(lVar7 + 0x20) != 0) {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = System_Type__op_Inequality(plVar11,0,0);
            if ((uVar5 & 1) == 0) {
              if (*(int *)(lVar7 + 0x18) == 0) goto LAB_07603760;
              if (*(long *)(lVar7 + 0x20) == 0) goto LAB_0760331c;
              plVar11 = (long *)FUN_03f6c2d0();
            }
            else {
              if (*(int *)(lVar7 + 0x18) == 0) goto LAB_07603760;
              if ((*(long *)(lVar7 + 0x20) == 0) || (uVar6 = FUN_03f6c2d0(), plVar11 == (long *)0x0)
                 ) goto LAB_0760331c;
              uVar5 = (**(code **)(*plVar11 + 0x2b8))
                                (plVar11,uVar6,*(undefined8 *)(*plVar11 + 0x2c0));
              if ((uVar5 & 1) == 0) {
                lVar7 = System_Array__CreateInstance(plVar11,0,0);
                uVar6 = DAT_09180318;
                if (lVar7 == 0) {
                  return (long *)0x0;
                }
                plVar11 = (long *)thunk_FUN_03f99350(lVar7,DAT_09180318);
                if (plVar11 != (long *)0x0) {
                  return plVar11;
                }
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0(lVar7,uVar6);
              }
            }
            lVar8 = System_Array__CreateInstance(plVar11,1,0);
            uVar6 = DAT_09180318;
            if (lVar8 != 0) {
              plVar11 = (long *)thunk_FUN_03f99350(lVar8,DAT_09180318);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0(lVar8,uVar6);
              }
              if (*(int *)(lVar7 + 0x18) != 0) {
                lVar7 = *(long *)(lVar7 + 0x20);
                if ((lVar7 != 0) &&
                   (lVar8 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0))
                {
                  uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar6,0);
                }
                if ((int)plVar11[3] != 0) {
                  plVar11[4] = lVar7;
                  thunk_FUN_03f5d7b8(plVar11 + 4,lVar7);
                  return plVar11;
                }
              }
LAB_07603760:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (*(int *)(lVar7 + 0x18) == 0) goto LAB_07603760;
            goto LAB_0760331c;
          }
LAB_076036bc:
          thunk_FUN_03fc39d4(&DAT_09183048);
          uVar6 = thunk_FUN_03f9944c();
          uVar12 = thunk_FUN_03fc39d4(&DAT_092056e0);
          System_Reflection_CustomAttributeFormatException___ctor(uVar6,uVar12,0);
          goto LAB_076036ec;
        }
        bVar2 = false;
      }
      else {
        if (*(int *)(DAT_09188378 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar8 = System_MonoCustomAttrs__GetBase(param_1);
        bVar2 = lVar8 != 0;
      }
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Type__op_Inequality(plVar11,0,0);
      if ((uVar5 & 1) != 0) {
        if (plVar11 == (long *)0x0) goto LAB_0760331c;
        bVar3 = System_Type__get_IsSealed(plVar11,0);
        if ((bVar2 & bVar3) == 1) {
          if (*(int *)(DAT_09188378 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar8 = System_MonoCustomAttrs__RetrieveAttributeUsage(plVar11);
          if (lVar8 == 0) goto LAB_0760331c;
          bVar2 = *(char *)(lVar8 + 0x15) != '\0';
        }
      }
      if (lVar7 != 0) {
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Math__Max(*(undefined4 *)(lVar7 + 0x18),0x10,0);
        if (bVar2 != false) {
          lVar8 = thunk_FUN_03f9944c(DAT_09176fc8);
          FUN_06fd76d4(lVar8,uVar4,DAT_091a0f68);
          lVar9 = thunk_FUN_03f9944c(DAT_0917c7e0);
          FUN_057e0478(lVar9,uVar4,DAT_091aeac0);
          iVar16 = 0;
          local_70 = param_1;
          do {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (0 < (int)uVar1) {
              uVar19 = 0;
              do {
                if (uVar1 <= uVar19) goto LAB_07603760;
                lVar17 = *(long *)(lVar7 + (long)(int)uVar19 * 8 + 0x20);
                if (lVar17 == 0) goto LAB_076036bc;
                uVar6 = FUN_03f6c2d0(lVar17);
                if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_095354b8);
                }
                uVar5 = System_Type__op_Inequality(plVar11,0,0);
                if ((uVar5 & 1) == 0) {
LAB_07603180:
                  if (lVar8 == 0) goto LAB_0760331c;
                  uVar5 = FUN_06fd9fbc(lVar8,uVar6,&local_68,DAT_091a0f78);
                  if ((uVar5 & 1) == 0) {
                    if (*(int *)(DAT_09188378 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    lVar18 = System_MonoCustomAttrs__RetrieveAttributeUsage(uVar6);
                    if (iVar16 != 0) goto LAB_076031dc;
LAB_076031ac:
                    if (lVar18 == 0) goto LAB_0760331c;
LAB_076031e8:
                    lVar15 = DAT_091aeac8;
                    if (((*(char *)(lVar18 + 0x14) != '\0') || (local_68 == 0)) ||
                       (*(int *)(local_68 + 0x18) == iVar16)) {
                      if (lVar9 == 0) goto LAB_0760331c;
                      lVar14 = *(long *)(lVar9 + 0x10);
                      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                      if (lVar14 == 0) goto LAB_0760331c;
                      uVar1 = *(uint *)(lVar9 + 0x18);
                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                        plVar10 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar10 = lVar17;
                        thunk_FUN_03f5d7b8(plVar10,lVar17);
                      }
                      else {
                        FUN_057e0c68(lVar9,lVar17,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                  }
                  else {
                    if (local_68 == 0) goto LAB_0760331c;
                    lVar18 = *(long *)(local_68 + 0x10);
                    if (iVar16 == 0) goto LAB_076031ac;
LAB_076031dc:
                    if (lVar18 == 0) goto LAB_0760331c;
                    if (*(char *)(lVar18 + 0x15) != '\0') goto LAB_076031e8;
                  }
                  if (local_68 == 0) {
                    lVar17 = thunk_FUN_03f9944c(DAT_09192a30);
                    *(long *)(lVar17 + 0x10) = lVar18;
                    thunk_FUN_03f5d7b8((long *)(lVar17 + 0x10),lVar18);
                    *(int *)(lVar17 + 0x18) = iVar16;
                    FUN_06fd8454(lVar8,uVar6,lVar17,DAT_091a0f70);
                  }
                }
                else {
                  if (plVar11 == (long *)0x0) goto LAB_0760331c;
                  uVar5 = (**(code **)(*plVar11 + 0x2b8))
                                    (plVar11,uVar6,*(undefined8 *)(*plVar11 + 0x2c0));
                  if ((uVar5 & 1) != 0) goto LAB_07603180;
                }
                uVar1 = *(uint *)(lVar7 + 0x18);
                uVar19 = uVar19 + 1;
              } while ((int)uVar19 < (int)uVar1);
            }
            if (*(int *)(DAT_09188378 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            local_70 = System_MonoCustomAttrs__GetBase(local_70);
            if (local_70 == 0) {
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar5 = System_Type__op_Equality(plVar11,0,0);
              if ((uVar5 & 1) == 0) {
                if (plVar11 == (long *)0x0) break;
                uVar5 = System_Type__get_IsValueType(plVar11,0);
                if ((uVar5 & 1) == 0) {
                  if (lVar9 != 0) {
                    uVar6 = System_Array__CreateInstance(plVar11,*(undefined4 *)(lVar9 + 0x18),0);
                    plVar11 = (long *)thunk_FUN_03f99350(uVar6,DAT_09180318);
                    goto LAB_0760367c;
                  }
                  break;
                }
              }
              if (lVar9 != 0) {
                plVar11 = (long *)FUN_03f5c394(DAT_0917fbf0,*(undefined4 *)(lVar9 + 0x18));
                goto LAB_0760367c;
              }
              break;
            }
            if (*(int *)(DAT_09188378 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar16 = iVar16 + 1;
            lVar7 = System_MonoCustomAttrs__GetCustomAttributesBase(local_70,plVar11,1);
          } while (lVar7 != 0);
          goto LAB_0760331c;
        }
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Type__op_Equality(plVar11,0,0);
        if ((uVar5 & 1) != 0) {
          iVar16 = *(int *)(lVar7 + 0x18);
          if (0 < iVar16) {
            plVar11 = (long *)(lVar7 + 0x20);
            do {
              if (*plVar11 == 0) goto LAB_076036bc;
              iVar16 = iVar16 + -1;
              plVar11 = plVar11 + 1;
            } while (iVar16 != 0);
          }
          plVar11 = (long *)FUN_03f5c394(DAT_0917fbf0);
          System_Array__CopyTo(lVar7,plVar11,0,0);
          return plVar11;
        }
        lVar9 = thunk_FUN_03f9944c(DAT_0917c7e0);
        FUN_057e0478(lVar9,uVar4,DAT_091aeac0);
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (0 < (int)uVar1) {
          lVar8 = 0;
          do {
            if (uVar1 <= (uint)lVar8) goto LAB_07603760;
            lVar17 = *(long *)(lVar7 + 0x20 + lVar8 * 8);
            if (lVar17 == 0) goto LAB_076036bc;
            uVar6 = FUN_03f6c2d0(lVar17);
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_095354b8);
            }
            uVar5 = System_Type__op_Inequality(plVar11,0,0);
            if ((uVar5 & 1) == 0) {
LAB_07603494:
              lVar18 = DAT_091aeac8;
              if (lVar9 == 0) goto LAB_0760331c;
              lVar15 = *(long *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar15 == 0) goto LAB_0760331c;
              uVar1 = *(uint *)(lVar9 + 0x18);
              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                plVar10 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                *plVar10 = lVar17;
                thunk_FUN_03f5d7b8(plVar10,lVar17);
              }
              else {
                FUN_057e0c68(lVar9,lVar17,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              if (plVar11 == (long *)0x0) goto LAB_0760331c;
              uVar5 = (**(code **)(*plVar11 + 0x2b8))
                                (plVar11,uVar6,*(undefined8 *)(*plVar11 + 0x2c0));
              if ((uVar5 & 1) != 0) goto LAB_07603494;
            }
            uVar1 = *(uint *)(lVar7 + 0x18);
            lVar8 = lVar8 + 1;
          } while ((int)lVar8 < (int)uVar1);
        }
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Type__op_Equality(plVar11,0,0);
        if ((uVar5 & 1) == 0) {
          if (plVar11 == (long *)0x0) goto LAB_0760331c;
          uVar5 = System_Type__get_IsValueType(plVar11,0);
          if ((uVar5 & 1) == 0) {
            if (lVar9 == 0) goto LAB_0760331c;
            uVar6 = System_Array__CreateInstance(plVar11,*(undefined4 *)(lVar9 + 0x18),0);
            plVar11 = (long *)thunk_FUN_03f99350(uVar6,DAT_09180318);
            goto LAB_0760367c;
          }
        }
        if (lVar9 != 0) {
          plVar11 = (long *)FUN_03f5c394(DAT_0917fbf0,*(undefined4 *)(lVar9 + 0x18));
LAB_0760367c:
          FUN_057e1290(lVar9,plVar11,0,DAT_091aeae8);
          return plVar11;
        }
      }
LAB_0760331c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    puVar13 = &DAT_09217bc0;
  }
  uVar12 = thunk_FUN_03fc39d4(puVar13);
  System_ArgumentNullException___ctor(uVar6,uVar12,0);
LAB_076036ec:
  uVar12 = thunk_FUN_03fc39d4(&DAT_091d3c30);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar12);
}

