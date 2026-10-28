// rea decompile_all
// name: UniRx.InternalUtil.ThreadSafeQueueWorker$$ExecuteAll
// address: 0x418dad8
// body: available
// range: 0x418dad8-0x418dc9f inclusive
// range: 0x418dd88-0x418de63 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x418dc9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418de48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418de4c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418de50 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418de58 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418de60 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0418de5c) */
/* WARNING: Removing unreachable block (ram,0x0418dc78) */
/* WARNING: Removing unreachable block (ram,0x0418de54) */
/* WARNING: Removing unreachable block (ram,0x0418de50) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UniRx_InternalUtil_ThreadSafeQueueWorker__ExecuteAll(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 local_88;
  uint local_60;
  char local_5c [4];
  undefined8 local_58;
  
  local_58 = *(undefined8 *)(param_1 + 0x10);
  local_5c[0] = '\0';
  uVar1 = System_Threading_Monitor__Enter(local_58,local_5c,0);
  if (*(int *)(param_1 + 0x1c) == 0) {
    uVar6 = 3;
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = 1;
    uVar6 = 4;
  }
  if (local_5c[0] != '\0') {
    uVar1 = System_Threading_Monitor__Exit(local_58,0);
  }
  if ((uVar6 | 4) == 4) {
    local_60 = 0;
    if (0 < *(int *)(param_1 + 0x1c)) {
      do {
        lVar5 = *(long *)(param_1 + 0x20);
        if (lVar5 == 0) {
LAB_0418de48:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar5 + 0x18) <= local_60) {
LAB_0418de4c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar4 = *(long *)(param_1 + 0x28);
        if (lVar4 == 0) goto LAB_0418de48;
        if (*(uint *)(lVar4 + 0x18) <= local_60) goto LAB_0418de4c;
        local_88 = 0;
        lVar5 = *(long *)(lVar5 + (long)(int)local_60 * 8 + 0x20);
        uVar3 = *(undefined8 *)(lVar4 + (long)(int)local_60 * 8 + 0x20);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar1,uVar3);
        }
        (**(code **)(lVar5 + 0x18))
                  (*(undefined8 *)(lVar5 + 0x40),uVar3,*(undefined8 *)(lVar5 + 0x28));
        lVar5 = *(long *)(param_1 + 0x20);
        if (lVar5 == 0) goto LAB_0418de48;
        if (*(uint *)(lVar5 + 0x18) <= local_60) goto LAB_0418de4c;
        puVar2 = (undefined8 *)(lVar5 + (long)(int)local_60 * 8 + 0x20);
        *puVar2 = 0;
        thunk_FUN_03f5d7b8(puVar2,0);
        lVar5 = *(long *)(param_1 + 0x28);
        if (lVar5 == 0) goto LAB_0418de48;
        if (*(uint *)(lVar5 + 0x18) <= local_60) goto LAB_0418de4c;
        puVar2 = (undefined8 *)(lVar5 + (long)(int)local_60 * 8 + 0x20);
        *puVar2 = 0;
        thunk_FUN_03f5d7b8(puVar2,0);
        local_60 = local_60 + 1;
        uVar1 = local_88;
      } while ((int)local_60 < *(int *)(param_1 + 0x1c));
    }
    local_58 = *(undefined8 *)(param_1 + 0x10);
    local_5c[0] = '\0';
    System_Threading_Monitor__Enter(local_58,local_5c,0);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x38);
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x40);
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    *(undefined4 *)(param_1 + 0x30) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),uVar3);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),uVar1);
    if (local_5c[0] != '\0') {
      System_Threading_Monitor__Exit(local_58,0);
    }
  }
  return;
}

