// rea decompile_all
// name: UniRx.Scheduler.ThreadPoolScheduler.Timer$$.ctor
// address: 0x409ee0c
// body: available
// range: 0x409ee0c-0x409f0e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x409f0d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409f0e0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409f0e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0409f0dc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UniRx_Scheduler_ThreadPoolScheduler_Timer___ctor
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  char local_5c [4];
  undefined8 local_58;
  
  if ((DAT_09515dd9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09183bd8);
    FUN_03f5c2a4(&DAT_091a87e8);
    FUN_03f5c2a4(&DAT_0918ac60);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918be10);
    FUN_03f5c2a4(&DAT_091f3440);
    FUN_03f5c2a4(&DAT_091f3448);
    FUN_03f5c2a4(&DAT_0918be00);
    FUN_03f5c2a4(&DAT_09196ba0);
    DAT_09515dd9 = 1;
  }
  local_58 = 0;
  local_5c[0] = '\0';
  System_Object___ctor(param_1,0);
  lVar1 = thunk_FUN_03f9944c(DAT_0918ac60);
  UniRx_SingleAssignmentDisposable___ctor();
  plVar6 = (long *)(param_1 + 0x10);
  *plVar6 = lVar1;
  thunk_FUN_03f5d7b8(plVar6,lVar1);
  lVar1 = *plVar6;
  uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar2,param_1,DAT_091f3448,0);
  if (*(int *)(DAT_09183bd8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UniRx_Disposable__Create(uVar2);
  if (lVar1 != 0) {
    UniRx_SingleAssignmentDisposable__set_Disposable(lVar1,uVar2);
    *(undefined8 *)(param_1 + 0x18) = param_3;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),param_3);
    uVar2 = thunk_FUN_03f9944c(DAT_0918be10);
    System_Threading_TimerCallback___ctor(uVar2,param_1,DAT_091f3440,0);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_TimeSpan__FromMilliseconds(0xbff0000000000000,0);
    uVar4 = thunk_FUN_03f9944c(DAT_0918be00);
    System_Threading_Timer___ctor(uVar4,uVar2,0,param_2,uVar3,0);
    puVar5 = (undefined8 *)(param_1 + 0x20);
    *puVar5 = uVar4;
    thunk_FUN_03f5d7b8(puVar5,uVar4);
    if (*(int *)(DAT_09196ba0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_5c[0] = '\0';
    local_58 = **(undefined8 **)(DAT_09196ba0 + 0xb8);
    System_Threading_Monitor__Enter(local_58,local_5c,0);
    if (*(char *)(param_1 + 0x29) == '\0') {
      if (*(int *)(DAT_09196ba0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_09196ba0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_053ec72c(**(long **)(DAT_09196ba0 + 0xb8),*puVar5,DAT_091a87e8);
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
    if (local_5c[0] != '\0') {
      System_Threading_Monitor__Exit(local_58,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

