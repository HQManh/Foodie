// rea decompile_all
// name: System.Threading.Tasks.Task$$TaskConstructorCore
// address: 0x762e49c
// body: available
// range: 0x762e49c-0x762e643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x762e63c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x762e640 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_Tasks_Task__TaskConstructorCore
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5,
               uint param_6,undefined8 param_7)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  
  local_48 = param_4;
  if ((DAT_095221d0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_09184350);
    DAT_095221d0 = 1;
  }
  *(undefined8 *)(param_1 + 0x18) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),param_2);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),param_3);
  *(undefined8 *)(param_1 + 0x28) = param_7;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),param_7);
  if ((param_5 & 0xffffffa0) == 0) {
    uVar1 = param_6 | param_5;
    if (*(long *)(param_1 + 0x18) == 0 || (param_6 & 0x200) != 0) {
      uVar1 = param_6 | param_5 | 0x2000000;
    }
    thunk_FUN_03f6a5cc();
    *(uint *)(param_1 + 0x38) = uVar1;
    if ((((param_5 >> 2 & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) &&
       (uVar1 = System_Threading_Tasks_Task__get_Options(), (uVar1 >> 3 & 1) == 0)) {
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_Threading_Tasks_Task__AddNewChild();
    }
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Threading_CancellationToken__get_CanBeCanceled(&local_48,0);
    if ((uVar2 & 1) != 0) {
      System_Threading_Tasks_Task__AssignCancellationToken(param_1,local_48,0,0);
    }
    if (*(int *)(DAT_09184350 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Threading_ExecutionContext__Capture(0);
    System_Threading_Tasks_Task__set_CapturedContext(param_1,uVar3);
    return;
  }
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar3 = thunk_FUN_03f9944c();
  uVar4 = thunk_FUN_03fc39d4(&DAT_09219d10);
  System_ArgumentOutOfRangeException___ctor(uVar3,uVar4,0);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091daef0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}

