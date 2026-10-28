// rea decompile_all
// name: FUN_03f91ca4
// address: 0x3f91ca4
// body: available
// range: 0x3f91ca4-0x3f91dbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_03f91ca4(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  puVar3 = (undefined8 *)(*(code *)PTR_malloc_09515598)(0x20);
  lVar9 = param_1[2];
  if (lVar9 == 0) {
    plVar8 = (long *)*param_1;
  }
  else {
    plVar8 = (long *)*param_1;
    lVar10 = plVar8[2];
    if ((lVar10 != 0) && (DAT_095155d0 >> 4 <= *(ulong *)(lVar10 + 0x18))) {
      lVar6 = *plVar8;
      plVar1 = (long *)plVar8[1];
      param_1[2] = lVar9 + -1;
      *(long **)(lVar6 + 8) = plVar1;
      *plVar1 = lVar6;
      operator_delete(plVar8);
      plVar8 = operator_new(0x18);
      lVar6 = *param_1;
      lVar9 = param_1[2];
      plVar8[1] = (long)param_1;
      plVar8[2] = (long)puVar3;
      *plVar8 = 0;
      *plVar8 = lVar6;
      *(long **)(lVar6 + 8) = plVar8;
      *param_1 = (long)plVar8;
      param_1[2] = lVar9 + 1;
      puVar4 = operator_new(0x18);
      lVar9 = lVar9 + 2;
      puVar4[2] = lVar10;
      uVar7 = param_2;
      goto LAB_03f91d80;
    }
  }
  uVar7 = DAT_095155d0;
  if (DAT_095155d0 <= param_2) {
    uVar7 = param_2;
  }
  puVar4 = operator_new(0x18);
  lVar9 = lVar9 + 1;
  puVar4[2] = puVar3;
  *puVar4 = 0;
LAB_03f91d80:
  puVar2 = PTR_malloc_09515598;
  *puVar4 = plVar8;
  puVar4[1] = param_1;
  plVar8[1] = (long)puVar4;
  *param_1 = (long)puVar4;
  param_1[2] = lVar9;
  uVar5 = (*(code *)puVar2)(uVar7);
  puVar3[2] = uVar7;
  puVar3[3] = uVar7;
  *puVar3 = uVar5;
  puVar3[1] = uVar5;
  return puVar3;
}

