// rea decompile_all
// name: Cysharp.Threading.Tasks.IgnoreTimeScalePlayerLoopTimer$$.ctor
// address: 0x7d8f618
// body: available
// range: 0x7d8f618-0x7d8f6d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_IgnoreTimeScalePlayerLoopTimer___ctor
               (long *param_1,undefined8 param_2,uint param_3,undefined4 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_09525d62 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b74f8);
    DAT_09525d62 = 1;
  }
  Cysharp_Threading_Tasks_PlayerLoopTimer___ctor
            (param_1,param_3 & 1,param_4,param_5,param_6,param_7);
  local_60 = 0;
  uStack_58 = 0;
  FUN_05c381f8(&local_60,param_2,DAT_091b74f8);
  (**(code **)(*param_1 + 0x198))(param_1,local_60,uStack_58,*(undefined8 *)(*param_1 + 0x1a0));
  return;
}

