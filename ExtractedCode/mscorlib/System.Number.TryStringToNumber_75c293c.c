// rea decompile_all
// name: System.Number$$TryStringToNumber
// address: 0x75c293c
// body: available
// range: 0x75c293c-0x75c2a6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Number__TryStringToNumber
          (undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
          uint param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_58;
  
  if ((DAT_09521d77 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3030);
    FUN_03f5c2a4(&DAT_09188a70);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521d77 = 1;
  }
  local_58 = 0;
  lVar1 = FUN_04c072b4(param_1,param_2,DAT_091d3030);
  local_58 = lVar1;
  if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188a70);
  }
  uVar2 = System_Number__ParseNumber
                    (&local_58,lVar1 + ((param_2 << 0x20) >> 0x1f),param_3,param_4,param_5,
                     param_6 & 1);
  if ((uVar2 & 1) == 0) {
LAB_075c2a50:
    uVar3 = 0;
  }
  else {
    lVar1 = local_58 - lVar1;
    if (lVar1 < 0) {
      lVar1 = lVar1 + 1;
    }
    if (lVar1 >> 1 < (param_2 << 0x20) >> 0x20) {
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Number__TrailingZeros(param_1,param_2,lVar1 >> 1 & 0xffffffff);
      if ((uVar2 & 1) == 0) goto LAB_075c2a50;
    }
    uVar3 = 1;
  }
  return uVar3;
}

