// rea decompile_all
// name: System.IO.FileSystemInfo$$get_ExistsCore
// address: 0x757d0d8
// body: available
// range: 0x757d0d8-0x757d16f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_IO_FileSystemInfo__get_ExistsCore(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x90);
  if (DAT_09519f66 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09519f66 = '\x01';
  }
  if (lVar4 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = System_String__GetRawStringData(lVar4,0);
    uVar3 = *(undefined4 *)(lVar4 + 0x10);
  }
  if (*(int *)(param_1 + 0x88) == -1) {
    System_IO_FileStatus__Refresh(param_1 + 0x18,uVar2,uVar3);
  }
  if (*(char *)(param_1 + 0x8e) == '\0') {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(param_1 + 0x8d) == *(char *)(param_1 + 0x8c);
  }
  return bVar1;
}

