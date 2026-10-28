// rea decompile_all
// name: Utilities.StringExtension$$NumberToKMBFormat
// address: 0x44fb18c
// body: available
// range: 0x44fb18c-0x44fb533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_StringExtension__NumberToKMBFormat(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  double local_30;
  long local_28;
  
  local_28 = param_1;
  if ((DAT_09518467 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09226fc8);
    FUN_03f5c2a4(&DAT_0921df28);
    FUN_03f5c2a4(&DAT_09226f80);
    FUN_03f5c2a4(&DAT_09217cf8);
    FUN_03f5c2a4(&DAT_091f9618);
    FUN_03f5c2a4(&DAT_09226f98);
    FUN_03f5c2a4(&DAT_092270a8);
    FUN_03f5c2a4(&DAT_09226fb0);
    FUN_03f5c2a4(&DAT_0921ecb0);
    FUN_03f5c2a4(&DAT_09227090);
    FUN_03f5c2a4(&DAT_09227078);
    DAT_09518467 = 1;
  }
  local_30 = 0.0;
  if (param_2 - 0x28U < 2) {
    if (99999999 < param_1) {
      local_30 = (double)param_1 / 100000000.0;
      uVar1 = System_Double__ToString(&local_30,DAT_091f9618,0);
      puVar2 = &DAT_09226f98;
      goto LAB_044fb518;
    }
  }
  else {
    if (param_2 != 0x16) {
      if (param_2 == 0x17) {
        if (99999999 < param_1) {
          local_30 = (double)param_1 / 100000000.0;
          uVar1 = System_Double__ToString(&local_30,DAT_091f9618,0);
          puVar2 = &DAT_09227090;
          goto LAB_044fb518;
        }
        if (9999 < param_1) {
          local_30 = (double)param_1 / 10000.0;
          uVar1 = System_Double__ToString(&local_30,DAT_091f9618,0);
          puVar2 = &DAT_09227078;
          goto LAB_044fb518;
        }
        if (999 < param_1) {
          local_30 = (double)param_1 / 1000.0;
          uVar1 = System_Double__ToString(&local_30,DAT_091f9618,0);
          puVar2 = &DAT_092270a8;
          goto LAB_044fb518;
        }
        goto LAB_044fb384;
      }
      if (param_1 < 1000000000) {
        if (param_1 < 1000000) {
          if (param_1 < 1000) goto LAB_044fb384;
          local_30 = (double)param_1 / 1000.0;
          uVar1 = System_Double__ToString(&local_30,DAT_091f9618,0);
          puVar2 = &DAT_0921df28;
        }
        else {
          local_30 = (double)param_1 / 1000000.0;
          uVar1 = System_Double__ToString(&local_30,DAT_091f9618,0);
          puVar2 = &DAT_0921ecb0;
        }
      }
      else {
        local_30 = (double)param_1 / 1000000000.0;
        uVar1 = System_Double__ToString(&local_30,DAT_091f9618,0);
        puVar2 = &DAT_09217cf8;
      }
      goto LAB_044fb518;
    }
    if (99999999 < param_1) {
      local_30 = (double)param_1 / 100000000.0;
      uVar1 = System_Double__ToString(&local_30,DAT_091f9618,0);
      puVar2 = &DAT_09226fb0;
      goto LAB_044fb518;
    }
  }
  if (param_1 < 10000) {
    if (param_1 < 1000) {
LAB_044fb384:
      System_Int64__ToString(&local_28,0);
      return;
    }
    local_30 = (double)param_1 / 1000.0;
    uVar1 = System_Double__ToString(&local_30,DAT_091f9618,0);
    puVar2 = &DAT_09226fc8;
  }
  else {
    local_30 = (double)param_1 / 10000.0;
    uVar1 = System_Double__ToString(&local_30,DAT_091f9618,0);
    puVar2 = &DAT_09226f80;
  }
LAB_044fb518:
  System_String__Concat(uVar1,*puVar2,0);
  return;
}

