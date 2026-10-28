// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask$$RunOnThreadPool
// address: 0x7d93fb8
// body: available
// range: 0x7d93fb8-0x7d94083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UniTask__RunOnThreadPool
               (undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulong local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_09525d9a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c26f8);
    DAT_09525d9a = 1;
  }
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  thunk_FUN_03f5d7b8((ulong)&local_90 | 8,0);
  uStack_68 = param_1;
  thunk_FUN_03f5d7b8(&uStack_68,param_1);
  local_70 = CONCAT71(local_70._1_7_,param_2) & 0xffffffffffffff01;
  local_78 = param_3;
  thunk_FUN_03f5d7b8(&local_78,0);
  local_90 = CONCAT44(local_90._4_4_,0xffffffff);
  if (*(long *)(DAT_091c26f8 + 0x38) == 0) {
    FUN_03f95ac8();
  }
  Cysharp_Threading_Tasks_UniTask_<RunOnThreadPool>d__84__MoveNext(&local_90);
  FUN_0412600c((ulong)&local_90 | 8,0);
  return;
}

