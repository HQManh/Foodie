// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$CreateObjectContract
// address: 0x76a1fb8
// body: available
// range: 0x76a1fb8-0x76a2597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a2594 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Serialization_DefaultContractResolver__CreateObjectContract
               (long *param_1,long *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((DAT_0952261f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0558);
    FUN_03f5c2a4(&DAT_091c4e98);
    FUN_03f5c2a4(&DAT_09182ac0);
    FUN_03f5c2a4(&DAT_091c82c0);
    FUN_03f5c2a4(&DAT_09183878);
    FUN_03f5c2a4(&DAT_09177d18);
    FUN_03f5c2a4(&DAT_091790b8);
    FUN_03f5c2a4(&DAT_0917a130);
    FUN_03f5c2a4(&DAT_091d18b8);
    FUN_03f5c2a4(&DAT_09187388);
    FUN_03f5c2a4(&DAT_091d1d78);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_0918a908);
    FUN_03f5c2a4(&DAT_091e8d50);
    FUN_03f5c2a4(&DAT_09190018);
    DAT_0952261f = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_09187388);
  Newtonsoft_Json_Serialization_JsonObjectContract___ctor(lVar4,param_2);
  Newtonsoft_Json_Serialization_DefaultContractResolver__InitializeContract(param_1,lVar4);
  if (lVar4 == 0) goto LAB_076a2594;
  cVar1 = *(char *)((long)param_1 + 0x26);
  uVar11 = *(undefined8 *)(lVar4 + 0x18);
  if (*(int *)(DAT_09187480 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = Newtonsoft_Json_Serialization_JsonTypeReflector__GetObjectMemberSerialization
                    (uVar11,cVar1 != '\0',0);
  *(undefined4 *)(lVar4 + 0xbc) = uVar2;
  uVar12 = *(undefined8 *)(lVar4 + 0xd8);
  uVar11 = (**(code **)(*param_1 + 0x268))
                     (param_1,*(undefined8 *)(lVar4 + 0x18),uVar2,*(undefined8 *)(*param_1 + 0x270))
  ;
  FUN_04a65b58(uVar12,uVar11,DAT_091c4e98);
  lVar5 = FUN_04bdd338(*(undefined8 *)(lVar4 + 0x18),DAT_091d1d78);
  if (lVar5 == 0) {
LAB_076a2218:
    lVar5 = thunk_FUN_03f9944c(DAT_091790b8);
    FUN_05324070(lVar5,param_1,*(undefined8 *)(*param_1 + 0x2c0),0);
  }
  else {
    *(undefined8 *)(lVar4 + 200) = *(undefined8 *)(lVar5 + 0x74);
    *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(lVar5 + 0x7c);
    *(undefined8 *)(lVar4 + 0xc0) = *(undefined8 *)(lVar5 + 0x6c);
    uVar11 = *(undefined8 *)(lVar5 + 0x58);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = System_Type__op_Inequality(uVar11,0,0);
    if ((uVar6 & 1) == 0) goto LAB_076a2218;
    lVar7 = thunk_FUN_03f9944c(DAT_09190018);
    System_Object___ctor(lVar7,0);
    if (*(int *)(DAT_09187480 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar11 = Newtonsoft_Json_Serialization_JsonTypeReflector__GetContainerNamingStrategy(lVar5,0);
    if (lVar7 == 0) goto LAB_076a2594;
    *(undefined8 *)(lVar7 + 0x10) = uVar11;
    thunk_FUN_03f5d7b8();
    lVar5 = thunk_FUN_03f9944c(DAT_091790b8);
    FUN_05324070(lVar5,lVar7,DAT_091e8d50,0);
    if (lVar5 == 0) goto LAB_076a2218;
  }
  *(long *)(lVar4 + 0xf0) = lVar5;
  uVar11 = thunk_FUN_03f5d7b8((long *)(lVar4 + 0xf0),lVar5);
  if (*(char *)(lVar4 + 0x2a) != '\0') {
    uVar11 = Newtonsoft_Json_Serialization_DefaultContractResolver__GetAttributeConstructor
                       (uVar11,*(undefined8 *)(lVar4 + 0x18));
    if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182ac0);
    }
    uVar6 = System_Reflection_ConstructorInfo__op_Inequality(uVar11,0,0);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(lVar4 + 0xbc) == 2) {
        if (*(int *)(DAT_09187480 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = Newtonsoft_Json_Serialization_JsonTypeReflector__get_FullyTrusted(0);
        if ((uVar6 & 1) != 0) {
          uVar11 = thunk_FUN_03f9944c(DAT_09177d18);
          FUN_053017a8(uVar11,lVar4,DAT_091d18b8,0);
          *(undefined8 *)(lVar4 + 0x80) = uVar11;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x80),uVar11);
        }
      }
      else if ((*(long *)(lVar4 + 0x80) == 0) || (*(char *)(lVar4 + 0x88) != '\0')) {
        uVar11 = Newtonsoft_Json_Serialization_DefaultContractResolver__GetParameterizedConstructor
                           (uVar6,*(undefined8 *)(lVar4 + 0x18));
        if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182ac0);
        }
        uVar6 = System_Reflection_ConstructorInfo__op_Inequality(uVar11,0,0);
        if ((uVar6 & 1) != 0) {
          if (*(int *)(DAT_09187480 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar8 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                                     (0);
          if (plVar8 == (long *)0x0) goto LAB_076a2594;
          uVar12 = (**(code **)(*plVar8 + 0x188))(plVar8,uVar11,*(undefined8 *)(*plVar8 + 400));
          *(undefined8 *)(lVar4 + 0x108) = uVar12;
          lVar5 = lVar4 + 0x108;
          goto LAB_076a22c8;
        }
      }
      else {
        if (*(long *)(lVar4 + 0x18) == 0) goto LAB_076a2594;
        uVar6 = System_Type__get_IsValueType(*(long *)(lVar4 + 0x18),0);
        if ((uVar6 & 1) != 0) {
          uVar11 = Newtonsoft_Json_Serialization_DefaultContractResolver__GetImmutableConstructor
                             (param_1,*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0xd8));
          if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182ac0);
          }
          uVar6 = System_Reflection_ConstructorInfo__op_Inequality(uVar11,0,0);
          if ((uVar6 & 1) != 0) goto LAB_076a2290;
        }
      }
    }
    else {
LAB_076a2290:
      if (*(int *)(DAT_09187480 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar8 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                                 (0);
      if (plVar8 == (long *)0x0) goto LAB_076a2594;
      uVar12 = (**(code **)(*plVar8 + 0x188))(plVar8,uVar11,*(undefined8 *)(*plVar8 + 400));
      *(undefined8 *)(lVar4 + 0x100) = uVar12;
      lVar5 = lVar4 + 0x100;
LAB_076a22c8:
      thunk_FUN_03f5d7b8(lVar5,uVar12);
      uVar12 = Newtonsoft_Json_Serialization_JsonObjectContract__get_CreatorParameters(lVar4);
      uVar11 = (**(code **)(*param_1 + 0x1b8))
                         (param_1,uVar11,*(undefined8 *)(lVar4 + 0xd8),
                          *(undefined8 *)(*param_1 + 0x1c0));
      FUN_04a65b58(uVar12,uVar11,DAT_091c4e98);
    }
  }
  uVar11 = Newtonsoft_Json_Serialization_DefaultContractResolver__GetExtensionDataMemberForType
                     (param_1,*(undefined8 *)(lVar4 + 0x18));
  uVar6 = System_Reflection_MemberInfo__op_Inequality(uVar11,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(DAT_09183878 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Newtonsoft_Json_Serialization_DefaultContractResolver__SetExtensionDataDelegates(lVar4,uVar11);
  }
  if (*(int *)(DAT_09183878 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (param_2 == (long *)0x0) {
LAB_076a2594:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar12 = *(undefined8 *)(*(long *)(DAT_09183878 + 0xb8) + 8);
  uVar11 = (**(code **)(*param_2 + 0x2f8))(param_2,*(undefined8 *)(*param_2 + 0x300));
  iVar3 = FUN_04ee582c(uVar12,uVar11,DAT_091c0558);
  if (iVar3 != -1) {
    plVar8 = (long *)Newtonsoft_Json_Serialization_JsonContract__get_OnSerializingCallbacks(lVar4);
    uVar11 = thunk_FUN_03f9944c(DAT_0918a908);
    Newtonsoft_Json_Serialization_SerializationCallback___ctor(uVar11,0,DAT_091c82c0);
    if (plVar8 == (long *)0x0) goto LAB_076a2594;
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_0917a130) {
          puVar9 = (undefined8 *)(lVar5 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_076a2494;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a130,2);
LAB_076a2494:
    (*(code *)*puVar9)(plVar8,uVar11,puVar9[1]);
  }
  return lVar4;
}

