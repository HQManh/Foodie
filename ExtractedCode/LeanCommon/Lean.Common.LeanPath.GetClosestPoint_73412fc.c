// rea decompile_all
// name: Lean.Common.LeanPath$$GetClosestPoint
// address: 0x73412fc
// body: available
// range: 0x73412fc-0x73413cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
Lean_Common_LeanPath__GetClosestPoint
          (undefined1 param_1 [16],float param_2,float param_3,float param_4,float param_5,
          float param_6,undefined8 param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_8[4];
  fVar5 = param_8[5];
  fVar2 = param_8[3];
  fVar3 = param_6 * fVar1 - param_5 * fVar5;
  fVar4 = param_4 * fVar5 - param_6 * fVar2;
  fVar6 = param_5 * fVar2 - param_4 * fVar1;
  fVar7 = fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4;
  if (fVar7 == 0.0) {
    return param_1;
  }
  fVar8 = *param_8 - param_1._0_4_;
  fVar7 = (fVar6 * (fVar2 * (param_8[1] - param_2) - fVar1 * fVar8) +
          fVar3 * (fVar1 * (param_8[2] - param_3) - fVar5 * (param_8[1] - param_2)) +
          fVar4 * (fVar5 * fVar8 - fVar2 * (param_8[2] - param_3))) / fVar7;
  fVar1 = 1.0;
  if (fVar7 <= 1.0) {
    fVar1 = fVar7;
  }
  fVar2 = 0.0;
  if (0.0 <= fVar7) {
    fVar2 = fVar1;
  }
  return ZEXT416((uint)(param_1._0_4_ + param_4 * fVar2));
}

