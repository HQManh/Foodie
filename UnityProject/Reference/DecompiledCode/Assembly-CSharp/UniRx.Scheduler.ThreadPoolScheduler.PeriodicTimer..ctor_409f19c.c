// rea decompile_all
// name: UniRx.Scheduler.ThreadPoolScheduler.PeriodicTimer$$.ctor
// address: 0x409f19c
// body: available
// range: 0x409f19c-0x409f39f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x409f398 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409f39c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0409f394) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UniRx_Scheduler_ThreadPoolScheduler_PeriodicTimer___ctor
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char local_5c [4];
  undefined8 local_58;
  
  if ((DAT_09515ddc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181720);
    FUN_03f5c2a4(&DAT_091a87e8);
    FUN_03f5c2a4(&DAT_091f3438);
    FUN_03f5c2a4(&DAT_09196b98);
    FUN_03f5c2a4(&DAT_0918be10);
    FUN_03f5c2a4(&DAT_0918be00);
    DAT_09515ddc = 1;
  }
  local_58 = 0;
  local_5c[0] = '\0';
  System_Object___ctor(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),param_3);
  uVar1 = thunk_FUN_03f9944c(DAT_0918be10);
  System_Threading_TimerCallback___ctor(uVar1,param_1,DAT_091f3438,0);
  uVar2 = thunk_FUN_03f9944c(DAT_0918be00);
  System_Threading_Timer___ctor(uVar2,uVar1,0,param_2,param_2,0);
  puVar3 = (undefined8 *)(param_1 + 0x18);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  uVar1 = thunk_FUN_03f9944c(DAT_09181720);
  UniRx_InternalUtil_AsyncLock___ctor(uVar1,0);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),uVar1);
  if (*(int *)(DAT_09196b98 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_5c[0] = '\0';
  local_58 = **(undefined8 **)(DAT_09196b98 + 0xb8);
  System_Threading_Monitor__Enter(local_58,local_5c,0);
  if (*(int *)(DAT_09196b98 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09196b98 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_053ec72c(**(long **)(DAT_09196b98 + 0xb8),*puVar3,DAT_091a87e8);
  if (local_5c[0] != '\0') {
    System_Threading_Monitor__Exit(local_58,0);
  }
  return;
}

