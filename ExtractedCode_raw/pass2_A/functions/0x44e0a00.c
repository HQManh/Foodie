// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingStationLayout.Holder$$get_Width
// address: 0x44e0a00
// body: available
// range: 0x44e0a00-0x44e0b23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float CookOrder_Cooking_Implement_CookingStationLayout_Holder__get_Width(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_09518359 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9820);
    FUN_03f5c2a4(&DAT_09178710);
    FUN_03f5c2a4(&DAT_091f2950);
    FUN_03f5c2a4(&DAT_091964e0);
    DAT_09518359 = 1;
  }
  fVar8 = *(float *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x30) == '\0') {
    fVar7 = 1.0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(DAT_091964e0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar3 = *(undefined8 **)(DAT_091964e0 + 0xb8);
    lVar5 = puVar3[1];
    if (lVar5 == 0) {
      if (*(int *)(DAT_091964e0 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar3 = *(undefined8 **)(DAT_091964e0 + 0xb8);
      }
      uVar6 = *puVar3;
      lVar5 = thunk_FUN_03f9944c(DAT_09178710);
      FUN_05322d94(lVar5,uVar6,DAT_091f2950,0);
      plVar2 = (long *)(*(long *)(DAT_091964e0 + 0xb8) + 8);
      *plVar2 = lVar5;
      thunk_FUN_03f5d7b8(plVar2,lVar5);
    }
    iVar1 = FUN_04adc4d0(uVar4,lVar5,DAT_091c9820);
    fVar7 = (float)iVar1;
  }
  return fVar8 * fVar7;
}

