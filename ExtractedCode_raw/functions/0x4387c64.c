// rea decompile_all
// name: CakeOrder.InGame.CookingBotAutoRetry$$set_PickIntervalSeconds
// address: 0x4387c64
// body: available
// range: 0x4387c64-0x4387db3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_CookingBotAutoRetry__set_PickIntervalSeconds(float param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_095179bb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cc0);
    DAT_095179bb = 1;
  }
  fVar4 = 10.0;
  if (param_1 <= 10.0) {
    fVar4 = param_1;
  }
  fVar7 = 1.0;
  if (1.0 <= param_1) {
    fVar7 = fVar4;
  }
  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar4 = (float)CakeOrder_InGame_CookingBotAutoRetry__get_PickIntervalSeconds();
  if (DAT_09515cee == '\0') {
    FUN_03f5c2a4(&DAT_09187e98);
    DAT_09515cee = '\x01';
  }
  fVar5 = ABS(fVar7);
  if (ABS(fVar7) <= ABS(fVar4)) {
    fVar5 = ABS(fVar4);
  }
  fVar8 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
  fVar6 = fVar5 * 1e-06;
  if (fVar5 * 1e-06 <= fVar8) {
    fVar6 = fVar8;
  }
  if (fVar6 <= ABS(fVar4 - fVar7)) {
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = DAT_09182cc0;
    lVar2 = *(long *)(DAT_09182cc0 + 0xb8);
    lVar3 = *(long *)(lVar2 + 0x68);
    fVar7 = fVar7 - *(float *)(lVar2 + 0x3c);
    fVar4 = 0.0;
    if (0.0 <= fVar7) {
      fVar4 = fVar7;
    }
    *(float *)(lVar2 + 0x38) = fVar4;
    if (lVar3 != 0) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        FUN_03f5c424();
        fVar4 = *(float *)(*(long *)(DAT_09182cc0 + 0xb8) + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x04387da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))(fVar4,*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28))
      ;
      return;
    }
  }
  return;
}

