// rea decompile_all
// name: System.Threading.Tasks.Task$$GetExceptionDispatchInfos
// address: 0x7630c48
// body: available
// range: 0x7630c48-0x7630d67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7630cc8 to 0x7630d68 System.Threading.Tasks.TaskExceptionHolder$$GetExceptionDispatchInfos (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7630d64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Threading_Tasks_Task__GetExceptionDispatchInfos(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_095221ea & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c01b8);
    FUN_03f5c2a4(&DAT_091b9530);
    FUN_03f5c2a4(&DAT_0917e500);
    DAT_095221ea = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  thunk_FUN_03f6a5cc();
  if (((uVar1 >> 0x15 & 1) != 0) &&
     (uVar2 = System_Threading_Tasks_Task__get_ExceptionRecorded(param_1), (uVar2 & 1) != 0)) {
    lVar5 = *(long *)(param_1 + 0x48);
    thunk_FUN_03f6a5cc();
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x20);
      thunk_FUN_03f6a5cc();
      if (lVar5 != 0) {
        uVar3 = System_Threading_Tasks_TaskExceptionHolder__GetExceptionDispatchInfos(lVar5);
        return uVar3;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = DAT_091c01b8;
  lVar4 = *(long *)(DAT_091c01b8 + 0x38);
  if (lVar4 == 0) {
    FUN_03f95ac8(DAT_091c01b8);
    lVar4 = *(long *)(lVar5 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  uVar6 = **(undefined8 **)(lVar5 + 0xb8);
  uVar3 = thunk_FUN_03f9944c(DAT_0917e500);
  FUN_05f07778(uVar3,uVar6,DAT_091b9530);
  return uVar3;
}

