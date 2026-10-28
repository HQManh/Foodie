// rea decompile_all
// name: System.DefaultBinder$$SelectMethod
// address: 0x75e9578
// body: available
// range: 0x75e9578-0x75e9c83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e9bd8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e9bdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e9c38 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e9c44 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e9c80 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_DefaultBinder__SelectMethod
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  long *plVar22;
  uint uVar23;
  
  if ((DAT_09521eef & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183868);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091802d0);
    FUN_03f5c2a4(&DAT_09188228);
    FUN_03f5c2a4(&DAT_0918ac00);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_09521eef = 1;
  }
  if (param_4 != 0) {
    plVar3 = (long *)FUN_03f5c394(DAT_09180748,*(undefined4 *)(param_4 + 0x18));
    uVar16 = *(uint *)(param_4 + 0x18);
    if (0 < (int)uVar16) {
      uVar19 = 0;
      lVar21 = 0x20;
      do {
        if (uVar16 <= uVar19) goto LAB_075e9bd8;
        plVar4 = *(long **)(param_4 + lVar21);
        if ((plVar4 == (long *)0x0) ||
           (lVar5 = (**(code **)(*plVar4 + 0x338))(plVar4,*(undefined8 *)(*plVar4 + 0x340)),
           plVar3 == (long *)0x0)) goto LAB_075e9bdc;
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
        goto LAB_075e9c3c;
        if (*(uint *)(plVar3 + 3) <= uVar19) goto LAB_075e9bd8;
        *(long *)((long)plVar3 + lVar21) = lVar5;
        thunk_FUN_03f5d7b8((long)plVar3 + lVar21,lVar5);
        if (*(uint *)(plVar3 + 3) <= uVar19) goto LAB_075e9bd8;
        if (*(long *)((long)plVar3 + lVar21) == 0) goto LAB_075e9bdc;
        uVar7 = System_Type__IsRuntimeImplemented(*(long *)((long)plVar3 + lVar21),0);
        if ((uVar7 & 1) == 0) {
          if (*(uint *)(plVar3 + 3) <= uVar19) goto LAB_075e9bd8;
          if (*(long **)((long)plVar3 + lVar21) != (long *)0x0) {
            lVar5 = **(long **)((long)plVar3 + lVar21);
            if ((*(byte *)(DAT_0918ac00 + 0x130) <= *(byte *)(lVar5 + 0x130)) &&
               (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(DAT_0918ac00 + 0x130) * 8 + -8)
                == DAT_0918ac00)) goto LAB_075e96ec;
          }
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar9 = thunk_FUN_03f9944c();
          uVar10 = thunk_FUN_03fc39d4(&DAT_09211258);
          puVar12 = &DAT_092245a0;
          goto LAB_075e9c0c;
        }
LAB_075e96ec:
        uVar16 = *(uint *)(param_4 + 0x18);
        uVar19 = uVar19 + 1;
        lVar21 = lVar21 + 8;
      } while ((int)uVar19 < (int)uVar16);
    }
    if ((param_3 == 0) || (*(long *)(param_3 + 0x18) == 0)) {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar9 = thunk_FUN_03f9944c();
      uVar10 = thunk_FUN_03fc39d4(&DAT_091fbf00);
      puVar12 = (undefined8 *)&DAT_0921f240;
LAB_075e9c0c:
      uVar11 = thunk_FUN_03fc39d4(puVar12);
      System_ArgumentException___ctor(uVar9,uVar10,uVar11,0);
LAB_075e9c24:
      uVar10 = thunk_FUN_03fc39d4(&DAT_091c8278);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar9,uVar10);
    }
    lVar21 = System_Array__Clone(param_3,0);
    uVar9 = DAT_091802d0;
    if (lVar21 != 0) {
      plVar4 = (long *)thunk_FUN_03f99350(lVar21,DAT_091802d0);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar21,uVar9);
      }
      uVar19 = *(uint *)(plVar4 + 3);
      plVar15 = plVar4 + 4;
      uVar16 = 0;
      if (0 < (int)uVar19) {
        uVar23 = 0;
        do {
          if (uVar19 <= uVar23) goto LAB_075e9bd8;
          plVar22 = plVar4 + (long)(int)uVar23 + 4;
          plVar8 = (long *)*plVar22;
          if (((plVar8 == (long *)0x0) ||
              (lVar21 = (**(code **)(*plVar8 + 0x3d8))(plVar8,*(undefined8 *)(*plVar8 + 0x3e0)),
              lVar21 == 0)) || (plVar3 == (long *)0x0)) goto LAB_075e9bdc;
          iVar2 = (int)plVar3[3];
          if (*(int *)(lVar21 + 0x18) == iVar2) {
            if (*(int *)(lVar21 + 0x18) < 1) {
              iVar20 = 0;
            }
            else {
              lVar5 = 0;
              do {
                uVar19 = (uint)lVar5;
                if (*(uint *)(lVar21 + 0x18) <= uVar19) goto LAB_075e9bd8;
                plVar8 = *(long **)(lVar21 + 0x20 + lVar5 * 8);
                if (plVar8 == (long *)0x0) goto LAB_075e9bdc;
                plVar8 = (long *)(**(code **)(*plVar8 + 0x1e8))
                                           (plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
                if ((*(uint *)(plVar3 + 3) <= uVar19) || (*(uint *)(lVar21 + 0x18) <= uVar19))
                goto LAB_075e9bd8;
                uVar7 = System_Reflection_SignatureTypeExtensions__MatchesParameterTypeExactly
                                  (plVar3[lVar5 + 4],*(undefined8 *)(lVar21 + 0x20 + lVar5 * 8),0);
                lVar6 = DAT_095353e8;
                if ((uVar7 & 1) == 0) {
                  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar9 = System_Type__GetTypeFromHandle(lVar6 + 0x20,0);
                  uVar7 = System_Type__op_Equality(plVar8,uVar9,0);
                  if ((uVar7 & 1) == 0) {
                    if (*(uint *)(plVar3 + 3) <= uVar19) goto LAB_075e9bd8;
                    plVar17 = (long *)plVar3[lVar5 + 4];
                    if (plVar17 != (long *)0x0) {
                      if ((*(byte *)(DAT_0918ac00 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
                         (*(long *)(*(long *)(*plVar17 + 200) +
                                    (ulong)*(byte *)(DAT_0918ac00 + 0x130) * 8 + -8) == DAT_0918ac00
                         )) {
                        if (*(uint *)(plVar4 + 3) <= uVar23) goto LAB_075e9bd8;
                        plVar13 = (long *)*plVar22;
                        if (plVar13 == (long *)0x0) break;
                        if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(DAT_09188228 + 0x130)) ||
                           (*(long *)(*(long *)(*plVar13 + 200) +
                                      (ulong)*(byte *)(DAT_09188228 + 0x130) * 8 + -8) !=
                            DAT_09188228)) break;
                        plVar17 = (long *)System_Reflection_SignatureTypeExtensions__TryResolveAgainstGenericMethod
                                                    (plVar17,plVar13,0);
                        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                          FUN_03f5c424(DAT_095354b8);
                        }
                        uVar7 = System_Type__op_Equality(plVar17,0,0);
                        if ((uVar7 & 1) != 0) break;
                      }
                    }
                    if (plVar8 == (long *)0x0) goto LAB_075e9bdc;
                    uVar7 = System_Type__get_IsPrimitive(plVar8,0);
                    if ((uVar7 & 1) == 0) {
                      uVar7 = (**(code **)(*plVar8 + 0x2b8))
                                        (plVar8,plVar17,*(undefined8 *)(*plVar8 + 0x2c0));
                    }
                    else {
                      if ((plVar17 == (long *)0x0) ||
                         (lVar6 = (**(code **)(*plVar17 + 0x338))
                                            (plVar17,*(undefined8 *)(*plVar17 + 0x340)), lVar6 == 0)
                         ) goto LAB_075e9bdc;
                      uVar7 = System_Type__IsRuntimeImplemented(lVar6,0);
                      if ((uVar7 & 1) == 0) break;
                      uVar9 = (**(code **)(*plVar17 + 0x338))
                                        (plVar17,*(undefined8 *)(*plVar17 + 0x340));
                      uVar10 = (**(code **)(*plVar8 + 0x338))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x340));
                      if (*(int *)(DAT_09183868 + 0xe4) == 0) {
                        FUN_03f5c424(DAT_09183868);
                      }
                      uVar7 = System_DefaultBinder__CanChangePrimitive(uVar9,uVar10);
                    }
                    if ((uVar7 & 1) == 0) break;
                  }
                }
                lVar5 = lVar5 + 1;
              } while ((int)lVar5 < (int)plVar3[3]);
              iVar20 = (int)lVar5;
              iVar2 = (int)plVar3[3];
            }
            if (iVar20 == iVar2) {
              uVar19 = *(uint *)(plVar4 + 3);
              if (uVar19 <= uVar23) goto LAB_075e9bd8;
              lVar21 = *plVar22;
              if (lVar21 != 0) {
                lVar5 = thunk_FUN_03f99350(lVar21,*(undefined8 *)(*plVar4 + 0x40));
                if (lVar5 == 0) {
LAB_075e9c3c:
                  uVar9 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar9,0);
                }
                uVar19 = *(uint *)(plVar4 + 3);
              }
              if (uVar19 <= uVar16) goto LAB_075e9bd8;
              lVar5 = (long)(int)uVar16;
              lVar6 = (long)(int)uVar16;
              uVar16 = uVar16 + 1;
              plVar4[lVar5 + 4] = lVar21;
              thunk_FUN_03f5d7b8(plVar15 + lVar6,lVar21);
            }
          }
          uVar19 = *(uint *)(plVar4 + 3);
          uVar23 = uVar23 + 1;
        } while ((int)uVar23 < (int)uVar19);
      }
      if (uVar16 == 0) {
        lVar21 = 0;
      }
      else {
        if (uVar16 == 1) {
          if (uVar19 == 0) {
LAB_075e9bd8:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
        }
        else {
          if (plVar3 == (long *)0x0) goto LAB_075e9bdc;
          lVar21 = FUN_03f5c394(DAT_091801b8,(int)plVar3[3]);
          uVar7 = plVar3[3];
          if (0 < (int)uVar7) {
            if (lVar21 == 0) goto LAB_075e9bdc;
            uVar19 = *(uint *)(lVar21 + 0x18);
            uVar14 = 0;
            do {
              if (uVar19 == uVar14) goto LAB_075e9bd8;
              *(int *)(lVar21 + 0x20 + uVar14 * 4) = (int)uVar14;
              uVar14 = uVar14 + 1;
            } while ((uVar7 & 0xffffffff) != uVar14);
          }
          if ((int)uVar16 < 2) {
            uVar19 = 0;
          }
          else {
            lVar5 = 0;
            uVar19 = 0;
            bVar1 = false;
            do {
              if (((uint)plVar4[3] <= uVar19) || ((plVar4[3] & 0xffffffffU) <= lVar5 + 1U))
              goto LAB_075e9bd8;
              lVar6 = plVar4[lVar5 + 5];
              lVar18 = plVar4[(long)(int)uVar19 + 4];
              if (*(int *)(DAT_09183868 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              iVar2 = System_DefaultBinder__FindMostSpecificMethod
                                (lVar18,lVar21,0,lVar6,lVar21,0,plVar3,0);
              if (iVar2 == 0) {
                bVar1 = true;
              }
              else if (iVar2 == 2) {
                bVar1 = false;
                uVar19 = (int)lVar5 + 1;
              }
              lVar5 = lVar5 + 1;
            } while ((ulong)uVar16 - 1 != lVar5);
            if (bVar1) {
              thunk_FUN_03fc39d4(&DAT_09181088);
              uVar9 = thunk_FUN_03f9944c();
              uVar10 = thunk_FUN_03fc39d4(&DAT_091fb838);
              System_Reflection_AmbiguousMatchException___ctor(uVar9,uVar10,0);
              goto LAB_075e9c24;
            }
          }
          if (*(uint *)(plVar4 + 3) <= uVar19) goto LAB_075e9bd8;
          plVar15 = plVar4 + (long)(int)uVar19 + 4;
        }
        lVar21 = *plVar15;
      }
      return lVar21;
    }
  }
LAB_075e9bdc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

