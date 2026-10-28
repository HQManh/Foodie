// rea decompile_all
// name: Cysharp.Threading.Tasks.CancellationTokenExtensions$$RegisterWithoutCaptureExecutionContext
// address: 0x7d897f8
// body: available
// range: 0x7d897f8-0x7d8994b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d89948 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07d8991c) */
/* WARNING: Removing unreachable block (ram,0x07d89944) */

void Cysharp_Threading_Tasks_CancellationTokenExtensions__RegisterWithoutCaptureExecutionContext
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char local_3c;
  undefined8 local_38;
  
  local_38 = param_2;
  if ((DAT_09525d14 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_09184350);
    DAT_09525d14 = 1;
  }
  local_3c = '\0';
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (*(int *)(DAT_09184350 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Threading_ExecutionContext__IsFlowSuppressed(0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(DAT_09184350 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_ExecutionContext__SuppressFlow(&local_78,0);
    local_3c = '\x01';
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Threading_CancellationToken__Register(&local_78,&local_38,param_3,param_4,0,0);
  uStack_58 = uStack_70;
  local_60 = local_78;
  local_50 = local_68;
  if (local_3c != '\0') {
    if (*(int *)(DAT_09184350 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_ExecutionContext__RestoreFlow(0);
  }
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[2] = local_50;
  return;
}

