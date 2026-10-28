// rea decompile_all
// name: Newtonsoft.Json.Linq.JToken$$ToObject
// address: 0x76ef5d8
// body: available
// range: 0x76ef5d8-0x76ef7af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76ef7a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ef7a8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ef7ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076ef7a4) */

undefined8
Newtonsoft_Json_Linq_JToken__ToObject(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_09522893 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09187260);
    FUN_03f5c2a4(&DAT_09187448);
    FUN_03f5c2a4(&DAT_0921ded8);
    DAT_09522893 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_3,DAT_0921ded8,0);
  plVar1 = (long *)thunk_FUN_03f9944c(DAT_09187260);
  Newtonsoft_Json_Linq_JTokenReader___ctor(plVar1,param_1,0);
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((*(byte *)(DAT_09187448 + 0x130) <= *(byte *)(*param_3 + 0x130)) &&
     (*(long *)(*(long *)(*param_3 + 200) + (ulong)*(byte *)(DAT_09187448 + 0x130) * 8 + -8) ==
      DAT_09187448)) {
    if (param_3[0x1e] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    Newtonsoft_Json_JsonSerializer__SetupReader
              (param_3[0x1e],plVar1,&uStack_48,&local_50,&uStack_58,&local_60,&uStack_68,&local_70,0
              );
  }
  uVar2 = Newtonsoft_Json_JsonSerializer__Deserialize(param_3,plVar1,param_2,0);
  if (plVar1 != (long *)0x0) {
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185a58) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076ef774;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185a58,0);
LAB_076ef774:
    (*(code *)*puVar3)(plVar1,puVar3[1]);
  }
  return uVar2;
}

