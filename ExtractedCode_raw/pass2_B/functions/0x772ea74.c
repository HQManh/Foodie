// rea decompile_all
// name: PlatformServiceR1.GooglePlaySavedGameBackend$$WriteAsync
// address: 0x772ea74
// body: available
// range: 0x772ea74-0x772eb9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void PlatformServiceR1_GooglePlaySavedGameBackend__WriteAsync
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_09522a5f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199a10);
    FUN_03f5c2a4(&DAT_091998f0);
    FUN_03f5c2a4(&DAT_09199a30);
    DAT_09522a5f = 1;
  }
  local_60 = 0;
  local_d0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  thunk_FUN_03f5d7b8((ulong)&local_d0 | 8,0);
  local_b0 = param_1;
  thunk_FUN_03f5d7b8(&local_b0,param_1);
  uStack_a8 = param_2;
  thunk_FUN_03f5d7b8(&uStack_a8,param_2);
  local_88 = param_3;
  thunk_FUN_03f5d7b8(&local_88,param_3);
  local_a0 = param_4;
  uStack_98 = param_5;
  thunk_FUN_03f5d7b8(&uStack_98,param_5);
  local_d0 = CONCAT44(local_d0._4_4_,0xffffffff);
  if (*(long *)(DAT_091998f0 + 0x38) == 0) {
    FUN_03f95ac8();
  }
  PlatformServiceR1_GooglePlaySavedGameBackend_<WriteAsync>d__2__MoveNext(&local_d0);
  FUN_04285bb8((ulong)&local_d0 | 8,DAT_09199a30);
  return;
}

