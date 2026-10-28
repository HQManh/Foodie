// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder$$BuildDeserializeInternalDeserializeValueAssignLocalVariable
// address: 0x73cd1dc
// body: available
// range: 0x73cd1dc-0x73cd7b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73cd684 to 0x73bb538 MessagePack.Internal.ILGeneratorExtensions$$EmitStloc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73cd7a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73cd7a4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73cd7b0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_DynamicObjectTypeBuilder__BuildDeserializeInternalDeserializeValueAssignLocalVariable
               (long *param_1,long param_2,undefined4 param_3,long param_4,undefined4 *param_5,
               undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  
  if ((DAT_09520cb4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170bb0);
    FUN_03f5c2a4(&DAT_09183e88);
    FUN_03f5c2a4(&DAT_091c9b38);
    FUN_03f5c2a4(&DAT_09178d40);
    FUN_03f5c2a4(&DAT_09190410);
    FUN_03f5c2a4(&DAT_091709d8);
    FUN_03f5c2a4(&DAT_09188c40);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091e9408);
    FUN_03f5c2a4(&DAT_09190398);
    FUN_03f5c2a4(&DAT_0920b580);
    DAT_09520cb4 = 1;
  }
  if (((param_1 != (long *)0x0) &&
      (uVar1 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400)),
      param_2 != 0)) && (lVar10 = *(long *)(param_2 + 0x10), lVar10 != 0)) {
    plVar3 = (long *)MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_Type
                               (lVar10,0);
    if (param_4 == 0) goto LAB_073cd7a0;
    lVar10 = (**(code **)(param_4 + 0x18))
                       (*(undefined8 *)(param_4 + 0x40),param_3,lVar10,
                        *(undefined8 *)(param_4 + 0x28));
    if (*(long *)(param_2 + 0x20) != 0) {
      MessagePack_Internal_ILGeneratorExtensions__EmitLdc_I4(param_1,1);
      MessagePack_Internal_ILGeneratorExtensions__EmitStloc(param_1,*(undefined8 *)(param_2 + 0x20))
      ;
    }
    if (lVar10 == 0) {
      uVar4 = MessagePack_Internal_ObjectSerializationInfo__IsOptimizeTargetType(plVar3,0);
      if ((uVar4 & 1) != 0) {
        lVar10 = System_Reflection_IntrospectionExtensions__GetTypeInfo(plVar3,0);
        if (lVar10 == 0) goto LAB_073cd7a0;
        uVar4 = System_Type__get_IsValueType(lVar10,0);
        if ((uVar4 & 1) == 0) {
          uVar2 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
          MessagePack_Internal_ILGeneratorExtensions__EmitLdarg
                    (*(undefined8 *)(param_5 + 2),*param_5);
          if (*(int *)(DAT_09190410 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          MessagePack_Internal_ILGeneratorExtensions__EmitCall
                    (param_1,*(undefined8 *)(*(long *)(DAT_09190410 + 0xb8) + 0x20));
          if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          (**(code **)(*param_1 + 0x1f8))
                    (param_1,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x158),uVar2,
                     *(undefined8 *)(*param_1 + 0x200));
          (**(code **)(*param_1 + 0x198))
                    (param_1,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0xa0),
                     *(undefined8 *)(*param_1 + 0x1a0));
          (**(code **)(*param_1 + 0x1f8))
                    (param_1,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x1b8),uVar1,
                     *(undefined8 *)(*param_1 + 0x200));
          (**(code **)(*param_1 + 0x268))(param_1,uVar2,*(undefined8 *)(*param_1 + 0x270));
        }
        MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(*(undefined8 *)(param_5 + 2),*param_5)
        ;
        uVar5 = DAT_09170bb0;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
        uVar4 = System_Type__op_Equality(plVar3,uVar5,0);
        uVar5 = DAT_091709d8;
        if ((uVar4 & 1) == 0) {
          if (*(int *)(DAT_09190410 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (plVar3 != (long *)0x0) {
            plVar7 = (long *)**(undefined8 **)(DAT_09190410 + 0xb8);
            uVar5 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
            uVar5 = System_String__Concat(DAT_0920b580,uVar5,0);
            if (plVar7 != (long *)0x0) {
              uVar5 = (**(code **)(*plVar7 + 0x9d8))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x9e0));
              if (*(int *)(DAT_09190398 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09190398);
              }
              puVar6 = *(undefined8 **)(DAT_09190398 + 0xb8);
              lVar10 = puVar6[0x14];
              if (lVar10 == 0) {
                if (*(int *)(DAT_09190398 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09190398);
                  puVar6 = *(undefined8 **)(DAT_09190398 + 0xb8);
                }
                uVar8 = *puVar6;
                lVar10 = thunk_FUN_03f9944c(DAT_09178d40);
                FUN_05322d94(lVar10,uVar8,DAT_091e9408,0);
                plVar3 = (long *)(*(long *)(DAT_09190398 + 0xb8) + 0xa0);
                *plVar3 = lVar10;
                thunk_FUN_03f5d7b8(plVar3,lVar10);
              }
              uVar5 = FUN_04ae3154(uVar5,lVar10,DAT_091c9b38);
              goto LAB_073cd644;
            }
          }
          goto LAB_073cd7a0;
        }
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
        uVar5 = (**(code **)(*param_1 + 0x178))(param_1,uVar5,*(undefined8 *)(*param_1 + 0x180));
        if (*(int *)(DAT_09190410 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09190410);
        }
        MessagePack_Internal_ILGeneratorExtensions__EmitCall
                  (param_1,*(undefined8 *)(*(long *)(DAT_09190410 + 0xb8) + 0x18));
        MessagePack_Internal_ILGeneratorExtensions__EmitStloc(param_1,uVar5);
        MessagePack_Internal_ILGeneratorExtensions__EmitLdloca(param_1,uVar5);
        if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = *(undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x30);
        goto LAB_073cd644;
      }
      MessagePack_Internal_ILGeneratorExtensions__EmitLdloc(param_1,param_7);
      if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar9 = *(long **)(*(long *)(DAT_09183e88 + 0xb8) + 0x38);
      plVar7 = (long *)FUN_03f5c394(DAT_09180748,1);
      if (plVar7 == (long *)0x0) goto LAB_073cd7a0;
      if ((plVar3 != (long *)0x0) &&
         (lVar10 = thunk_FUN_03f99350(plVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)) {
        uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,0);
      }
      if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar7[4] = (long)plVar3;
      thunk_FUN_03f5d7b8(plVar7 + 4,plVar3);
      if (plVar9 == (long *)0x0) goto LAB_073cd7a0;
      uVar5 = (**(code **)(*plVar9 + 0x418))(plVar9,plVar7,*(undefined8 *)(*plVar9 + 0x420));
      MessagePack_Internal_ILGeneratorExtensions__EmitCall(param_1,uVar5);
      MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(*(undefined8 *)(param_5 + 2),*param_5);
      MessagePack_Internal_ArgumentField__EmitLoad(param_6);
      lVar10 = *(long *)(DAT_09183e88 + 0xb8);
    }
    else {
      (**(code **)(lVar10 + 0x18))(*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
      MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(*(undefined8 *)(param_5 + 2),*param_5);
      MessagePack_Internal_ArgumentField__EmitLoad(param_6);
      if (*(int *)(DAT_09183e88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar10 = *(long *)(DAT_09183e88 + 0xb8);
    }
    lVar10 = *(long *)(lVar10 + 0x70);
    if (lVar10 != 0) {
      uVar5 = (**(code **)(lVar10 + 0x18))
                        (*(undefined8 *)(lVar10 + 0x40),plVar3,*(undefined8 *)(lVar10 + 0x28));
LAB_073cd644:
      MessagePack_Internal_ILGeneratorExtensions__EmitCall(param_1,uVar5);
      (**(code **)(*param_1 + 0x268))(param_1,uVar1,*(undefined8 *)(*param_1 + 0x270));
      MessagePack_Internal_ILGeneratorExtensions__EmitStloc(param_1,*(undefined8 *)(param_2 + 0x18))
      ;
      return;
    }
  }
LAB_073cd7a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

