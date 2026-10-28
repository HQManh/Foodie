// rea decompile_all
// name: MessagePack.Resolvers.DynamicUnionResolver$$BuildType
// address: 0x73a81b8
// body: available
// range: 0x73a81b8-0x73a8d37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73a8b1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a8b24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a8b30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a8ba8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a8c4c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a8c50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a8c54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a8c58 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a8c5c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a8c60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a8c64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a8c68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073a8c80) */
/* WARNING: Removing unreachable block (ram,0x073a8c58) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 MessagePack_Resolvers_DynamicUnionResolver__BuildType(long *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  undefined8 local_68;
  
  if ((DAT_09520ba1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6e08);
    FUN_03f5c2a4(&DAT_09170828);
    FUN_03f5c2a4(&DAT_09170840);
    FUN_03f5c2a4(&DAT_09183e88);
    FUN_03f5c2a4(&DAT_09183eb0);
    FUN_03f5c2a4(&DAT_091ca0a8);
    FUN_03f5c2a4(&DAT_091caef8);
    FUN_03f5c2a4(&DAT_09179220);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a8848);
    FUN_03f5c2a4(&DAT_091a8830);
    FUN_03f5c2a4(&DAT_091a8298);
    FUN_03f5c2a4(&DAT_09179e18);
    FUN_03f5c2a4(&DAT_09179f30);
    FUN_03f5c2a4(&DAT_09171cc8);
    FUN_03f5c2a4(&DAT_09188168);
    FUN_03f5c2a4(&DAT_09172438);
    FUN_03f5c2a4(&DAT_09172440);
    FUN_03f5c2a4(&DAT_091883a0);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091e9518);
    FUN_03f5c2a4(&DAT_09190428);
    FUN_03f5c2a4(&DAT_09207c60);
    FUN_03f5c2a4(&DAT_0921dff0);
    FUN_03f5c2a4(&DAT_0920cb98);
    FUN_03f5c2a4(&DAT_09214950);
    FUN_03f5c2a4(&DAT_09224578);
    FUN_03f5c2a4(&DAT_09202dc0);
    FUN_03f5c2a4(&DAT_09200768);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_09520ba1 = 1;
  }
  local_68 = 0;
  lVar3 = System_Reflection_IntrospectionExtensions__GetTypeInfo(param_1,0);
  uVar4 = FUN_04a7bbc0(lVar3,DAT_091c6e08);
  if (*(int *)(DAT_09190428 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09190428);
  }
  puVar11 = *(undefined8 **)(DAT_09190428 + 0xb8);
  lVar12 = puVar11[1];
  if (lVar12 == 0) {
    if (*(int *)(DAT_09190428 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09190428);
      puVar11 = *(undefined8 **)(DAT_09190428 + 0xb8);
    }
    uVar13 = *puVar11;
    lVar12 = thunk_FUN_03f9944c(DAT_09179220);
    FUN_053239c8(lVar12,uVar13,DAT_091e9518,0);
    plVar5 = (long *)(*(long *)(DAT_09190428 + 0xb8) + 8);
    *plVar5 = lVar12;
    thunk_FUN_03f5d7b8(plVar5,lVar12);
  }
  uVar4 = FUN_04aeab54(uVar4,lVar12,DAT_091ca0a8);
  lVar12 = FUN_04b049e4(uVar4,DAT_091caef8);
  if (lVar12 != 0) {
    if (*(long *)(lVar12 + 0x18) == 0) {
      return 0;
    }
    if (lVar3 != 0) {
      uVar6 = System_Type__get_IsInterface(lVar3,0);
      if (((uVar6 & 1) == 0) && (uVar6 = System_Type__get_IsAbstract(lVar3,0), (uVar6 & 1) == 0)) {
        FUN_039b1d98(param_1);
        uVar4 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
        uVar13 = thunk_FUN_03fc39d4(&DAT_09212068);
        uVar4 = System_String__Concat(uVar13,uVar4,0);
LAB_073a8c18:
        thunk_FUN_03fc39d4(&DAT_09188160);
        uVar13 = thunk_FUN_03f9944c();
        MessagePack_Resolvers_MessagePackDynamicUnionResolverException___ctor(uVar13,uVar4);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091c8ae8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar13,uVar4);
      }
      lVar3 = thunk_FUN_03f9944c(DAT_09179e18);
      FUN_053d6e00(lVar3,DAT_091a8298);
      lVar7 = thunk_FUN_03f9944c(DAT_09179f30);
      FUN_053eb530(lVar7,DAT_091a8830);
      uVar1 = *(uint *)(lVar12 + 0x18);
      if ((int)uVar1 < 1) {
        lVar16 = 0;
      }
      else {
        lVar16 = 0;
        do {
          uVar15 = (uint)lVar16;
          if (uVar1 <= uVar15) {
            local_68 = CONCAT44(uVar15,(undefined4)local_68);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar14 = *(long *)(lVar12 + 0x20 + lVar16 * 8);
          if (lVar14 == 0) {
            local_68 = CONCAT44(uVar15,(undefined4)local_68);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (lVar3 == 0) {
LAB_073a8b18:
            local_68 = local_68 & 0xffffffff;
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar6 = FUN_053d8048(lVar3,*(undefined4 *)(lVar14 + 0x10),DAT_091a82b0);
          if ((uVar6 & 1) == 0) {
            local_68._4_4_ = uVar15;
            FUN_039b1d98(param_1);
            uVar4 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
            FUN_039b1d98(lVar14);
            local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(lVar14 + 0x10));
            uVar13 = System_Int32__ToString(&local_68,0);
            uVar10 = thunk_FUN_03fc39d4(&DAT_0920c688);
            uVar9 = thunk_FUN_03fc39d4(&DAT_091f5fa8);
LAB_073a8c10:
            uVar4 = System_String__Concat(uVar10,uVar4,uVar9,uVar13,0);
            goto LAB_073a8c18;
          }
          if (lVar7 == 0) goto LAB_073a8b18;
          uVar6 = FUN_053ec72c(lVar7,*(undefined8 *)(lVar14 + 0x18),DAT_091a8848);
          if ((uVar6 & 1) == 0) {
            local_68 = CONCAT44(uVar15,(undefined4)local_68);
            if (param_1 != (long *)0x0) {
              uVar4 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
              plVar5 = *(long **)(lVar14 + 0x18);
              uVar9 = thunk_FUN_03fc39d4(&DAT_091f6020);
              uVar10 = thunk_FUN_03fc39d4(&DAT_0920c690);
              if (plVar5 == (long *)0x0) {
                uVar13 = 0;
              }
              else {
                uVar13 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
              }
              goto LAB_073a8c10;
            }
            goto LAB_073a8b30;
          }
          uVar1 = *(uint *)(lVar12 + 0x18);
          lVar16 = lVar16 + 1;
        } while ((int)lVar16 < (int)uVar1);
      }
      local_68 = CONCAT44((int)lVar16,(undefined4)local_68);
      if (*(int *)(DAT_09188168 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_09188168 + 0xb8) != 0) {
        MessagePack_MessagePackEventSource__FormatterDynamicallyGeneratedStart
                  (**(long **)(DAT_09188168 + 0xb8),0);
        uVar4 = DAT_09171cc8;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar5 = (long *)System_Type__GetTypeFromHandle(uVar4,0);
        plVar8 = (long *)FUN_03f5c394(DAT_09180748,1);
        if (plVar8 != (long *)0x0) {
          if ((param_1 != (long *)0x0) &&
             (lVar3 = thunk_FUN_03f99350(param_1,*(undefined8 *)(*plVar8 + 0x40)), lVar3 == 0)) {
            uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar4,0);
          }
          if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar8[4] = (long)param_1;
          thunk_FUN_03f5d7b8(plVar8 + 4,param_1);
          if (plVar5 != (long *)0x0) {
            lVar3 = (**(code **)(*plVar5 + 0x948))(plVar5,plVar8,*(undefined8 *)(*plVar5 + 0x950));
            if (*(int *)(DAT_091883a0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar7 = MessagePack_MonoProtection__EnterRefEmitLock();
            if (*(int *)(DAT_09183eb0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar16 = *(long *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x10);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar16 = MessagePack_Internal_DynamicAssemblyFactory__GetDynamicAssembly
                               (lVar16,param_1,0,0);
            if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar14 = **(long **)(DAT_09183e88 + 0xb8);
            uVar4 = (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550(uVar4,uVar4);
            }
            lVar14 = System_Text_RegularExpressions_Regex__Replace
                               (lVar14,uVar4,**(undefined8 **)(DAT_09535468 + 0xb8),0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar4 = System_String__Replace(lVar14,DAT_091f8f68,DAT_09214950,0);
            uVar2 = System_Threading_Interlocked__Increment(*(long *)(DAT_09183eb0 + 0xb8) + 0x18,0)
            ;
            local_68 = CONCAT44(uVar2,(undefined4)local_68);
            uVar13 = System_Int32__ToString((long)&local_68 + 4,0);
            uVar4 = System_String__Concat(DAT_09207c60,uVar4,DAT_09202dc0,uVar13,0);
            plVar5 = (long *)FUN_03f5c394(DAT_09180748,1);
            if (plVar5 != (long *)0x0) {
              if ((lVar3 != 0) &&
                 (lVar14 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar14 == 0))
              {
                uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar4,0);
              }
              if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              plVar5[4] = lVar3;
              thunk_FUN_03f5d7b8(plVar5 + 4,lVar3);
              if (lVar16 != 0) {
                lVar3 = MessagePack_Internal_DynamicAssembly__DefineType
                                  (lVar16,uVar4,0x101,0,plVar5,0);
                if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar16 = System_Reflection_Emit_TypeBuilder__DefineConstructor
                                   (lVar3,6,1,*(undefined8 *)(*(long *)(DAT_095354b8 + 0xb8) + 0x10)
                                    ,0);
                uVar4 = System_Type__GetTypeFromHandle(DAT_09170840,0);
                System_Reflection_Emit_TypeBuilder__DefineField(lVar3,DAT_09224578,uVar4,0x21,0);
                uVar4 = System_Type__GetTypeFromHandle(DAT_09170828,0);
                System_Reflection_Emit_TypeBuilder__DefineField(lVar3,DAT_0921dff0,uVar4,0x21,0);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar4 = System_Reflection_Emit_ConstructorBuilder__GetILGenerator(lVar16,0);
                MessagePack_Resolvers_DynamicUnionResolver__BuildConstructor(uVar4,lVar12);
                plVar5 = (long *)FUN_03f5c394(DAT_09180748,3);
                plVar8 = (long *)System_Type__GetTypeFromHandle(DAT_09172440,0);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar16 = (**(code **)(*plVar8 + 0x938))(plVar8,*(undefined8 *)(*plVar8 + 0x940));
                if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if ((lVar16 != 0) &&
                   (lVar14 = thunk_FUN_03f99350(lVar16,*(undefined8 *)(*plVar5 + 0x40)), lVar14 == 0
                   )) {
                  uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar4,0);
                }
                if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                plVar5[4] = lVar16;
                thunk_FUN_03f5d7b8(plVar5 + 4,lVar16);
                if ((param_1 != (long *)0x0) &&
                   (lVar16 = thunk_FUN_03f99350(param_1,*(undefined8 *)(*plVar5 + 0x40)),
                   lVar16 == 0)) {
                  uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar4,0);
                }
                if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                plVar5[5] = (long)param_1;
                thunk_FUN_03f5d7b8(plVar5 + 5,param_1);
                lVar16 = System_Type__GetTypeFromHandle(DAT_09172438,0);
                if ((lVar16 != 0) &&
                   (lVar14 = thunk_FUN_03f99350(lVar16,*(undefined8 *)(*plVar5 + 0x40)), lVar14 == 0
                   )) {
                  uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar4,0);
                }
                if (*(uint *)(plVar5 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                plVar5[6] = lVar16;
                thunk_FUN_03f5d7b8(plVar5 + 6,lVar16);
                lVar16 = System_Reflection_Emit_TypeBuilder__DefineMethod
                                   (lVar3,DAT_0920cb98,0x1e6,0,plVar5,0);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar4 = System_Reflection_Emit_MethodBuilder__GetILGenerator(lVar16,0);
                MessagePack_Resolvers_DynamicUnionResolver__BuildSerialize(uVar4,lVar12);
                plVar5 = (long *)FUN_03f5c394(DAT_09180748,2);
                if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar16 = *(long *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x20);
                if ((lVar16 != 0) &&
                   (lVar14 = thunk_FUN_03f99350(lVar16,*(undefined8 *)(*plVar5 + 0x40)), lVar14 == 0
                   )) {
                  uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar4,0);
                }
                if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                plVar5[4] = lVar16;
                thunk_FUN_03f5d7b8(plVar5 + 4,lVar16);
                lVar16 = System_Type__GetTypeFromHandle(DAT_09172438,0);
                if ((lVar16 != 0) &&
                   (lVar14 = thunk_FUN_03f99350(lVar16,*(undefined8 *)(*plVar5 + 0x40)), lVar14 == 0
                   )) {
                  uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar4,0);
                }
                if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                plVar5[5] = lVar16;
                thunk_FUN_03f5d7b8(plVar5 + 5,lVar16);
                lVar16 = System_Reflection_Emit_TypeBuilder__DefineMethod
                                   (lVar3,DAT_09200768,0x1e6,param_1,plVar5,0);
                if (lVar16 != 0) {
                  System_Reflection_Emit_MethodBuilder__GetILGenerator(lVar16,0);
                  MessagePack_Resolvers_DynamicUnionResolver__BuildDeserialize(param_1,lVar12);
                  uVar4 = System_Reflection_Emit_TypeBuilder__CreateTypeInfo(lVar3,0);
                  if (lVar7 != 0) {
                    System_Threading_Monitor__Exit(lVar7,0);
                  }
                  if (*(int *)(DAT_09188168 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  MessagePack_MessagePackEventSourceExtensions__FormatterDynamicallyGeneratedStop
                            (**(undefined8 **)(DAT_09188168 + 0xb8),param_1,0);
                  return uVar4;
                }
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
LAB_073a8b30:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

