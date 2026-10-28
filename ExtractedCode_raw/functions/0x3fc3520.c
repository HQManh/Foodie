// rea decompile_all
// name: FUN_03fc3520
// address: 0x3fc3520
// body: available
// range: 0x3fc3520-0x3fc35ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fc3520(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_30;
  undefined1 local_24 [2];
  undefined1 auStack_22 [2];
  
  local_24[0] = 0;
  lVar3 = DAT_09535b30 + DAT_09535b38 * 0x38;
  local_30 = param_1;
  lVar1 = FUN_03fca574(DAT_09535b30,lVar3,&local_30,auStack_22,local_24);
  if ((lVar1 == lVar3) ||
     (uVar2 = FUN_03f7b924(*(undefined8 *)(lVar1 + 0x30),local_30), (uVar2 & 1) == 0)) {
    lVar1 = lVar3;
  }
  lVar3 = 0;
  if (lVar1 != DAT_09535b30 + DAT_09535b38 * 0x38) {
    lVar3 = lVar1;
  }
  return lVar3;
}

