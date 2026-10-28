// rea decompile_all
// name: FUN_03fb5cf4
// address: 0x3fb5cf4
// body: available
// range: 0x3fb5cf4-0x3fb5dcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_03fb5cf4(long param_1,undefined1 param_2)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  undefined4 local_14;
  
  pcVar3 = *(char **)(param_1 + 0x10);
  pcVar1 = *(char **)(param_1 + 0x18);
  local_14 = 0;
  *(undefined1 *)(param_1 + 9) = param_2;
  pcVar4 = pcVar3;
  if (pcVar3 < pcVar1) {
    lVar5 = (long)pcVar1 - (long)pcVar3;
    do {
      if ((*pcVar3 != ' ') && (pcVar4 = pcVar3, *pcVar3 != '\t')) break;
      pcVar3 = pcVar3 + 1;
      lVar5 = lVar5 + -1;
      *(char **)(param_1 + 0x10) = pcVar3;
      pcVar4 = pcVar1;
    } while (lVar5 != 0);
  }
  if ((((pcVar4 < pcVar1) && (uVar2 = FUN_03fb5dcc(param_1,&local_14), (uVar2 & 1) != 0)) &&
      (uVar2 = FUN_03fb5ef0(param_1,&local_14), (uVar2 & 1) != 0)) &&
     (uVar2 = FUN_03fb6050(param_1,&local_14), (uVar2 & 1) != 0)) {
    FUN_03fb6454(param_1);
    uVar2 = FUN_03fb65ac(param_1);
    if ((((uVar2 & 1) != 0) && (uVar2 = FUN_03fb6934(param_1), (uVar2 & 1) != 0)) &&
       (uVar2 = FUN_03fb6a94(param_1), (uVar2 & 1) != 0)) {
      return *(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18) ||
             *(char *)(param_1 + 8) != '\0';
    }
  }
  return false;
}

