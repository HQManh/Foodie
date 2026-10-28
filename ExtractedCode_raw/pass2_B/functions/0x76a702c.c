// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonDictionaryContract$$.ctor
// address: 0x76a702c
// body: available
// range: 0x76a702c-0x76a7a8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a7a78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a7a7c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a7a88 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonDictionaryContract___ctor(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  
  if ((DAT_09522675 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170830);
    FUN_03f5c2a4(&DAT_091715b8);
    FUN_03f5c2a4(&DAT_09184480);
    FUN_03f5c2a4(&DAT_09171ba8);
    FUN_03f5c2a4(&DAT_09171b90);
    FUN_03f5c2a4(&DAT_09171d30);
    FUN_03f5c2a4(&DAT_09186af8);
    FUN_03f5c2a4(&DAT_091721e8);
    FUN_03f5c2a4(&DAT_09172930);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_0920df78);
    FUN_03f5c2a4(&DAT_092022a0);
    DAT_09522675 = 1;
  }
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_68 = 0;
  Newtonsoft_Json_Serialization_JsonContainerContract___ctor(param_1,param_2);
  uVar2 = DAT_09171ba8;
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x24) = 5;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189d88);
  }
  uVar3 = Newtonsoft_Json_Utilities_ReflectionUtils__ImplementsGenericDefinition
                    (uVar10,uVar2,param_1 + 0xe0,0);
  uVar2 = DAT_09171d30;
  if ((uVar3 & 1) == 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189d88);
    }
    uVar3 = Newtonsoft_Json_Utilities_ReflectionUtils__ImplementsGenericDefinition
                      (uVar10,uVar2,param_1 + 0xe0,0);
    if ((uVar3 & 1) != 0) {
      plVar4 = *(long **)(param_1 + 0xe0);
      if (plVar4 == (long *)0x0) goto LAB_076a7a78;
      lVar5 = (**(code **)(*plVar4 + 0x488))(plVar4,*(undefined8 *)(*plVar4 + 0x490));
      if (lVar5 == 0) goto LAB_076a7a78;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_076a7a7c;
      lVar5 = *(long *)(lVar5 + 0x20);
      plVar4 = *(long **)(param_1 + 0xe0);
      local_58 = lVar5;
      if (plVar4 == (long *)0x0) goto LAB_076a7a78;
      lVar6 = (**(code **)(*plVar4 + 0x488))(plVar4,*(undefined8 *)(*plVar4 + 0x490));
      uVar2 = DAT_09171d30;
      if (lVar6 == 0) goto LAB_076a7a78;
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_076a7a7c;
      lVar6 = *(long *)(lVar6 + 0x28);
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      local_60 = lVar6;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
      if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189d88);
      }
      uVar3 = Newtonsoft_Json_Utilities_ReflectionUtils__IsGenericDefinition(uVar10,uVar2,0);
      uVar2 = DAT_09172930;
      if ((uVar3 & 1) != 0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar4 = (long *)System_Type__GetTypeFromHandle(uVar2,0);
        plVar7 = (long *)FUN_03f5c394(DAT_09180748,2);
        if (plVar7 == (long *)0x0) goto LAB_076a7a78;
        if ((lVar5 != 0) &&
           (lVar8 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
        goto LAB_076a7a80;
        if ((int)plVar7[3] == 0) goto LAB_076a7a7c;
        plVar7[4] = lVar5;
        thunk_FUN_03f5d7b8(plVar7 + 4,lVar5);
        if ((lVar6 != 0) &&
           (lVar5 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0))
        goto LAB_076a7a80;
        if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_076a7a7c;
        plVar7[5] = lVar6;
        thunk_FUN_03f5d7b8(plVar7 + 5,lVar6);
        if (plVar4 == (long *)0x0) goto LAB_076a7a78;
        uVar2 = (**(code **)(*plVar4 + 0x948))(plVar4,plVar7,*(undefined8 *)(*plVar4 + 0x950));
        Newtonsoft_Json_Serialization_JsonContract__set_CreatedType(param_1,uVar2);
      }
      bVar1 = 1;
      goto LAB_076a765c;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Newtonsoft_Json_Utilities_ReflectionUtils__GetDictionaryKeyValueTypes
              (uVar2,&local_58,&local_60,0);
    uVar2 = DAT_09171b90;
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
    uVar3 = System_Type__op_Equality(uVar10,uVar2,0);
    uVar2 = DAT_09170830;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
      Newtonsoft_Json_Serialization_JsonContract__set_CreatedType(param_1,uVar2);
    }
  }
  else {
    plVar4 = *(long **)(param_1 + 0xe0);
    if (plVar4 == (long *)0x0) goto LAB_076a7a78;
    lVar5 = (**(code **)(*plVar4 + 0x488))(plVar4,*(undefined8 *)(*plVar4 + 0x490));
    if (lVar5 == 0) goto LAB_076a7a78;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_076a7a7c;
    lVar5 = *(long *)(lVar5 + 0x20);
    plVar4 = *(long **)(param_1 + 0xe0);
    local_58 = lVar5;
    if (plVar4 == (long *)0x0) goto LAB_076a7a78;
    lVar6 = (**(code **)(*plVar4 + 0x488))(plVar4,*(undefined8 *)(*plVar4 + 0x490));
    uVar2 = DAT_09171ba8;
    if (lVar6 == 0) goto LAB_076a7a78;
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_076a7a7c;
    lVar6 = *(long *)(lVar6 + 0x28);
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    local_60 = lVar6;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189d88);
    }
    uVar3 = Newtonsoft_Json_Utilities_ReflectionUtils__IsGenericDefinition(uVar10,uVar2,0);
    uVar2 = DAT_091715b8;
    if ((uVar3 & 1) == 0) {
      plVar4 = *(long **)(param_1 + 0x18);
      if (plVar4 == (long *)0x0) goto LAB_076a7a78;
      uVar3 = (**(code **)(*plVar4 + 0x3d8))(plVar4,*(undefined8 *)(*plVar4 + 0x3e0));
      if ((uVar3 & 1) != 0) {
        plVar4 = *(long **)(param_1 + 0x18);
        if (plVar4 == (long *)0x0) goto LAB_076a7a78;
        plVar4 = (long *)(**(code **)(*plVar4 + 0x468))(plVar4,*(undefined8 *)(*plVar4 + 0x470));
        if (plVar4 == (long *)0x0) goto LAB_076a7a78;
        uVar2 = (**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300));
        uVar3 = System_String__op_Equality(uVar2,DAT_0920df78,0);
        if ((uVar3 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x100) = 1;
        }
      }
    }
    else {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar4 = (long *)System_Type__GetTypeFromHandle(uVar2,0);
      plVar7 = (long *)FUN_03f5c394(DAT_09180748,2);
      if (plVar7 == (long *)0x0) goto LAB_076a7a78;
      if ((lVar5 != 0) &&
         (lVar8 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
      goto LAB_076a7a80;
      if ((int)plVar7[3] == 0) goto LAB_076a7a7c;
      plVar7[4] = lVar5;
      thunk_FUN_03f5d7b8(plVar7 + 4,lVar5);
      if ((lVar6 != 0) &&
         (lVar5 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0))
      goto LAB_076a7a80;
      if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_076a7a7c;
      plVar7[5] = lVar6;
      thunk_FUN_03f5d7b8(plVar7 + 5,lVar6);
      if (plVar4 == (long *)0x0) goto LAB_076a7a78;
      uVar2 = (**(code **)(*plVar4 + 0x948))(plVar4,plVar7,*(undefined8 *)(*plVar4 + 0x950));
      Newtonsoft_Json_Serialization_JsonContract__set_CreatedType(param_1,uVar2);
    }
    uVar2 = DAT_09172930;
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189d88);
    }
    bVar1 = Newtonsoft_Json_Utilities_ReflectionUtils__InheritsGenericDefinition(uVar10,uVar2,0);
    bVar1 = bVar1 & 1;
LAB_076a765c:
    *(byte *)(param_1 + 0x28) = bVar1;
  }
  lVar5 = local_58;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Type__op_Inequality(lVar5,0,0);
  lVar5 = local_60;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Type__op_Inequality(lVar5,0,0);
    uVar2 = DAT_091721e8;
    if ((uVar3 & 1) != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x58);
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar4 = (long *)System_Type__GetTypeFromHandle(uVar2,0);
      plVar7 = (long *)FUN_03f5c394(DAT_09180748,2);
      lVar5 = local_58;
      if (plVar7 == (long *)0x0) goto LAB_076a7a78;
      if ((local_58 != 0) &&
         (lVar6 = thunk_FUN_03f99350(local_58,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0)) {
LAB_076a7a80:
        uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar2,0);
      }
      if ((int)plVar7[3] == 0) {
LAB_076a7a7c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar7[4] = lVar5;
      thunk_FUN_03f5d7b8(plVar7 + 4,lVar5);
      lVar5 = local_60;
      if ((local_60 != 0) &&
         (lVar6 = thunk_FUN_03f99350(local_60,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
      goto LAB_076a7a80;
      if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_076a7a7c;
      plVar7[5] = lVar5;
      thunk_FUN_03f5d7b8(plVar7 + 5,lVar5);
      if (plVar4 == (long *)0x0) goto LAB_076a7a78;
      uVar2 = (**(code **)(*plVar4 + 0x948))(plVar4,plVar7,*(undefined8 *)(*plVar4 + 0x950));
      plVar4 = (long *)System_Type__GetTypeFromHandle(DAT_09171ba8,0);
      plVar7 = (long *)FUN_03f5c394(DAT_09180748,2);
      lVar5 = local_58;
      if (plVar7 == (long *)0x0) goto LAB_076a7a78;
      if ((local_58 != 0) &&
         (lVar6 = thunk_FUN_03f99350(local_58,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
      goto LAB_076a7a80;
      if ((int)plVar7[3] == 0) goto LAB_076a7a7c;
      plVar7[4] = lVar5;
      thunk_FUN_03f5d7b8(plVar7 + 4,lVar5);
      lVar5 = local_60;
      if ((local_60 != 0) &&
         (lVar6 = thunk_FUN_03f99350(local_60,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
      goto LAB_076a7a80;
      if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_076a7a7c;
      plVar7[5] = lVar5;
      thunk_FUN_03f5d7b8(plVar7 + 5,lVar5);
      if (plVar4 == (long *)0x0) goto LAB_076a7a78;
      uVar9 = (**(code **)(*plVar4 + 0x948))(plVar4,plVar7,*(undefined8 *)(*plVar4 + 0x950));
      uVar2 = Newtonsoft_Json_Utilities_CollectionUtils__ResolveEnumerableCollectionConstructor
                        (uVar10,uVar2,uVar9,0);
      *(undefined8 *)(param_1 + 0x108) = uVar2;
      thunk_FUN_03f5d7b8(param_1 + 0x108,uVar2);
      uVar3 = Newtonsoft_Json_Serialization_JsonDictionaryContract__get_HasParameterizedCreatorInternal
                        (param_1);
      if ((uVar3 & 1) == 0) {
        plVar4 = *(long **)(param_1 + 0x18);
        if (plVar4 == (long *)0x0) goto LAB_076a7a78;
        uVar2 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        uVar3 = System_String__op_Equality(uVar2,DAT_092022a0,0);
        if ((uVar3 & 1) != 0) {
          plVar4 = *(long **)(param_1 + 0x18);
          if (plVar4 == (long *)0x0) goto LAB_076a7a78;
          uVar2 = (**(code **)(*plVar4 + 0x308))(plVar4,*(undefined8 *)(*plVar4 + 0x310));
          if (*(int *)(DAT_09184480 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09184480);
          }
          Newtonsoft_Json_Utilities_FSharpUtils__EnsureInitialized(uVar2,0);
          if (DAT_095226ca == '\0') {
            FUN_03f5c2a4(&DAT_09184480);
            DAT_095226ca = '\x01';
          }
          if (*(int *)(DAT_09184480 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar5 = *(long *)(*(long *)(DAT_09184480 + 0xb8) + 8);
          if (lVar5 == 0) goto LAB_076a7a78;
          uVar2 = Newtonsoft_Json_Utilities_FSharpUtils__CreateMap(lVar5,local_58,local_60,0);
          *(undefined8 *)(param_1 + 0x118) = uVar2;
          thunk_FUN_03f5d7b8(param_1 + 0x118,uVar2);
        }
      }
    }
  }
  uVar2 = DAT_09171b90;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar4 = (long *)System_Type__GetTypeFromHandle(uVar2,0);
  if (plVar4 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar4 + 0x2b8))
                      (plVar4,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(*plVar4 + 0x2c0));
    if ((uVar3 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x100) = 1;
    }
    plVar7 = (long *)(param_1 + 200);
    *plVar7 = local_58;
    thunk_FUN_03f5d7b8(plVar7);
    plVar4 = (long *)(param_1 + 0xd0);
    *plVar4 = local_60;
    thunk_FUN_03f5d7b8(plVar4);
    lVar5 = *plVar7;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Type__op_Inequality(lVar5,0,0);
    if ((uVar3 & 1) != 0) {
      lVar5 = *plVar4;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Type__op_Inequality(lVar5,0,0);
      if ((uVar3 & 1) != 0) {
        uVar2 = *(undefined8 *)(param_1 + 200);
        uVar10 = *(undefined8 *)(param_1 + 0xd0);
        uVar9 = *(undefined8 *)(param_1 + 0x18);
        if (*(int *)(DAT_09186af8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = Newtonsoft_Json_Utilities_ImmutableCollectionsUtils__TryBuildImmutableForDictionaryContract
                          (uVar9,uVar2,uVar10,&local_68,&local_70,0);
        if ((uVar3 & 1) != 0) {
          Newtonsoft_Json_Serialization_JsonContract__set_CreatedType(param_1,local_68);
          *(undefined8 *)(param_1 + 0x118) = local_70;
          thunk_FUN_03f5d7b8(param_1 + 0x118);
          *(undefined1 *)(param_1 + 0x28) = 1;
        }
      }
    }
    return;
  }
LAB_076a7a78:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

