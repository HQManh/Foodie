// rea decompile_all
// name: Cysharp.Threading.Tasks.SwitchToTaskPoolAwaitable.Awaiter$$OnCompleted
// address: 0x7d9f380
// body: available
// range: 0x7d9f380-0x7d9f507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d9f500 to 0x7638138 System.Threading.Tasks.TaskFactory$$StartNew (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7d9f504 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_SwitchToTaskPoolAwaitable_Awaiter__OnCompleted
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_09525e60 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09194d48);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_0918b908);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_09525e60 = 1;
  }
  if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_0951988a == '\0') {
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_0951988a = '\x01';
  }
  if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918b8c8);
  }
  lVar2 = *(long *)(*(long *)(DAT_0918b8c8 + 0xb8) + 0x28);
  if (*(int *)(DAT_09194d48 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = **(undefined8 **)(DAT_09194d48 + 0xb8);
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09182348);
  }
  uVar1 = System_Threading_CancellationToken__get_None(0);
  if (*(int *)(DAT_0918b908 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918b908);
  }
  if (DAT_0951988b == '\0') {
    FUN_03f5c2a4(&DAT_0918b908);
    DAT_0951988b = '\x01';
  }
  if (*(int *)(DAT_0918b908 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar2 != 0) {
    System_Threading_Tasks_TaskFactory__StartNew
              (lVar2,uVar3,param_2,uVar1,8,**(undefined8 **)(DAT_0918b908 + 0xb8),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

