// rea decompile_all
// name: System.SpanHelpers$$ClearWithReferences
// address: 0x75cc2d0
// body: available
// range: 0x75cc2d0-0x75cc41f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_SpanHelpers__ClearWithReferences(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  
  for (; 7 < param_2; param_2 = param_2 - 8) {
    lVar1 = System_IntPtr__op_Explicit(param_2,0);
    param_1[lVar1 + -1] = 0;
    lVar1 = System_IntPtr__op_Explicit(param_2,0);
    param_1[lVar1 + -2] = 0;
    lVar1 = System_IntPtr__op_Explicit(param_2,0);
    param_1[lVar1 + -3] = 0;
    lVar1 = System_IntPtr__op_Explicit(param_2,0);
    param_1[lVar1 + -4] = 0;
    lVar1 = System_IntPtr__op_Explicit(param_2,0);
    param_1[lVar1 + -5] = 0;
    lVar1 = System_IntPtr__op_Explicit(param_2,0);
    param_1[lVar1 + -6] = 0;
    lVar1 = System_IntPtr__op_Explicit(param_2,0);
    param_1[lVar1 + -7] = 0;
    lVar1 = System_IntPtr__op_Explicit(param_2,0);
    param_1[lVar1 + -8] = 0;
  }
  if (param_2 < 4) {
    if (param_2 < 2) {
      if (param_2 == 0) {
        return;
      }
      goto LAB_075cc400;
    }
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    lVar1 = System_IntPtr__op_Explicit(param_2,0);
    param_1[lVar1 + -3] = 0;
    lVar1 = System_IntPtr__op_Explicit(param_2,0);
    param_1[lVar1 + -2] = 0;
  }
  param_1[1] = 0;
  lVar1 = System_IntPtr__op_Explicit(param_2,0);
  param_1[lVar1 + -1] = 0;
LAB_075cc400:
  *param_1 = 0;
  return;
}

