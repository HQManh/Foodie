// rea decompile_all
// name: Newtonsoft.Json.JsonSerializer$$ResetReader
// address: 0x764b60c
// body: available
// range: 0x764b60c-0x764b81b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x764b814 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x764b818 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonSerializer__ResetReader
               (long param_1,long *param_2,long param_3,ulong param_4,ulong param_5,ulong param_6,
               undefined8 param_7,long param_8)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if ((DAT_09522345 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183878);
    FUN_03f5c2a4(&DAT_09187460);
    FUN_03f5c2a4(&DAT_091b6c28);
    FUN_03f5c2a4(&DAT_091b6df0);
    FUN_03f5c2a4(&DAT_091b6c90);
    FUN_03f5c2a4(&DAT_091b6df8);
    FUN_03f5c2a4(&DAT_091b6c98);
    FUN_03f5c2a4(&DAT_091b6c30);
    DAT_09522345 = 1;
  }
  if (param_3 != 0) {
    if (param_2 == (long *)0x0) goto LAB_0764b818;
    param_2[8] = param_3;
    thunk_FUN_03f5d7b8(param_2 + 8,param_3);
  }
  if ((param_4 & 0xff) != 0) {
    if (param_2 == (long *)0x0) goto LAB_0764b818;
    Newtonsoft_Json_JsonReader__set_DateTimeZoneHandling(param_2,param_4 >> 0x20);
  }
  if ((param_5 & 0xff) != 0) {
    if (param_2 == (long *)0x0) goto LAB_0764b818;
    Newtonsoft_Json_JsonReader__set_DateParseHandling(param_2,param_5 >> 0x20);
  }
  if ((param_6 & 0xff) != 0) {
    if (param_2 == (long *)0x0) goto LAB_0764b818;
    Newtonsoft_Json_JsonReader__set_FloatParseHandling(param_2,param_6 >> 0x20);
  }
  if (*(char *)(param_1 + 0xc0) != '\0') {
    if (param_2 == (long *)0x0) goto LAB_0764b818;
    Newtonsoft_Json_JsonReader__set_MaxDepth(param_2,param_7);
  }
  if (*(char *)(param_1 + 0xd0) == '\0') {
    if (param_2 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 == (long *)0x0) {
LAB_0764b818:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    param_2[0xc] = param_8;
    thunk_FUN_03f5d7b8(param_2 + 0xc,param_8);
  }
  if ((*(byte *)(DAT_09187460 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187460 + 0x130) * 8 + -8) ==
      DAT_09187460)) {
    param_2 = param_2 + 0x19;
    lVar3 = *param_2;
    if ((lVar3 != 0) && (plVar1 = *(long **)(param_1 + 0x40), plVar1 != (long *)0x0)) {
      lVar2 = *plVar1;
      if (((*(byte *)(DAT_09183878 + 0x130) <= *(byte *)(lVar2 + 0x130)) &&
          (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(DAT_09183878 + 0x130) * 8 + -8) ==
           DAT_09183878)) &&
         (lVar2 = (**(code **)(lVar2 + 0x278))(plVar1,*(undefined8 *)(lVar2 + 0x280)),
         lVar3 == lVar2)) {
        *param_2 = 0;
        thunk_FUN_03f5d7b8(param_2,0);
        return;
      }
    }
  }
  return;
}

