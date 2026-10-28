// rea decompile_all
// name: Cysharp.Threading.Tasks.UnityAsyncExtensions$$ToUniTask
// address: 0x7daad3c
// body: available
// range: 0x7daad3c-0x7daae6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UnityAsyncExtensions__ToUniTask
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,uint param_6)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 local_34 [2];
  
  local_50 = param_2;
  local_48 = param_3;
  if ((DAT_09525edb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091959b0);
    FUN_03f5c2a4(&DAT_091bdd98);
    FUN_03f5c2a4(&DAT_091ddae8);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525edb = 1;
  }
  local_34[0] = 0;
  uVar3 = UnityEngine_Rendering_AsyncGPUReadbackRequest__get_done(&local_50,0);
  uVar1 = local_48;
  uVar4 = local_50;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(DAT_091959b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = Cysharp_Threading_Tasks_UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource__Create
                      (uVar4,uVar1,param_4,param_5,param_6 & 1,local_34);
    uVar2 = local_34[0];
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *param_1 = uVar4;
    thunk_FUN_03f5d7b8(param_1,uVar4);
    *(undefined2 *)(param_1 + 3) = uVar2;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04e122dc(&local_70,uVar4,uVar1,DAT_091ddae8);
    param_1[1] = uStack_68;
    *param_1 = local_70;
    param_1[3] = uStack_58;
    param_1[2] = uStack_60;
  }
  return;
}

