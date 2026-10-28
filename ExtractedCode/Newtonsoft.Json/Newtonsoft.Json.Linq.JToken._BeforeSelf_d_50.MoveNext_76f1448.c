// rea decompile_all
// name: Newtonsoft.Json.Linq.JToken.<BeforeSelf>d__50$$MoveNext
// address: 0x76f1448
// body: available
// range: 0x76f1448-0x76f1507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76f1504 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_Linq_JToken_<BeforeSelf>d__50__MoveNext(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar3 = *(long *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) goto LAB_076f1504;
    *(long *)(param_1 + 0x30) = *(long *)(lVar3 + 0x20);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
LAB_076f1504:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar1 = *(long **)(lVar4 + 0x10);
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    uVar2 = (**(code **)(*plVar1 + 0x278))(plVar1,*(undefined8 *)(*plVar1 + 0x280));
    *(undefined8 *)(param_1 + 0x30) = uVar2;
  }
  thunk_FUN_03f5d7b8();
  plVar1 = (long *)(param_1 + 0x30);
  lVar3 = *plVar1;
  if ((lVar3 != lVar4) && (lVar3 != 0)) {
    *(long *)(param_1 + 0x18) = lVar3;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  *plVar1 = 0;
  thunk_FUN_03f5d7b8(plVar1,0);
  return 0;
}

