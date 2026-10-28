// rea decompile_all
// name: Newtonsoft.Json.Utilities.ConvertUtils$$ConvertOrCast
// address: 0x768a1e0
// body: available
// range: 0x768a1e0-0x768a33b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Utilities_ConvertUtils__ConvertOrCast
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long local_28;
  
  if ((DAT_09522569 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b90);
    FUN_03f5c2a4(&DAT_09189d88);
    DAT_09522569 = 1;
  }
  lVar3 = DAT_095353e8;
  local_28 = 0;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Type__GetTypeFromHandle(lVar3 + 0x20,0);
  uVar2 = System_Type__op_Equality(param_3,uVar1,0);
  if ((uVar2 & 1) != 0) {
    return param_1;
  }
  if (param_1 == 0) {
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = Newtonsoft_Json_Utilities_ReflectionUtils__IsNullable(param_3);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
  }
  if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = Newtonsoft_Json_Utilities_ConvertUtils__TryConvert(param_1,param_2,param_3,&local_28);
  if ((uVar2 & 1) != 0) {
    return local_28;
  }
  if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = System_Object__GetType(param_1,0);
  }
  if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = Newtonsoft_Json_Utilities_ConvertUtils__EnsureTypeAssignable(param_1,uVar1,param_3);
  return lVar3;
}

