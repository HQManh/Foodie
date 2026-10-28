// rea decompile_all
// name: MessagePack.Resolvers.DynamicEnumResolver$$BuildType
// address: 0x73a66c4
// body: available
// range: 0x73a66c4-0x73a6f77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73a6eac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a6eb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a6eb4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a6eb8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a6ebc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a6ec0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a6ec4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a6ec8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a6ecc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a6ed0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a6ed4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a6ed8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073a6eec) */
/* WARNING: Removing unreachable block (ram,0x073a6eb8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 MessagePack_Resolvers_DynamicEnumResolver__BuildType(long *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined4 local_74;
  long local_70;
  long *local_68;
  
  local_68 = param_1;
  if ((DAT_09520b9a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183e50);
    FUN_03f5c2a4(&DAT_09171cc8);
    FUN_03f5c2a4(&DAT_09188168);
    FUN_03f5c2a4(&DAT_09172418);
    FUN_03f5c2a4(&DAT_09172438);
    FUN_03f5c2a4(&DAT_09172440);
    FUN_03f5c2a4(&DAT_091883a0);
    FUN_03f5c2a4(&DAT_09188c40);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_09207c60);
    FUN_03f5c2a4(&DAT_0920cb98);
    FUN_03f5c2a4(&DAT_09214950);
    FUN_03f5c2a4(&DAT_0920b580);
    FUN_03f5c2a4(&DAT_09213410);
    FUN_03f5c2a4(&DAT_09202dc0);
    FUN_03f5c2a4(&DAT_09200768);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_09520b9a = 1;
  }
  local_70 = 0;
  local_74 = 0;
  if (*(int *)(DAT_09535470 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar1 = (long *)System_Enum__GetUnderlyingType(param_1,0);
  uVar7 = DAT_09171cc8;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  plVar2 = (long *)System_Type__GetTypeFromHandle(uVar7,0);
  plVar3 = (long *)FUN_03f5c394(DAT_09180748,1);
  if (plVar3 != (long *)0x0) {
    if ((param_1 != (long *)0x0) &&
       (lVar4 = thunk_FUN_03f99350(param_1,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
      uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,0);
    }
    if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar3[4] = (long)param_1;
    thunk_FUN_03f5d7b8(plVar3 + 4,param_1);
    if (plVar2 != (long *)0x0) {
      lVar4 = (**(code **)(*plVar2 + 0x948))(plVar2,plVar3,*(undefined8 *)(*plVar2 + 0x950));
      if (*(int *)(DAT_09188168 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188168);
      }
      if (**(long **)(DAT_09188168 + 0xb8) != 0) {
        MessagePack_MessagePackEventSource__FormatterDynamicallyGeneratedStart
                  (**(long **)(DAT_09188168 + 0xb8),0);
        if (*(int *)(DAT_091883a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_70 = MessagePack_MonoProtection__EnterRefEmitLock();
        if (*(int *)(DAT_09183e50 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar5 = *(long *)(*(long *)(DAT_09183e50 + 0xb8) + 8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = MessagePack_Internal_DynamicAssemblyFactory__GetDynamicAssembly
                          (lVar5,local_68,param_2 & 1,0);
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = (**(code **)(*local_68 + 0x2f8))(local_68,*(undefined8 *)(*local_68 + 0x300));
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar7 = System_String__Replace(lVar6,DAT_091f8f68,DAT_09214950,0);
        local_74 = System_Threading_Interlocked__Increment(*(long *)(DAT_09183e50 + 0xb8) + 0x10,0);
        uVar8 = System_Int32__ToString(&local_74,0);
        uVar7 = System_String__Concat(DAT_09207c60,uVar7,DAT_09202dc0,uVar8,0);
        plVar2 = (long *)FUN_03f5c394(DAT_09180748,1);
        if (plVar2 != (long *)0x0) {
          if ((lVar4 != 0) &&
             (lVar6 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0)) {
            uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar7,0);
          }
          if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar2[4] = lVar4;
          thunk_FUN_03f5d7b8(plVar2 + 4,lVar4);
          if (lVar5 != 0) {
            lVar4 = MessagePack_Internal_DynamicAssembly__DefineType(lVar5,uVar7,0x101,0,plVar2,0);
            plVar2 = (long *)FUN_03f5c394(DAT_09180748,3);
            uVar7 = DAT_09172440;
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            plVar3 = (long *)System_Type__GetTypeFromHandle(uVar7,0);
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar5 = (**(code **)(*plVar3 + 0x938))(plVar3,*(undefined8 *)(*plVar3 + 0x940));
            if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0)) {
              uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar7,0);
            }
            if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar2[4] = lVar5;
            thunk_FUN_03f5d7b8(plVar2 + 4,lVar5);
            plVar3 = local_68;
            if ((local_68 != (long *)0x0) &&
               (lVar5 = thunk_FUN_03f99350(local_68,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0)) {
              uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar7,0);
            }
            if ((*(uint *)(plVar2 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar2[5] = (long)plVar3;
            thunk_FUN_03f5d7b8(plVar2 + 5,plVar3);
            lVar5 = System_Type__GetTypeFromHandle(DAT_09172438,0);
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0)) {
              uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar7,0);
            }
            if (*(uint *)(plVar2 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar2[6] = lVar5;
            thunk_FUN_03f5d7b8(plVar2 + 6,lVar5);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar5 = System_Reflection_Emit_TypeBuilder__DefineMethod
                              (lVar4,DAT_0920cb98,0x66,0,plVar2,0);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar2 = (long *)System_Reflection_Emit_MethodBuilder__GetILGenerator(lVar5,0);
            if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            (**(code **)(*plVar2 + 0x198))
                      (plVar2,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x18),
                       *(undefined8 *)(*plVar2 + 0x1a0));
            (**(code **)(*plVar2 + 0x198))
                      (plVar2,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x20),
                       *(undefined8 *)(*plVar2 + 0x1a0));
            uVar8 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x138);
            uVar7 = System_Type__GetTypeFromHandle(DAT_09172440,0);
            plVar3 = (long *)FUN_03f5c394(DAT_09180748,1);
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if ((plVar1 != (long *)0x0) &&
               (lVar5 = thunk_FUN_03f99350(plVar1,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
              uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar7,0);
            }
            if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar3[4] = (long)plVar1;
            thunk_FUN_03f5d7b8(plVar3 + 4,plVar1);
            uVar7 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                              (uVar7,DAT_09213410,plVar3,0);
            (**(code **)(*plVar2 + 0x238))(plVar2,uVar8,uVar7,*(undefined8 *)(*plVar2 + 0x240));
            (**(code **)(*plVar2 + 0x198))
                      (plVar2,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x148),
                       *(undefined8 *)(*plVar2 + 0x1a0));
            plVar2 = local_68;
            plVar3 = (long *)FUN_03f5c394(DAT_09180748,2);
            plVar9 = (long *)System_Type__GetTypeFromHandle(DAT_09172418,0);
            if (plVar9 != (long *)0x0) {
              lVar5 = (**(code **)(*plVar9 + 0x938))(plVar9,*(undefined8 *)(*plVar9 + 0x940));
              if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0)) {
                uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar7,0);
              }
              if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              plVar3[4] = lVar5;
              thunk_FUN_03f5d7b8(plVar3 + 4,lVar5);
              lVar5 = System_Type__GetTypeFromHandle(DAT_09172438,0);
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0)) {
                uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar7,0);
              }
              if ((*(uint *)(plVar3 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              plVar3[5] = lVar5;
              thunk_FUN_03f5d7b8(plVar3 + 5,lVar5);
              lVar5 = System_Reflection_Emit_TypeBuilder__DefineMethod
                                (lVar4,DAT_09200768,0x66,plVar2,plVar3,0);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              plVar2 = (long *)System_Reflection_Emit_MethodBuilder__GetILGenerator(lVar5,0);
              if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              (**(code **)(*plVar2 + 0x198))
                        (plVar2,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x18),
                         *(undefined8 *)(*plVar2 + 0x1a0));
              uVar8 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x138);
              uVar7 = System_Type__GetTypeFromHandle(DAT_09172418,0);
              if (plVar1 != (long *)0x0) {
                uVar10 = (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
                uVar10 = System_String__Concat(DAT_0920b580,uVar10,0);
                uVar7 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                                  (uVar7,uVar10,
                                   *(undefined8 *)(*(long *)(DAT_095354b8 + 0xb8) + 0x10),0);
                (**(code **)(*plVar2 + 0x238))(plVar2,uVar8,uVar7,*(undefined8 *)(*plVar2 + 0x240));
                (**(code **)(*plVar2 + 0x198))
                          (plVar2,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x148),
                           *(undefined8 *)(*plVar2 + 0x1a0));
                uVar7 = System_Reflection_Emit_TypeBuilder__CreateTypeInfo(lVar4,0);
                if (local_70 != 0) {
                  System_Threading_Monitor__Exit(local_70,0);
                }
                if (*(int *)(DAT_09188168 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                MessagePack_MessagePackEventSourceExtensions__FormatterDynamicallyGeneratedStop
                          (**(undefined8 **)(DAT_09188168 + 0xb8),local_68,0);
                return uVar7;
              }
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
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
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

