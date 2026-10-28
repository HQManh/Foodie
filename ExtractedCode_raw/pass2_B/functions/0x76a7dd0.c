// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonArrayContract$$.ctor
// address: 0x76a7dd0
// body: available
// range: 0x76a7dd0-0x76a8c03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a8bf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a8bf4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a8c00 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonArrayContract___ctor(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 local_70;
  undefined8 local_68;
  long *local_58;
  
  if ((DAT_0952265c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171a28);
    FUN_03f5c2a4(&DAT_09171b40);
    FUN_03f5c2a4(&DAT_09171bc0);
    FUN_03f5c2a4(&DAT_09171ca8);
    FUN_03f5c2a4(&DAT_09171ca0);
    FUN_03f5c2a4(&DAT_09171d28);
    FUN_03f5c2a4(&DAT_09171d38);
    FUN_03f5c2a4(&DAT_09171d80);
    FUN_03f5c2a4(&DAT_09186af8);
    FUN_03f5c2a4(&DAT_09170950);
    FUN_03f5c2a4(&DAT_09172288);
    FUN_03f5c2a4(&DAT_09172920);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_0920e0d8);
    DAT_0952265c = 1;
  }
  local_58 = (long *)0x0;
  local_70 = 0;
  local_68 = 0;
  Newtonsoft_Json_Serialization_JsonContainerContract___ctor(param_1,param_2);
  *(undefined4 *)(param_1 + 0x24) = 2;
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_076a8bf0;
  uVar4 = System_Type__get_IsArray(*(long *)(param_1 + 0x58),0);
  if ((uVar4 & 1) != 0) {
    *(undefined1 *)(param_1 + 0xf0) = 1;
LAB_076a7f14:
    uVar10 = *(undefined8 *)(param_1 + 0x60);
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = Newtonsoft_Json_Utilities_ReflectionUtils__GetCollectionItemType(uVar10,0);
    plVar11 = (long *)(param_1 + 0xc0);
    *plVar11 = lVar5;
    thunk_FUN_03f5d7b8(plVar11,lVar5);
    lVar5 = DAT_095354b8;
    uVar10 = DAT_09172288;
    *(undefined1 *)(param_1 + 0x28) = 1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar6 = (long *)System_Type__GetTypeFromHandle(uVar10,0);
    plVar7 = (long *)FUN_03f5c394(DAT_09180748,1);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar11;
      if ((lVar5 == 0) ||
         (lVar8 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 != 0)) {
        if ((int)plVar7[3] == 0) goto LAB_076a8bf4;
        plVar7[4] = lVar5;
        thunk_FUN_03f5d7b8(plVar7 + 4,lVar5);
        if (plVar6 != (long *)0x0) {
          uVar10 = (**(code **)(*plVar6 + 0x948))(plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x950));
          *(undefined8 *)(param_1 + 0xd0) = uVar10;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xd0),uVar10);
          if (*(long *)(param_1 + 0x58) != 0) {
            uVar4 = System_Type__get_IsArray(*(long *)(param_1 + 0x58),0);
            if ((uVar4 & 1) == 0) {
              bVar9 = false;
            }
            else {
              plVar11 = *(long **)(param_1 + 0x60);
              if (plVar11 == (long *)0x0) goto LAB_076a8bf0;
              iVar3 = (**(code **)(*plVar11 + 0x458))(plVar11,*(undefined8 *)(*plVar11 + 0x460));
              bVar9 = 1 < iVar3;
            }
            *(bool *)(param_1 + 200) = bVar9;
            bVar1 = 1;
            goto LAB_076a8b38;
          }
        }
        goto LAB_076a8bf0;
      }
      goto LAB_076a8bf8;
    }
    goto LAB_076a8bf0;
  }
  plVar11 = *(long **)(param_1 + 0x18);
  if (plVar11 == (long *)0x0) goto LAB_076a8bf0;
  uVar4 = (**(code **)(*plVar11 + 0x3d8))(plVar11,*(undefined8 *)(*plVar11 + 0x3e0));
  if ((uVar4 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  else {
    plVar11 = *(long **)(param_1 + 0x18);
    if ((plVar11 == (long *)0x0) ||
       (plVar11 = (long *)(**(code **)(*plVar11 + 0x468))(plVar11,*(undefined8 *)(*plVar11 + 0x470))
       , plVar11 == (long *)0x0)) goto LAB_076a8bf0;
    uVar10 = (**(code **)(*plVar11 + 0x2f8))(plVar11,*(undefined8 *)(*plVar11 + 0x300));
    bVar1 = System_String__op_Equality(uVar10,DAT_0920e0d8,0);
    *(byte *)(param_1 + 0xf0) = bVar1 & 1;
    if ((bVar1 & 1) != 0) goto LAB_076a7f14;
  }
  uVar10 = DAT_09171ca0;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar11 = (long *)System_Type__GetTypeFromHandle(uVar10,0);
  if (plVar11 == (long *)0x0) goto LAB_076a8bf0;
  uVar4 = (**(code **)(*plVar11 + 0x2b8))
                    (plVar11,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(*plVar11 + 0x2c0));
  uVar10 = DAT_09171b40;
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189d88);
    }
    uVar4 = Newtonsoft_Json_Utilities_ReflectionUtils__ImplementsGenericDefinition
                      (uVar12,uVar10,param_1 + 0xd0,0);
    if ((uVar4 & 1) == 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar10 = Newtonsoft_Json_Utilities_ReflectionUtils__GetCollectionItemType(uVar10,0);
    }
    else {
      plVar11 = *(long **)(param_1 + 0xd0);
      if ((plVar11 == (long *)0x0) ||
         (lVar5 = (**(code **)(*plVar11 + 0x488))(plVar11,*(undefined8 *)(*plVar11 + 0x490)),
         lVar5 == 0)) goto LAB_076a8bf0;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_076a8bf4;
      uVar10 = *(undefined8 *)(lVar5 + 0x20);
    }
    *(undefined8 *)(param_1 + 0xc0) = uVar10;
    thunk_FUN_03f5d7b8();
    uVar10 = DAT_09171ca0;
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
    uVar4 = System_Type__op_Equality(uVar12,uVar10,0);
    uVar10 = DAT_09170950;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
      Newtonsoft_Json_Serialization_JsonContract__set_CreatedType(param_1,uVar10);
    }
    uVar10 = *(undefined8 *)(param_1 + 0xc0);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Type__op_Inequality(uVar10,0,0);
    if ((uVar4 & 1) != 0) {
      uVar10 = Newtonsoft_Json_Utilities_CollectionUtils__ResolveEnumerableCollectionConstructor
                         (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0xc0),0);
      *(undefined8 *)(param_1 + 0xf8) = uVar10;
      thunk_FUN_03f5d7b8();
    }
    uVar10 = DAT_09172920;
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189d88);
    }
    bVar2 = Newtonsoft_Json_Utilities_ReflectionUtils__InheritsGenericDefinition(uVar12,uVar10,0);
    bVar1 = 1;
    *(byte *)(param_1 + 0x28) = bVar2 & 1;
    goto LAB_076a8b38;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
  if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189d88);
  }
  uVar4 = Newtonsoft_Json_Utilities_ReflectionUtils__ImplementsGenericDefinition
                    (uVar12,uVar10,param_1 + 0xd0,0);
  uVar10 = DAT_09171d28;
  if ((uVar4 & 1) == 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189d88);
    }
    uVar4 = Newtonsoft_Json_Utilities_ReflectionUtils__ImplementsGenericDefinition
                      (uVar12,uVar10,&local_58,0);
    uVar10 = DAT_09171bc0;
    if ((uVar4 & 1) == 0) {
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
      if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189d88);
      }
      uVar4 = Newtonsoft_Json_Utilities_ReflectionUtils__ImplementsGenericDefinition
                        (uVar12,uVar10,&local_58,0);
      if ((uVar4 & 1) == 0) {
        bVar1 = 0;
        *(undefined1 *)(param_1 + 0xf1) = 1;
        goto LAB_076a8b38;
      }
      if ((local_58 == (long *)0x0) ||
         (lVar5 = (**(code **)(*local_58 + 0x488))(local_58,*(undefined8 *)(*local_58 + 0x490)),
         lVar5 == 0)) goto LAB_076a8bf0;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_076a8bf4;
      plVar11 = (long *)(param_1 + 0xc0);
      *plVar11 = *(long *)(lVar5 + 0x20);
      thunk_FUN_03f5d7b8(plVar11);
      uVar10 = DAT_09171bc0;
      uVar12 = *(undefined8 *)(param_1 + 0x60);
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
      if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189d88);
      }
      uVar4 = Newtonsoft_Json_Utilities_ReflectionUtils__IsGenericDefinition(uVar12,uVar10,0);
      uVar10 = DAT_09172288;
      if ((uVar4 & 1) != 0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar6 = (long *)System_Type__GetTypeFromHandle(uVar10,0);
        lVar5 = FUN_03f5c394(DAT_09180748,1);
        if (lVar5 == 0) goto LAB_076a8bf0;
        lVar8 = *plVar11;
        FUN_039b0da0(lVar5,lVar8);
        FUN_039af17c(lVar5,0,lVar8);
        if (plVar6 == (long *)0x0) goto LAB_076a8bf0;
        uVar10 = (**(code **)(*plVar6 + 0x948))(plVar6,lVar5,*(undefined8 *)(*plVar6 + 0x950));
        Newtonsoft_Json_Serialization_JsonContract__set_CreatedType(param_1,uVar10);
      }
      uVar10 = Newtonsoft_Json_Utilities_CollectionUtils__ResolveEnumerableCollectionConstructor
                         (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0xc0),0);
      *(undefined8 *)(param_1 + 0xf8) = uVar10;
      thunk_FUN_03f5d7b8();
      Newtonsoft_Json_Serialization_JsonArrayContract__StoreFSharpListCreatorIfNecessary
                (param_1,*(undefined8 *)(param_1 + 0x18));
      plVar6 = *(long **)(param_1 + 0x18);
      if (plVar6 == (long *)0x0) goto LAB_076a8bf0;
      uVar4 = (**(code **)(*plVar6 + 0x3d8))(plVar6,*(undefined8 *)(*plVar6 + 0x3e0));
      if ((uVar4 & 1) != 0) {
        plVar6 = *(long **)(param_1 + 0x18);
        if (plVar6 == (long *)0x0) goto LAB_076a8bf0;
        uVar12 = (**(code **)(*plVar6 + 0x468))(plVar6,*(undefined8 *)(*plVar6 + 0x470));
        uVar10 = DAT_09171bc0;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
        uVar4 = System_Type__op_Equality(uVar12,uVar10,0);
        if ((uVar4 & 1) != 0) {
          *(long **)(param_1 + 0xd0) = local_58;
          thunk_FUN_03f5d7b8(param_1 + 0xd0);
          *(undefined1 *)(param_1 + 0x28) = 0;
          bVar1 = 1;
          *(undefined1 *)(param_1 + 0xf1) = 0;
          goto LAB_076a8b38;
        }
      }
      uVar10 = DAT_09172288;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar6 = (long *)System_Type__GetTypeFromHandle(uVar10,0);
      plVar7 = (long *)FUN_03f5c394(DAT_09180748,1);
      if (plVar7 == (long *)0x0) goto LAB_076a8bf0;
      lVar5 = *plVar11;
      if ((lVar5 != 0) &&
         (lVar8 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
      goto LAB_076a8bf8;
      if ((int)plVar7[3] == 0) goto LAB_076a8bf4;
      plVar7[4] = lVar5;
      thunk_FUN_03f5d7b8(plVar7 + 4,lVar5);
      if (plVar6 == (long *)0x0) goto LAB_076a8bf0;
      uVar10 = (**(code **)(*plVar6 + 0x948))(plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x950));
      *(undefined8 *)(param_1 + 0xd0) = uVar10;
      thunk_FUN_03f5d7b8(param_1 + 0xd0,uVar10);
      *(undefined1 *)(param_1 + 0x28) = 1;
      *(undefined1 *)(param_1 + 0xf1) = 1;
    }
    else {
      if ((local_58 == (long *)0x0) ||
         (lVar5 = (**(code **)(*local_58 + 0x488))(local_58,*(undefined8 *)(*local_58 + 0x490)),
         lVar5 == 0)) goto LAB_076a8bf0;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_076a8bf4;
      plVar11 = (long *)(param_1 + 0xc0);
      *plVar11 = *(long *)(lVar5 + 0x20);
      thunk_FUN_03f5d7b8(plVar11);
      uVar10 = DAT_09171d28;
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
      if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189d88);
      }
      uVar4 = Newtonsoft_Json_Utilities_ReflectionUtils__IsGenericDefinition(uVar12,uVar10,0);
      uVar10 = DAT_09171d38;
      if ((uVar4 & 1) == 0) {
        uVar12 = *(undefined8 *)(param_1 + 0x18);
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
        if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09189d88);
        }
        uVar4 = Newtonsoft_Json_Utilities_ReflectionUtils__IsGenericDefinition(uVar12,uVar10,0);
        if ((uVar4 & 1) != 0) goto LAB_076a86e4;
      }
      else {
LAB_076a86e4:
        uVar10 = DAT_09172920;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar6 = (long *)System_Type__GetTypeFromHandle(uVar10,0);
        plVar7 = (long *)FUN_03f5c394(DAT_09180748,1);
        if (plVar7 == (long *)0x0) goto LAB_076a8bf0;
        lVar5 = *plVar11;
        if ((lVar5 != 0) &&
           (lVar8 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
        goto LAB_076a8bf8;
        if ((int)plVar7[3] == 0) goto LAB_076a8bf4;
        plVar7[4] = lVar5;
        thunk_FUN_03f5d7b8(plVar7 + 4,lVar5);
        if (plVar6 == (long *)0x0) goto LAB_076a8bf0;
        uVar10 = (**(code **)(*plVar6 + 0x948))(plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x950));
        Newtonsoft_Json_Serialization_JsonContract__set_CreatedType(param_1,uVar10);
      }
      uVar10 = DAT_09172288;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar6 = (long *)System_Type__GetTypeFromHandle(uVar10,0);
      plVar7 = (long *)FUN_03f5c394(DAT_09180748,1);
      if (plVar7 == (long *)0x0) goto LAB_076a8bf0;
      lVar5 = *plVar11;
      if ((lVar5 != 0) &&
         (lVar8 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
      goto LAB_076a8bf8;
      if ((int)plVar7[3] == 0) goto LAB_076a8bf4;
      plVar7[4] = lVar5;
      thunk_FUN_03f5d7b8(plVar7 + 4,lVar5);
      if (plVar6 == (long *)0x0) goto LAB_076a8bf0;
      uVar10 = (**(code **)(*plVar6 + 0x948))(plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x950));
      *(undefined8 *)(param_1 + 0xd0) = uVar10;
      thunk_FUN_03f5d7b8(param_1 + 0xd0,uVar10);
      uVar10 = Newtonsoft_Json_Utilities_CollectionUtils__ResolveEnumerableCollectionConstructor
                         (*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0xc0),0);
      *(undefined8 *)(param_1 + 0xf8) = uVar10;
      thunk_FUN_03f5d7b8();
      Newtonsoft_Json_Serialization_JsonArrayContract__StoreFSharpListCreatorIfNecessary
                (param_1,*(undefined8 *)(param_1 + 0x18));
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
    bVar1 = Newtonsoft_Json_Serialization_JsonArrayContract__get_HasParameterizedCreatorInternal
                      (param_1);
    goto LAB_076a8b38;
  }
  plVar11 = *(long **)(param_1 + 0xd0);
  if ((plVar11 == (long *)0x0) ||
     (lVar5 = (**(code **)(*plVar11 + 0x488))(plVar11,*(undefined8 *)(*plVar11 + 0x490)), lVar5 == 0
     )) goto LAB_076a8bf0;
  if (*(int *)(lVar5 + 0x18) == 0) goto LAB_076a8bf4;
  plVar11 = (long *)(param_1 + 0xc0);
  *plVar11 = *(long *)(lVar5 + 0x20);
  thunk_FUN_03f5d7b8(plVar11);
  uVar10 = DAT_09171b40;
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
  if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189d88);
  }
  uVar4 = Newtonsoft_Json_Utilities_ReflectionUtils__IsGenericDefinition(uVar12,uVar10,0);
  uVar10 = DAT_09171ca8;
  if ((uVar4 & 1) == 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189d88);
    }
    uVar4 = Newtonsoft_Json_Utilities_ReflectionUtils__IsGenericDefinition(uVar12,uVar10,0);
    if ((uVar4 & 1) != 0) goto LAB_076a829c;
  }
  else {
LAB_076a829c:
    uVar10 = DAT_09172288;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar6 = (long *)System_Type__GetTypeFromHandle(uVar10,0);
    plVar7 = (long *)FUN_03f5c394(DAT_09180748,1);
    if (plVar7 == (long *)0x0) goto LAB_076a8bf0;
    lVar5 = *plVar11;
    if ((lVar5 != 0) &&
       (lVar8 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
    goto LAB_076a8bf8;
    if ((int)plVar7[3] == 0) goto LAB_076a8bf4;
    plVar7[4] = lVar5;
    thunk_FUN_03f5d7b8(plVar7 + 4,lVar5);
    if (plVar6 == (long *)0x0) goto LAB_076a8bf0;
    uVar10 = (**(code **)(*plVar6 + 0x948))(plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x950));
    Newtonsoft_Json_Serialization_JsonContract__set_CreatedType(param_1,uVar10);
  }
  uVar10 = DAT_09171d80;
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar10 = System_Type__GetTypeFromHandle(uVar10,0);
  if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189d88);
  }
  uVar4 = Newtonsoft_Json_Utilities_ReflectionUtils__IsGenericDefinition(uVar12,uVar10,0);
  uVar10 = DAT_09171a28;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar6 = (long *)System_Type__GetTypeFromHandle(uVar10,0);
    plVar7 = (long *)FUN_03f5c394(DAT_09180748,1);
    if (plVar7 == (long *)0x0) {
LAB_076a8bf0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar11;
    if ((lVar5 != 0) &&
       (lVar8 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
LAB_076a8bf8:
      uVar10 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar10,0);
    }
    if ((int)plVar7[3] == 0) {
LAB_076a8bf4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar7[4] = lVar5;
    thunk_FUN_03f5d7b8(plVar7 + 4,lVar5);
    if (plVar6 == (long *)0x0) goto LAB_076a8bf0;
    uVar10 = (**(code **)(*plVar6 + 0x948))(plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x950));
    Newtonsoft_Json_Serialization_JsonContract__set_CreatedType(param_1,uVar10);
  }
  uVar10 = Newtonsoft_Json_Utilities_CollectionUtils__ResolveEnumerableCollectionConstructor
                     (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0xc0),0);
  *(undefined8 *)(param_1 + 0xf8) = uVar10;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xf8),uVar10);
  bVar1 = 1;
  *(undefined1 *)(param_1 + 0xf1) = 1;
LAB_076a8b38:
  lVar5 = DAT_095354b8;
  uVar10 = *(undefined8 *)(param_1 + 0xc0);
  *(byte *)(param_1 + 0xf2) = bVar1 & 1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424(lVar5);
  }
  uVar4 = System_Type__op_Inequality(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    uVar12 = *(undefined8 *)(param_1 + 0xc0);
    if (*(int *)(DAT_09186af8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = Newtonsoft_Json_Utilities_ImmutableCollectionsUtils__TryBuildImmutableForArrayContract
                      (uVar10,uVar12,&local_68,&local_70,0);
    if ((uVar4 & 1) != 0) {
      Newtonsoft_Json_Serialization_JsonContract__set_CreatedType(param_1,local_68);
      *(undefined8 *)(param_1 + 0x100) = local_70;
      thunk_FUN_03f5d7b8(param_1 + 0x100);
      *(undefined1 *)(param_1 + 0x28) = 1;
      *(undefined1 *)(param_1 + 0xf2) = 1;
    }
  }
  return;
}

