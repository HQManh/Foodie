// rea decompile_all
// name: System.DefaultBinder$$SelectProperty
// address: 0x75e7404
// body: available
// range: 0x75e7404-0x75e7e0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e7d2c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e7d30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e7d38 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e7d40 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e7d4c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e7db0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e7df8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e7e04 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e7e0c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_DefaultBinder__SelectProperty
               (undefined8 param_1,undefined8 param_2,long param_3,long *param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  uint local_74;
  
  if ((DAT_09521ee2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6088);
    FUN_03f5c2a4(&DAT_09183868);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_0917e0d8);
    FUN_03f5c2a4(&DAT_091803c8);
    FUN_03f5c2a4(&DAT_0918a400);
    FUN_03f5c2a4(&DAT_091e8d18);
    FUN_03f5c2a4(&DAT_09190000);
    DAT_09521ee2 = 1;
  }
  if (param_5 != 0) {
    if (*(int *)(DAT_09190000 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar12 = *(undefined8 **)(DAT_09190000 + 0xb8);
    lVar14 = puVar12[1];
    if (lVar14 == 0) {
      if (*(int *)(DAT_09190000 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar12 = *(undefined8 **)(DAT_09190000 + 0xb8);
      }
      uVar16 = *puVar12;
      lVar14 = thunk_FUN_03f9944c(DAT_0917e0d8);
      FUN_05d78cfc(lVar14,uVar16,DAT_091e8d18,0);
      plVar3 = (long *)(*(long *)(DAT_09190000 + 0xb8) + 8);
      *plVar3 = lVar14;
      thunk_FUN_03f5d7b8(plVar3,lVar14);
    }
    uVar4 = FUN_04a72b74(param_5,lVar14,DAT_091c6088);
    if ((uVar4 & 1) == 0) {
      thunk_FUN_03fc39d4(&DAT_09181550);
      uVar16 = thunk_FUN_03f9944c();
      uVar10 = thunk_FUN_03fc39d4(&DAT_0921d438);
      System_ArgumentNullException___ctor(uVar16,uVar10,0);
      uVar10 = thunk_FUN_03fc39d4(&DAT_091c8280);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar16,uVar10);
    }
  }
  if ((param_3 == 0) || (*(long *)(param_3 + 0x18) == 0)) {
    uVar16 = thunk_FUN_03fc39d4(&DAT_091fbf00);
    uVar10 = System_Environment__GetResourceString(uVar16,0);
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar16 = thunk_FUN_03f9944c();
    uVar11 = thunk_FUN_03fc39d4(&DAT_0921f240);
    System_ArgumentException___ctor(uVar16,uVar10,uVar11,0);
    goto LAB_075e7d9c;
  }
  lVar14 = System_Array__Clone(param_3,0);
  uVar16 = DAT_091803c8;
  if (lVar14 == 0) {
    plVar3 = (long *)0x0;
    if (param_5 != 0) goto LAB_075e7580;
LAB_075e7594:
    uVar13 = 0;
  }
  else {
    plVar3 = (long *)thunk_FUN_03f99350(lVar14,DAT_091803c8);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar14,uVar16);
    }
    if (param_5 == 0) goto LAB_075e7594;
LAB_075e7580:
    uVar13 = *(uint *)(param_5 + 0x18);
  }
  if (plVar3 == (long *)0x0) {
LAB_075e7d30:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar9 = plVar3 + 4;
  uVar4 = plVar3[3] & 0xffffffff;
  if ((int)plVar3[3] < 1) {
    local_74 = 0;
  }
  else {
    local_74 = 0;
    uVar18 = 0;
    uVar20 = 0;
    lVar14 = param_5 + 0x20;
    do {
      if (param_5 == 0) {
LAB_075e7830:
        if ((uint)uVar18 == uVar13) {
LAB_075e7838:
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = System_Type__op_Inequality(param_4,0,0);
          if ((uVar4 & 1) == 0) {
LAB_075e7a20:
            uVar19 = *(uint *)(plVar3 + 3);
            if (uVar19 <= uVar20) goto LAB_075e7d2c;
            lVar6 = plVar3[uVar20 + 4];
            if (lVar6 != 0) {
              lVar15 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar3 + 0x40));
              if (lVar15 == 0) {
                uVar16 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar16,0);
              }
              uVar19 = (uint)plVar3[3];
            }
            if (uVar19 <= local_74) goto LAB_075e7d2c;
            lVar15 = (long)(int)local_74;
            lVar17 = (long)(int)local_74;
            local_74 = local_74 + 1;
            plVar3[lVar15 + 4] = lVar6;
            thunk_FUN_03f5d7b8(plVar9 + lVar17,lVar6);
          }
          else {
            if (*(uint *)(plVar3 + 3) <= uVar20) goto LAB_075e7d2c;
            plVar7 = plVar3 + uVar20 + 4;
            plVar5 = (long *)*plVar7;
            if ((plVar5 == (long *)0x0) ||
               (lVar6 = (**(code **)(*plVar5 + 600))(plVar5,*(undefined8 *)(*plVar5 + 0x260)),
               lVar6 == 0)) goto LAB_075e7d30;
            uVar4 = System_Type__get_IsPrimitive(lVar6,0);
            if ((uVar4 & 1) == 0) {
              if (*(uint *)(plVar3 + 3) <= uVar20) goto LAB_075e7d2c;
              plVar7 = (long *)*plVar7;
              if ((plVar7 == (long *)0x0) ||
                 (plVar5 = (long *)(**(code **)(*plVar7 + 600))
                                             (plVar7,*(undefined8 *)(*plVar7 + 0x260)),
                 plVar5 == (long *)0x0)) goto LAB_075e7d30;
              uVar4 = (**(code **)(*plVar5 + 0x2b8))
                                (plVar5,param_4,*(undefined8 *)(*plVar5 + 0x2c0));
joined_r0x075e79cc:
              if ((uVar4 & 1) != 0) goto LAB_075e7a20;
            }
            else {
              if (param_4 == (long *)0x0) goto LAB_075e7d30;
              plVar5 = (long *)(**(code **)(*param_4 + 0x338))
                                         (param_4,*(undefined8 *)(*param_4 + 0x340));
              if (plVar5 != (long *)0x0) {
                if ((*(byte *)(DAT_0918a400 + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8
                             + -8) == DAT_0918a400)) {
                  plVar8 = (long *)(**(code **)(*param_4 + 0x338))
                                             (param_4,*(undefined8 *)(*param_4 + 0x340));
                  if (uVar20 < *(uint *)(plVar3 + 3)) {
                    plVar7 = (long *)*plVar7;
                    if ((plVar7 != (long *)0x0) &&
                       (plVar5 = (long *)(**(code **)(*plVar7 + 600))
                                                   (plVar7,*(undefined8 *)(*plVar7 + 0x260)),
                       plVar5 != (long *)0x0)) {
                      plVar5 = (long *)(**(code **)(*plVar5 + 0x338))
                                                 (plVar5,*(undefined8 *)(*plVar5 + 0x340));
                      if (*(int *)(DAT_09183868 + 0xe4) == 0) {
                        FUN_03f5c424(DAT_09183868);
                      }
                      if (plVar8 != (long *)0x0) {
                        if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
                           (*(long *)(*(long *)(*plVar8 + 200) +
                                      (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
                            DAT_0918a400)) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c8d0(plVar8);
                        }
                      }
                      if (plVar5 != (long *)0x0) {
                        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
                           (*(long *)(*(long *)(*plVar5 + 200) +
                                      (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
                            DAT_0918a400)) {
LAB_075e7d34:
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c8d0(plVar5);
                        }
                      }
                      uVar4 = System_DefaultBinder__CanConvertPrimitive(plVar8,plVar5);
                      goto joined_r0x075e79cc;
                    }
                    goto LAB_075e7d30;
                  }
                  goto LAB_075e7d2c;
                }
              }
            }
          }
          uVar18 = (ulong)uVar13;
        }
      }
      else {
        if (uVar4 <= uVar20) goto LAB_075e7d2c;
        plVar5 = (long *)plVar3[uVar20 + 4];
        if ((plVar5 == (long *)0x0) ||
           (lVar6 = (**(code **)(*plVar5 + 0x268))(plVar5,*(undefined8 *)(*plVar5 + 0x270)),
           lVar6 == 0)) goto LAB_075e7d30;
        if (uVar13 == *(uint *)(lVar6 + 0x18)) {
          if ((int)uVar13 < 1) {
            uVar18 = 0;
            goto LAB_075e7830;
          }
          uVar18 = 0;
          do {
            uVar19 = (uint)uVar18;
            if (*(uint *)(lVar6 + 0x18) <= uVar19) goto LAB_075e7d2c;
            plVar5 = *(long **)(lVar6 + 0x20 + uVar18 * 8);
            if (plVar5 == (long *)0x0) goto LAB_075e7d30;
            plVar5 = (long *)(**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0))
            ;
            if (*(uint *)(param_5 + 0x18) <= uVar19) goto LAB_075e7d2c;
            uVar16 = *(undefined8 *)(lVar14 + uVar18 * 8);
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = System_Type__op_Equality(plVar5,uVar16,0);
            lVar15 = DAT_095353e8;
            if ((uVar4 & 1) == 0) {
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar16 = System_Type__GetTypeFromHandle(lVar15 + 0x20,0);
              uVar4 = System_Type__op_Equality(plVar5,uVar16,0);
              if ((uVar4 & 1) == 0) {
                if (plVar5 == (long *)0x0) goto LAB_075e7d30;
                uVar4 = System_Type__get_IsPrimitive(plVar5,0);
                bVar1 = *(uint *)(param_5 + 0x18) <= uVar19;
                if ((uVar4 & 1) == 0) {
                  if (bVar1) goto LAB_075e7d2c;
                  uVar4 = (**(code **)(*plVar5 + 0x2b8))
                                    (plVar5,*(undefined8 *)(lVar14 + uVar18 * 8),
                                     *(undefined8 *)(*plVar5 + 0x2c0));
                }
                else {
                  if (bVar1) goto LAB_075e7d2c;
                  plVar7 = *(long **)(lVar14 + uVar18 * 8);
                  if (plVar7 == (long *)0x0) goto LAB_075e7d30;
                  plVar7 = (long *)(**(code **)(*plVar7 + 0x338))
                                             (plVar7,*(undefined8 *)(*plVar7 + 0x340));
                  if (plVar7 == (long *)0x0) goto LAB_075e7830;
                  if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
                     (*(long *)(*(long *)(*plVar7 + 200) +
                                (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) != DAT_0918a400))
                  goto LAB_075e7830;
                  if (*(uint *)(param_5 + 0x18) <= uVar19) goto LAB_075e7d2c;
                  plVar7 = *(long **)(lVar14 + uVar18 * 8);
                  if (plVar7 == (long *)0x0) goto LAB_075e7d30;
                  plVar7 = (long *)(**(code **)(*plVar7 + 0x338))
                                             (plVar7,*(undefined8 *)(*plVar7 + 0x340));
                  plVar5 = (long *)(**(code **)(*plVar5 + 0x338))
                                             (plVar5,*(undefined8 *)(*plVar5 + 0x340));
                  if (*(int *)(DAT_09183868 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_09183868);
                  }
                  if (plVar7 != (long *)0x0) {
                    if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar7 + 200) +
                                  (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) != DAT_0918a400))
                    {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c8d0(plVar7);
                    }
                  }
                  if (plVar5 != (long *)0x0) {
                    if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar5 + 200) +
                                  (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) != DAT_0918a400))
                    goto LAB_075e7d34;
                  }
                  uVar4 = System_DefaultBinder__CanConvertPrimitive(plVar7,plVar5);
                }
                if ((uVar4 & 1) == 0) goto LAB_075e7830;
              }
            }
            uVar18 = uVar18 + 1;
          } while (uVar13 != (uint)uVar18);
          goto LAB_075e7838;
        }
      }
      uVar4 = (ulong)*(uint *)(plVar3 + 3);
      uVar20 = uVar20 + 1;
    } while ((long)uVar20 < (long)(int)*(uint *)(plVar3 + 3));
  }
  if (local_74 == 0) {
    lVar14 = 0;
  }
  else {
    if (local_74 == 1) {
      if ((int)uVar4 == 0) {
LAB_075e7d2c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
    else {
      lVar14 = FUN_03f5c394(DAT_091801b8,uVar13);
      if (0 < (int)uVar13) {
        if (lVar14 == 0) goto LAB_075e7d30;
        uVar19 = *(uint *)(lVar14 + 0x18);
        uVar4 = 0;
        do {
          if (uVar19 == uVar4) goto LAB_075e7d2c;
          *(int *)(lVar14 + 0x20 + uVar4 * 4) = (int)uVar4;
          uVar4 = uVar4 + 1;
        } while (uVar13 != uVar4);
      }
      if ((int)local_74 < 2) {
        uVar13 = 0;
      }
      else {
        lVar6 = 0;
        uVar13 = 0;
        bVar1 = false;
        do {
          if (*(uint *)(plVar3 + 3) <= uVar13) goto LAB_075e7d2c;
          plVar5 = plVar3 + (long)(int)uVar13 + 4;
          plVar9 = (long *)*plVar5;
          if (plVar9 == (long *)0x0) goto LAB_075e7d30;
          uVar19 = (int)lVar6 + 1;
          uVar16 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
          if (*(uint *)(plVar3 + 3) <= uVar19) goto LAB_075e7d2c;
          plVar9 = (long *)plVar3[lVar6 + 5];
          if (plVar9 == (long *)0x0) goto LAB_075e7d30;
          uVar10 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
          if (*(int *)(DAT_09183868 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09183868);
          }
          iVar2 = System_DefaultBinder__FindMostSpecificType(uVar16,uVar10,param_4);
          if ((param_5 != 0) && (iVar2 == 0)) {
            if (*(uint *)(plVar3 + 3) <= uVar13) goto LAB_075e7d2c;
            plVar9 = (long *)*plVar5;
            if (plVar9 == (long *)0x0) goto LAB_075e7d30;
            uVar16 = (**(code **)(*plVar9 + 0x268))(plVar9,*(undefined8 *)(*plVar9 + 0x270));
            if (*(uint *)(plVar3 + 3) <= uVar19) goto LAB_075e7d2c;
            plVar9 = (long *)plVar3[lVar6 + 5];
            if (plVar9 == (long *)0x0) goto LAB_075e7d30;
            uVar10 = (**(code **)(*plVar9 + 0x268))(plVar9,*(undefined8 *)(*plVar9 + 0x270));
            if (*(int *)(DAT_09183868 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09183868);
            }
            iVar2 = System_DefaultBinder__FindMostSpecific
                              (uVar16,lVar14,0,uVar10,lVar14,0,param_5,0);
          }
          if (iVar2 == 0) {
            if ((*(uint *)(plVar3 + 3) <= uVar13) || (*(uint *)(plVar3 + 3) <= uVar19))
            goto LAB_075e7d2c;
            lVar15 = *plVar5;
            lVar17 = plVar3[lVar6 + 5];
            if (*(int *)(DAT_09183868 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar2 = System_DefaultBinder__FindMostSpecificProperty(lVar15,lVar17);
            bVar1 = (bool)(iVar2 == 0 | bVar1);
          }
          lVar6 = lVar6 + 1;
          if (iVar2 == 2) {
            uVar13 = uVar19;
          }
          bVar1 = (bool)(iVar2 != 2 & bVar1);
        } while (local_74 - 1 != (int)lVar6);
        if (bVar1) {
          uVar16 = thunk_FUN_03fc39d4(&DAT_091fb838);
          uVar10 = System_Environment__GetResourceString(uVar16,0);
          thunk_FUN_03fc39d4(&DAT_09181088);
          uVar16 = thunk_FUN_03f9944c();
          System_Reflection_AmbiguousMatchException___ctor(uVar16,uVar10,0);
LAB_075e7d9c:
          uVar10 = thunk_FUN_03fc39d4(&DAT_091c8280);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar16,uVar10);
        }
      }
      if (*(uint *)(plVar3 + 3) <= uVar13) goto LAB_075e7d2c;
      plVar9 = plVar3 + (long)(int)uVar13 + 4;
    }
    lVar14 = *plVar9;
  }
  return lVar14;
}

