// rea decompile_all
// name: System.Threading.Tasks.AwaitTaskContinuation$$get_IsValidLocationForInlining
// address: 0x7637160
// body: available
// range: 0x7637160-0x7637283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Threading_Tasks_AwaitTaskContinuation__get_IsValidLocationForInlining(void)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if ((DAT_0952222c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09173058);
    FUN_03f5c2a4(&DAT_0918b908);
    DAT_0952222c = 1;
  }
  lVar2 = System_Threading_SynchronizationContext__get_Current();
  if (lVar2 != 0) {
    uVar3 = System_Object__GetType(lVar2,0);
    uVar4 = DAT_09173058;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
    uVar5 = System_Type__op_Inequality(uVar3,uVar4,0);
    if ((uVar5 & 1) != 0) {
      return false;
    }
  }
  if (*(int *)(DAT_0918b908 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = System_Threading_Tasks_TaskScheduler__get_InternalCurrent();
  if (lVar2 == 0) {
    bVar1 = true;
  }
  else {
    if (*(int *)(DAT_0918b908 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_0951988b == '\0') {
      FUN_03f5c2a4(&DAT_0918b908);
      DAT_0951988b = '\x01';
    }
    if (*(int *)(DAT_0918b908 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    bVar1 = lVar2 == **(long **)(DAT_0918b908 + 0xb8);
  }
  return bVar1;
}

