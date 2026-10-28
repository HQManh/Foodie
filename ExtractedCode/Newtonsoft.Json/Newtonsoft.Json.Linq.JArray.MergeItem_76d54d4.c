// rea decompile_all
// name: Newtonsoft.Json.Linq.JArray$$MergeItem
// address: 0x76d54d4
// body: available
// range: 0x76d54d4-0x76d55bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76d5568 to 0x76d6620 Newtonsoft.Json.Linq.JContainer$$MergeEnumerableContent (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76d55bc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JArray__MergeItem(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((DAT_09522780 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185b08);
    FUN_03f5c2a4(&DAT_09187200);
    DAT_09522780 = 1;
  }
  uVar2 = Newtonsoft_Json_Linq_JContainer__IsMultiContent(param_1,param_2,0);
  uVar1 = DAT_09185b08;
  if ((uVar2 & 1) == 0) {
    if (param_2 != (long *)0x0) {
      if ((*(byte *)(DAT_09187200 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187200 + 0x130) * 8 + -8) ==
          DAT_09187200)) goto LAB_076d5530;
    }
  }
  else if (param_2 != (long *)0x0) {
LAB_076d5530:
    lVar3 = thunk_FUN_03f99350(param_2,DAT_09185b08);
    if (lVar3 != 0) {
      Newtonsoft_Json_Linq_JContainer__MergeEnumerableContent(param_1,lVar3,param_3,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_2,uVar1);
  }
  return;
}

