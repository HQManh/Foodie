// rea decompile_all
// name: FUN_03fd3a5c
// address: 0x3fd3a5c
// body: available
// range: 0x3fd3a5c-0x3fd3b47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd3a5c(undefined4 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  
  if (0 < DAT_0974876c) {
    lVar2 = 0;
    puVar4 = &DAT_096fc0d0;
    do {
      FUN_03fd4d04(puVar4[-1],*puVar4,param_1);
      lVar2 = lVar2 + 1;
      puVar4 = puVar4 + 4;
    } while (lVar2 < DAT_0974876c);
  }
  uVar3 = (ulong)DAT_09515690;
  if (DAT_09515690 != 0) {
    uVar1 = 0;
    ppuVar5 = &PTR_DAT_095156e0;
    do {
      lVar2 = FUN_03fcaf44(*ppuVar5);
      if (lVar2 != 0) {
        FUN_03fd158c();
        uVar3 = (ulong)DAT_09515690;
      }
      uVar1 = uVar1 + 1;
      ppuVar5 = ppuVar5 + 4;
    } while (uVar1 < uVar3);
  }
  if ((DAT_09748768 != 0) || (DAT_09748778 != '\0')) {
    FUN_03fd4dec();
  }
  FUN_03fd4e20(&DAT_03fd4dc0,param_2);
  if (PTR_LAB_095158e0 != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03fd3b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_LAB_095158e0)();
    return;
  }
  return;
}

