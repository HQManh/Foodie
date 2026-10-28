// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonPropertyCollection$$.ctor
// address: 0x76a43f0
// body: available
// range: 0x76a43f0-0x76a456b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a4550 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a4568 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonPropertyCollection___ctor(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  
  if ((DAT_0952269b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919b4e0);
    FUN_03f5c2a4(&DAT_091a9ba0);
    FUN_03f5c2a4(&DAT_0917c5d0);
    FUN_03f5c2a4(&DAT_0918b378);
    FUN_03f5c2a4(&DAT_09224510);
    DAT_0952269b = 1;
  }
  if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09516ea3 == '\0') {
    FUN_03f5c2a4(&DAT_0918b378);
    DAT_09516ea3 = '\x01';
  }
  if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_0561bd24(param_1,*(undefined8 *)(*(long *)(DAT_0918b378 + 0xb8) + 0x10),DAT_091a9ba0);
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_2,DAT_09224510);
  *(undefined8 *)(param_1 + 0x30) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),param_2);
  lVar2 = DAT_0917c5d0;
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(DAT_0917c5d0 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == DAT_0917c5d0)) {
      *(long **)(param_1 + 0x38) = plVar3;
      if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) goto LAB_076a4558;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(plVar3,lVar2);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
LAB_076a4558:
  thunk_FUN_03f5d7b8(param_1 + 0x38);
  return;
}

