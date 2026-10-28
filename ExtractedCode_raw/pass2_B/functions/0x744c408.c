// rea decompile_all
// name: System.Text.ValueStringBuilder$$AppendSpan
// address: 0x744c408
// body: available
// range: 0x744c408-0x744c4c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x744c494 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] System_Text_ValueStringBuilder__AppendSpan(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((DAT_095210bf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba980);
    FUN_03f5c2a4(&DAT_091ba998);
    DAT_095210bf = 1;
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)(uVar3 - param_2) < (int)uVar1) {
    System_Text_ValueStringBuilder__Grow(param_1,param_2);
    uVar3 = *(uint *)(param_1 + 0x10);
  }
  lVar2 = DAT_091ba980;
  *(uint *)(param_1 + 0x18) = uVar1 + param_2;
  if ((uVar1 <= uVar3) && (param_2 <= uVar3 - uVar1)) {
    lVar4 = *(long *)(param_1 + 8);
    if ((*(ushort *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    auVar5._8_4_ = param_2;
    auVar5._0_8_ = lVar4 + (long)(int)uVar1 * 2;
    auVar5._12_4_ = 0;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
}

