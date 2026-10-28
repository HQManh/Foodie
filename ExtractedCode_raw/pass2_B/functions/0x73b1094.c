// rea decompile_all
// name: MessagePack.Internal.StringArraySegmentByteAscymmetricEqualityComparer$$GetHashCode
// address: 0x73b1094
// body: available
// range: 0x73b1094-0x73b120b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_StringArraySegmentByteAscymmetricEqualityComparer__GetHashCode
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09520bdb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b97a0);
    FUN_03f5c2a4(&DAT_0918b340);
    DAT_09520bdb = 1;
  }
  if (*(int *)(DAT_0918b340 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  cVar1 = **(char **)(DAT_0918b340 + 0xb8);
  auVar3 = FUN_05ff6160(param_2,param_3,DAT_091b97a0);
  local_40 = auVar3;
  if (cVar1 == '\0') {
    if (DAT_09520c11 == '\0') {
      FUN_03f5c2a4(&DAT_091cc150);
      FUN_03f5c2a4(&DAT_091b9768);
      FUN_03f5c2a4(&DAT_091b9798);
      DAT_09520c11 = '\x01';
    }
    uVar2 = FUN_05ff5c10(local_40,DAT_091b9768);
    FUN_073b6b44(uVar2,local_40._8_8_ & 0xffffffff,0);
  }
  else {
    if (DAT_09520c0f == '\0') {
      FUN_03f5c2a4(&DAT_091cc148);
      FUN_03f5c2a4(&DAT_091b9768);
      FUN_03f5c2a4(&DAT_091b9798);
      DAT_09520c0f = '\x01';
    }
    if (auVar3._8_4_ < 5) {
      FUN_073b6370(auVar3._0_8_,auVar3._8_8_,0);
    }
    else {
      uVar2 = FUN_05ff5c10(local_40,DAT_091b9768);
      FUN_073b6480(uVar2,local_40._8_8_ & 0xffffffff,0);
    }
  }
  return;
}

