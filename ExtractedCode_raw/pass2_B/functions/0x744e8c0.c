// rea decompile_all
// name: System.Text.Encoding$$GetDataItem
// address: 0x744e8c0
// body: available
// range: 0x744e8c0-0x744e9fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x744e9f8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_Encoding__GetDataItem(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 local_24;
  
  if ((DAT_095210cd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183fd0);
    DAT_095210cd = 1;
  }
  plVar5 = (long *)(param_1 + 0x18);
  if (*plVar5 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(DAT_09183fd0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = System_Globalization_EncodingTable__GetCodePageDataItem(uVar1,0);
    *plVar5 = lVar2;
    thunk_FUN_03f5d7b8(plVar5,lVar2);
    if (*plVar5 == 0) {
      uVar3 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar3 = FUN_03f5c394(uVar3,1);
      local_24 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = FUN_03f5c42c(DAT_09535420,&local_24);
      FUN_039b1d98(uVar3);
      FUN_039b0da0(uVar3,uVar4);
      FUN_039af17c(uVar3,0,uVar4);
      uVar4 = thunk_FUN_03fc39d4(&DAT_09208a68);
      uVar3 = System_Environment__GetResourceString(uVar4,uVar3,0);
      thunk_FUN_03fc39d4(&DAT_09188920);
      uVar4 = thunk_FUN_03f9944c();
      System_NotSupportedException___ctor(uVar4,uVar3,0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091c8c88);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar3);
    }
  }
  return;
}

