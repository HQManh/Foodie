// rea decompile_all
// name: System.Math$$Pow
// address: 0x75b6f84
// body: available
// range: 0x75b6f84-0x75b6f87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] System_Math__Pow(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dStack_18;
  
  dVar2 = param_1;
  if ((NAN(param_1)) || (dVar2 = param_2, NAN(param_2))) goto LAB_03f95a4c;
  if ((-1.0 < param_1) && (param_1 < 1.0)) {
    if (param_2 == -INFINITY) {
      dVar2 = INFINITY;
      goto LAB_03f95a4c;
    }
    dVar2 = 0.0;
    if (param_2 == INFINITY) goto LAB_03f95a4c;
  }
  if (((-1.0 <= param_1) && (param_1 <= 1.0)) ||
     ((dVar2 = 0.0, param_2 != -INFINITY && (dVar2 = INFINITY, param_2 != INFINITY)))) {
    if (param_1 == -INFINITY) {
      dVar2 = 0.0;
      if ((0.0 <= param_2) && (dVar2 = 1.0, 0.0 < param_2)) {
        dVar1 = fmod(param_2,2.0);
        dVar2 = -INFINITY;
        if (dVar1 != (double)((ulong)param_2 ^
                             ((ulong)param_2 ^ 0x3ff0000000000000) & 0x7ff8000000000000)) {
          dVar2 = INFINITY;
        }
      }
    }
    else {
      if (param_1 < 0.0) {
        dVar1 = modf(param_2,&dStack_18);
        dVar2 = NAN;
        if (((param_2 == -INFINITY) || (param_2 == INFINITY)) || (dVar1 != 0.0)) goto LAB_03f95a4c;
      }
      dVar3 = pow(param_1,param_2);
      dVar1 = 0.0;
      if (dVar3 != 0.0) {
        dVar1 = dVar3;
      }
      dVar2 = 1.0;
      if (!NAN(dVar3)) {
        dVar2 = dVar1;
      }
    }
  }
LAB_03f95a4c:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar2;
  return auVar4;
}

