// rea decompile_all
// name: System.Math$$Log
// address: 0x75b6580
// body: available
// range: 0x75b6580-0x75b6653 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] System_Math__Log(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_09521d10 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09521d10 = 1;
  }
  dVar1 = param_1;
  if (((ulong)ABS(param_1) < 0x7ff0000000000001) &&
     (dVar1 = param_2, (ulong)ABS(param_2) < 0x7ff0000000000001)) {
    if ((param_2 == 1.0) || ((param_1 != 1.0 && (param_2 == INFINITY || ABS(param_2) == 0.0)))) {
      dVar1 = NAN;
    }
    else {
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar1 = log(param_1);
      dVar2 = log(param_2);
      dVar1 = dVar1 / dVar2;
    }
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar1;
  return auVar3;
}

