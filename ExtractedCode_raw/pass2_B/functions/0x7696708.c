// rea decompile_all
// name: Newtonsoft.Json.Utilities.JavaScriptUtils$$ToEscapedJavaScriptString
// address: 0x7696708
// body: available
// range: 0x7696708-0x7696893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769688c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7696890 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07696888) */

undefined8
Newtonsoft_Json_Utilities_JavaScriptUtils__ToEscapedJavaScriptString
          (long param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 local_50;
  long *local_48;
  
  if ((DAT_095225bf & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09187288);
    DAT_095225bf = 1;
  }
  local_50 = 0;
  local_48 = (long *)0x0;
  if (*(int *)(DAT_09187288 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = Newtonsoft_Json_Utilities_JavaScriptUtils__GetCharEscapeFlags(param_4,param_2);
  if (param_1 == 0) {
    uVar1 = 0x10;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  plVar3 = (long *)Newtonsoft_Json_Utilities_StringUtils__CreateStringWriter(uVar1,0);
  local_50 = 0;
  local_48 = plVar3;
  if (*(int *)(DAT_09187288 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Newtonsoft_Json_Utilities_JavaScriptUtils__WriteEscapedJavaScriptString
            (plVar3,param_1,param_2,param_3 & 1,uVar2,param_4,0,&local_50);
  if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = (**(code **)(*local_48 + 0x168))(local_48,*(undefined8 *)(*local_48 + 0x170));
  plVar3 = local_48;
  if (local_48 != (long *)0x0) {
    lVar5 = *local_48;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185a58) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0769685c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_48,DAT_09185a58,0);
LAB_0769685c:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return uVar2;
}

