// rea decompile_all
// name: FUN_03f9b184
// address: 0x3f9b184
// body: available
// range: 0x3f9b184-0x3f9b23f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f9b184(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  local_38 = 0;
  local_30 = param_1;
  uVar1 = FUN_03f9b240(DAT_09535000,&local_30,&local_38);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_03f9944c(DAT_09535008);
    uVar3 = param_1[2];
    *(undefined8 **)(lVar2 + 0x10) = param_1;
    uVar3 = FUN_03f9a678(uVar3);
    FUN_03f5ef9c(lVar2 + 0x18,uVar3);
    uVar3 = FUN_03f967b4(*param_1);
    FUN_03f5ef9c(lVar2 + 0x20,uVar3);
    uVar3 = FUN_03f967b4(*param_1);
    FUN_03f5ef9c(lVar2 + 0x28,uVar3);
    uVar3 = FUN_03f967b4(param_1[1]);
    FUN_03f5ef9c(lVar2 + 0x30,uVar3);
    local_38 = FUN_03f9b344(DAT_09535000,&local_30,lVar2);
  }
  return local_38;
}

