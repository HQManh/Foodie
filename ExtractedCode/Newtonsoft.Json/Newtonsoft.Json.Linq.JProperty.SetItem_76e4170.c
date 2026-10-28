// rea decompile_all
// name: Newtonsoft.Json.Linq.JProperty$$SetItem
// address: 0x76e4170
// body: available
// range: 0x76e4170-0x76e42b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76e4264 to 0x76e0790 Newtonsoft.Json.Linq.JObject$$InternalPropertyChanged (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76e4278 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e42ac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e42b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JProperty__SetItem(long param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_09522809 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187220);
    DAT_09522809 = 1;
  }
  if (param_2 != 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar3 = thunk_FUN_03f9944c();
    System_ArgumentOutOfRangeException___ctor(uVar3,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091d1370);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar4);
  }
  if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = Newtonsoft_Json_Linq_JContainer__IsTokenUnchanged
                    (*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10),param_3);
  if ((uVar1 & 1) == 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    if (plVar2 != (long *)0x0) {
      lVar5 = *plVar2;
      if ((*(byte *)(lVar5 + 0x130) < *(byte *)(DAT_09187220 + 0x130)) ||
         (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(DAT_09187220 + 0x130) * 8 + -8) !=
          DAT_09187220)) goto LAB_076e4278;
      (**(code **)(lVar5 + 0x918))
                (plVar2,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(lVar5 + 0x920));
    }
    Newtonsoft_Json_Linq_JContainer__SetItem(param_1,0,param_3);
    plVar2 = *(long **)(param_1 + 0x10);
    if (plVar2 != (long *)0x0) {
      if ((*(byte *)(DAT_09187220 + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_09187220 + 0x130) * 8 + -8) ==
          DAT_09187220)) {
        Newtonsoft_Json_Linq_JObject__InternalPropertyChanged(plVar2,param_1);
        return;
      }
LAB_076e4278:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0();
    }
  }
  return;
}

