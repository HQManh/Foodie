// rea decompile_all
// name: System.Threading.Timer$$Change
// address: 0x762b4bc
// body: available
// range: 0x762b4bc-0x762b573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Threading_Timer__Change(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined8 local_38;
  undefined8 local_28;
  
  local_38 = param_3;
  local_28 = param_2;
  if ((DAT_095221a4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_095221a4 = 1;
  }
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  dVar3 = (double)System_TimeSpan__get_TotalMilliseconds(&local_28,0);
  dVar4 = (double)System_TimeSpan__get_TotalMilliseconds(&local_38,0);
  lVar1 = -0x8000000000000000;
  if (dVar3 != INFINITY) {
    lVar1 = (long)dVar3;
  }
  lVar2 = -0x8000000000000000;
  if (dVar4 != INFINITY) {
    lVar2 = (long)dVar4;
  }
  System_Threading_Timer__Change(param_1,lVar1,lVar2,0);
  return 1;
}

