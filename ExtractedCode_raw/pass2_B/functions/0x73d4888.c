// rea decompile_all
// name: MessagePack.Internal.ObjectSerializationInfo.<>c__DisplayClass27_0$$<CreateOrNull>g__AddEmittableMemberOrIgnore|0
// address: 0x73d4888
// body: available
// range: 0x73d4888-0x73d4bcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73d4b2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d4bcc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_Internal_ObjectSerializationInfo_<>c__DisplayClass27_0__<CreateOrNull>g__AddEmittableMemberOrIgnore_0
          (long param_1,ulong param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long local_38;
  
  if ((DAT_09520ce5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a0458);
    FUN_03f5c2a4(&DAT_0919e148);
    FUN_03f5c2a4(&DAT_0919e150);
    FUN_03f5c2a4(&DAT_091a0460);
    DAT_09520ce5 = 1;
  }
  local_38 = 0;
  if ((param_4 & 1) == 0) {
    if ((param_2 & 1) == 0) {
      if (param_3 == 0) goto LAB_073d4b2c;
LAB_073d4a50:
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_06fd8454(*(long *)(param_1 + 0x18),*(undefined8 *)(param_3 + 0x18),param_3,DAT_091a0458)
        ;
        return 1;
      }
      goto LAB_073d4b2c;
    }
    if (param_3 == 0) goto LAB_073d4b2c;
LAB_073d492c:
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_06ef050c(*(long *)(param_1 + 0x10),*(undefined4 *)(param_3 + 0x14),param_3,DAT_0919e148);
      return 1;
    }
    goto LAB_073d4b2c;
  }
  if ((param_2 & 1) == 0) {
    if ((param_3 == 0) || (*(long *)(param_1 + 0x18) == 0)) goto LAB_073d4b2c;
    uVar3 = FUN_06fd9fbc(*(long *)(param_1 + 0x18),*(undefined8 *)(param_3 + 0x18),&local_38,
                         DAT_091a0460);
    if ((uVar3 & 1) == 0) goto LAB_073d4a50;
  }
  else {
    if ((param_3 == 0) || (*(long *)(param_1 + 0x10) == 0)) goto LAB_073d4b2c;
    uVar3 = FUN_06ef1fe8(*(long *)(param_1 + 0x10),*(undefined4 *)(param_3 + 0x14),&local_38,
                         DAT_0919e150);
    if ((uVar3 & 1) == 0) goto LAB_073d492c;
  }
  lVar4 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_PropertyInfo(param_3);
  if (lVar4 != 0) {
    if (local_38 == 0) goto LAB_073d4b2c;
    lVar4 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_PropertyInfo();
    if (lVar4 != 0) {
      plVar5 = (long *)MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_PropertyInfo
                                 (param_3);
      if (((plVar5 == (long *)0x0) ||
          (uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0)),
          local_38 == 0)) ||
         (plVar5 = (long *)MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_PropertyInfo
                                     (local_38), plVar5 == (long *)0x0)) goto LAB_073d4b2c;
      uVar7 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      uVar3 = System_String__op_Equality(uVar6,uVar7,0);
      if ((uVar3 & 1) != 0) {
        if ((local_38 == 0) ||
           (plVar5 = (long *)MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_PropertyInfo
                                       (), plVar5 == (long *)0x0)) goto LAB_073d4b2c;
        lVar4 = (**(code **)(*plVar5 + 0x2c8))(plVar5,*(undefined8 *)(*plVar5 + 0x2d0));
        if ((lVar4 == 0) ||
           (uVar3 = System_Reflection_MethodBase__get_IsVirtual(lVar4,0), (uVar3 & 1) == 0)) {
          uVar1 = 0;
        }
        else {
          if ((local_38 == 0) ||
             (plVar5 = (long *)MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_PropertyInfo
                                         (), plVar5 == (long *)0x0)) goto LAB_073d4b2c;
          lVar4 = (**(code **)(*plVar5 + 0x2c8))(plVar5,*(undefined8 *)(*plVar5 + 0x2d0));
          uVar1 = 1;
          if (lVar4 != 0) {
            uVar1 = System_Reflection_MethodBase__get_IsFinal(lVar4,0);
            uVar1 = (uVar1 ^ 0xffffffff) & 1;
          }
        }
        if ((local_38 == 0) ||
           (plVar5 = (long *)MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_PropertyInfo
                                       (), plVar5 == (long *)0x0)) goto LAB_073d4b2c;
        lVar4 = (**(code **)(*plVar5 + 0x2f8))(plVar5,*(undefined8 *)(*plVar5 + 0x300));
        if ((lVar4 == 0) ||
           (uVar3 = System_Reflection_MethodBase__get_IsVirtual(lVar4,0), (uVar3 & 1) == 0)) {
          uVar2 = 0;
        }
        else {
          if ((local_38 == 0) ||
             (plVar5 = (long *)MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_PropertyInfo
                                         (), plVar5 == (long *)0x0)) goto LAB_073d4b2c;
          lVar4 = (**(code **)(*plVar5 + 0x2f8))(plVar5,*(undefined8 *)(*plVar5 + 0x300));
          uVar2 = 1;
          if (lVar4 != 0) {
            uVar2 = System_Reflection_MethodBase__get_IsFinal(lVar4,0);
            uVar2 = (uVar2 ^ 0xffffffff) & 1;
          }
        }
        if (uVar2 != 0 || uVar1 != 0) {
          return 0;
        }
      }
    }
  }
  plVar5 = (long *)MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_PropertyInfo
                             (param_3);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_FieldInfo
                               (param_3);
  }
  plVar8 = *(long **)(param_1 + 0x20);
  if (plVar8 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar8 + 0x2f8))(plVar8,*(undefined8 *)(*plVar8 + 0x300));
    uVar7 = thunk_FUN_03fc39d4(&DAT_091f67c0);
    uVar9 = thunk_FUN_03fc39d4(&DAT_0921dfb0);
    if (plVar5 == (long *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    }
    uVar6 = System_String__Concat(uVar9,uVar6,uVar7,uVar10,0);
    thunk_FUN_03fc39d4(&DAT_09188158);
    uVar7 = thunk_FUN_03f9944c();
    MessagePack_Internal_MessagePackDynamicObjectResolverException___ctor(uVar7,uVar6);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091ede50);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar6);
  }
LAB_073d4b2c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

