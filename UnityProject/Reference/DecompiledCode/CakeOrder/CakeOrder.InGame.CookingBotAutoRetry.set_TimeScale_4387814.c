// rea decompile_all
// name: CakeOrder.InGame.CookingBotAutoRetry$$set_TimeScale
// address: 0x4387814
// body: available
// range: 0x4387814-0x438793b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4387928 to 0x438793c CakeOrder.InGame.CookingBotAutoRetry$$ApplyTimeScale (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_CookingBotAutoRetry__set_TimeScale(float param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_095179b6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cc0);
    DAT_095179b6 = 1;
  }
  fVar7 = 5.0;
  if (param_1 <= 5.0) {
    fVar7 = param_1;
  }
  fVar6 = 1.0;
  if (1.0 <= param_1) {
    fVar6 = fVar7;
  }
  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar7 = *(float *)(*(long *)(DAT_09182cc0 + 0xb8) + 0x2c);
  if (DAT_09515cee == '\0') {
    FUN_03f5c2a4(&DAT_09187e98);
    DAT_09515cee = '\x01';
  }
  fVar4 = ABS(fVar7);
  fVar3 = ABS(fVar6);
  if (ABS(fVar6) <= fVar4) {
    fVar3 = fVar4;
  }
  fVar5 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
  fVar4 = fVar3 * 1e-06;
  if (fVar3 * 1e-06 <= fVar5) {
    fVar4 = fVar5;
  }
  if (fVar4 <= ABS(fVar7 - fVar6)) {
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = DAT_09182cc0;
    lVar2 = *(long *)(DAT_09182cc0 + 0xb8);
    *(float *)(lVar2 + 0x2c) = fVar6;
    if (*(char *)(lVar2 + 0x30) != '\0') {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      CakeOrder_InGame_CookingBotAutoRetry__ApplyTimeScale();
      return;
    }
  }
  return;
}

