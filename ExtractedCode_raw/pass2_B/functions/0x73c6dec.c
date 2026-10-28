// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder$$BuildType
// address: 0x73c6dec
// body: available
// range: 0x73c6dec-0x73c7b07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73c79b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c79bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c79c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c79c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c79c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c79cc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c79d0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c79d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c79d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c79dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c79e0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73c79e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073c7a08) */
/* WARNING: Removing unreachable block (ram,0x073c79cc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long MessagePack_Internal_DynamicObjectTypeBuilder__BuildType
               (long param_1,long *param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  uint local_74;
  undefined8 local_70;
  long *local_68;
  
  local_68 = param_2;
  if ((DAT_09520c9d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09170ba0);
    FUN_03f5c2a4(&DAT_09183e88);
    FUN_03f5c2a4(&DAT_09179848);
    FUN_03f5c2a4(&DAT_091a8858);
    FUN_03f5c2a4(&DAT_09171cc8);
    FUN_03f5c2a4(&DAT_09188168);
    FUN_03f5c2a4(&DAT_09172438);
    FUN_03f5c2a4(&DAT_09172440);
    FUN_03f5c2a4(&DAT_091883a0);
    FUN_03f5c2a4(&DAT_09188c40);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091903c8);
    FUN_03f5c2a4(&DAT_091e9498);
    FUN_03f5c2a4(&DAT_091e94a0);
    FUN_03f5c2a4(&DAT_091903d0);
    FUN_03f5c2a4(&DAT_091e94b0);
    FUN_03f5c2a4(&DAT_091903e0);
    FUN_03f5c2a4(&DAT_09207c60);
    FUN_03f5c2a4(&DAT_0920cb98);
    FUN_03f5c2a4(&DAT_09225370);
    FUN_03f5c2a4(&DAT_09214950);
    FUN_03f5c2a4(&DAT_092258f0);
    FUN_03f5c2a4(&DAT_092206f0);
    FUN_03f5c2a4(&DAT_09202dc0);
    FUN_03f5c2a4(&DAT_09200768);
    FUN_03f5c2a4(&DAT_09223680);
    FUN_03f5c2a4(&DAT_092215e0);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_09520c9d = 1;
  }
  local_70 = 0;
  local_74 = 0;
  if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(DAT_09183e88 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    uVar3 = FUN_053ebc3c(lVar2,param_2,DAT_091a8858);
    if (((uVar3 & 1) != 0) ||
       (lVar2 = MessagePack_Internal_ObjectSerializationInfo__CreateOrNull
                          (param_2,param_3 & 1,param_4 & 1,param_5 & 1,0), lVar2 == 0)) {
      return 0;
    }
    if ((param_5 & 1) == 0) {
      if (param_2 == (long *)0x0) goto LAB_073c79c0;
      uVar3 = System_Type__get_IsPublic(param_2,0);
      if (((uVar3 & 1) == 0) &&
         (uVar3 = System_Type__get_IsNestedPublic(param_2,0), (uVar3 & 1) == 0)) {
        System_Reflection_IntrospectionExtensions__GetTypeInfo(param_2,0);
        uVar3 = MessagePack_Internal_ReflectionExtensions__IsAnonymous();
        if ((uVar3 & 1) == 0) {
          FUN_039b1d98(param_2);
          uVar8 = (**(code **)(*param_2 + 0x2f8))(param_2,*(undefined8 *)(*param_2 + 0x300));
          uVar9 = thunk_FUN_03fc39d4(&DAT_091fcf70);
          uVar8 = System_String__Concat(uVar9,uVar8,0);
          thunk_FUN_03fc39d4(&DAT_09188180);
          uVar9 = thunk_FUN_03f9944c();
          MessagePack_MessagePackSerializationException___ctor(uVar9,uVar8,0);
          uVar8 = thunk_FUN_03fc39d4(&DAT_091c8ac0);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar9,uVar8);
        }
      }
    }
    if (*(int *)(DAT_09188168 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_09188168 + 0xb8) != 0) {
      MessagePack_MessagePackEventSource__FormatterDynamicallyGeneratedStart
                (**(long **)(DAT_09188168 + 0xb8),0);
      if (*(int *)(DAT_091883a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_70 = MessagePack_MonoProtection__EnterRefEmitLock(0);
      lVar4 = thunk_FUN_03f9944c(DAT_091903c8);
      MessagePack_Internal_DynamicObjectTypeBuilder_<>c__DisplayClass3_0___ctor(lVar4,0);
      uVar8 = DAT_09171cc8;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar5 = (long *)System_Type__GetTypeFromHandle(uVar8,0);
      plVar6 = (long *)FUN_03f5c394(DAT_09180748,1);
      plVar10 = local_68;
      if (plVar6 != (long *)0x0) {
        if ((local_68 != (long *)0x0) &&
           (lVar7 = thunk_FUN_03f99350(local_68,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
          uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar8,0);
        }
        if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar6[4] = (long)plVar10;
        thunk_FUN_03f5d7b8(plVar6 + 4,plVar10);
        if (plVar5 != (long *)0x0) {
          lVar7 = (**(code **)(*plVar5 + 0x948))(plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x950));
          if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar14 = **(long **)(DAT_09183e88 + 0xb8);
          uVar8 = (**(code **)(*local_68 + 0x2f8))(local_68,*(undefined8 *)(*local_68 + 0x300));
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550(uVar8,uVar8);
          }
          lVar14 = System_Text_RegularExpressions_Regex__Replace
                             (lVar14,uVar8,**(undefined8 **)(DAT_09535468 + 0xb8),0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar8 = System_String__Replace(lVar14,DAT_091f8f68,DAT_09214950,0);
          local_74 = System_Threading_Interlocked__Increment(*(long *)(DAT_09183e88 + 0xb8) + 8,0);
          uVar9 = System_Int32__ToString(&local_74,0);
          uVar8 = System_String__Concat(DAT_09207c60,uVar8,DAT_09202dc0,uVar9,0);
          plVar10 = (long *)FUN_03f5c394(DAT_09180748,1);
          if (plVar10 != (long *)0x0) {
            if ((lVar7 != 0) &&
               (lVar14 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0)) {
              uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar8,0);
            }
            if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar10[4] = lVar7;
            thunk_FUN_03f5d7b8(plVar10 + 4,lVar7);
            if (param_1 != 0) {
              if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar7 = System_Reflection_Emit_ModuleBuilder__DefineType
                                (*(long *)(param_1 + 0x18),uVar8,0x101,0,plVar10,0);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              puVar15 = (undefined8 *)(lVar4 + 0x10);
              *puVar15 = 0;
              thunk_FUN_03f5d7b8(puVar15,0);
              puVar13 = (undefined8 *)(lVar4 + 0x18);
              *puVar13 = 0;
              thunk_FUN_03f5d7b8(puVar13,0);
              uVar3 = MessagePack_Internal_ObjectSerializationInfo__get_IsStringKey(lVar2,0);
              if ((uVar3 & 1) == 0) {
                if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar14 = System_Reflection_Emit_TypeBuilder__DefineConstructor
                                   (lVar7,6,1,*(undefined8 *)(*(long *)(DAT_095354b8 + 0xb8) + 0x10)
                                    ,0);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                plVar10 = (long *)System_Reflection_Emit_ConstructorBuilder__GetILGenerator
                                            (lVar14,0);
                MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(plVar10,0);
                if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar8 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x138);
                if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09183e88);
                }
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                (**(code **)(*plVar10 + 0x1e8))
                          (plVar10,uVar8,*(undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x90),
                           *(undefined8 *)(*plVar10 + 0x1f0));
                uVar8 = MessagePack_Internal_DynamicObjectTypeBuilder__BuildCustomFormatterField
                                  (lVar7,lVar2,plVar10);
                *puVar13 = uVar8;
                thunk_FUN_03f5d7b8(puVar13);
                (**(code **)(*plVar10 + 0x198))
                          (plVar10,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x148),
                           *(undefined8 *)(*plVar10 + 0x1a0));
              }
              else {
                if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar14 = System_Reflection_Emit_TypeBuilder__DefineConstructor
                                   (lVar7,6,1,*(undefined8 *)(*(long *)(DAT_095354b8 + 0xb8) + 0x10)
                                    ,0);
                uVar8 = System_Type__GetTypeFromHandle(DAT_09170ba0,0);
                uVar8 = System_Reflection_Emit_TypeBuilder__DefineField
                                  (lVar7,DAT_09223680,uVar8,0x21,0);
                *puVar15 = uVar8;
                thunk_FUN_03f5d7b8(puVar15);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                plVar10 = (long *)System_Reflection_Emit_ConstructorBuilder__GetILGenerator
                                            (lVar14,0);
                lVar14 = DAT_09183e88;
                if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
                  lVar14 = FUN_03f5c424();
                }
                MessagePack_Internal_DynamicObjectTypeBuilder__BuildConstructor(lVar14,lVar2);
                uVar8 = MessagePack_Internal_DynamicObjectTypeBuilder__BuildCustomFormatterField
                                  (lVar7,lVar2,plVar10);
                *puVar13 = uVar8;
                thunk_FUN_03f5d7b8(puVar13);
                if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                (**(code **)(*plVar10 + 0x198))
                          (plVar10,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x148),
                           *(undefined8 *)(*plVar10 + 0x1a0));
              }
              lVar14 = thunk_FUN_03f9944c(DAT_091903d0);
              MessagePack_Internal_DynamicObjectTypeBuilder_<>c__DisplayClass3_1___ctor(lVar14,0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              *(long *)(lVar14 + 0x18) = lVar4;
              thunk_FUN_03f5d7b8((long *)(lVar14 + 0x18),lVar4);
              plVar10 = (long *)FUN_03f5c394(DAT_09180748,3);
              uVar8 = DAT_09172440;
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              plVar5 = (long *)System_Type__GetTypeFromHandle(uVar8,0);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar11 = (**(code **)(*plVar5 + 0x938))(plVar5,*(undefined8 *)(*plVar5 + 0x940));
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if ((lVar11 != 0) &&
                 (lVar12 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0)
                 ) {
                uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar8,0);
              }
              if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              plVar10[4] = lVar11;
              thunk_FUN_03f5d7b8(plVar10 + 4,lVar11);
              plVar5 = local_68;
              if ((local_68 != (long *)0x0) &&
                 (lVar11 = thunk_FUN_03f99350(local_68,*(undefined8 *)(*plVar10 + 0x40)),
                 lVar11 == 0)) {
                uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar8,0);
              }
              if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              plVar10[5] = (long)plVar5;
              thunk_FUN_03f5d7b8(plVar10 + 5,plVar5);
              lVar11 = System_Type__GetTypeFromHandle(DAT_09172438,0);
              if ((lVar11 != 0) &&
                 (lVar12 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0)
                 ) {
                uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar8,0);
              }
              if (*(uint *)(plVar10 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              plVar10[6] = lVar11;
              thunk_FUN_03f5d7b8(plVar10 + 6,lVar11);
              lVar11 = System_Reflection_Emit_TypeBuilder__DefineMethod
                                 (lVar7,DAT_0920cb98,0x66,0,plVar10,0);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              System_Reflection_Emit_MethodBuilder__DefineParameter(lVar11,1,0,DAT_092258f0,0);
              System_Reflection_Emit_MethodBuilder__DefineParameter(lVar11,2,0,DAT_09225370,0);
              System_Reflection_Emit_MethodBuilder__DefineParameter(lVar11,3,0,DAT_092206f0,0);
              uVar8 = System_Reflection_Emit_MethodBuilder__GetILGenerator(lVar11,0);
              puVar13 = (undefined8 *)(lVar14 + 0x10);
              *puVar13 = uVar8;
              thunk_FUN_03f5d7b8(puVar13);
              plVar10 = local_68;
              uVar16 = *puVar13;
              uVar8 = thunk_FUN_03f9944c(DAT_09180e78);
              System_Action___ctor(uVar8,lVar14,DAT_091e9498,0);
              uVar9 = thunk_FUN_03f9944c(DAT_09179848);
              FUN_0532e9d8(uVar9,lVar14,DAT_091e94a0,0);
              if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              MessagePack_Internal_DynamicObjectTypeBuilder__BuildSerialize
                        (plVar10,lVar2,uVar16,uVar8,uVar9,1);
              lVar14 = thunk_FUN_03f9944c(DAT_091903e0);
              MessagePack_Internal_DynamicObjectTypeBuilder_<>c__DisplayClass3_3___ctor(lVar14,0);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              *(long *)(lVar14 + 0x18) = lVar4;
              thunk_FUN_03f5d7b8((long *)(lVar14 + 0x18),lVar4);
              plVar10 = local_68;
              plVar5 = (long *)FUN_03f5c394(DAT_09180748,2);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar4 = *(long *)(*(long *)(DAT_09183e88 + 0xb8) + 0x18);
              if ((lVar4 != 0) &&
                 (lVar11 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar11 == 0))
              {
                uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar8,0);
              }
              if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              plVar5[4] = lVar4;
              thunk_FUN_03f5d7b8(plVar5 + 4,lVar4);
              lVar4 = System_Type__GetTypeFromHandle(DAT_09172438,0);
              if ((lVar4 != 0) &&
                 (lVar11 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar11 == 0))
              {
                uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar8,0);
              }
              if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              plVar5[5] = lVar4;
              thunk_FUN_03f5d7b8(plVar5 + 5,lVar4);
              lVar4 = System_Reflection_Emit_TypeBuilder__DefineMethod
                                (lVar7,DAT_09200768,0x66,plVar10,plVar5,0);
              if (lVar4 != 0) {
                System_Reflection_Emit_MethodBuilder__DefineParameter(lVar4,1,0,DAT_092215e0,0);
                System_Reflection_Emit_MethodBuilder__DefineParameter(lVar4,2,0,DAT_092206f0,0);
                uVar8 = System_Reflection_Emit_MethodBuilder__GetILGenerator(lVar4,0);
                puVar13 = (undefined8 *)(lVar14 + 0x10);
                *puVar13 = uVar8;
                thunk_FUN_03f5d7b8(puVar13);
                plVar10 = local_68;
                uVar9 = *puVar13;
                uVar8 = thunk_FUN_03f9944c(DAT_09179848);
                FUN_0532e9d8(uVar8,lVar14,DAT_091e94b0,0);
                MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserialize
                          (plVar10,lVar2,lVar7,uVar9,uVar8,1);
                lVar4 = System_Reflection_Emit_TypeBuilder__CreateTypeInfo(lVar7,0);
                if (lVar4 != 0) {
                  lVar2 = *(long *)(lVar2 + 0x30);
                  local_74 = 0;
                  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar1 = *(uint *)(lVar2 + 0x18);
                  if (0 < (int)uVar1) {
                    do {
                      if (uVar1 <= local_74) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c558();
                      }
                      lVar7 = *(long *)(lVar2 + (long)(int)local_74 * 8 + 0x20);
                      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      MessagePack_Internal_ObjectSerializationInfo_EmittableMember__OnTypeCreated
                                (lVar7,lVar4,0);
                      uVar1 = *(uint *)(lVar2 + 0x18);
                      local_74 = local_74 + 1;
                    } while ((int)local_74 < (int)uVar1);
                  }
                }
                MessagePack_MonoProtectionDisposal__Dispose(&local_70,0);
                if (*(int *)(DAT_09188168 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                MessagePack_MessagePackEventSourceExtensions__FormatterDynamicallyGeneratedStop
                          (**(undefined8 **)(DAT_09188168 + 0xb8),local_68,0);
                return lVar4;
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
LAB_073c79c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

