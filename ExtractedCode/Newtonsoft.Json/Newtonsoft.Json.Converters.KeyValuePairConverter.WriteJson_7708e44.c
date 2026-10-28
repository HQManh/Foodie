// rea decompile_all
// name: Newtonsoft.Json.Converters.KeyValuePairConverter$$WriteJson
// address: 0x7708e44
// body: available
// range: 0x7708e44-0x77090a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77090a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_KeyValuePairConverter__WriteJson
               (undefined8 param_1,long *param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((DAT_09522972 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183878);
    FUN_03f5c2a4(&DAT_09187528);
    FUN_03f5c2a4(&DAT_091bd410);
    FUN_03f5c2a4(&DAT_09212b98);
    FUN_03f5c2a4(&DAT_09206568);
    DAT_09522972 = 1;
  }
  if (param_3 == 0) {
    if (param_2 == (long *)0x0) goto LAB_077090a4;
    puVar4 = (undefined8 *)(*param_2 + 0x658);
    puVar5 = (undefined8 *)(*param_2 + 0x660);
    goto LAB_07709084;
  }
  if (*(int *)(DAT_09187528 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = **(long **)(DAT_09187528 + 0xb8);
  uVar1 = System_Object__GetType(param_3,0);
  if ((lVar6 == 0) || (lVar6 = FUN_06361088(lVar6,uVar1,DAT_091bd410), param_4 == (long *)0x0))
  goto LAB_077090a4;
  plVar2 = (long *)(**(code **)(*param_4 + 0x3a8))(param_4,*(undefined8 *)(*param_4 + 0x3b0));
  if (plVar2 == (long *)0x0) {
LAB_07708f40:
    plVar2 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar2 + 0x130) < *(byte *)(DAT_09183878 + 0x130)) goto LAB_07708f40;
    if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_09183878 + 0x130) * 8 + -8) !=
        DAT_09183878) {
      plVar2 = (long *)0x0;
    }
  }
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x578))(param_2,*(undefined8 *)(*param_2 + 0x580));
    uVar1 = DAT_09206568;
    if (plVar2 != (long *)0x0) {
      uVar1 = Newtonsoft_Json_Serialization_DefaultContractResolver__GetResolvedPropertyName
                        (plVar2,DAT_09206568,0);
    }
    (**(code **)(*param_2 + 0x5d8))(param_2,uVar1,*(undefined8 *)(*param_2 + 0x5e0));
    if (lVar6 != 0) {
      uVar1 = Newtonsoft_Json_Utilities_ReflectionObject__GetValue(lVar6,param_3,DAT_09206568,0);
      uVar3 = Newtonsoft_Json_Utilities_ReflectionObject__GetType(lVar6,DAT_09206568,0);
      Newtonsoft_Json_JsonSerializer__Serialize(param_4,param_2,uVar1,uVar3,0);
      uVar1 = DAT_09212b98;
      if (plVar2 != (long *)0x0) {
        uVar1 = Newtonsoft_Json_Serialization_DefaultContractResolver__GetResolvedPropertyName
                          (plVar2,DAT_09212b98,0);
      }
      (**(code **)(*param_2 + 0x5d8))(param_2,uVar1,*(undefined8 *)(*param_2 + 0x5e0));
      uVar1 = Newtonsoft_Json_Utilities_ReflectionObject__GetValue(lVar6,param_3,DAT_09212b98,0);
      uVar3 = Newtonsoft_Json_Utilities_ReflectionObject__GetType(lVar6,DAT_09212b98,0);
      Newtonsoft_Json_JsonSerializer__Serialize(param_4,param_2,uVar1,uVar3,0);
      puVar4 = (undefined8 *)(*param_2 + 0x588);
      puVar5 = (undefined8 *)(*param_2 + 0x590);
LAB_07709084:
                    /* WARNING: Could not recover jumptable at 0x077090a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(param_2,*puVar5);
      return;
    }
  }
LAB_077090a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

