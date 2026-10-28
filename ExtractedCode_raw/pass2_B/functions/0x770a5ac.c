// rea decompile_all
// name: Newtonsoft.Json.Converters.StringEnumConverter$$WriteJson
// address: 0x770a5ac
// body: available
// range: 0x770a5ac-0x770a7a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x770a6f0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770a6f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770a7a0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_StringEnumConverter__WriteJson
               (long param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  long *local_38;
  
  if ((DAT_09522985 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091840e8);
    DAT_09522985 = 1;
  }
  local_38 = (long *)0x0;
  if (param_3 != (long *)0x0) {
    if ((*(byte *)(*param_3 + 0x130) < *(byte *)(DAT_09535470 + 0x130)) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)*(byte *)(DAT_09535470 + 0x130) * 8 + -8) !=
        DAT_09535470)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_3);
    }
    uVar1 = System_Object__GetType(param_3,0);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(DAT_091840e8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091840e8);
    }
    uVar2 = Newtonsoft_Json_Utilities_EnumUtils__TryToString(uVar1,param_3,uVar6,&local_38,0);
    if ((uVar2 & 1) == 0) {
      if (*(char *)(param_1 + 0x18) == '\0') {
        FUN_039b1d98(param_2);
        uVar1 = Newtonsoft_Json_JsonWriter__get_ContainerPath(param_2,0);
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        FUN_039b1d98(param_3);
        uVar3 = thunk_FUN_03fc39d4(&DAT_091ffb80);
        uVar3 = System_Enum__ToString(param_3,uVar3,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_09204f40);
        uVar6 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar4,uVar6,uVar3,0);
        uVar1 = Newtonsoft_Json_JsonSerializationException__Create(0,uVar1,uVar6,0,0);
        uVar6 = thunk_FUN_03fc39d4(&DAT_091da4e0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar1,uVar6);
      }
      if (param_2 == (long *)0x0) goto LAB_0770a6f4;
      pcVar5 = *(code **)(*param_2 + 0x8e8);
      uVar1 = *(undefined8 *)(*param_2 + 0x8f0);
    }
    else {
      if (param_2 == (long *)0x0) goto LAB_0770a6f4;
      pcVar5 = *(code **)(*param_2 + 0x698);
      uVar1 = *(undefined8 *)(*param_2 + 0x6a0);
      param_3 = local_38;
    }
    (*pcVar5)(param_2,param_3,uVar1);
    return;
  }
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0770a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x658))(param_2,*(undefined8 *)(*param_2 + 0x660));
    return;
  }
LAB_0770a6f4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

