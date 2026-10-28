// rea decompile_all
// name: Cysharp.Threading.Tasks.IgnoreTimeScalePlayerLoopTimer$$ResetCore
// address: 0x7d8fcd8
// body: available
// range: 0x7d8fcd8-0x7d8fdd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_IgnoreTimeScalePlayerLoopTimer__ResetCore
               (long param_1,ulong param_2,undefined8 param_3)

{
  double dVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  
  local_40 = param_2;
  uStack_38 = param_3;
  if ((DAT_09525d63 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b7510);
    FUN_03f5c2a4(&DAT_091b7518);
    FUN_03f5c2a4(&DAT_091892e0);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_09525d63 = 1;
  }
  lVar2 = DAT_091892e0;
  local_28 = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = Cysharp_Threading_Tasks_PlayerLoopHelper__get_IsMainThread();
  if ((uVar4 & 1) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = UnityEngine_Time__get_frameCount(0);
  }
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  if ((param_2 & 0xff) != 0) {
    local_28 = FUN_05c38210(&local_40,DAT_091b7518);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    dVar1 = (double)System_TimeSpan__get_TotalSeconds(&local_28,0);
    *(float *)(param_1 + 0x38) = (float)dVar1;
  }
  return;
}

