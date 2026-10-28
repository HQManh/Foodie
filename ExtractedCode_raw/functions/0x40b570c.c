// rea decompile_all
// name: AnhPD.FoodOrder.RecipeComponent$$SyncOrCreate
// address: 0x40b570c
// body: available
// range: 0x40b570c-0x40b5753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_RecipeComponent__SyncOrCreate(long *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  
  uVar4 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  bVar3 = (uVar4 & 1) == 0;
  lVar1 = 0x1a0;
  if (bVar3) {
    lVar1 = 400;
  }
  lVar2 = 0x198;
  if (bVar3) {
    lVar2 = 0x188;
  }
                    /* WARNING: Could not recover jumptable at 0x040b5750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar2))(param_1,*(undefined8 *)(*param_1 + lVar1));
  return;
}

