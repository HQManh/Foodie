// rea decompile_all
// name: FUN_03f947e4
// address: 0x3f947e4
// body: available
// range: 0x3f947e4-0x3f9492b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_03f947e4(undefined8 param_1,char *param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar5;
  char *local_58;
  char *local_48;
  ushort *puVar4;
  
  local_58 = param_3;
  local_48 = param_2;
  do {
    if (*local_48 == '\0' || *local_58 == '\0') {
      return *local_48 == '\0' && *local_58 == '\0';
    }
    uVar1 = FUN_03f93434(&local_48);
    uVar5 = uVar1;
    if (0xffff < uVar1) {
      uVar5 = (uVar1 >> 10) - 0x2840;
    }
    uVar2 = FUN_03f93434(&local_58);
    uVar3 = uVar2;
    if (0xffff < uVar2) {
      uVar3 = (uVar2 >> 10) - 0x2840;
    }
    if ((uVar5 >> 4 & 0xfff) < 0x24d) {
      puVar4 = &DAT_02386e28 + ((ulong)uVar5 & 0xffff);
LAB_03f94894:
      uVar5 = (uint)*puVar4;
    }
    else if (0xff20 < (uVar5 & 0xffff)) {
      puVar4 = (ushort *)(&DAT_0238b7c8 + (ulong)((int)((ulong)uVar5 & 0xffff) - 0xff21) * 2);
      goto LAB_03f94894;
    }
    if ((uVar3 >> 4 & 0xfff) < 0x24d) {
      puVar4 = &DAT_02386e28 + ((ulong)uVar3 & 0xffff);
LAB_03f948c0:
      uVar3 = (uint)*puVar4;
    }
    else if (0xff20 < (uVar3 & 0xffff)) {
      puVar4 = (ushort *)(&DAT_0238b7c8 + (ulong)((int)((ulong)uVar3 & 0xffff) - 0xff21) * 2);
      goto LAB_03f948c0;
    }
    if ((uVar5 & 0xffff) != (uVar3 & 0xffff)) {
      return false;
    }
    uVar5 = 0;
    if (0xffff < uVar1) {
      uVar5 = uVar1 & 0x3ff | 0xffffdc00;
    }
    uVar1 = 0;
    if (0xffff < uVar2) {
      uVar1 = uVar2 & 0x3ff | 0xffffdc00;
    }
    if ((uVar5 & 0xffff) != (uVar1 & 0xffff)) {
      return false;
    }
  } while( true );
}

