// rea decompile_all
// name: System.Threading.Tasks.Task$$AddTaskContinuationComplex
// address: 0x76342c0
// body: available
// range: 0x76342c0-0x7634557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x763454c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7634554 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07634550) */

undefined4
System_Threading_Tasks_Task__AddTaskContinuationComplex
          (long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  long local_78;
  char *pcStack_70;
  long **local_68;
  char local_5c [4];
  long *local_58;
  undefined8 local_50;
  long *plStack_48;
  
  if ((DAT_09522203 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b45a8);
    FUN_03f5c2a4(&DAT_0917d9c8);
    FUN_03f5c2a4(&DAT_091b45e0);
    FUN_03f5c2a4(&DAT_091b45f0);
    FUN_03f5c2a4(&DAT_091b45f8);
    FUN_03f5c2a4(&DAT_091b4600);
    FUN_03f5c2a4(&DAT_091b4608);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_09522203 = 1;
  }
  plVar4 = (long *)(param_1 + 0x40);
  plVar5 = (long *)*plVar4;
  local_58 = (long *)0x0;
  local_5c[0] = '\0';
  thunk_FUN_03f6a5cc();
  if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((plVar5 != *(long **)(*(long *)(DAT_0918b8c8 + 0xb8) + 8)) &&
     ((plVar5 == (long *)0x0 || (*plVar5 != DAT_0917d9c8)))) {
    lVar2 = thunk_FUN_03f9944c();
    FUN_05a1bf0c(lVar2,DAT_091b45a8);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_05a1c67c(lVar2,plVar5,DAT_091b45e0);
    thunk_FUN_03f6a5cc();
    local_50 = 0;
    local_78 = lVar2;
    plStack_48 = plVar5;
    FUN_03f9560c(plVar4,&local_78,&plStack_48,&local_50);
  }
  plVar5 = (long *)*plVar4;
  thunk_FUN_03f6a5cc();
  if ((plVar5 == (long *)0x0) || (*plVar5 != DAT_0917d9c8)) {
    uVar3 = 0;
  }
  else {
    pcStack_70 = local_5c;
    local_78 = 0;
    local_68 = &local_58;
    local_5c[0] = '\0';
    local_58 = plVar5;
    System_Threading_Monitor__Enter(plVar5,local_5c);
    lVar2 = *plVar4;
    thunk_FUN_03f6a5cc();
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar2 == *(long *)(*(long *)(DAT_0918b8c8 + 0xb8) + 8)) {
      uVar3 = 0;
    }
    else {
      lVar2 = plVar5[3];
      iVar1 = FUN_05a1c424(plVar5,DAT_091b4600);
      if ((int)lVar2 == iVar1) {
        if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_05a1cf60(plVar5,*(undefined8 *)(*(long *)(DAT_0918b8c8 + 0xb8) + 0x48),DAT_091b45f8);
      }
      if ((param_3 & 1) == 0) {
        FUN_05a1c67c(plVar5,param_2,DAT_091b45e0);
      }
      else {
        FUN_05a1c888(plVar5,0,param_2,DAT_091b45f0);
      }
      uVar3 = 1;
    }
    if (local_5c[0] != '\0') {
      FUN_03f6a050(*local_68);
    }
  }
  return uVar3;
}

