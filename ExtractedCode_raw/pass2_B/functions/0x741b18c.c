// rea decompile_all
// name: Mono.Globalization.Unicode.SimpleCollator$$IsPrefix
// address: 0x741b18c
// body: available
// range: 0x741b18c-0x741b23b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x741b238 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Mono_Globalization_Unicode_SimpleCollator__IsPrefix
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
               undefined8 param_5,uint param_6)

{
  uint uVar1;
  long lVar2;
  undefined4 local_70 [4];
  undefined4 local_60 [4];
  ulong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 *puStack_38;
  undefined4 *puStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  puStack_38 = (undefined4 *)0x0;
  local_40 = 0;
  local_28 = 0;
  puStack_30 = (undefined4 *)0x0;
  uStack_48 = 0;
  local_50 = 0;
  if (param_3 != 0) {
    if (*(int *)(param_3 + 0x10) == 0) {
      uVar1 = 1;
    }
    else {
      puStack_38 = local_60;
      local_60[0] = 0;
      puStack_30 = local_70;
      lVar2 = 0;
      local_70[0] = 0;
      do {
        *(undefined1 *)((long)puStack_38 + lVar2) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar2 != 4);
      lVar2 = 0;
      do {
        *(undefined1 *)((long)puStack_30 + lVar2) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar2 != 4);
      local_50 = (ulong)param_6;
      uStack_48 = 0;
      local_40 = 0;
      local_20 = 0;
      local_28 = 0xffffffff;
      uVar1 = Mono_Globalization_Unicode_SimpleCollator__IsPrefix();
    }
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

