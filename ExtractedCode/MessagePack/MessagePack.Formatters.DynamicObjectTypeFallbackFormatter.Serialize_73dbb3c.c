// rea decompile_all
// name: MessagePack.Formatters.DynamicObjectTypeFallbackFormatter$$Serialize
// address: 0x73dbb3c
// body: available
// range: 0x73dbb3c-0x73dc4eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73dbd04 to 0x739fa20 MessagePack.MessagePackWriter$$WriteMapHeader (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73dbd2c to 0x739f684 MessagePack.MessagePackWriter$$WriteNil (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73dc438 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73dc440 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73dc448 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73dc44c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73dc450 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73dc454 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73dc458 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73dc45c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73dc460 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73dc464 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073dc43c) */
/* WARNING: Removing unreachable block (ram,0x073dc344) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void MessagePack_Formatters_DynamicObjectTypeFallbackFormatter__Serialize
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  int *piVar17;
  char local_74 [4];
  undefined8 local_70;
  long local_68;
  
  if ((DAT_09520d16 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183e90);
    FUN_03f5c2a4(&DAT_091a7778);
    FUN_03f5c2a4(&DAT_091cbbf0);
    FUN_03f5c2a4(&DAT_091843a0);
    FUN_03f5c2a4(&DAT_09184938);
    FUN_03f5c2a4(&DAT_091857d8);
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_09171cc8);
    FUN_03f5c2a4(&DAT_0917b1e0);
    FUN_03f5c2a4(&DAT_09172438);
    FUN_03f5c2a4(&DAT_09172440);
    FUN_03f5c2a4(&DAT_09180368);
    FUN_03f5c2a4(&DAT_09189538);
    FUN_03f5c2a4(&DAT_091bd4a0);
    FUN_03f5c2a4(&DAT_091bd4a8);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_0920cb98);
    FUN_03f5c2a4(&DAT_09225370);
    FUN_03f5c2a4(&DAT_092258f0);
    FUN_03f5c2a4(&DAT_0921ba88);
    FUN_03f5c2a4(&DAT_092206f0);
    DAT_09520d16 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_74[0] = '\0';
  if (param_3 == 0) {
    MessagePack_MessagePackWriter__WriteNil(param_2,0);
    return;
  }
  lVar1 = System_Object__GetType(param_3,0);
  lVar2 = System_Reflection_IntrospectionExtensions__GetTypeInfo(lVar1,0);
  lVar5 = DAT_095353e8;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar3 = System_Type__GetTypeFromHandle(lVar5 + 0x20,0);
  uVar4 = System_Type__op_Equality(lVar1,uVar3,0);
  if ((uVar4 & 1) != 0) {
    MessagePack_MessagePackWriter__WriteMapHeader(param_2,0,0);
    return;
  }
  if (*(int *)(DAT_09189538 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = MessagePack_Formatters_PrimitiveObjectFormatter__IsSupportedType(lVar1,lVar2,param_3);
  if ((((uVar4 & 1) == 0) || (lVar5 = thunk_FUN_03f99350(param_3,DAT_09185a20), lVar5 != 0)) ||
     (lVar5 = thunk_FUN_03f99350(param_3,DAT_091857d8), lVar5 != 0)) {
    if (param_4 != 0) {
      uVar3 = *(undefined8 *)(param_4 + 0x10);
      if (*(int *)(DAT_09184938 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = MessagePack_FormatterResolverExtensions__GetFormatterDynamicWithVerify(uVar3,lVar1,0);
      if (*(int *)(DAT_09183e90 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183e90);
      }
      lVar5 = *(long *)(*(long *)(DAT_09183e90 + 0xb8) + 8);
      if (lVar5 != 0) {
        uVar4 = FUN_04a6dd34(lVar5,lVar1,&local_68,DAT_091bd4a8);
        if ((uVar4 & 1) == 0) {
          if (*(int *)(DAT_09183e90 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          local_74[0] = '\0';
          local_70 = *(undefined8 *)(*(long *)(DAT_09183e90 + 0xb8) + 8);
          System_Threading_Monitor__Enter(local_70,local_74,0);
          if (*(int *)(DAT_09183e90 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar5 = *(long *)(*(long *)(DAT_09183e90 + 0xb8) + 8);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar4 = FUN_04a6dd34(lVar5,lVar1,&local_68,DAT_091bd4a8);
          uVar8 = DAT_09171cc8;
          if ((uVar4 & 1) == 0) {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            plVar6 = (long *)System_Type__GetTypeFromHandle(uVar8,0);
            plVar7 = (long *)FUN_03f5c394(DAT_09180748,1);
            if (plVar7 == (long *)0x0) {
LAB_073dc44c:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if ((lVar1 != 0) &&
               (lVar5 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
              uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar3,0);
            }
            if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar7[4] = lVar1;
            thunk_FUN_03f5d7b8(plVar7 + 4,lVar1);
            if (plVar6 == (long *)0x0) goto LAB_073dc44c;
            uVar8 = (**(code **)(*plVar6 + 0x948))(plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x950));
            uVar9 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
            if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar5 = System_Linq_Expressions_Expression__Parameter(uVar9,DAT_0921ba88,0);
            plVar6 = (long *)System_Type__GetTypeFromHandle(DAT_09172440,0);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar9 = (**(code **)(*plVar6 + 0x938))(plVar6,*(undefined8 *)(*plVar6 + 0x940));
            lVar10 = System_Linq_Expressions_Expression__Parameter(uVar9,DAT_092258f0,0);
            uVar9 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
            lVar11 = System_Linq_Expressions_Expression__Parameter(uVar9,DAT_09225370,0);
            uVar9 = System_Type__GetTypeFromHandle(DAT_09172438,0);
            lVar12 = System_Linq_Expressions_Expression__Parameter(uVar9,DAT_092206f0,0);
            plVar6 = (long *)FUN_03f5c394(DAT_09180748,3);
            plVar7 = (long *)System_Type__GetTypeFromHandle(DAT_09172440,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar13 = (**(code **)(*plVar7 + 0x938))(plVar7,*(undefined8 *)(*plVar7 + 0x940));
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if ((lVar13 != 0) &&
               (lVar14 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar14 == 0)) {
              uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar3,0);
            }
            if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar6[4] = lVar13;
            thunk_FUN_03f5d7b8(plVar6 + 4,lVar13);
            if ((lVar1 != 0) &&
               (lVar13 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0)) {
              uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar3,0);
            }
            if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar6[5] = lVar1;
            thunk_FUN_03f5d7b8(plVar6 + 5,lVar1);
            lVar13 = System_Type__GetTypeFromHandle(DAT_09172438,0);
            if ((lVar13 != 0) &&
               (lVar14 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar14 == 0)) {
              uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar3,0);
            }
            if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar6[6] = lVar13;
            thunk_FUN_03f5d7b8(plVar6 + 6,lVar13);
            uVar9 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                              (uVar8,DAT_0920cb98,plVar6,0);
            uVar8 = System_Linq_Expressions_Expression__Convert(lVar5,uVar8,0);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar4 = System_Type__get_IsValueType(lVar2,0);
            if ((uVar4 & 1) == 0) {
              if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar15 = System_Linq_Expressions_Expression__Convert(lVar11,lVar1,0);
            }
            else {
              if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar15 = System_Linq_Expressions_Expression__Unbox(lVar11,lVar1,0);
            }
            if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar8 = System_Linq_Expressions_Expression__Call(uVar8,uVar9,lVar10,uVar15,lVar12,0);
            plVar6 = (long *)FUN_03f5c394(DAT_09180368,4);
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if ((lVar5 != 0) &&
               (lVar2 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar2 == 0)) {
              uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar3,0);
            }
            if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar6[4] = lVar5;
            thunk_FUN_03f5d7b8(plVar6 + 4,lVar5);
            if ((lVar10 != 0) &&
               (lVar5 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)) {
              uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar3,0);
            }
            if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar6[5] = lVar10;
            thunk_FUN_03f5d7b8(plVar6 + 5,lVar10);
            if ((lVar11 != 0) &&
               (lVar5 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)) {
              uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar3,0);
            }
            if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar6[6] = lVar11;
            thunk_FUN_03f5d7b8(plVar6 + 6,lVar11);
            if ((lVar12 != 0) &&
               (lVar5 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)) {
              uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar3,0);
            }
            if ((*(uint *)(plVar6 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar6[7] = lVar12;
            thunk_FUN_03f5d7b8(plVar6 + 7,lVar12);
            lVar5 = FUN_04b212ac(uVar8,plVar6,DAT_091cbbf0);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            local_68 = FUN_05237a6c(lVar5,DAT_091a7778);
            if (*(int *)(DAT_09183e90 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar5 = *(long *)(*(long *)(DAT_09183e90 + 0xb8) + 8);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_0636137c(lVar5,lVar1,local_68,DAT_091bd4a0);
          }
          if (local_74[0] != '\0') {
            System_Threading_Monitor__Exit(local_70,0);
          }
        }
        if (local_68 != 0) {
          (**(code **)(local_68 + 0x18))
                    (*(undefined8 *)(local_68 + 0x40),uVar3,param_2,param_3,param_4,
                     *(undefined8 *)(local_68 + 0x28));
          return;
        }
      }
    }
  }
  else {
    if (*(int *)(DAT_09189538 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar6 = (long *)**(undefined8 **)(DAT_09189538 + 0xb8);
    if (plVar6 != (long *)0x0) {
      lVar5 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == DAT_0917b1e0) {
            puVar16 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_073dc404;
          }
          uVar4 = uVar4 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar4 != 0);
      }
      puVar16 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917b1e0,0);
LAB_073dc404:
                    /* WARNING: Could not recover jumptable at 0x073dc434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar16)(plVar6,param_2,param_3,param_4,puVar16[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

