// rea decompile_all
// name: AllIn1SpriteShader.AllIn1Shader$$SaveMaterialWithOtherName
// address: 0x40524c0
// body: available
// range: 0x40524c0-0x405257f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AllIn1SpriteShader_AllIn1Shader__SaveMaterialWithOtherName
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  int local_34;
  
  if ((DAT_09515b17 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09214950);
    FUN_03f5c2a4(&DAT_091f9380);
    DAT_09515b17 = 1;
  }
  local_34 = param_3;
  uVar1 = System_Int32__ToString(&local_34,0);
  uVar1 = System_String__Concat(param_2,DAT_09214950,uVar1,0);
  uVar1 = System_String__Concat(uVar1,DAT_091f9380,0);
  uVar2 = System_IO_File__Exists(uVar1,0);
  if ((uVar2 & 1) != 0) {
    local_34 = local_34 + 1;
    AllIn1SpriteShader_AllIn1Shader__SaveMaterialWithOtherName(param_1,param_2);
  }
  return;
}

