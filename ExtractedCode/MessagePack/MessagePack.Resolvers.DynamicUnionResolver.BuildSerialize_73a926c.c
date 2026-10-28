// rea decompile_all
// name: MessagePack.Resolvers.DynamicUnionResolver$$BuildSerialize
// address: 0x73a926c
// body: available
// range: 0x73a926c-0x73a9c1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73a9c0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a9c10 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a9c1c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Resolvers_DynamicUnionResolver__BuildSerialize
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  
  if ((DAT_09520ba3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183eb0);
    FUN_03f5c2a4(&DAT_091ca188);
    FUN_03f5c2a4(&DAT_091ca7a0);
    FUN_03f5c2a4(&DAT_091cae50);
    FUN_03f5c2a4(&DAT_091cacb0);
    FUN_03f5c2a4(&DAT_09177fb0);
    FUN_03f5c2a4(&DAT_09179218);
    FUN_03f5c2a4(&DAT_09171c08);
    FUN_03f5c2a4(&DAT_091708b0);
    FUN_03f5c2a4(&DAT_09190448);
    FUN_03f5c2a4(&DAT_09188c40);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091e9510);
    FUN_03f5c2a4(&DAT_091e9520);
    FUN_03f5c2a4(&DAT_09190430);
    FUN_03f5c2a4(&DAT_09190428);
    FUN_03f5c2a4(&DAT_09196fe0);
    FUN_03f5c2a4(&DAT_09196fe8);
    DAT_09520ba3 = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_09190430);
  System_Object___ctor(lVar4,0);
  if (lVar4 != 0) {
    plVar13 = (long *)(lVar4 + 0x10);
    *plVar13 = param_5;
    thunk_FUN_03f5d7b8(plVar13,param_5);
    plVar5 = (long *)*plVar13;
    if (plVar5 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
      plVar5 = (long *)*plVar13;
      if (plVar5 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
        MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(*plVar13,2,0);
        plVar5 = (long *)*plVar13;
        if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x1f8))
                    (plVar5,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x160),uVar2,
                     *(undefined8 *)(*plVar5 + 0x200));
          plVar5 = (long *)*plVar13;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x1f8))
                      (plVar5,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x1b8),uVar3,
                       *(undefined8 *)(*plVar5 + 0x200));
            plVar5 = (long *)*plVar13;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x268))(plVar5,uVar2,*(undefined8 *)(*plVar5 + 0x270));
              uVar6 = DAT_09171c08;
              plVar5 = (long *)*plVar13;
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
              if (plVar5 != (long *)0x0) {
                uVar6 = (**(code **)(*plVar5 + 0x178))
                                  (plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x180));
                MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(*plVar13,3,0);
                lVar15 = *plVar13;
                if (*(int *)(DAT_09183eb0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                MessagePack_Internal_ILGeneratorExtensions__EmitCall
                          (lVar15,*(undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x38),0);
                MessagePack_Internal_ILGeneratorExtensions__EmitStloc(*plVar13,uVar6,0);
                plVar5 = (long *)*plVar13;
                uVar7 = System_Type__GetTypeFromHandle(DAT_091708b0,0);
                if (plVar5 != (long *)0x0) {
                  uVar7 = (**(code **)(*plVar5 + 0x178))
                                    (plVar5,uVar7,*(undefined8 *)(*plVar5 + 0x180));
                  MessagePack_Internal_ILGeneratorExtensions__EmitLoadThis(*plVar13,0);
                  MessagePack_Internal_ILGeneratorExtensions__EmitLdfld(*plVar13,param_4,0);
                  MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(*plVar13,2,0);
                  MessagePack_Internal_ILGeneratorExtensions__EmitCall
                            (*plVar13,*(undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x90),0);
                  MessagePack_Internal_ILGeneratorExtensions__EmitCall
                            (*plVar13,*(undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x98),0);
                  MessagePack_Internal_ILGeneratorExtensions__EmitLdloca(*plVar13,uVar7,0);
                  MessagePack_Internal_ILGeneratorExtensions__EmitCall
                            (*plVar13,*(undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x70),0);
                  plVar5 = (long *)*plVar13;
                  if (plVar5 != (long *)0x0) {
                    (**(code **)(*plVar5 + 0x1f8))
                              (plVar5,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x1c0),uVar3,
                               *(undefined8 *)(*plVar5 + 0x200));
                    MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(*plVar13,1,0);
                    MessagePack_Internal_ILGeneratorExtensions__EmitLdc_I4(*plVar13,2,0);
                    lVar15 = *plVar13;
                    if (*(int *)(DAT_09190448 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    MessagePack_Internal_ILGeneratorExtensions__EmitCall
                              (lVar15,*(undefined8 *)(*(long *)(DAT_09190448 + 0xb8) + 8),0);
                    MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(*plVar13,1,0);
                    MessagePack_Internal_ILGeneratorExtensions__EmitLdloca(*plVar13,uVar7,0);
                    MessagePack_Internal_ILGeneratorExtensions__EmitCall
                              (*plVar13,*(undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0xa0),0);
                    MessagePack_Internal_ILGeneratorExtensions__EmitCall
                              (*plVar13,*(undefined8 *)(*(long *)(DAT_09190448 + 0xb8) + 0x10),0);
                    plVar5 = (long *)*plVar13;
                    if (plVar5 != (long *)0x0) {
                      uVar2 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
                      uVar8 = thunk_FUN_03f9944c(DAT_09179218);
                      FUN_05324070(uVar8,lVar4,DAT_091e9520,0);
                      uVar8 = FUN_04af8044(param_2,uVar8,DAT_091ca7a0);
                      lVar15 = FUN_04b049e4(uVar8,DAT_091cacb0);
                      MessagePack_Internal_ILGeneratorExtensions__EmitLdloca
                                (*(undefined8 *)(lVar4 + 0x10),uVar7,0);
                      MessagePack_Internal_ILGeneratorExtensions__EmitCall
                                (*(undefined8 *)(lVar4 + 0x10),
                                 *(undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0xa8),0);
                      plVar5 = *(long **)(lVar4 + 0x10);
                      uVar7 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x220);
                      if (*(int *)(DAT_09190428 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      puVar12 = *(undefined8 **)(DAT_09190428 + 0xb8);
                      lVar4 = puVar12[2];
                      if (lVar4 == 0) {
                        if (*(int *)(DAT_09190428 + 0xe4) == 0) {
                          FUN_03f5c424();
                          puVar12 = *(undefined8 **)(DAT_09190428 + 0xb8);
                        }
                        uVar8 = *puVar12;
                        lVar4 = thunk_FUN_03f9944c(DAT_09177fb0);
                        FUN_05323e38(lVar4,uVar8,DAT_091e9510,0);
                        plVar9 = (long *)(*(long *)(DAT_09190428 + 0xb8) + 0x10);
                        *plVar9 = lVar4;
                        thunk_FUN_03f5d7b8(plVar9,lVar4);
                      }
                      uVar8 = FUN_04af79fc(lVar15,lVar4,DAT_091ca188);
                      uVar8 = FUN_04b0484c(uVar8,DAT_091cae50);
                      if (plVar5 != (long *)0x0) {
                        (**(code **)(*plVar5 + 0x208))
                                  (plVar5,uVar7,uVar8,*(undefined8 *)(*plVar5 + 0x210));
                        plVar5 = (long *)*plVar13;
                        if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        if (plVar5 != (long *)0x0) {
                          (**(code **)(*plVar5 + 0x1f8))
                                    (plVar5,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x1b8),
                                     uVar2,*(undefined8 *)(*plVar5 + 0x200));
                          if (lVar15 != 0) {
                            uVar1 = *(uint *)(lVar15 + 0x18);
                            if (0 < (int)uVar1) {
                              uVar14 = 0;
                              do {
                                if (uVar1 <= uVar14) {
LAB_073a9c10:
                    /* WARNING: Subroutine does not return */
                                  FUN_03f5c558();
                                }
                                lVar4 = *(long *)(lVar15 + (long)(int)uVar14 * 8 + 0x20);
                                if ((lVar4 == 0) ||
                                   (plVar5 = (long *)*plVar13, plVar5 == (long *)0x0))
                                goto LAB_073a9c0c;
                                (**(code **)(*plVar5 + 0x268))
                                          (plVar5,*(undefined4 *)(lVar4 + 0x10),
                                           *(undefined8 *)(*plVar5 + 0x270));
                                MessagePack_Internal_ILGeneratorExtensions__EmitLdloc
                                          (*plVar13,uVar6,0);
                                plVar5 = (long *)*plVar13;
                                if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
                                  FUN_03f5c424();
                                }
                                uVar7 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x138);
                                if (*(int *)(DAT_09183eb0 + 0xe4) == 0) {
                                  FUN_03f5c424(DAT_09183eb0);
                                }
                                plVar16 = *(long **)(*(long *)(DAT_09183eb0 + 0xb8) + 0x30);
                                plVar9 = (long *)FUN_03f5c394(DAT_09180748,1);
                                if ((*(long *)(lVar4 + 0x18) == 0) || (plVar9 == (long *)0x0))
                                goto LAB_073a9c0c;
                                lVar17 = *(long *)(*(long *)(lVar4 + 0x18) + 0x18);
                                if ((lVar17 != 0) &&
                                   (lVar10 = thunk_FUN_03f99350(lVar17,*(undefined8 *)
                                                                        (*plVar9 + 0x40)),
                                   lVar10 == 0)) {
                                  uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                                  FUN_03f5c414(uVar6,0);
                                }
                                if ((int)plVar9[3] == 0) goto LAB_073a9c10;
                                plVar9[4] = lVar17;
                                thunk_FUN_03f5d7b8(plVar9 + 4,lVar17);
                                if (plVar16 == (long *)0x0) goto LAB_073a9c0c;
                                uVar8 = (**(code **)(*plVar16 + 0x418))
                                                  (plVar16,plVar9,*(undefined8 *)(*plVar16 + 0x420))
                                ;
                                if (plVar5 == (long *)0x0) goto LAB_073a9c0c;
                                (**(code **)(*plVar5 + 0x238))
                                          (plVar5,uVar7,uVar8,*(undefined8 *)(*plVar5 + 0x240));
                                MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(*plVar13,1,0);
                                MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(*plVar13,2,0);
                                if ((*(long *)(lVar4 + 0x18) == 0) ||
                                   (lVar17 = System_Reflection_IntrospectionExtensions__GetTypeInfo
                                                       (*(undefined8 *)
                                                         (*(long *)(lVar4 + 0x18) + 0x18),0),
                                   lVar17 == 0)) goto LAB_073a9c0c;
                                uVar11 = System_Type__get_IsValueType(lVar17,0);
                                plVar5 = (long *)*plVar13;
                                if ((uVar11 & 1) == 0) {
                                  if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
                                    FUN_03f5c424();
                                  }
                                  lVar17 = *(long *)(lVar4 + 0x18);
                                  if ((lVar17 == 0) || (plVar5 == (long *)0x0)) goto LAB_073a9c0c;
                                  lVar10 = *plVar5;
                                  uVar7 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x398);
                                }
                                else {
                                  if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
                                    FUN_03f5c424();
                                  }
                                  lVar17 = *(long *)(lVar4 + 0x18);
                                  if ((lVar17 == 0) || (plVar5 == (long *)0x0)) goto LAB_073a9c0c;
                                  lVar10 = *plVar5;
                                  uVar7 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x510);
                                }
                                (**(code **)(lVar10 + 600))
                                          (plVar5,uVar7,*(undefined8 *)(lVar17 + 0x18),
                                           *(undefined8 *)(lVar10 + 0x260));
                                MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(*plVar13,3,0);
                                plVar5 = (long *)*plVar13;
                                if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
                                  FUN_03f5c424(DAT_09188c40);
                                }
                                uVar7 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x370);
                                if (*(int *)(DAT_09183eb0 + 0xe4) == 0) {
                                  FUN_03f5c424();
                                }
                                if (((*(long *)(lVar4 + 0x18) == 0) ||
                                    (lVar17 = *(long *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x40),
                                    lVar17 == 0)) ||
                                   (uVar8 = (**(code **)(lVar17 + 0x18))
                                                      (*(undefined8 *)(lVar17 + 0x40),
                                                       *(undefined8 *)
                                                        (*(long *)(lVar4 + 0x18) + 0x18),
                                                       *(undefined8 *)(lVar17 + 0x28)),
                                   plVar5 == (long *)0x0)) goto LAB_073a9c0c;
                                (**(code **)(*plVar5 + 0x238))
                                          (plVar5,uVar7,uVar8,*(undefined8 *)(*plVar5 + 0x240));
                                plVar5 = (long *)*plVar13;
                                if (plVar5 == (long *)0x0) goto LAB_073a9c0c;
                                (**(code **)(*plVar5 + 0x1f8))
                                          (plVar5,*(undefined8 *)
                                                   (*(long *)(DAT_09188c40 + 0xb8) + 0x1b8),uVar2,
                                           *(undefined8 *)(*plVar5 + 0x200));
                                uVar1 = *(uint *)(lVar15 + 0x18);
                                uVar14 = uVar14 + 1;
                              } while ((int)uVar14 < (int)uVar1);
                            }
                            plVar5 = (long *)*plVar13;
                            if (plVar5 != (long *)0x0) {
                              (**(code **)(*plVar5 + 0x268))
                                        (plVar5,uVar2,*(undefined8 *)(*plVar5 + 0x270));
                              plVar5 = (long *)*plVar13;
                              if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
                                FUN_03f5c424();
                              }
                              if (plVar5 != (long *)0x0) {
                                (**(code **)(*plVar5 + 0x198))
                                          (plVar5,*(undefined8 *)
                                                   (*(long *)(DAT_09188c40 + 0xb8) + 0x148),
                                           *(undefined8 *)(*plVar5 + 0x1a0));
                                plVar5 = (long *)*plVar13;
                                if (plVar5 != (long *)0x0) {
                                  (**(code **)(*plVar5 + 0x268))
                                            (plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x270));
                                  MessagePack_Internal_ILGeneratorExtensions__EmitLdarg
                                            (*plVar13,1,0);
                                  lVar4 = *plVar13;
                                  if (*(int *)(DAT_09190448 + 0xe4) == 0) {
                                    FUN_03f5c424();
                                  }
                                  MessagePack_Internal_ILGeneratorExtensions__EmitCall
                                            (lVar4,*(undefined8 *)
                                                    (*(long *)(DAT_09190448 + 0xb8) + 0x18),0);
                                  plVar13 = (long *)*plVar13;
                                  if (plVar13 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x073a9c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                    (**(code **)(*plVar13 + 0x198))
                                              (plVar13,*(undefined8 *)
                                                        (*(long *)(DAT_09188c40 + 0xb8) + 0x148),
                                               *(undefined8 *)(*plVar13 + 0x1a0));
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
                }
              }
            }
          }
        }
      }
    }
  }
LAB_073a9c0c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

