// rea decompile_all
// name: FUN_03fc94a4
// address: 0x3fc94a4
// body: available
// range: 0x3fc94a4-0x3fc957b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_03fc94a4(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  
  uVar4 = *param_2;
  uVar3 = *param_1;
  uVar6 = *param_3;
  if (uVar4 < uVar3) {
    if (uVar6 < uVar4) {
      puVar1 = param_1 + 1;
      *param_1 = uVar6;
      *param_3 = uVar3;
      uVar2 = 1;
    }
    else {
      *param_1 = uVar4;
      *param_2 = uVar3;
      puVar1 = param_2 + 1;
      uVar3 = param_1[1];
      param_1[1] = *puVar1;
      *puVar1 = uVar3;
      uVar3 = *param_2;
      if (uVar3 <= *param_3) {
        return 1;
      }
      *param_2 = *param_3;
      uVar2 = 2;
      *param_3 = uVar3;
    }
    puVar5 = param_3 + 1;
  }
  else {
    if (uVar4 <= uVar6) {
      return 0;
    }
    *param_2 = uVar6;
    *param_3 = uVar4;
    puVar5 = param_2 + 1;
    uVar3 = *puVar5;
    *puVar5 = param_3[1];
    param_3[1] = uVar3;
    uVar3 = *param_1;
    if (uVar3 <= *param_2) {
      return 1;
    }
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
    uVar2 = 2;
    *param_2 = uVar3;
  }
  uVar3 = *puVar1;
  *puVar1 = *puVar5;
  *puVar5 = uVar3;
  return uVar2;
}

