// rea decompile_all
// name: MessagePack.Internal.StringArraySegmentByteAscymmetricEqualityComparer$$Equals
// address: 0x73b0f60
// body: available
// range: 0x73b0f60-0x73b101f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b101c to 0x73b6160 FUN_073b6160 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_StringArraySegmentByteAscymmetricEqualityComparer__Equals
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_09520bd9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d2eb0);
    FUN_03f5c2a4(&DAT_091d2f70);
    FUN_03f5c2a4(&DAT_091b97a0);
    DAT_09520bd9 = 1;
  }
  if (*(long *)(DAT_091d2eb0 + 0x38) == 0) {
    FUN_03f95ac8();
  }
  if (param_2 == 0) {
    uVar1 = 0;
    param_2 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    param_2 = param_2 + 0x20;
  }
  auVar2 = FUN_05ff6160(param_3,param_4,DAT_091b97a0);
  FUN_073b6160(param_2,uVar1,auVar2._0_8_,auVar2._8_8_,DAT_091d2f70);
  return;
}

