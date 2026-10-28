// rea decompile_all
// name: System.Threading.Tasks.Task$$Finish
// address: 0x762f39c
// body: available
// range: 0x762f39c-0x762f4f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x762f444 to 0x7630f6c System.Threading.Tasks.Task$$FinishStageTwo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x762f4f0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0762f4ec) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Threading_Tasks_Task__Finish(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  char local_34 [4];
  
  if ((DAT_095221ec & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4628);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_095221ec = 1;
  }
  local_34[0] = '\0';
  if ((param_2 & 1) == 0) {
LAB_0762f430:
    System_Threading_Tasks_Task__FinishStageTwo(param_1);
    return;
  }
  lVar2 = *(long *)(param_1 + 0x48);
  thunk_FUN_03f6a5cc();
  if (lVar2 == 0) goto LAB_0762f430;
  iVar1 = *(int *)(lVar2 + 0x3c);
  thunk_FUN_03f6a5cc();
  if (iVar1 != 1) {
    thunk_FUN_03f6a5cc();
    iVar1 = FUN_03f95764((int *)(lVar2 + 0x3c));
    if (iVar1 != 0) {
      System_Threading_Tasks_Task__AtomicStateUpdate(param_1,0x800000,0x1600000);
      goto LAB_0762f450;
    }
  }
  System_Threading_Tasks_Task__FinishStageTwo(param_1);
LAB_0762f450:
  lVar2 = *(long *)(lVar2 + 0x40);
  thunk_FUN_03f6a5cc();
  if (lVar2 != 0) {
    local_34[0] = '\0';
    System_Threading_Monitor__Enter(lVar2,local_34);
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_05a1cf60(lVar2,*(undefined8 *)(*(long *)(DAT_0918b8c8 + 0xb8) + 0x38),DAT_091b4628);
    if (local_34[0] != '\0') {
      FUN_03f6a050(lVar2);
    }
  }
  return;
}

