// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder$$EmitSerializeValue
// address: 0x73ca4ec
// body: available
// range: 0x73ca4ec-0x73caa53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73caa40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73caa44 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73caa50 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_DynamicObjectTypeBuilder__EmitSerializeValue
               (long *param_1,undefined8 param_2,long param_3,undefined4 param_4,long param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_68 = param_10;
  local_78 = param_12;
  uStack_70 = param_9;
  local_80 = param_11;
  uStack_60 = param_6;
  local_58 = param_7;
  if ((DAT_09520ca1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170bb0);
    FUN_03f5c2a4(&DAT_09183e88);
    FUN_03f5c2a4(&DAT_09190418);
    FUN_03f5c2a4(&DAT_09172440);
    FUN_03f5c2a4(&DAT_09188c40);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_09213410);
    DAT_09520ca1 = 1;
  }
  if ((param_1 != (long *)0x0) &&
     (uVar1 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400)), param_3 != 0
     )) {
    lVar3 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_Type(param_3,0);
    if (param_5 == 0) goto LAB_073caa40;
    lVar4 = (**(code **)(param_5 + 0x18))
                      (*(undefined8 *)(param_5 + 0x40),param_4,param_3,
                       *(undefined8 *)(param_5 + 0x28));
    if (lVar4 == 0) {
      uVar5 = MessagePack_Internal_ObjectSerializationInfo__IsOptimizeTargetType(lVar3,0);
      if ((uVar5 & 1) != 0) {
        lVar4 = System_Reflection_IntrospectionExtensions__GetTypeInfo(lVar3,0);
        if (lVar4 == 0) goto LAB_073caa40;
        uVar5 = System_Type__get_IsValueType(lVar4,0);
        if ((uVar5 & 1) == 0) {
          uVar2 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
          uVar7 = (**(code **)(*param_1 + 0x178))(param_1,lVar3,*(undefined8 *)(*param_1 + 0x180));
          MessagePack_Internal_ArgumentField__EmitLoad(&uStack_70);
          MessagePack_Internal_ObjectSerializationInfo_EmittableMember__EmitLoadValue
                    (param_3,param_1,0);
          if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          (**(code **)(*param_1 + 0x198))
                    (param_1,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x120),
                     *(undefined8 *)(*param_1 + 0x1a0));
          MessagePack_Internal_ILGeneratorExtensions__EmitStloc(param_1,uVar7);
          (**(code **)(*param_1 + 0x1f8))
                    (param_1,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x1c8),uVar2,
                     *(undefined8 *)(*param_1 + 0x200));
          MessagePack_Internal_ArgumentField__EmitLoad(&uStack_60);
          if (*(int *)(DAT_09190418 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          MessagePack_Internal_ILGeneratorExtensions__EmitCall
                    (param_1,*(undefined8 *)(*(long *)(DAT_09190418 + 0xb8) + 0x20));
          (**(code **)(*param_1 + 0x1f8))
                    (param_1,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x1b8),uVar1,
                     *(undefined8 *)(*param_1 + 0x200));
          (**(code **)(*param_1 + 0x268))(param_1,uVar2,*(undefined8 *)(*param_1 + 0x270));
          MessagePack_Internal_ArgumentField__EmitLoad(&uStack_60);
          MessagePack_Internal_ILGeneratorExtensions__EmitLdloc(param_1,uVar7);
        }
        else {
          MessagePack_Internal_ArgumentField__EmitLoad(&uStack_60);
          MessagePack_Internal_ArgumentField__EmitLoad(&uStack_70);
          MessagePack_Internal_ObjectSerializationInfo_EmittableMember__EmitLoadValue
                    (param_3,param_1,0);
        }
        uVar7 = DAT_09170bb0;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = System_Type__GetTypeFromHandle(uVar7,0);
        uVar5 = System_Type__op_Equality(lVar3,uVar7,0);
        uVar7 = DAT_09172440;
        if ((uVar5 & 1) == 0) {
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = System_Type__GetTypeFromHandle(uVar7,0);
          plVar8 = (long *)FUN_03f5c394(DAT_09180748,1);
          if (plVar8 == (long *)0x0) goto LAB_073caa40;
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar8 + 0x40)), lVar4 == 0))
          goto LAB_073caa48;
          if ((int)plVar8[3] == 0) goto LAB_073caa44;
          plVar8[4] = lVar3;
          thunk_FUN_03f5d7b8(plVar8 + 4,lVar3);
          uVar7 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                            (uVar7,DAT_09213410,plVar8,0);
        }
        else {
          if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          MessagePack_Internal_ILGeneratorExtensions__EmitCall
                    (param_1,*(undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x20));
          if (*(int *)(DAT_09190418 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = *(undefined8 *)(*(long *)(DAT_09190418 + 0xb8) + 0x18);
        }
        goto LAB_073ca7b4;
      }
      MessagePack_Internal_ILGeneratorExtensions__EmitLdloc(param_1,param_13);
      if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x138);
      if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183e88);
      }
      plVar9 = *(long **)(*(long *)(DAT_09183e88 + 0xb8) + 0x38);
      plVar8 = (long *)FUN_03f5c394(DAT_09180748,1);
      if (plVar8 == (long *)0x0) goto LAB_073caa40;
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar8 + 0x40)), lVar4 == 0)) {
LAB_073caa48:
        uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar7,0);
      }
      if ((int)plVar8[3] == 0) {
LAB_073caa44:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar8[4] = lVar3;
      thunk_FUN_03f5d7b8(plVar8 + 4,lVar3);
      if (plVar9 == (long *)0x0) goto LAB_073caa40;
      uVar6 = (**(code **)(*plVar9 + 0x418))(plVar9,plVar8,*(undefined8 *)(*plVar9 + 0x420));
      (**(code **)(*param_1 + 0x238))(param_1,uVar7,uVar6,*(undefined8 *)(*param_1 + 0x240));
      MessagePack_Internal_ArgumentField__EmitLoad(&uStack_60);
      MessagePack_Internal_ArgumentField__EmitLoad(&uStack_70);
      MessagePack_Internal_ObjectSerializationInfo_EmittableMember__EmitLoadValue(param_3,param_1,0)
      ;
      MessagePack_Internal_ArgumentField__EmitLoad(&local_80);
      lVar4 = *(long *)(DAT_09183e88 + 0xb8);
    }
    else {
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      MessagePack_Internal_ArgumentField__EmitLoad(&uStack_60);
      MessagePack_Internal_ArgumentField__EmitLoad(&uStack_70);
      MessagePack_Internal_ObjectSerializationInfo_EmittableMember__EmitLoadValue(param_3,param_1,0)
      ;
      MessagePack_Internal_ArgumentField__EmitLoad(&local_80);
      if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = *(long *)(DAT_09183e88 + 0xb8);
    }
    lVar4 = *(long *)(lVar4 + 0x68);
    if (lVar4 != 0) {
      uVar7 = (**(code **)(lVar4 + 0x18))
                        (*(undefined8 *)(lVar4 + 0x40),lVar3,*(undefined8 *)(lVar4 + 0x28));
LAB_073ca7b4:
      MessagePack_Internal_ILGeneratorExtensions__EmitCall(param_1,uVar7);
                    /* WARNING: Could not recover jumptable at 0x073ca7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x268))(param_1,uVar1,*(undefined8 *)(*param_1 + 0x270));
      return;
    }
  }
LAB_073caa40:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

