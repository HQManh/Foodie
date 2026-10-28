// rea decompile_all
// name: FUN_03fbef58
// address: 0x3fbef58
// body: available
// range: 0x3fbef58-0x3fbf05f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fbef58(long param_1,char *param_2,uint param_3,uint param_4,long param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_58;
  
  FUN_03fbea4c();
  if (param_1 != 0) {
    do {
      local_58 = 0;
      lVar2 = FUN_03fbee74(param_1,&local_58);
      while (lVar2 != 0) {
        if (((**(char **)(lVar2 + 0x18) == *param_2) &&
            (((param_3 == 0xffffffff || (*(byte *)(lVar2 + 0x52) == param_3)) &&
             ((param_4 & (*(ushort *)(lVar2 + 0x4c) ^ 0xffffffff)) == 0)))) &&
           (iVar1 = strcmp(param_2,*(char **)(lVar2 + 0x18)), iVar1 == 0)) {
          if ((int)param_3 < 1 || param_5 == 0) {
            return lVar2;
          }
          lVar4 = 0;
          do {
            uVar3 = FUN_03f7b924(*(undefined8 *)(*(long *)(lVar2 + 0x30) + lVar4 * 8),
                                 *(undefined8 *)(param_5 + lVar4 * 8));
            if ((uVar3 & 1) == 0) break;
            lVar4 = lVar4 + 1;
          } while (lVar4 < (int)param_3);
          if ((uVar3 & 1) != 0) {
            return lVar2;
          }
        }
        lVar2 = FUN_03fbee74(param_1,&local_58);
      }
      param_1 = *(long *)(param_1 + 0x58);
    } while (param_1 != 0);
  }
  return 0;
}

