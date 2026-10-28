// rea decompile_all
// name: MessagePack.Formatters.TypelessFormatter$$Serialize
// address: 0x73e96f8
// body: available
// range: 0x73e96f8-0x73ea257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73e98f8 to 0x739f684 MessagePack.MessagePackWriter$$WriteNil (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73ea1a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ea1a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ea1ac to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ea1b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ea1b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ea1bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ea1c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ea1c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ea1c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ea1cc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ea1d0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073ea058) */
/* WARNING: Removing unreachable block (ram,0x073ea1a8) */

void MessagePack_Formatters_TypelessFormatter__Serialize
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  char *pcStack_178;
  undefined8 *local_170;
  undefined8 local_160;
  char *pcStack_158;
  undefined8 *local_150;
  undefined8 uStack_148;
  undefined8 local_100;
  undefined1 *puStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 local_90 [16];
  char local_7c [4];
  undefined8 local_78;
  long local_70;
  long local_68;
  
  if ((DAT_09520ddb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183e90);
    FUN_03f5c2a4(&DAT_091a7788);
    FUN_03f5c2a4(&DAT_091cbc00);
    FUN_03f5c2a4(&DAT_091843a0);
    FUN_03f5c2a4(&DAT_09184938);
    FUN_03f5c2a4(&DAT_091a8858);
    FUN_03f5c2a4(&DAT_09171cc8);
    FUN_03f5c2a4(&DAT_0917b1e0);
    FUN_03f5c2a4(&DAT_09172438);
    FUN_03f5c2a4(&DAT_09172440);
    FUN_03f5c2a4(&DAT_09180368);
    FUN_03f5c2a4(&DAT_091b97a8);
    FUN_03f5c2a4(&DAT_091ba048);
    FUN_03f5c2a4(&DAT_0917e6a0);
    FUN_03f5c2a4(&DAT_0918b398);
    FUN_03f5c2a4(&DAT_091bd4e8);
    FUN_03f5c2a4(&DAT_091bd458);
    FUN_03f5c2a4(&DAT_091bd4f8);
    FUN_03f5c2a4(&DAT_091bd460);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_0918c300);
    FUN_03f5c2a4(&DAT_0920cb98);
    FUN_03f5c2a4(&DAT_09225370);
    FUN_03f5c2a4(&DAT_092258f0);
    FUN_03f5c2a4(&DAT_0921ba88);
    FUN_03f5c2a4(&DAT_092206f0);
    DAT_09520ddb = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  local_7c[0] = '\0';
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (param_3 == 0) {
    MessagePack_MessagePackWriter__WriteNil(param_2,0);
    return;
  }
  lVar1 = System_Object__GetType(param_3,0);
  if (param_4 != 0) {
    if (*(char *)(param_4 + 0x26) == '\0') {
      if (*(int *)(DAT_0918c300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar4 = (long *)(*(long *)(DAT_0918c300 + 0xb8) + 0x18);
    }
    else {
      if (*(int *)(DAT_0918c300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar4 = (long *)(*(long *)(DAT_0918c300 + 0xb8) + 0x20);
    }
    lVar17 = *plVar4;
    if (lVar17 != 0) {
      uVar2 = FUN_04a6dd34(lVar17,lVar1,&local_68,DAT_091bd460);
      if ((uVar2 & 1) == 0) {
        uVar3 = System_Reflection_IntrospectionExtensions__GetTypeInfo(lVar1,0);
        uVar2 = MessagePack_Internal_ReflectionExtensions__IsAnonymous(uVar3,0);
        lVar15 = 0;
        if ((uVar2 & 1) == 0) {
          if (*(int *)(DAT_0918c300 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar15 = *(long *)(*(long *)(DAT_0918c300 + 0xb8) + 0x30);
          if (lVar15 == 0) goto LAB_073ea1a0;
          uVar2 = FUN_053ebc3c(lVar15,lVar1,DAT_091a8858);
          if ((uVar2 & 1) == 0) {
            if (*(int *)(DAT_0918b398 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            plVar4 = (long *)**(undefined8 **)(DAT_0918b398 + 0xb8);
            uVar3 = MessagePack_Formatters_TypelessFormatter__BuildTypeName
                              (DAT_0918b398,lVar1,param_4);
            if (plVar4 == (long *)0x0) goto LAB_073ea1a0;
            lVar15 = (**(code **)(*plVar4 + 600))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x260));
          }
          else {
            lVar15 = 0;
          }
        }
        local_68 = lVar15;
        FUN_0636137c(lVar17,lVar1,lVar15,DAT_091bd458);
      }
      if (local_68 == 0) {
        if (*(int *)(DAT_09183e90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar4 = (long *)**(undefined8 **)(DAT_09183e90 + 0xb8);
        if (plVar4 == (long *)0x0) goto LAB_073ea1a0;
        lVar1 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar2 != 0) {
          piVar16 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == DAT_0917b1e0) {
              puVar14 = (undefined8 *)(lVar1 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_073e9e60;
            }
            uVar2 = uVar2 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar2 != 0);
        }
        puVar14 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b1e0,0);
LAB_073e9e60:
        (*(code *)*puVar14)(plVar4,param_2,param_3,param_4,puVar14[1]);
      }
      else {
        uVar3 = *(undefined8 *)(param_4 + 0x10);
        if (*(int *)(DAT_09184938 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = MessagePack_FormatterResolverExtensions__GetFormatterDynamicWithVerify
                          (uVar3,lVar1,0);
        if (*(int *)(DAT_0918c300 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918c300);
        }
        lVar17 = *(long *)(*(long *)(DAT_0918c300 + 0xb8) + 8);
        if (lVar17 == 0) goto LAB_073ea1a0;
        uVar2 = FUN_04a6dd34(lVar17,lVar1,&local_70,DAT_091bd4f8);
        if ((uVar2 & 1) == 0) {
          if (*(int *)(DAT_0918c300 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          pcStack_158 = local_7c;
          local_7c[0] = '\0';
          local_78 = *(undefined8 *)(*(long *)(DAT_0918c300 + 0xb8) + 8);
          local_150 = &local_78;
          local_160 = 0;
          System_Threading_Monitor__Enter(local_78,local_7c,0);
          if (*(int *)(DAT_0918c300 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar17 = *(long *)(*(long *)(DAT_0918c300 + 0xb8) + 8);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar2 = FUN_04a6dd34(lVar17,lVar1,&local_70,DAT_091bd4f8);
          if ((uVar2 & 1) == 0) {
            lVar17 = System_Reflection_IntrospectionExtensions__GetTypeInfo(lVar1,0);
            uVar6 = DAT_09171cc8;
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            plVar4 = (long *)System_Type__GetTypeFromHandle(uVar6,0);
            plVar5 = (long *)FUN_03f5c394(DAT_09180748,1);
            if (plVar5 == (long *)0x0) {
LAB_073ea1b8:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if ((lVar1 != 0) &&
               (lVar15 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar5 + 0x40)), lVar15 == 0)) {
              uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar3,0);
            }
            if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar5[4] = lVar1;
            thunk_FUN_03f5d7b8(plVar5 + 4,lVar1);
            if (plVar4 == (long *)0x0) goto LAB_073ea1b8;
            uVar6 = (**(code **)(*plVar4 + 0x948))(plVar4,plVar5,*(undefined8 *)(*plVar4 + 0x950));
            uVar7 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
            if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar15 = System_Linq_Expressions_Expression__Parameter(uVar7,DAT_0921ba88,0);
            plVar4 = (long *)System_Type__GetTypeFromHandle(DAT_09172440,0);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar7 = (**(code **)(*plVar4 + 0x938))(plVar4,*(undefined8 *)(*plVar4 + 0x940));
            lVar8 = System_Linq_Expressions_Expression__Parameter(uVar7,DAT_092258f0,0);
            uVar7 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
            lVar9 = System_Linq_Expressions_Expression__Parameter(uVar7,DAT_09225370,0);
            uVar7 = System_Type__GetTypeFromHandle(DAT_09172438,0);
            lVar10 = System_Linq_Expressions_Expression__Parameter(uVar7,DAT_092206f0,0);
            plVar4 = (long *)FUN_03f5c394(DAT_09180748,3);
            plVar5 = (long *)System_Type__GetTypeFromHandle(DAT_09172440,0);
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar11 = (**(code **)(*plVar5 + 0x938))(plVar5,*(undefined8 *)(*plVar5 + 0x940));
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if ((lVar11 != 0) &&
               (lVar12 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar12 == 0)) {
              uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar3,0);
            }
            if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar4[4] = lVar11;
            thunk_FUN_03f5d7b8(plVar4 + 4,lVar11);
            if ((lVar1 != 0) &&
               (lVar11 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar11 == 0)) {
              uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar3,0);
            }
            if ((*(uint *)(plVar4 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar4[5] = lVar1;
            thunk_FUN_03f5d7b8(plVar4 + 5,lVar1);
            lVar11 = System_Type__GetTypeFromHandle(DAT_09172438,0);
            if ((lVar11 != 0) &&
               (lVar12 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar12 == 0)) {
              uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar3,0);
            }
            if (*(uint *)(plVar4 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar4[6] = lVar11;
            thunk_FUN_03f5d7b8(plVar4 + 6,lVar11);
            uVar7 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                              (uVar6,DAT_0920cb98,plVar4,0);
            uVar6 = System_Linq_Expressions_Expression__Convert(lVar15,uVar6,0);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar2 = System_Type__get_IsValueType(lVar17,0);
            if ((uVar2 & 1) == 0) {
              if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar13 = System_Linq_Expressions_Expression__Convert(lVar9,lVar1,0);
            }
            else {
              if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar13 = System_Linq_Expressions_Expression__Unbox(lVar9,lVar1,0);
            }
            if (*(int *)(DAT_091843a0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = System_Linq_Expressions_Expression__Call(uVar6,uVar7,lVar8,uVar13,lVar10,0);
            plVar4 = (long *)FUN_03f5c394(DAT_09180368,4);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if ((lVar15 != 0) &&
               (lVar17 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar4 + 0x40)), lVar17 == 0)) {
              uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar3,0);
            }
            if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar4[4] = lVar15;
            thunk_FUN_03f5d7b8(plVar4 + 4,lVar15);
            if ((lVar8 != 0) &&
               (lVar17 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar17 == 0)) {
              uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar3,0);
            }
            if ((*(uint *)(plVar4 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar4[5] = lVar8;
            thunk_FUN_03f5d7b8(plVar4 + 5,lVar8);
            if ((lVar9 != 0) &&
               (lVar17 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar4 + 0x40)), lVar17 == 0)) {
              uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar3,0);
            }
            if (*(uint *)(plVar4 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar4[6] = lVar9;
            thunk_FUN_03f5d7b8(plVar4 + 6,lVar9);
            if ((lVar10 != 0) &&
               (lVar17 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar4 + 0x40)), lVar17 == 0)) {
              uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar3,0);
            }
            if ((*(uint *)(plVar4 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar4[7] = lVar10;
            thunk_FUN_03f5d7b8(plVar4 + 7,lVar10);
            lVar17 = FUN_04b212ac(uVar6,plVar4,DAT_091cbc00);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            local_70 = FUN_05237a6c(lVar17,DAT_091a7788);
            if (*(int *)(DAT_0918c300 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar17 = *(long *)(*(long *)(DAT_0918c300 + 0xb8) + 8);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_0636137c(lVar17,lVar1,local_70,DAT_091bd4e8);
          }
          if (local_7c[0] != '\0') {
            System_Threading_Monitor__Exit(*local_150,0);
          }
        }
        if (*(long *)(param_4 + 0x30) == 0) goto LAB_073ea1a0;
        local_90 = MessagePack_SequencePool__Rent(*(long *)(param_4 + 0x30),0);
        puStack_f8 = local_90;
        local_100 = 0;
        MessagePack_MessagePackWriter__Clone(&local_160,param_2,local_90._8_8_,0);
        memcpy(&local_f0,&local_160,0x60);
        auVar18 = FUN_05ff6120(local_68,DAT_091b97a8);
        MessagePack_MessagePackWriter__WriteString(&local_f0,auVar18._0_8_,auVar18._8_8_,0);
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(local_70 + 0x18))
                  (*(undefined8 *)(local_70 + 0x40),uVar3,&local_f0,param_3,param_4,
                   *(undefined8 *)(local_70 + 0x28));
        MessagePack_MessagePackWriter__Flush(&local_f0,0);
        uVar3 = local_90._8_8_;
        if (*(int *)(DAT_0917e6a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_060c901c(&local_160,uVar3,DAT_091ba048);
        pcStack_178 = pcStack_158;
        local_180 = local_160;
        local_170 = local_150;
        pcStack_158 = (char *)0x0;
        local_160 = 0;
        uStack_148 = 0;
        local_150 = (undefined8 *)0x0;
        MessagePack_ExtensionResult___ctor(&local_160,100,&local_180,0);
        uStack_198 = pcStack_158;
        local_1a0 = local_160;
        uStack_188 = uStack_148;
        uStack_190 = local_150;
        MessagePack_MessagePackWriter__WriteExtensionFormat(param_2,&local_1a0,0);
        MessagePack_SequencePool_Rental__Dispose(local_90,0);
      }
      return;
    }
  }
LAB_073ea1a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

