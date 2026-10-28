// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonObjectContract$$set_ExtensionDataValueType
// address: 0x76a413c
// body: available
// range: 0x76a413c-0x76a4207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a4204 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonObjectContract__set_ExtensionDataValueType
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  
  if ((DAT_09522690 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09172150);
    DAT_09522690 = 1;
  }
  *(undefined8 *)(param_1 + 0x118) = param_2;
  thunk_FUN_03f5d7b8(param_1 + 0x118,param_2);
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Type__op_Inequality(param_2,0,0);
  uVar1 = DAT_09172150;
  if ((uVar3 & 1) == 0) {
    bVar2 = 0;
  }
  else {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar4 = (long *)System_Type__GetTypeFromHandle(uVar1,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    bVar2 = (**(code **)(*plVar4 + 0x2b8))(plVar4,param_2,*(undefined8 *)(*plVar4 + 0x2c0));
  }
  *(byte *)(param_1 + 0xf8) = bVar2 & 1;
  return;
}

