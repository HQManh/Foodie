// rea decompile_all
// name: System.Globalization.GregorianCalendarHelper$$GetDayOfWeek
// address: 0x75329b8
// body: available
// range: 0x75329b8-0x7532a83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Globalization_GregorianCalendarHelper__GetDayOfWeek
              (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  if ((DAT_0952186e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    DAT_0952186e = 1;
  }
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_DateTime__get_Ticks(&local_28,0);
  System_Globalization_GregorianCalendarHelper__CheckTicksRange(param_1,uVar1);
  lVar2 = System_DateTime__get_Ticks(&local_28,0);
  return ((((int)(lVar2 / 864000000000) + (int)(lVar2 >> 0x3f)) -
          (SUB164(SEXT816(lVar2) * ZEXT816(0xa2e3ff1de20581e3),0xc) >> 0x1f)) + 1) % 7;
}

