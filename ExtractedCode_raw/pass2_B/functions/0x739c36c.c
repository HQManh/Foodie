// rea decompile_all
// name: MessagePack.MessagePackStreamReader$$TryReadMoreDataAsync
// address: 0x739c36c
// body: available
// range: 0x739c36c-0x739c48b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackStreamReader__TryReadMoreDataAsync
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09520b2b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091985c0);
    FUN_03f5c2a4(&DAT_09198568);
    FUN_03f5c2a4(&DAT_091985e0);
    FUN_03f5c2a4(&DAT_091751c8);
    DAT_09520b2b = 1;
  }
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  uStack_70 = 0;
  if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_069f2d90(&local_98,DAT_091985c0);
  uStack_70 = uStack_90;
  uStack_78 = local_98;
  local_68 = local_88;
  thunk_FUN_03f5d7b8((ulong)&local_80 | 8,0);
  uStack_58 = param_1;
  thunk_FUN_03f5d7b8(&uStack_58,param_1);
  local_60 = param_2;
  thunk_FUN_03f5d7b8(&local_60,0);
  local_80 = CONCAT44(local_80._4_4_,0xffffffff);
  FUN_045d8e28((ulong)&local_80 | 8,&local_80,DAT_09198568);
  FUN_069f2da4((ulong)&local_80 | 8,DAT_091985e0);
  return;
}

