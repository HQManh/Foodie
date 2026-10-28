// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$SetExtensionDataDelegates
// address: 0x76a32dc
// body: available
// range: 0x76a32dc-0x76a3b53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a3b40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a3b44 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a3b50 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_DefaultContractResolver__SetExtensionDataDelegates
               (long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *local_68;
  
  if ((DAT_09522621 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091715b8);
    FUN_03f5c2a4(&DAT_091738e0);
    FUN_03f5c2a4(&DAT_091c9a40);
    FUN_03f5c2a4(&DAT_091843f8);
    FUN_03f5c2a4(&DAT_09184400);
    FUN_03f5c2a4(&DAT_09171ba8);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_091d7110);
    FUN_03f5c2a4(&DAT_091d7118);
    FUN_03f5c2a4(&DAT_091d7128);
    FUN_03f5c2a4(&DAT_091d7130);
    FUN_03f5c2a4(&DAT_091d7158);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_09190020);
    FUN_03f5c2a4(&DAT_091e8d58);
    FUN_03f5c2a4(&DAT_09190028);
    FUN_03f5c2a4(&DAT_091e8d60);
    FUN_03f5c2a4(&DAT_09190030);
    FUN_03f5c2a4(&DAT_092061f0);
    DAT_09522621 = 1;
  }
  local_68 = (long *)0x0;
  lVar1 = thunk_FUN_03f9944c(DAT_09190020);
  System_Object___ctor(lVar1,0);
  if (lVar1 == 0) goto LAB_076a3b40;
  puVar12 = (undefined8 *)(lVar1 + 0x18);
  *puVar12 = param_2;
  thunk_FUN_03f5d7b8(puVar12,param_2);
  uVar10 = *puVar12;
  if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = FUN_04d154ec(uVar10,DAT_091d7158);
  if (lVar2 != 0) {
    uVar10 = *puVar12;
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = Newtonsoft_Json_Utilities_ReflectionUtils__GetMemberUnderlyingType(uVar10,0);
    uVar10 = DAT_09171ba8;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
    Newtonsoft_Json_Utilities_ReflectionUtils__ImplementsGenericDefinition(lVar3,uVar10,&local_68,0)
    ;
    if (local_68 == (long *)0x0) goto LAB_076a3b40;
    lVar4 = (**(code **)(*local_68 + 0x488))(local_68,*(undefined8 *)(*local_68 + 0x490));
    if (lVar4 == 0) goto LAB_076a3b40;
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_076a3b44;
    if (local_68 == (long *)0x0) goto LAB_076a3b40;
    lVar13 = *(long *)(lVar4 + 0x20);
    lVar4 = (**(code **)(*local_68 + 0x488))(local_68,*(undefined8 *)(*local_68 + 0x490));
    if (lVar4 == 0) goto LAB_076a3b40;
    if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto LAB_076a3b44;
    lVar11 = *(long *)(lVar4 + 0x28);
    uVar10 = System_Type__GetTypeFromHandle(DAT_09171ba8,0);
    uVar5 = Newtonsoft_Json_Utilities_ReflectionUtils__IsGenericDefinition(lVar3,uVar10,0);
    uVar10 = DAT_091715b8;
    lVar4 = lVar3;
    if ((uVar5 & 1) != 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar6 = (long *)System_Type__GetTypeFromHandle(uVar10,0);
      plVar7 = (long *)FUN_03f5c394(DAT_09180748,2);
      if (plVar7 == (long *)0x0) goto LAB_076a3b40;
      if ((lVar13 != 0) &&
         (lVar4 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
      goto LAB_076a3b48;
      if ((int)plVar7[3] == 0) goto LAB_076a3b44;
      plVar7[4] = lVar13;
      thunk_FUN_03f5d7b8(plVar7 + 4,lVar13);
      if ((lVar11 != 0) &&
         (lVar4 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
      goto LAB_076a3b48;
      if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_076a3b44;
      plVar7[5] = lVar11;
      thunk_FUN_03f5d7b8(plVar7 + 5,lVar11);
      if (plVar6 == (long *)0x0) goto LAB_076a3b40;
      lVar4 = (**(code **)(*plVar6 + 0x948))(plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x950));
    }
    if (*(int *)(DAT_09187480 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar8 = Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory(0);
    if (lVar8 == 0) goto LAB_076a3b40;
    uVar10 = FUN_04d14e94(lVar8,*(undefined8 *)(lVar1 + 0x18),DAT_091d7118);
    *(undefined8 *)(lVar1 + 0x10) = uVar10;
    thunk_FUN_03f5d7b8();
    if (*(char *)(lVar2 + 0x11) != '\0') {
      lVar8 = thunk_FUN_03f9944c(DAT_09190028);
      System_Object___ctor(lVar8,0);
      if (lVar8 == 0) goto LAB_076a3b40;
      plVar6 = (long *)(lVar8 + 0x28);
      *plVar6 = lVar1;
      thunk_FUN_03f5d7b8(plVar6,lVar1);
      if (*plVar6 == 0) goto LAB_076a3b40;
      uVar10 = *(undefined8 *)(*plVar6 + 0x18);
      if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = Newtonsoft_Json_Utilities_ReflectionUtils__CanSetMemberValue(uVar10,1,0,0);
      uVar10 = 0;
      if ((uVar5 & 1) != 0) {
        if (*(int *)(DAT_09187480 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory(0);
        if ((*plVar6 == 0) || (lVar9 == 0)) goto LAB_076a3b40;
        uVar10 = FUN_04d15244(lVar9,*(undefined8 *)(*plVar6 + 0x18),DAT_091d7130);
      }
      *(undefined8 *)(lVar8 + 0x10) = uVar10;
      thunk_FUN_03f5d7b8();
      if (*(int *)(DAT_09187480 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar6 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                                 (0);
      if (plVar6 == (long *)0x0) goto LAB_076a3b40;
      lVar9 = FUN_03f5c420(*(undefined8 *)
                            (*plVar6 + (ulong)*(ushort *)(DAT_091d7110 + 0x50) * 0x10 + 0x140));
      uVar10 = (**(code **)(lVar9 + 8))(plVar6,lVar4,lVar9);
      *(undefined8 *)(lVar8 + 0x18) = uVar10;
      thunk_FUN_03f5d7b8();
      plVar6 = (long *)FUN_03f5c394(DAT_09180748,1);
      if (plVar6 == (long *)0x0) goto LAB_076a3b40;
      if ((lVar13 != 0) &&
         (lVar4 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0))
      goto LAB_076a3b48;
      if ((int)plVar6[3] == 0) goto LAB_076a3b44;
      plVar6[4] = lVar13;
      thunk_FUN_03f5d7b8(plVar6 + 4,lVar13);
      if (lVar3 == 0) goto LAB_076a3b40;
      lVar3 = System_Type__GetProperty(lVar3,DAT_092061f0,0x14,0,lVar11,plVar6,0,0);
      if (lVar3 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = System_Reflection_PropertyInfo__GetSetMethod(lVar3,0);
      }
      uVar5 = System_Reflection_MethodInfo__op_Equality(uVar10,0,0);
      plVar6 = local_68;
      if ((uVar5 & 1) != 0) {
        plVar7 = (long *)FUN_03f5c394(DAT_09180748,1);
        if (plVar7 == (long *)0x0) goto LAB_076a3b40;
        if ((lVar13 != 0) &&
           (lVar3 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0))
        goto LAB_076a3b48;
        if ((int)plVar7[3] == 0) goto LAB_076a3b44;
        plVar7[4] = lVar13;
        thunk_FUN_03f5d7b8(plVar7 + 4,lVar13);
        if (plVar6 == (long *)0x0) goto LAB_076a3b40;
        lVar3 = System_Type__GetProperty(plVar6,DAT_092061f0,0x14,0,lVar11,plVar7,0,0);
        if (lVar3 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = System_Reflection_PropertyInfo__GetSetMethod(lVar3,0);
        }
      }
      if (*(int *)(DAT_09187480 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar6 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                                 (0);
      if (plVar6 == (long *)0x0) goto LAB_076a3b40;
      lVar3 = FUN_03f5c420(*(undefined8 *)
                            (*plVar6 + (ulong)*(ushort *)(DAT_091d7128 + 0x50) * 0x10 + 0x140));
      uVar10 = (**(code **)(lVar3 + 8))(plVar6,uVar10,lVar3);
      *(undefined8 *)(lVar8 + 0x20) = uVar10;
      thunk_FUN_03f5d7b8();
      uVar10 = thunk_FUN_03f9944c(DAT_09184400);
      Newtonsoft_Json_Serialization_ExtensionDataSetter___ctor(uVar10,lVar8,DAT_091e8d58);
      if (param_1 == 0) goto LAB_076a3b40;
      *(undefined8 *)(param_1 + 0xe0) = uVar10;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xe0),uVar10);
    }
    if (*(char *)(lVar2 + 0x10) == '\0') {
      if (param_1 == 0) goto LAB_076a3b40;
    }
    else {
      lVar2 = thunk_FUN_03f9944c(DAT_09190030);
      System_Object___ctor(lVar2,0);
      if (lVar2 == 0) {
LAB_076a3b40:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(long *)(lVar2 + 0x18) = lVar1;
      thunk_FUN_03f5d7b8((long *)(lVar2 + 0x18),lVar1);
      uVar10 = DAT_091738e0;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar6 = (long *)System_Type__GetTypeFromHandle(uVar10,0);
      plVar7 = (long *)FUN_03f5c394(DAT_09180748,2);
      if (plVar7 == (long *)0x0) goto LAB_076a3b40;
      if ((lVar13 != 0) &&
         (lVar1 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar7 + 0x40)), lVar1 == 0)) {
LAB_076a3b48:
        uVar10 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar10,0);
      }
      if ((int)plVar7[3] == 0) {
LAB_076a3b44:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar7[4] = lVar13;
      thunk_FUN_03f5d7b8(plVar7 + 4,lVar13);
      if ((lVar11 != 0) &&
         (lVar1 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar1 == 0))
      goto LAB_076a3b48;
      if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_076a3b44;
      plVar7[5] = lVar11;
      thunk_FUN_03f5d7b8(plVar7 + 5,lVar11);
      if (plVar6 == (long *)0x0) goto LAB_076a3b40;
      lVar1 = (**(code **)(*plVar6 + 0x948))(plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x950));
      if (lVar1 == 0) goto LAB_076a3b40;
      uVar10 = System_Type__GetConstructors(lVar1,0);
      uVar10 = FUN_04ae1388(uVar10,DAT_091c9a40);
      if (*(int *)(DAT_09187480 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09187480);
      }
      plVar6 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                                 (0);
      if (plVar6 == (long *)0x0) goto LAB_076a3b40;
      uVar10 = (**(code **)(*plVar6 + 0x188))(plVar6,uVar10,*(undefined8 *)(*plVar6 + 400));
      *(undefined8 *)(lVar2 + 0x10) = uVar10;
      thunk_FUN_03f5d7b8();
      uVar10 = thunk_FUN_03f9944c(DAT_091843f8);
      Newtonsoft_Json_Serialization_ExtensionDataGetter___ctor(uVar10,lVar2,DAT_091e8d60);
      if (param_1 == 0) goto LAB_076a3b40;
      *(undefined8 *)(param_1 + 0xe8) = uVar10;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xe8),uVar10);
    }
    Newtonsoft_Json_Serialization_JsonObjectContract__set_ExtensionDataValueType(param_1,lVar11);
  }
  return;
}

