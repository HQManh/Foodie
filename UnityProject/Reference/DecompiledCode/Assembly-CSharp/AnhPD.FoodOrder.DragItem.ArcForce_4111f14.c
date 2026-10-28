// rea decompile_all
// name: AnhPD.FoodOrder.DragItem$$ArcForce
// address: 0x4111f14
// body: available
// range: 0x4111f14-0x4111f6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AnhPD_FoodOrder_DragItem__ArcForce
                (float param_1,float param_2,undefined1 param_3 [16],float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = ABS(param_5 - param_2);
  fVar1 = ABS(param_4 - param_1);
  if (ABS(param_4 - param_1) <= fVar2) {
    fVar1 = fVar2;
  }
  fVar1 = fVar1 * 0.35;
  fVar3 = 3.0;
  if (fVar1 <= 3.0) {
    fVar3 = fVar1;
  }
  fVar4 = 0.8;
  if (0.8 <= fVar1) {
    fVar4 = fVar3;
  }
  fVar1 = fVar4;
  if (fVar4 <= fVar2 + 0.5) {
    fVar1 = fVar2 + 0.5;
  }
  if (0.0 <= param_5 - param_2) {
    fVar1 = fVar4;
  }
  return fVar1;
}

