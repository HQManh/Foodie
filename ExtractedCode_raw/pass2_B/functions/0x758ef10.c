// rea decompile_all
// name: System.IO.Path.<>c$$<JoinInternal>b__57_0
// address: 0x758ef10
// body: available
// range: 0x758ef10-0x758f09f inclusive
// range: 0x758f0a4-0x758f107 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x758efa0 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758f000 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758f030 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758f09c to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758f0bc to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758f104 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_Path_<>c__<JoinInternal>b__57_0
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 local_60;
  ulong local_58;
  
  if ((DAT_09521b56 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba960);
    FUN_03f5c2a4(&DAT_091ba978);
    FUN_03f5c2a4(&DAT_091ba950);
    FUN_03f5c2a4(&DAT_091ba998);
    DAT_09521b56 = 1;
  }
  local_60 = 0;
  local_58 = 0;
  uVar2 = System_IntPtr__op_Explicit(*param_4,0);
  if ((int)*(uint *)(param_4 + 1) < 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  }
  local_58 = (ulong)*(uint *)(param_4 + 1);
  local_60 = uVar2;
  FUN_06109210(&local_60,param_2,param_3,DAT_091ba960);
  uVar3 = (uint)param_3;
  if ((*(byte *)((long)param_4 + 0x2c) & 1) == 0) {
    if (uVar3 <= *(uint *)(param_4 + 1)) goto LAB_0758f104;
    *(undefined2 *)(param_2 + (long)(int)*(uint *)(param_4 + 1) * 2) = 0x2f;
  }
  uVar2 = System_IntPtr__op_Explicit(param_4[2],0);
  if ((int)*(uint *)(param_4 + 3) < 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  }
  local_58 = (ulong)*(uint *)(param_4 + 3);
  uVar1 = *(int *)(param_4 + 1) + ((*(byte *)((long)param_4 + 0x2c) ^ 0xffffffff) & 1);
  local_60 = uVar2;
  if (uVar3 < uVar1) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  }
  if ((*(ushort *)(*(long *)(DAT_091ba978 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  FUN_06109210(&local_60,param_2 + (long)(int)uVar1 * 2,uVar3 - uVar1,DAT_091ba960);
  if ((*(byte *)((long)param_4 + 0x2d) & 1) == 0) {
    if (!CARRY4(uVar3,~*(uint *)(param_4 + 5))) {
LAB_0758f104:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined2 *)(param_2 + (long)(int)(uVar3 + ~*(uint *)(param_4 + 5)) * 2) = 0x2f;
  }
  uVar2 = System_IntPtr__op_Explicit(param_4[4],0);
  uVar1 = *(uint *)(param_4 + 5);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  }
  local_58 = (ulong)uVar1;
  local_60 = uVar2;
  if (uVar3 < uVar1) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  }
  if ((*(ushort *)(*(long *)(DAT_091ba978 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  FUN_06109210(&local_60,param_2 + (long)(int)(uVar3 - uVar1) * 2,uVar1,DAT_091ba960);
  return;
}

