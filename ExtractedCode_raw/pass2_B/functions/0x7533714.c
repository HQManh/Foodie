// rea decompile_all
// name: System.Globalization.HijriCalendar$$DaysUpToHijriYear
// address: 0x7533714
// body: available
// range: 0x7533714-0x75337cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Globalization_HijriCalendar__DaysUpToHijriYear(long *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = ((param_2 + -1) / 0x1e) * 0x1e;
  lVar5 = SUB168(SEXT816((long)(int)uVar2 * 0x2987) * SEXT816(-0x7777777777777777),8) +
          (long)(int)uVar2 * 0x2987;
  param_2 = ~uVar2 + param_2;
  lVar5 = ((lVar5 >> 4) - (lVar5 >> 0x3f)) + 0x376c5;
  if (0 < param_2) {
    do {
      uVar4 = (**(code **)(*param_1 + 0x2b8))(param_1,param_2,0,*(undefined8 *)(*param_1 + 0x2c0));
      lVar1 = 0x162;
      if ((uVar4 & 1) != 0) {
        lVar1 = 0x163;
      }
      bVar3 = param_2 != 0;
      param_2 = param_2 + -1;
      lVar5 = lVar1 + lVar5;
    } while (bVar3 && param_2 != 0);
  }
  return lVar5;
}

