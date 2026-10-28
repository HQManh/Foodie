// rea decompile_all
// name: System.Text.ValueStringBuilder$$TryCopyTo
// address: 0x744bafc
// body: available
// range: 0x744bafc-0x744bbeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x744bb70 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Text_ValueStringBuilder__TryCopyTo
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  ulong uStack_48;
  
  if ((DAT_095210b9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba980);
    FUN_03f5c2a4(&DAT_091ba990);
    DAT_095210b9 = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  local_50 = 0;
  uStack_48 = 0;
  if (*(uint *)(param_1 + 0x10) < uVar1) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  if ((*(ushort *)(*(long *)(DAT_091ba980 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  local_50 = uVar3;
  uStack_48 = (ulong)uVar1;
  uVar1 = FUN_061092a0(&local_50,param_2,param_3,DAT_091ba990);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
  }
  *param_4 = uVar2;
  FUN_0745af54(param_1,0);
  return uVar1 & 1;
}

