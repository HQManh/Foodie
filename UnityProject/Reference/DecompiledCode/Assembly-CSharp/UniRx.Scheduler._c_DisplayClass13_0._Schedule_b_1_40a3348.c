// rea decompile_all
// name: UniRx.Scheduler.<>c__DisplayClass13_0$$<Schedule>b__1
// address: 0x40a3348
// body: available
// range: 0x40a3348-0x40a350f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40a3500 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40a3508 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40a350c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040a3504) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UniRx_Scheduler_<>c__DisplayClass13_0__<Schedule>b__1
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char local_5c [4];
  undefined8 local_58;
  
  if ((DAT_09515e0f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_0918a698);
    FUN_03f5c2a4(&DAT_091ef8e0);
    FUN_03f5c2a4(&DAT_09194280);
    DAT_09515e0f = 1;
  }
  local_58 = 0;
  local_5c[0] = '\0';
  lVar1 = thunk_FUN_03f9944c(DAT_09194280);
  System_Object___ctor(lVar1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(long *)(lVar1 + 0x28) = param_1;
  thunk_FUN_03f5d7b8((long *)(lVar1 + 0x28),param_1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  puVar3 = (undefined8 *)(lVar1 + 0x18);
  *puVar3 = 0;
  *(undefined1 *)(lVar1 + 0x20) = 0;
  thunk_FUN_03f5d7b8(puVar3,0);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar2,lVar1,DAT_091ef8e0,0);
  if (*(int *)(DAT_0918a698 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UniRx_Scheduler__Schedule(uVar4,param_2,param_3,uVar2);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  local_58 = *(undefined8 *)(param_1 + 0x20);
  local_5c[0] = '\0';
  System_Threading_Monitor__Enter(local_58,local_5c,0);
  if (*(char *)(lVar1 + 0x20) == '\0') {
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UniRx_CompositeDisposable__Add(*(long *)(param_1 + 0x28),*puVar3);
    *(undefined1 *)(lVar1 + 0x10) = 1;
  }
  if (local_5c[0] != '\0') {
    System_Threading_Monitor__Exit(local_58,0);
  }
  return;
}

