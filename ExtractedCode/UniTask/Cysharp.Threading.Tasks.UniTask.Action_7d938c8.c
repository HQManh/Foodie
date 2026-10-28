// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask$$Action
// address: 0x7d938c8
// body: available
// range: 0x7d938c8-0x7d93997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d93994 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Cysharp_Threading_Tasks_UniTask__Action(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_09525d8f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091f1ed8);
    FUN_03f5c2a4(&DAT_091958c8);
    DAT_09525d8f = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091958c8);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),param_1);
    *(undefined8 *)(lVar1 + 0x18) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x18),0);
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar2,lVar1,DAT_091f1ed8,0);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

