// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$SetPropertySettingsFromAttributes
// address: 0x76a4b64
// body: available
// range: 0x76a4b64-0x76a51cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a4ff0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_DefaultContractResolver__SetPropertySettingsFromAttributes
               (long *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,int param_6
               ,byte *param_7)

{
  undefined8 uVar1;
  bool bVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  byte bVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_68;
  
  if ((DAT_0952263f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d1d28);
    FUN_03f5c2a4(&DAT_091d1d30);
    FUN_03f5c2a4(&DAT_091d1d38);
    FUN_03f5c2a4(&DAT_091d1d40);
    FUN_03f5c2a4(&DAT_091d1d48);
    FUN_03f5c2a4(&DAT_091d1d50);
    FUN_03f5c2a4(&DAT_091d1d58);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_09187fd8);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_091b6cd8);
    FUN_03f5c2a4(&DAT_091b7360);
    DAT_0952263f = 1;
  }
  if (*(int *)(DAT_09187480 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = Newtonsoft_Json_Serialization_JsonTypeReflector__GetDataContractAttribute(param_5,0);
  if (param_3 == (long *)0x0) {
LAB_076a4c88:
    plVar9 = (long *)0x0;
    if (lVar4 != 0) goto LAB_076a4c90;
LAB_076a4ce4:
    lVar4 = 0;
  }
  else {
    if (*(byte *)(*param_3 + 0x130) < *(byte *)(DAT_09187fd8 + 0x130)) goto LAB_076a4c88;
    plVar9 = param_3;
    if (*(long *)(*(long *)(*param_3 + 200) + (ulong)*(byte *)(DAT_09187fd8 + 0x130) * 8 + -8) !=
        DAT_09187fd8) {
      plVar9 = (long *)0x0;
    }
    if (lVar4 == 0) goto LAB_076a4ce4;
LAB_076a4c90:
    uVar5 = System_Reflection_MemberInfo__op_Inequality(plVar9,0,0);
    lVar4 = 0;
    if ((uVar5 & 1) != 0) {
      if (*(int *)(DAT_09187480 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = Newtonsoft_Json_Serialization_JsonTypeReflector__GetDataMemberAttribute(plVar9,0);
    }
  }
  if (*(int *)(DAT_09187480 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = FUN_04bdd05c(param_3,DAT_091d1d50);
  lVar7 = FUN_04bdd05c(param_3,DAT_091d1d58);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) {
    if (lVar4 == 0) {
      bVar2 = false;
      lVar12 = param_4;
    }
    else {
      bVar2 = *(long *)(lVar4 + 0x10) != 0;
      lVar12 = *(long *)(lVar4 + 0x10);
      if (!bVar2) {
        lVar12 = param_4;
      }
    }
  }
  else {
    bVar2 = true;
    lVar12 = *(long *)(lVar6 + 0x80);
  }
  if (*(int *)(DAT_09187480 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar8 = FUN_04bdd05c(param_5,DAT_091d1d38);
  if (lVar6 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(lVar6 + 0x70);
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = System_Type__op_Inequality(uVar11,0,0);
  if ((uVar5 & 1) == 0) {
    if (lVar8 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(lVar8 + 0x58);
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Type__op_Inequality(uVar11,0,0);
    if ((uVar5 & 1) == 0) {
      plVar9 = (long *)param_1[6];
      goto joined_r0x076a4fd0;
    }
    if (*(int *)(DAT_09187480 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar9 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__GetContainerNamingStrategy
                               (lVar8,0);
    if (plVar9 != (long *)0x0) goto LAB_076a4e44;
LAB_076a4fd4:
    uVar11 = (**(code **)(*param_1 + 0x2a8))(param_1,lVar12,*(undefined8 *)(*param_1 + 0x2b0));
  }
  else {
    if (lVar6 == 0) goto LAB_076a4ff0;
    uVar11 = *(undefined8 *)(lVar6 + 0x70);
    uVar1 = *(undefined8 *)(lVar6 + 0x78);
    if (*(int *)(DAT_09187480 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar9 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__CreateNamingStrategyInstance
                               (uVar11,uVar1,0);
joined_r0x076a4fd0:
    if (plVar9 == (long *)0x0) goto LAB_076a4fd4;
LAB_076a4e44:
    uVar11 = (**(code **)(*plVar9 + 0x178))(plVar9,lVar12,bVar2,*(undefined8 *)(*plVar9 + 0x180));
  }
  if (param_2 == 0) {
LAB_076a4ff0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  Newtonsoft_Json_Serialization_JsonProperty__set_PropertyName(param_2,uVar11);
  *(long *)(param_2 + 0x60) = param_4;
  thunk_FUN_03f5d7b8((long *)(param_2 + 0x60),param_4);
  if (lVar6 == 0) {
    *(undefined8 *)(param_2 + 0xd0) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined2 *)(param_2 + 0x84) = 0;
    *(undefined2 *)(param_2 + 0xd8) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0xd0),0);
    *(undefined8 *)(param_2 + 0xe4) = 0;
    *(undefined8 *)(param_2 + 0xdc) = 0;
    if (lVar4 != 0) {
      local_68 = 0;
      FUN_05c30b18(&local_68,*(undefined1 *)(lVar4 + 0x20),DAT_091b7360);
      *(undefined8 *)(param_2 + 0x10) = local_68;
      if (*(int *)(lVar4 + 0x1c) == -1) {
        uVar11 = 0;
      }
      else {
        local_68 = 0;
        FUN_05c3078c(&local_68,*(int *)(lVar4 + 0x1c),DAT_091b6f98);
        uVar11 = local_68;
      }
      *(undefined8 *)(param_2 + 0x58) = uVar11;
      if (*(char *)(lVar4 + 0x21) == '\0') {
        local_68 = 0;
        FUN_05c30b18(&local_68,1,DAT_091b6cd8);
        uVar11 = local_68;
      }
      else {
        uVar11 = 0;
      }
      *(undefined8 *)(param_2 + 0x90) = uVar11;
      goto LAB_076a5038;
    }
    bVar10 = 0;
  }
  else {
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar6 + 0x44);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(lVar6 + 0x3c);
    *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(lVar6 + 0x18);
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(lVar6 + 0x10);
    *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(lVar6 + 0x20);
    *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(lVar6 + 0x30);
    *(undefined2 *)(param_2 + 0x84) = *(undefined2 *)(lVar6 + 0x38);
    *(undefined2 *)(param_2 + 0xd8) = *(undefined2 *)(lVar6 + 0x4c);
    uVar11 = *(undefined8 *)(lVar6 + 0x60);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Type__op_Inequality(uVar11,0,0);
    uVar11 = 0;
    if ((uVar5 & 1) != 0) {
      uVar11 = *(undefined8 *)(lVar6 + 0x60);
      uVar1 = *(undefined8 *)(lVar6 + 0x68);
      if (*(int *)(DAT_09187480 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar11 = Newtonsoft_Json_Serialization_JsonTypeReflector__CreateJsonConverterInstance
                         (uVar11,uVar1,0);
    }
    *(undefined8 *)(param_2 + 0xd0) = uVar11;
    thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0xd0));
    *(undefined8 *)(param_2 + 0xe4) = *(undefined8 *)(lVar6 + 0x50);
    *(undefined8 *)(param_2 + 0xdc) = *(undefined8 *)(lVar6 + 0x58);
LAB_076a5038:
    bVar10 = 1;
  }
  if (lVar7 != 0) {
    local_68 = 0;
    FUN_05c30b18(&local_68,2,DAT_091b7360);
    bVar10 = 1;
    *(undefined8 *)(param_2 + 0x10) = local_68;
  }
  lVar4 = DAT_09187480;
  *(byte *)(param_2 + 0x83) = bVar10;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = FUN_04bdd05c(param_3,DAT_091d1d48);
  if (lVar4 == 0) {
    if (*(int *)(DAT_09187480 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = FUN_04bdd05c(param_3,DAT_091d1d40);
    if (lVar4 == 0) {
      if (*(int *)(DAT_09187480 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      bVar3 = Newtonsoft_Json_Serialization_JsonTypeReflector__IsNonSerializable(param_3,0);
      goto LAB_076a50bc;
    }
  }
  bVar3 = 1;
LAB_076a50bc:
  if (param_6 == 1) {
    bVar2 = (bool)(bVar10 ^ 1);
  }
  else {
    if (*(int *)(DAT_09187480 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = FUN_04bdd05c(param_3,DAT_091d1d30);
    bVar2 = lVar4 != 0;
  }
  lVar4 = DAT_09187480;
  *(byte *)(param_2 + 0x80) = bVar3 & 1 | bVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar11 = Newtonsoft_Json_Serialization_JsonTypeReflector__GetJsonConverter(param_3,0);
  *(undefined8 *)(param_2 + 0x78) = uVar11;
  thunk_FUN_03f5d7b8();
  plVar9 = (long *)FUN_04bdd05c(param_3,DAT_091d1d28);
  if (plVar9 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
    *(undefined8 *)(param_2 + 0x20) = uVar11;
    *(undefined1 *)(param_2 + 0x18) = 1;
    thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0x20),uVar11);
  }
  *param_7 = 0;
  bVar3 = (byte)(*(uint *)(param_1 + 4) >> 5) & 1;
  if (param_6 == 2) {
    bVar3 = 1;
  }
  *param_7 = bVar10 | bVar3;
  return;
}

