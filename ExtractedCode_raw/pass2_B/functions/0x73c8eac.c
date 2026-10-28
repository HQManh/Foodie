// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder$$BuildSerialize
// address: 0x73c8eac
// body: available
// range: 0x73c8eac-0x73ca11f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73c9fac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ca098 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ca09c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ca0a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ca0a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ca0a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ca0bc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ca0c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ca0c4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ca0c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ca0cc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ca0d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073ca038) */
/* WARNING: Removing unreachable block (ram,0x073ca114) */

void MessagePack_Internal_DynamicObjectTypeBuilder__BuildSerialize
               (undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
               uint param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar11;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar12;
  undefined8 *puVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int local_a4;
  long *local_a0;
  undefined8 local_98;
  uint5 local_90;
  undefined3 uStack_8b;
  long *local_88;
  ulong local_80;
  undefined8 local_78;
  uint5 local_70;
  undefined3 uStack_6b;
  long *local_68;
  
  if ((DAT_09520ca0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e150);
    FUN_03f5c2a4(&DAT_091c8ab8);
    FUN_03f5c2a4(&DAT_09183e88);
    FUN_03f5c2a4(&DAT_091c9520);
    FUN_03f5c2a4(&DAT_091c98b0);
    FUN_03f5c2a4(&DAT_091c98c8);
    FUN_03f5c2a4(&DAT_091ca890);
    FUN_03f5c2a4(&DAT_091cae68);
    FUN_03f5c2a4(&DAT_091cafb8);
    FUN_03f5c2a4(&DAT_091cb640);
    FUN_03f5c2a4(&DAT_091cb520);
    FUN_03f5c2a4(&DAT_091794c0);
    FUN_03f5c2a4(&DAT_091794c8);
    FUN_03f5c2a4(&DAT_09178d40);
    FUN_03f5c2a4(&DAT_09179190);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a860);
    FUN_03f5c2a4(&DAT_0917af78);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09171c08);
    FUN_03f5c2a4(&DAT_09190418);
    FUN_03f5c2a4(&DAT_09172440);
    FUN_03f5c2a4(&DAT_09188c40);
    FUN_03f5c2a4(&DAT_09170ac8);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091e9420);
    FUN_03f5c2a4(&DAT_091e9428);
    FUN_03f5c2a4(&DAT_091e9430);
    FUN_03f5c2a4(&DAT_091e9438);
    FUN_03f5c2a4(&DAT_091e9440);
    FUN_03f5c2a4(&DAT_091e9448);
    FUN_03f5c2a4(&DAT_091e9450);
    FUN_03f5c2a4(&DAT_091e9458);
    FUN_03f5c2a4(&DAT_09190398);
    FUN_03f5c2a4(&DAT_091733d0);
    FUN_03f5c2a4(&DAT_091733d8);
    FUN_03f5c2a4(&DAT_0918c8b8);
    FUN_03f5c2a4(&DAT_09213460);
    DAT_09520ca0 = 1;
  }
  _local_70 = 0;
  local_80 = 0;
  local_78 = 0;
  _local_90 = 0;
  local_88 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_98 = 0;
  local_a4 = 0;
  local_68 = param_3;
  thunk_FUN_03f5d7b8(&local_68,param_3);
  local_70 = (uint5)param_6;
  if ((param_6 == 0x7fffffff) ||
     (MessagePack_Internal_ArgumentField___ctor(&local_80,param_3,param_6 + 1,param_1),
     param_6 == 0x7ffffffe)) {
LAB_073ca088:
    uVar7 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,DAT_091c8ab8);
  }
  local_88 = param_3;
  thunk_FUN_03f5d7b8(&local_88,param_3);
  local_90 = (uint5)(param_6 + 2);
  lVar4 = System_Reflection_IntrospectionExtensions__GetTypeInfo(param_1,0);
  if (lVar4 != 0) {
    uVar5 = System_Type__get_IsClass(lVar4,0);
    if ((uVar5 & 1) != 0) {
      if (param_3 == (long *)0x0) goto LAB_073ca0c0;
      uVar2 = (**(code **)(*param_3 + 0x188))(param_3,*(undefined8 *)(*param_3 + 400));
      MessagePack_Internal_ArgumentField__EmitLoad(&local_80);
      if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      (**(code **)(*param_3 + 0x1f8))
                (param_3,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x160),uVar2,
                 *(undefined8 *)(*param_3 + 0x200));
      MessagePack_Internal_ArgumentField__EmitLoad(&local_70);
      if (*(int *)(DAT_09190418 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      MessagePack_Internal_ILGeneratorExtensions__EmitCall
                (param_3,*(undefined8 *)(*(long *)(DAT_09190418 + 0xb8) + 0x20));
      (**(code **)(*param_3 + 0x198))
                (param_3,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x148),
                 *(undefined8 *)(*param_3 + 0x1a0));
      (**(code **)(*param_3 + 0x268))(param_3,uVar2,*(undefined8 *)(*param_3 + 0x270));
    }
    plVar6 = (long *)System_Reflection_IntrospectionExtensions__GetTypeInfo(param_1,0);
    if (plVar6 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar6 + 0xa08))(plVar6,*(undefined8 *)(*plVar6 + 0xa10));
      if (*(int *)(DAT_09190398 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09190398);
      }
      puVar13 = *(undefined8 **)(DAT_09190398 + 0xb8);
      lVar4 = puVar13[4];
      if (lVar4 == 0) {
        if (*(int *)(DAT_09190398 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09190398);
          puVar13 = *(undefined8 **)(DAT_09190398 + 0xb8);
        }
        uVar17 = *puVar13;
        lVar4 = thunk_FUN_03f9944c(DAT_09179190);
        FUN_05322d94(lVar4,uVar17,DAT_091e9420,0);
        plVar6 = (long *)(*(long *)(DAT_09190398 + 0xb8) + 0x20);
        *plVar6 = lVar4;
        thunk_FUN_03f5d7b8(plVar6,lVar4);
      }
      uVar5 = FUN_04ab6f28(uVar7,lVar4,DAT_091c9520);
      if ((uVar5 & 1) != 0) {
        uVar7 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethods(param_1,0);
        if (*(int *)(DAT_09190398 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09190398);
        }
        puVar13 = *(undefined8 **)(DAT_09190398 + 0xb8);
        lVar4 = puVar13[5];
        if (lVar4 == 0) {
          if (*(int *)(DAT_09190398 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09190398);
            puVar13 = *(undefined8 **)(DAT_09190398 + 0xb8);
          }
          uVar17 = *puVar13;
          lVar4 = thunk_FUN_03f9944c(DAT_09178d40);
          FUN_05322d94(lVar4,uVar17,DAT_091e9428,0);
          plVar6 = (long *)(*(long *)(DAT_09190398 + 0xb8) + 0x28);
          *plVar6 = lVar4;
          thunk_FUN_03f5d7b8(plVar6,lVar4);
        }
        uVar7 = FUN_04b0cafc(uVar7,lVar4,DAT_091cb520);
        lVar4 = FUN_04b049e4(uVar7,DAT_091cae68);
        if (lVar4 == 0) goto LAB_073ca0c0;
        if (*(int *)(lVar4 + 0x18) == 1) {
          MessagePack_Internal_ArgumentField__EmitLoad(&local_80);
          if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (param_3 == (long *)0x0) goto LAB_073ca0c0;
          (**(code **)(*param_3 + 0x238))
                    (param_3,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x138),
                     *(undefined8 *)(lVar4 + 0x20),*(undefined8 *)(*param_3 + 0x240));
        }
        else {
          MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(local_78,local_80 & 0xffffffff);
          MessagePack_Internal_ILGeneratorExtensions__EmitBoxOrDoNothing(param_3,param_1);
          if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          MessagePack_Internal_ILGeneratorExtensions__EmitCall
                    (param_3,*(undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x80));
        }
      }
      uVar7 = DAT_09171c08;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = System_Type__GetTypeFromHandle(uVar7,0);
      if (param_3 != (long *)0x0) {
        uVar7 = (**(code **)(*param_3 + 0x178))(param_3,uVar7,*(undefined8 *)(*param_3 + 0x180));
        MessagePack_Internal_ArgumentField__EmitLoad(&local_90);
        if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        MessagePack_Internal_ILGeneratorExtensions__EmitCall
                  (param_3,*(undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x40));
        MessagePack_Internal_ILGeneratorExtensions__EmitStloc(param_3,uVar7);
        if (param_2 != 0) {
          uVar17 = *(undefined8 *)(param_2 + 0x30);
          if (*(char *)(param_2 + 0x18) != '\0') {
            if (*(int *)(DAT_09190398 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar13 = *(undefined8 **)(DAT_09190398 + 0xb8);
            lVar4 = puVar13[6];
            if (lVar4 == 0) {
              if (*(int *)(DAT_09190398 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar13 = *(undefined8 **)(DAT_09190398 + 0xb8);
              }
              uVar18 = *puVar13;
              lVar4 = thunk_FUN_03f9944c(DAT_091794c0);
              FUN_05322d94(lVar4,uVar18,DAT_091e9430,0);
              plVar6 = (long *)(*(long *)(DAT_09190398 + 0xb8) + 0x30);
              *plVar6 = lVar4;
              thunk_FUN_03f5d7b8(plVar6,lVar4);
            }
            uVar17 = FUN_04b0cafc(uVar17,lVar4,DAT_091cb640);
            if (*(int *)(DAT_09190398 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09190398);
            }
            puVar13 = *(undefined8 **)(DAT_09190398 + 0xb8);
            lVar4 = puVar13[7];
            if (lVar4 == 0) {
              if (*(int *)(DAT_09190398 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09190398);
                puVar13 = *(undefined8 **)(DAT_09190398 + 0xb8);
              }
              uVar18 = *puVar13;
              lVar4 = thunk_FUN_03f9944c(DAT_091794c8);
              FUN_053239c8(lVar4,uVar18,DAT_091e9438,0);
              plVar6 = (long *)(*(long *)(DAT_09190398 + 0xb8) + 0x38);
              *plVar6 = lVar4;
              thunk_FUN_03f5d7b8(plVar6,lVar4);
            }
            uVar17 = FUN_04af6d6c(uVar17,lVar4,DAT_091ca890);
            uVar17 = FUN_04adcc84(uVar17,0xffffffff,DAT_091c98c8);
            iVar3 = System_Linq_Enumerable__Max(uVar17,0);
            uVar17 = *(undefined8 *)(param_2 + 0x30);
            if (*(int *)(DAT_09190398 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09190398);
            }
            puVar13 = *(undefined8 **)(DAT_09190398 + 0xb8);
            lVar4 = puVar13[8];
            if (lVar4 == 0) {
              if (*(int *)(DAT_09190398 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09190398);
                puVar13 = *(undefined8 **)(DAT_09190398 + 0xb8);
              }
              uVar18 = *puVar13;
              lVar4 = thunk_FUN_03f9944c(DAT_091794c0);
              FUN_05322d94(lVar4,uVar18,DAT_091e9440,0);
              plVar6 = (long *)(*(long *)(DAT_09190398 + 0xb8) + 0x40);
              *plVar6 = lVar4;
              thunk_FUN_03f5d7b8(plVar6,lVar4);
            }
            uVar17 = FUN_04b0cafc(uVar17,lVar4,DAT_091cb640);
            if (*(int *)(DAT_09190398 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09190398);
            }
            puVar13 = *(undefined8 **)(DAT_09190398 + 0xb8);
            lVar4 = puVar13[9];
            if (lVar4 == 0) {
              if (*(int *)(DAT_09190398 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09190398);
                puVar13 = *(undefined8 **)(DAT_09190398 + 0xb8);
              }
              uVar18 = *puVar13;
              lVar4 = thunk_FUN_03f9944c(DAT_091794c8);
              FUN_053239c8(lVar4,uVar18,DAT_091e9448,0);
              plVar6 = (long *)(*(long *)(DAT_09190398 + 0xb8) + 0x48);
              *plVar6 = lVar4;
              thunk_FUN_03f5d7b8(plVar6,lVar4);
            }
            lVar4 = FUN_04b04e28(uVar17,lVar4,DAT_091cafb8);
            if (iVar3 == 0x7fffffff) goto LAB_073ca088;
            MessagePack_Internal_ArgumentField__EmitLoad(&local_70);
            MessagePack_Internal_ILGeneratorExtensions__EmitLdc_I4(param_3,iVar3 + 1);
            if (*(int *)(DAT_09190418 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            MessagePack_Internal_ILGeneratorExtensions__EmitCall
                      (param_3,*(undefined8 *)(*(long *)(DAT_09190418 + 0xb8) + 0x10));
            if (-1 < iVar3) {
              if (lVar4 == 0) goto LAB_073ca0c0;
              iVar16 = 0;
              iVar15 = 0;
              do {
                uVar5 = FUN_06ef1fe8(lVar4,iVar15,&local_98,DAT_0919e150);
                if ((uVar5 & 1) == 0) {
                  MessagePack_Internal_ArgumentField__EmitLoad(&local_70);
                  if (*(int *)(DAT_09190418 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  MessagePack_Internal_ILGeneratorExtensions__EmitCall
                            (param_3,*(undefined8 *)(*(long *)(DAT_09190418 + 0xb8) + 0x20));
                }
                else {
                  System_Reflection_IntrospectionExtensions__GetTypeInfo(param_1,0);
                  plVar9 = local_68;
                  uVar12 = _local_70;
                  uVar1 = local_78;
                  uVar5 = local_80;
                  plVar6 = local_88;
                  uVar18 = _local_90;
                  uVar17 = local_98;
                  if (iVar16 == 0x7fffffff) goto LAB_073ca088;
                  uVar11 = extraout_x1;
                  if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
                    FUN_03f5c424();
                    uVar11 = extraout_x1_00;
                  }
                  MessagePack_Internal_DynamicObjectTypeBuilder__EmitSerializeValue
                            (param_3,uVar11,uVar17,iVar16,param_5,uVar12,plVar9,param_8,uVar5,uVar1,
                             uVar18,plVar6,uVar7);
                  iVar16 = iVar16 + 1;
                }
                if (iVar15 == 0x7fffffff) goto LAB_073ca088;
                iVar15 = iVar15 + 1;
              } while (iVar3 + 1 != iVar15);
            }
LAB_073ca03c:
            if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            (**(code **)(*param_3 + 0x198))
                      (param_3,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x148),
                       *(undefined8 *)(*param_3 + 0x1a0));
            return;
          }
          if (*(int *)(DAT_09190398 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar13 = *(undefined8 **)(DAT_09190398 + 0xb8);
          lVar4 = puVar13[10];
          if (lVar4 == 0) {
            if (*(int *)(DAT_09190398 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar13 = *(undefined8 **)(DAT_09190398 + 0xb8);
            }
            uVar18 = *puVar13;
            lVar4 = thunk_FUN_03f9944c(DAT_091794c0);
            FUN_05322d94(lVar4,uVar18,DAT_091e9450,0);
            plVar6 = (long *)(*(long *)(DAT_09190398 + 0xb8) + 0x50);
            *plVar6 = lVar4;
            thunk_FUN_03f5d7b8(plVar6,lVar4);
          }
          uVar2 = FUN_04adc4d0(uVar17,lVar4,DAT_091c98b0);
          MessagePack_Internal_ArgumentField__EmitLoad(&local_70);
          MessagePack_Internal_ILGeneratorExtensions__EmitLdc_I4(param_3,uVar2);
          if (*(int *)(DAT_09190418 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          MessagePack_Internal_ILGeneratorExtensions__EmitCall
                    (param_3,*(undefined8 *)(*(long *)(DAT_09190418 + 0xb8) + 8));
          uVar17 = *(undefined8 *)(param_2 + 0x30);
          if (*(int *)(DAT_09190398 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar13 = *(undefined8 **)(DAT_09190398 + 0xb8);
          lVar4 = puVar13[0xb];
          if (lVar4 == 0) {
            if (*(int *)(DAT_09190398 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar13 = *(undefined8 **)(DAT_09190398 + 0xb8);
            }
            uVar18 = *puVar13;
            lVar4 = thunk_FUN_03f9944c(DAT_091794c0);
            FUN_05322d94(lVar4,uVar18,DAT_091e9458,0);
            plVar6 = (long *)(*(long *)(DAT_09190398 + 0xb8) + 0x58);
            *plVar6 = lVar4;
            thunk_FUN_03f5d7b8(plVar6,lVar4);
          }
          plVar6 = (long *)FUN_04b0cafc(uVar17,lVar4,DAT_091cb640);
          if (plVar6 != (long *)0x0) {
            lVar4 = *plVar6;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar14 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == DAT_0917a860) {
                  puVar13 = (undefined8 *)(lVar4 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_073c9aa0;
                }
                uVar5 = uVar5 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar5 != 0);
            }
            puVar13 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a860,0);
LAB_073c9aa0:
            local_a0 = (long *)(*(code *)*puVar13)(plVar6,puVar13[1]);
            if (local_a0 != (long *)0x0) {
              iVar3 = 0;
              do {
                plVar6 = local_a0;
                lVar4 = *local_a0;
                uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar5 != 0) {
                  piVar14 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == DAT_09185b10) {
                      puVar13 = (undefined8 *)(lVar4 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_073c9b18;
                    }
                    uVar5 = uVar5 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar5 != 0);
                }
                puVar13 = (undefined8 *)FUN_03f95da8(local_a0,DAT_09185b10,0);
LAB_073c9b18:
                uVar5 = (*(code *)*puVar13)(plVar6,puVar13[1]);
                plVar6 = local_a0;
                if ((uVar5 & 1) == 0) {
                  if (local_a0 == (long *)0x0) goto LAB_073ca03c;
                  lVar4 = *local_a0;
                  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                  if (uVar5 == 0) goto LAB_073c9ffc;
                  piVar14 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  goto LAB_073c9fe4;
                }
                if (local_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar4 = *local_a0;
                uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar5 != 0) {
                  piVar14 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == DAT_0917af78) {
                      puVar13 = (undefined8 *)(lVar4 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_073c9b84;
                    }
                    uVar5 = uVar5 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar5 != 0);
                }
                puVar13 = (undefined8 *)FUN_03f95da8(local_a0,DAT_0917af78,0);
LAB_073c9b84:
                lVar4 = (*(code *)*puVar13)(plVar6,puVar13[1]);
                MessagePack_Internal_ArgumentField__EmitLoad(&local_70);
                if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                (**(code **)(param_4 + 0x18))
                          (*(undefined8 *)(param_4 + 0x40),*(undefined8 *)(param_4 + 0x28));
                MessagePack_Internal_ILGeneratorExtensions__EmitLdc_I4(param_3,iVar3);
                if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                (**(code **)(*param_3 + 0x198))
                          (param_3,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x4b8),
                           *(undefined8 *)(*param_3 + 0x1a0));
                uVar17 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x138);
                if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                (**(code **)(*param_3 + 0x238))
                          (param_3,uVar17,*(undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x20),
                           *(undefined8 *)(*param_3 + 0x240));
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar8 = MessagePack_Internal_CodeGenHelpers__GetEncodedStringBytes
                                  (*(undefined8 *)(lVar4 + 0x18),0);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                local_a4 = *(int *)(lVar8 + 0x18);
                if (local_a4 < 0x20) {
                  if (*(int *)(DAT_0918c8b8 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar18 = DAT_091733d8;
                  uVar17 = DAT_091733d0;
                  if (**(char **)(DAT_0918c8b8 + 0xb8) == '\0') {
                    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar17 = System_Type__GetTypeFromHandle(uVar18,0);
                    uVar18 = System_Int32__ToString(&local_a4,0);
                    uVar18 = System_String__Concat(DAT_09213460,uVar18,0);
                    plVar6 = (long *)FUN_03f5c394(DAT_09180748,2);
                    plVar9 = (long *)System_Type__GetTypeFromHandle(DAT_09172440,0);
                    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar8 = (**(code **)(*plVar9 + 0x938))(plVar9,*(undefined8 *)(*plVar9 + 0x940));
                    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    if ((lVar8 != 0) &&
                       (lVar10 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar10 == 0)) {
                      uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar7,0);
                    }
                    if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    plVar6[4] = lVar8;
                    thunk_FUN_03f5d7b8(plVar6 + 4,lVar8);
                    lVar8 = System_Type__GetTypeFromHandle(DAT_09170ac8,0);
                    if ((lVar8 != 0) &&
                       (lVar10 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar10 == 0)) {
                      uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar7,0);
                    }
                    if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    plVar6[5] = lVar8;
                    thunk_FUN_03f5d7b8(plVar6 + 5,lVar8);
                    uVar17 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                                       (uVar17,uVar18,plVar6,0);
                    MessagePack_Internal_ILGeneratorExtensions__EmitCall(param_3,uVar17);
                  }
                  else {
                    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar17 = System_Type__GetTypeFromHandle(uVar17,0);
                    uVar18 = System_Int32__ToString(&local_a4,0);
                    uVar18 = System_String__Concat(DAT_09213460,uVar18,0);
                    plVar6 = (long *)FUN_03f5c394(DAT_09180748,2);
                    plVar9 = (long *)System_Type__GetTypeFromHandle(DAT_09172440,0);
                    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar8 = (**(code **)(*plVar9 + 0x938))(plVar9,*(undefined8 *)(*plVar9 + 0x940));
                    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    if ((lVar8 != 0) &&
                       (lVar10 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar10 == 0)) {
                      uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar7,0);
                    }
                    if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    plVar6[4] = lVar8;
                    thunk_FUN_03f5d7b8(plVar6 + 4,lVar8);
                    lVar8 = System_Type__GetTypeFromHandle(DAT_09170ac8,0);
                    if ((lVar8 != 0) &&
                       (lVar10 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar10 == 0)) {
                      uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar7,0);
                    }
                    if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    plVar6[5] = lVar8;
                    thunk_FUN_03f5d7b8(plVar6 + 5,lVar8);
                    uVar17 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                                       (uVar17,uVar18,plVar6,0);
                    MessagePack_Internal_ILGeneratorExtensions__EmitCall(param_3,uVar17);
                  }
                }
                else {
                  if (*(int *)(DAT_09190418 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  MessagePack_Internal_ILGeneratorExtensions__EmitCall
                            (param_3,*(undefined8 *)(*(long *)(DAT_09190418 + 0xb8) + 0x28));
                }
                System_Reflection_IntrospectionExtensions__GetTypeInfo(param_1,0);
                plVar9 = local_68;
                uVar1 = _local_70;
                uVar18 = local_78;
                uVar5 = local_80;
                plVar6 = local_88;
                uVar17 = _local_90;
                uVar12 = extraout_x1_01;
                if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
                  FUN_03f5c424();
                  uVar12 = extraout_x1_02;
                }
                MessagePack_Internal_DynamicObjectTypeBuilder__EmitSerializeValue
                          (param_3,uVar12,lVar4,iVar3,param_5,uVar1,plVar9,param_8,uVar5,uVar18,
                           uVar17,plVar6,uVar7);
                if (iVar3 == 0x7fffffff) {
                  uVar7 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar7,DAT_091c8ab8);
                }
                iVar3 = iVar3 + 1;
              } while (local_a0 != (long *)0x0);
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
      }
    }
  }
LAB_073ca0c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar14 = piVar14 + 4;
    if (uVar5 == 0) break;
LAB_073c9fe4:
    if (*(long *)(piVar14 + -2) == DAT_09185a58) {
      puVar13 = (undefined8 *)(lVar4 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_073ca018;
    }
  }
LAB_073c9ffc:
  puVar13 = (undefined8 *)FUN_03f95da8(local_a0,DAT_09185a58,0);
LAB_073ca018:
  (*(code *)*puVar13)(plVar6,puVar13[1]);
  goto LAB_073ca03c;
}

