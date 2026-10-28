// rea decompile_all
// name: FUN_073b57f8
// address: 0x73b57f8
// body: available
// range: 0x73b57f8-0x73b58ff inclusive
// range: 0x73b5904-0x73b594f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b587c to 0x7381fac MessagePack.BufferWriter$$WriteMultiBuffer (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73b58fc to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b594c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_073b57f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = param_2;
  local_38 = param_3;
  if (DAT_09520c0b == '\0') {
    FUN_03f5c2a4(&DAT_091b9760);
    FUN_03f5c2a4(&DAT_091b9798);
    FUN_03f5c2a4(&DAT_091ba928);
    DAT_09520c0b = '\x01';
  }
  if (*(int *)(param_1 + 0x10) < (int)param_3) {
    MessagePack_BufferWriter__WriteMultiBuffer(param_1,param_2,param_3,0);
    return;
  }
  FUN_05ff5c28(&local_40,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),DAT_091b9760);
  uVar2 = (uint)local_38;
  lVar4 = (long)(int)(uint)local_38;
  if (DAT_09516fa7 == '\0') {
    FUN_03f5c2a4(&DAT_091c4240);
    FUN_03f5c2a4(&DAT_091ba910);
    DAT_09516fa7 = '\x01';
  }
  lVar5 = lVar4 + *(int *)(param_1 + 0x28);
  if (lVar5 == (int)lVar5) {
    uVar1 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + uVar2;
    if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    lVar5 = *(long *)(param_1 + 8);
    if ((*(ushort *)(*(long *)(DAT_091ba910 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    *(long *)(param_1 + 8) = lVar5 + lVar4;
    *(ulong *)(param_1 + 0x10) = (ulong)(uVar1 - uVar2);
    return;
  }
  uVar3 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,DAT_091c4240);
}

