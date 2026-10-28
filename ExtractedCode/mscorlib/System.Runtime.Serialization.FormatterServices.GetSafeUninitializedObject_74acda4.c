// rea decompile_all
// name: System.Runtime.Serialization.FormatterServices$$GetSafeUninitializedObject
// address: 0x74acda4
// body: available
// range: 0x74acda4-0x74acf63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74acf10 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74acf18 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74acf60 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_FormatterServices__GetSafeUninitializedObject(long *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((DAT_095213fc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184940);
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_095213fc = 1;
  }
  if (param_1 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_09224510);
    System_ArgumentNullException___ctor(uVar2,uVar3,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091ccf80);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar3);
  }
  lVar4 = *param_1;
  bVar1 = *(byte *)(lVar4 + 0x130);
  uVar5 = (ulong)*(byte *)(DAT_0918a400 + 0x130);
  if ((bVar1 < *(byte *)(DAT_0918a400 + 0x130)) ||
     (*(long *)(*(long *)(lVar4 + 200) + uVar5 * 8 + -8) != DAT_0918a400)) {
    uVar2 = thunk_FUN_03fc39d4(&DAT_09180318);
    uVar2 = FUN_03f5c394(uVar2,1);
    FUN_039b1d98(param_1);
    uVar3 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
    FUN_039b1d98(uVar2);
    FUN_039b0da0(uVar2,uVar3);
    FUN_039af17c(uVar2,0,uVar3);
    uVar3 = thunk_FUN_03fc39d4(&DAT_09209d70);
    uVar2 = System_Environment__GetResourceString(uVar3,uVar2,0);
    thunk_FUN_03fc39d4(&DAT_0918a948);
    uVar3 = thunk_FUN_03f9944c();
    System_Runtime_Serialization_SerializationException___ctor(uVar3,uVar2);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091ccf80);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar2);
  }
  if (*(int *)(DAT_09184940 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar4 = *param_1;
    bVar1 = *(byte *)(lVar4 + 0x130);
    uVar5 = (ulong)*(byte *)(DAT_0918a400 + 0x130);
  }
  if (((uint)uVar5 <= (uint)bVar1) &&
     (*(long *)(*(long *)(lVar4 + 200) + uVar5 * 8 + -8) == DAT_0918a400)) {
    FUN_03f69680(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c8d0(param_1);
}

