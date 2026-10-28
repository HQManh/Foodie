// rea decompile_all
// name: System.Threading.Tasks.Task$$InternalWait
// address: 0x7632aac
// body: available
// range: 0x7632aac-0x7633053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07632fcc) */
/* WARNING: Removing unreachable block (ram,0x07632c20) */
/* WARNING: Removing unreachable block (ram,0x07632de4) */
/* WARNING: Removing unreachable block (ram,0x07632e64) */
/* WARNING: Removing unreachable block (ram,0x07632e24) */
/* WARNING: Removing unreachable block (ram,0x07632d90) */
/* WARNING: Removing unreachable block (ram,0x07632b74) */

byte System_Threading_Tasks_Task__InternalWait(undefined8 param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  int local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  byte local_49;
  undefined8 local_30;
  byte local_21;
  
  local_30 = param_3;
  if ((DAT_095221f6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_0918b908);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_095221f6 = 1;
  }
  local_68 = 0;
  local_6c = 0;
  bVar1 = Internal_Threading_Tasks_Tracing_TaskTrace__get_Enabled(0);
  if ((bVar1 & 1) != 0) {
    FUN_039afb80(DAT_0918b8c8);
    lVar5 = FUN_0763c9a8(0);
    if (lVar5 == 0) {
      local_7c = 0;
    }
    else {
      local_7c = 3;
    }
    if (local_7c == 0) {
      FUN_039afb80(DAT_0918b908);
      uVar6 = FUN_0763c9f8(0);
      FUN_039b1d98(uVar6);
      local_64 = System_Threading_Tasks_TaskScheduler__get_Id(uVar6);
    }
    else {
      if (local_7c != 3) {
        return local_21;
      }
      FUN_039b1d98(lVar5);
      uVar6 = *(undefined8 *)(lVar5 + 0x28);
      FUN_039b1d98(uVar6);
      local_64 = System_Threading_Tasks_TaskScheduler__get_Id(uVar6);
    }
    if (lVar5 == 0) {
      local_6c = local_64;
      local_7c = 0;
    }
    else {
      local_68 = local_64;
      local_7c = 5;
    }
    if (local_7c == 0) {
      local_70 = 0;
      local_74 = local_6c;
    }
    else {
      if (local_7c != 5) {
        return local_21;
      }
      FUN_039b1d98(lVar5);
      local_70 = System_Threading_Tasks_Task__get_Id(lVar5);
      local_74 = local_68;
    }
    uVar3 = System_Threading_Tasks_Task__get_Id(param_1);
    Internal_Threading_Tasks_Tracing_TaskTrace__TaskWaitBegin_Synchronous(local_74,local_70,uVar3,0)
    ;
  }
  local_49 = System_Threading_Tasks_Task__get_IsCompleted(param_1);
  local_49 = local_49 & 1;
  if (local_49 == 0) {
    local_7c = 0;
  }
  else {
    local_7c = 7;
  }
  if (local_7c == 0) {
    if (param_2 == -1) {
      FUN_039afb80(DAT_09182348);
      bVar1 = System_Threading_CancellationToken__get_CanBeCanceled(&local_30,0);
      if ((((bVar1 & 1) == 0) &&
          (bVar1 = System_Threading_Tasks_Task__WrappedTryRunInline(param_1), (bVar1 & 1) != 0)) &&
         (bVar1 = System_Threading_Tasks_Task__get_IsCompleted(param_1), (bVar1 & 1) != 0)) {
        bVar1 = 1;
        local_49 = 1;
        goto LAB_07632eb0;
      }
    }
    local_49 = System_Threading_Tasks_Task__SpinThenBlockingWait(param_1,param_2,local_30);
    local_49 = local_49 & 1;
    bVar1 = local_49;
  }
  else {
    bVar1 = 0;
    if (local_7c != 7) {
      return local_21;
    }
  }
LAB_07632eb0:
  bVar1 = Internal_Threading_Tasks_Tracing_TaskTrace__get_Enabled(bVar1,0);
  if ((bVar1 & 1) == 0) {
    local_7c = 9;
  }
  else {
    local_7c = 0;
  }
  if (local_7c == 0) {
    FUN_039afb80(DAT_0918b8c8);
    lVar5 = FUN_0763c9a8(0);
    if (lVar5 == 0) {
      local_7c = 10;
    }
    else {
      local_7c = 0;
    }
    if (local_7c == 0) {
      FUN_039b1d98(lVar5);
      uVar6 = *(undefined8 *)(lVar5 + 0x28);
      FUN_039b1d98(uVar6);
      uVar3 = System_Threading_Tasks_TaskScheduler__get_Id(uVar6);
      FUN_039b1d98(lVar5);
      uVar4 = System_Threading_Tasks_Task__get_Id(lVar5);
      uVar2 = System_Threading_Tasks_Task__get_Id(param_1);
      Internal_Threading_Tasks_Tracing_TaskTrace__TaskWaitEnd(uVar3,uVar4,uVar2,0);
    }
    else {
      if (local_7c != 10) {
        return local_21;
      }
      FUN_039afb80(DAT_0918b908);
      uVar6 = FUN_0763c9f8(0);
      FUN_039b1d98(uVar6);
      uVar3 = System_Threading_Tasks_TaskScheduler__get_Id(uVar6);
      uVar4 = System_Threading_Tasks_Task__get_Id(param_1);
      Internal_Threading_Tasks_Tracing_TaskTrace__TaskWaitEnd(uVar3,0,uVar4,0);
    }
  }
  else if (local_7c != 9) {
    return local_21;
  }
  return local_49;
}

