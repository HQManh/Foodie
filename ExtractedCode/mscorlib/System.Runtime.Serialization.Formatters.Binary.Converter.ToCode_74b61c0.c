// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.Converter$$ToCode
// address: 0x74b61c0
// body: available
// range: 0x74b61c0-0x74b62d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b6250 to 0x74ba6bc System.Runtime.Serialization.Formatters.Binary.Converter$$ToPrimitiveTypeEnum (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Runtime_Serialization_Formatters_Binary_Converter__ToCode(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if ((DAT_0952145a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b98);
    DAT_0952145a = 1;
  }
  if ((param_1 != 0) && (uVar2 = System_Type__get_IsPrimitive(param_1,0), (uVar2 & 1) == 0)) {
    if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(DAT_09182b98 + 0xb8);
    if (*(long *)(lVar4 + 0xa0) == param_1) {
      uVar2 = 0xd;
    }
    else {
      if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar4 = *(long *)(DAT_09182b98 + 0xb8);
      }
      if (*(long *)(lVar4 + 0x98) == param_1) {
        uVar2 = 0xc;
      }
      else {
        if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar4 = *(long *)(DAT_09182b98 + 0xb8);
        }
        uVar3 = 5;
        if (*(long *)(lVar4 + 0x60) != param_1) {
          uVar3 = 0;
        }
        uVar2 = (ulong)uVar3;
      }
    }
    return uVar2;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Type__GetTypeCode(param_1,0);
  if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09182b98);
  }
  uVar2 = System_Runtime_Serialization_Formatters_Binary_Converter__ToPrimitiveTypeEnum(uVar1);
  return uVar2;
}

