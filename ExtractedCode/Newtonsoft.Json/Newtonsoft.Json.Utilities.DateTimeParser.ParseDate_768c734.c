// rea decompile_all
// name: Newtonsoft.Json.Utilities.DateTimeParser$$ParseDate
// address: 0x768c734
// body: available
// range: 0x768c734-0x768c8d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Newtonsoft_Json_Utilities_DateTimeParser__ParseDate(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  if ((DAT_09522573 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835b0);
    FUN_03f5c2a4(&DAT_09183548);
    DAT_09522573 = 1;
  }
  if (*(int *)(DAT_091835b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = Newtonsoft_Json_Utilities_DateTimeParser__Parse4Digit(param_1,param_2,param_1);
  if (((uVar4 & 1) != 0) && (0 < *param_1)) {
    if (*(int *)(DAT_091835b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = Newtonsoft_Json_Utilities_DateTimeParser__ParseChar
                      (param_1,*(int *)(*(long *)(DAT_091835b0 + 0xb8) + 8) + param_2,0x2d);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(DAT_091835b0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = Newtonsoft_Json_Utilities_DateTimeParser__Parse2Digit
                        (param_1,*(int *)(*(long *)(DAT_091835b0 + 0xb8) + 0xc) + param_2,
                         param_1 + 1);
      if (((uVar4 & 1) != 0) && (0xfffffff3 < param_1[1] - 0xdU)) {
        if (*(int *)(DAT_091835b0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = Newtonsoft_Json_Utilities_DateTimeParser__ParseChar
                          (param_1,*(int *)(*(long *)(DAT_091835b0 + 0xb8) + 0x10) + param_2,0x2d);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(DAT_091835b0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = Newtonsoft_Json_Utilities_DateTimeParser__Parse2Digit
                            (param_1,*(int *)(*(long *)(DAT_091835b0 + 0xb8) + 0x14) + param_2,
                             param_1 + 2);
          if (((uVar4 & 1) != 0) && (iVar2 = param_1[2], 0 < iVar2)) {
            iVar3 = *param_1;
            iVar1 = param_1[1];
            if (*(int *)(DAT_09183548 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar3 = System_DateTime__DaysInMonth(iVar3,iVar1,0);
            return iVar2 <= iVar3;
          }
        }
      }
    }
  }
  return false;
}

