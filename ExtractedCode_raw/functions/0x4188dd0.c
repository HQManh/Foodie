// rea decompile_all
// name: UniRx.Operators.TimerObservable$$.ctor
// address: 0x4188dd0
// body: available
// range: 0x4188dd0-0x4188edb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_Operators_TimerObservable___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((DAT_09516754 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b6c60);
    FUN_03f5c2a4(&DAT_091b7e60);
    FUN_03f5c2a4(&DAT_0918a698);
    DAT_09516754 = 1;
  }
  if (*(int *)(DAT_0918a698 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_05d49b0c(param_1,**(long **)(DAT_0918a698 + 0xb8) == param_6,DAT_091b7e60);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_05c2caec(&local_68,param_2,param_3,DAT_091b6c60);
  *(long *)(param_1 + 0x50) = param_6;
  *(undefined8 *)(param_1 + 0x20) = uStack_60;
  *(undefined8 *)(param_1 + 0x18) = local_68;
  *(undefined8 *)(param_1 + 0x28) = local_58;
  *(undefined8 *)(param_1 + 0x40) = param_4;
  *(undefined8 *)(param_1 + 0x48) = param_5;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x50),param_6);
  return;
}

