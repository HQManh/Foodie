// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$InitializeContract
// address: 0x76a261c
// body: available
// range: 0x76a261c-0x76a2887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a2884 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_DefaultContractResolver__InitializeContract
               (long *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  undefined2 local_34 [2];
  
  if ((DAT_09522628 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ac0);
    FUN_03f5c2a4(&DAT_09183878);
    FUN_03f5c2a4(&DAT_091d1d68);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_091b6a48);
    FUN_03f5c2a4(&DAT_09189d88);
    DAT_09522628 = 1;
  }
  if (param_2 == 0) goto LAB_076a2884;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  if (*(int *)(DAT_09187480 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = FUN_04bdd338(uVar5,DAT_091d1d68);
  if (lVar2 == 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    if (*(int *)(DAT_09187480 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = Newtonsoft_Json_Serialization_JsonTypeReflector__GetDataContractAttribute(uVar5,0);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x19) != '\0')) {
      local_34[0] = 0;
      FUN_05c290f8(local_34,1,DAT_091b6a48);
      uVar4 = local_34[0];
      goto LAB_076a26d4;
    }
  }
  else {
    uVar4 = *(undefined2 *)(lVar2 + 0x40);
LAB_076a26d4:
    *(undefined2 *)(param_2 + 0x68) = uVar4;
  }
  uVar5 = (**(code **)(*param_1 + 0x1d8))
                    (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(*param_1 + 0x1e0));
  *(undefined8 *)(param_2 + 0x70) = uVar5;
  thunk_FUN_03f5d7b8();
  if (*(int *)(DAT_09183878 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = Newtonsoft_Json_JsonSerializer__GetMatchingConverter
                    (*(undefined8 *)(*(long *)(DAT_09183878 + 0xb8) + 0x10),
                     *(undefined8 *)(param_2 + 0x18),0);
  *(undefined8 *)(param_2 + 0x78) = uVar5;
  thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0x78),uVar5);
  if (*(char *)(param_2 + 0x2a) != '\0') {
    uVar5 = *(undefined8 *)(param_2 + 0x58);
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Newtonsoft_Json_Utilities_ReflectionUtils__HasDefaultConstructor(uVar5,1,0);
    if ((uVar3 & 1) == 0) {
      if (*(long *)(param_2 + 0x58) == 0) goto LAB_076a2884;
      uVar3 = System_Type__get_IsValueType(*(long *)(param_2 + 0x58),0);
      if ((uVar3 & 1) == 0) goto LAB_076a2860;
    }
    uVar5 = Newtonsoft_Json_Serialization_DefaultContractResolver__GetDefaultCreator
                      (uVar3,*(undefined8 *)(param_2 + 0x58));
    *(undefined8 *)(param_2 + 0x80) = uVar5;
    thunk_FUN_03f5d7b8();
    if (*(long *)(param_2 + 0x58) == 0) {
LAB_076a2884:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = System_Type__get_IsValueType(*(long *)(param_2 + 0x58),0);
    if ((uVar3 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x58);
      if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = Newtonsoft_Json_Utilities_ReflectionUtils__GetDefaultConstructor(uVar5,0);
      if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182ac0);
      }
      bVar1 = System_Reflection_ConstructorInfo__op_Equality(uVar5,0,0);
    }
    else {
      bVar1 = 0;
    }
    *(byte *)(param_2 + 0x88) = bVar1 & 1;
  }
LAB_076a2860:
  Newtonsoft_Json_Serialization_DefaultContractResolver__ResolveCallbackMethods
            (param_1,param_2,*(undefined8 *)(param_2 + 0x18));
  return;
}

