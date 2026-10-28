// rea decompile_all
// name: MessagePack.Internal.ObjectSerializationInfo.EmittableMember$$EmitPreStoreValue
// address: 0x73d55a4
// body: available
// range: 0x73d55a4-0x73d5b07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73d5a84 to 0x73bb344 MessagePack.Internal.ILGeneratorExtensions$$EmitLdloc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73d5aa8 to 0x73bb640 MessagePack.Internal.ILGeneratorExtensions$$EmitLdloca (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73d5aac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d5ab0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d5abc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d5b04 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_ObjectSerializationInfo_EmittableMember__EmitPreStoreValue
               (long param_1,long param_2,long *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  code *pcVar11;
  
  if ((DAT_09520cda & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170d40);
    FUN_03f5c2a4(&DAT_09183e70);
    FUN_03f5c2a4(&DAT_09188c40);
    FUN_03f5c2a4(&DAT_09174318);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_0920ce98);
    FUN_03f5c2a4(&DAT_0920cc90);
    FUN_03f5c2a4(&DAT_09203e50);
    DAT_09520cda = 1;
  }
  lVar1 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_PropertyInfo(param_1);
  if ((lVar1 == 0) || (*(char *)(param_1 + 0x29) == '\0')) {
    if (param_4 == (long *)0x0) goto LAB_073d5aac;
  }
  else {
    plVar2 = (long *)FUN_03f5c394(DAT_09180748,2);
    if ((param_4 == (long *)0x0) ||
       (lVar1 = (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400)), lVar1 == 0
       )) goto LAB_073d5aac;
    uVar3 = System_Type__get_IsClass(lVar1,0);
    plVar4 = *(long **)(param_1 + 0x20);
    if ((uVar3 & 1) == 0) {
      if ((plVar4 == (long *)0x0) ||
         (plVar4 = (long *)(**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0)),
         plVar4 == (long *)0x0)) goto LAB_073d5aac;
      pcVar11 = *(code **)(*plVar4 + 0x938);
      uVar6 = *(undefined8 *)(*plVar4 + 0x940);
    }
    else {
      if (plVar4 == (long *)0x0) goto LAB_073d5aac;
      pcVar11 = *(code **)(*plVar4 + 0x1c8);
      uVar6 = *(undefined8 *)(*plVar4 + 0x1d0);
    }
    lVar1 = (*pcVar11)(plVar4,uVar6);
    if (plVar2 == (long *)0x0) goto LAB_073d5aac;
    if ((lVar1 != 0) &&
       (lVar5 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0)) {
LAB_073d5ab4:
      uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,0);
    }
    if ((int)plVar2[3] == 0) {
LAB_073d5ab0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar2[4] = lVar1;
    thunk_FUN_03f5d7b8(plVar2 + 4,lVar1);
    lVar1 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_Type(param_1);
    if ((lVar1 != 0) &&
       (lVar5 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
    goto LAB_073d5ab4;
    if ((*(uint *)(plVar2 + 3) & 0xfffffffe) == 0) goto LAB_073d5ab0;
    plVar2[5] = lVar1;
    thunk_FUN_03f5d7b8(plVar2 + 5,lVar1);
    uVar6 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_Name(param_1);
    uVar6 = System_String__Concat(DAT_0920cc90,uVar6,DAT_09203e50,0);
    plVar4 = (long *)thunk_FUN_03f9944c(DAT_09183e70);
    System_Reflection_Emit_DynamicMethod___ctor(plVar4,uVar6,0,plVar2,0);
    if (plVar4 == (long *)0x0) goto LAB_073d5aac;
    plVar2 = (long *)System_Reflection_Emit_DynamicMethod__GetILGenerator(plVar4,0);
    if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188c40);
    }
    if (plVar2 == (long *)0x0) goto LAB_073d5aac;
    (**(code **)(*plVar2 + 0x198))
              (plVar2,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x10),
               *(undefined8 *)(*plVar2 + 0x1a0));
    (**(code **)(*plVar2 + 0x198))
              (plVar2,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x18),
               *(undefined8 *)(*plVar2 + 0x1a0));
    plVar7 = (long *)MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_PropertyInfo
                               (param_1);
    if (plVar7 == (long *)0x0) goto LAB_073d5aac;
    lVar1 = (**(code **)(*plVar7 + 0x318))(plVar7,1,*(undefined8 *)(*plVar7 + 800));
    if (lVar1 == 0) {
      thunk_FUN_03fc39d4(&DAT_091842a0);
      uVar6 = thunk_FUN_03f9944c();
      uVar8 = thunk_FUN_03fc39d4(&DAT_09208c30);
      System_Exception___ctor(uVar6,uVar8,0);
      uVar8 = thunk_FUN_03fc39d4(&DAT_091ede78);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,uVar8);
    }
    MessagePack_Internal_ILGeneratorExtensions__EmitCall(plVar2,lVar1,0);
    if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    (**(code **)(*plVar2 + 0x198))
              (plVar2,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x148),
               *(undefined8 *)(*plVar2 + 0x1a0));
    lVar1 = (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400));
    if (lVar1 == 0) goto LAB_073d5aac;
    uVar3 = System_Type__get_IsClass(lVar1,0);
    if ((uVar3 & 1) == 0) {
      puVar9 = &DAT_09174318;
    }
    else {
      puVar9 = &DAT_09170d40;
    }
    uVar6 = *puVar9;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar2 = (long *)System_Type__GetTypeFromHandle(uVar6,0);
    plVar7 = (long *)FUN_03f5c394(DAT_09180748,2);
    plVar10 = *(long **)(param_1 + 0x20);
    if ((plVar10 == (long *)0x0) ||
       (lVar1 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0)),
       plVar7 == (long *)0x0)) goto LAB_073d5aac;
    if ((lVar1 != 0) &&
       (lVar5 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0))
    goto LAB_073d5ab4;
    if ((int)plVar7[3] == 0) goto LAB_073d5ab0;
    plVar7[4] = lVar1;
    thunk_FUN_03f5d7b8(plVar7 + 4,lVar1);
    lVar1 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_Type(param_1);
    if ((lVar1 != 0) &&
       (lVar5 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0))
    goto LAB_073d5ab4;
    if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_073d5ab0;
    plVar7[5] = lVar1;
    thunk_FUN_03f5d7b8(plVar7 + 5,lVar1);
    if (plVar2 == (long *)0x0) goto LAB_073d5aac;
    uVar6 = (**(code **)(*plVar2 + 0x948))(plVar2,plVar7,*(undefined8 *)(*plVar2 + 0x950));
    uVar8 = (**(code **)(*plVar4 + 0x448))(plVar4,uVar6,*(undefined8 *)(*plVar4 + 0x450));
    *(undefined8 *)(param_1 + 0x30) = uVar8;
    thunk_FUN_03f5d7b8();
    uVar8 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_Name(param_1);
    uVar8 = System_String__Concat(uVar8,DAT_0920ce98,0);
    if (param_2 == 0) goto LAB_073d5aac;
    uVar6 = System_Reflection_Emit_TypeBuilder__DefineField(param_2,uVar8,uVar6,0x11,0);
    puVar9 = (undefined8 *)(param_1 + 0x38);
    *puVar9 = uVar6;
    thunk_FUN_03f5d7b8(puVar9,uVar6);
    if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (param_3 == (long *)0x0) goto LAB_073d5aac;
    (**(code **)(*param_3 + 0x228))
              (param_3,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x3d8),*puVar9,
               *(undefined8 *)(*param_3 + 0x230));
  }
  lVar1 = (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400));
  if (lVar1 != 0) {
    uVar3 = System_Type__get_IsClass(lVar1,0);
    if ((uVar3 & 1) == 0) {
      MessagePack_Internal_ILGeneratorExtensions__EmitLdloca(param_3,param_4,0);
      return;
    }
    MessagePack_Internal_ILGeneratorExtensions__EmitLdloc(param_3,param_4,0);
    return;
  }
LAB_073d5aac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

