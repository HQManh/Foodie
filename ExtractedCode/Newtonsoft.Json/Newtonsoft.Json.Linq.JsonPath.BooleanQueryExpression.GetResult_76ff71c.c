// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.BooleanQueryExpression$$GetResult
// address: 0x76ff71c
// body: available
// range: 0x76ff71c-0x76ff8f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76ff8dc to 0x76ff150 Newtonsoft.Json.Linq.JsonPath.JPath$$Evaluate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76ff8e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ff8ec to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ff8f0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Newtonsoft_Json_Linq_JsonPath_BooleanQueryExpression__GetResult
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_09522934 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4ee0);
    FUN_03f5c2a4(&DAT_09187228);
    FUN_03f5c2a4(&DAT_091801f8);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_0917c8c0);
    DAT_09522934 = 1;
  }
  lVar1 = DAT_091c4ee0;
  if (param_4 != (long *)0x0) {
    lVar4 = *param_4;
    if ((*(byte *)(DAT_09187250 + 0x130) <= *(byte *)(lVar4 + 0x130)) &&
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_09187250 + 0x130) * 8 + -8) ==
        DAT_09187250)) {
      plVar2 = (long *)FUN_03f5c394(DAT_091801f8,1);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar1 = thunk_FUN_03f99350(param_4,*(undefined8 *)(*plVar2 + 0x40));
      if (lVar1 != 0) {
        if ((int)plVar2[3] != 0) {
          plVar2[4] = (long)param_4;
          thunk_FUN_03f5d7b8(plVar2 + 4,param_4);
          return plVar2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,0);
    }
    if ((*(byte *)(DAT_0917c8c0 + 0x130) <= *(byte *)(lVar4 + 0x130)) &&
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_0917c8c0 + 0x130) * 8 + -8) ==
        DAT_0917c8c0)) {
      if (*(int *)(DAT_09187228 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar2 = (long *)Newtonsoft_Json_Linq_JsonPath_JPath__Evaluate(param_4,param_2,param_3,0);
      return plVar2;
    }
  }
  lVar4 = *(long *)(DAT_091c4ee0 + 0x38);
  if (lVar4 == 0) {
    FUN_03f95ac8(DAT_091c4ee0);
    lVar4 = *(long *)(lVar1 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  return (long *)**(undefined8 **)(lVar1 + 0xb8);
}

