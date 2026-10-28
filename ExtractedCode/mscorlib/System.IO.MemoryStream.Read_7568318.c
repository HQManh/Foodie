// rea decompile_all
// name: System.IO.MemoryStream$$Read
// address: 0x7568318
// body: available
// range: 0x7568318-0x7568493 inclusive
// range: 0x756849c-0x75684e7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7568408 to 0x75760b0 System.IO.Stream$$Read (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7568470 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7568490 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_IO_MemoryStream__Read(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long local_50;
  ulong local_48;
  
  if ((DAT_095219f7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091723b8);
    FUN_03f5c2a4(&DAT_091ba900);
    FUN_03f5c2a4(&DAT_091ba8f0);
    FUN_03f5c2a4(&DAT_091ba928);
    DAT_095219f7 = 1;
  }
  local_50 = 0;
  local_48 = 0;
  uVar5 = System_Object__GetType(param_1,0);
  uVar6 = DAT_091723b8;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
  uVar7 = System_Type__op_Inequality(uVar5,uVar6,0);
  if ((uVar7 & 1) != 0) {
    uVar7 = System_IO_Stream__Read(param_1,param_2,param_3,0);
    return uVar7;
  }
  System_IO_MemoryStream__EnsureNotClosed(param_1);
  iVar1 = *(int *)(param_1 + 0x34);
  iVar2 = *(int *)(param_1 + 0x38);
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Math__Min(iVar2 - iVar1,param_3 & 0xffffffff,0);
  if ((int)uVar4 < 1) {
    uVar7 = 0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x28);
    uVar7 = (ulong)uVar4;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    uVar3 = *(uint *)(param_1 + 0x34);
    if ((*(uint *)(lVar8 + 0x18) < uVar3) || (*(uint *)(lVar8 + 0x18) - uVar3 < uVar4)) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    local_50 = lVar8 + (int)uVar3 + 0x20;
    local_48 = (ulong)uVar4;
    FUN_06108408(&local_50,param_2,param_3,DAT_091ba900);
    *(uint *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + uVar4;
  }
  return uVar7;
}

