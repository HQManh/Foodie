// rea decompile_all
// name: FUN_03f8f934
// address: 0x3f8f934
// body: available
// range: 0x3f8f934-0x3f8f993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_03f8f934(long param_1,time_t param_2)

{
  tm *ptVar1;
  time_t __time0;
  double dVar2;
  tm local_50;
  time_t local_18;
  
  local_18 = param_2;
  ptVar1 = gmtime(&local_18);
  local_50.tm_wday = ptVar1->tm_wday;
  local_50.tm_yday = ptVar1->tm_yday;
  local_50.tm_mon = ptVar1->tm_mon;
  local_50.tm_year = ptVar1->tm_year;
  local_50.tm_gmtoff = ptVar1->tm_gmtoff;
  local_50.tm_hour = ptVar1->tm_hour;
  local_50.tm_mday = ptVar1->tm_mday;
  local_50.tm_sec = ptVar1->tm_sec;
  local_50.tm_min = ptVar1->tm_min;
  local_50.tm_zone = ptVar1->tm_zone;
  local_50._36_4_ = SUB84((ulong)*(undefined8 *)&ptVar1->tm_isdst >> 0x20,0);
  local_50.tm_isdst = *(int *)(param_1 + 0x20);
  __time0 = mktime(&local_50);
  dVar2 = difftime(local_18,__time0);
  return (int)dVar2;
}

