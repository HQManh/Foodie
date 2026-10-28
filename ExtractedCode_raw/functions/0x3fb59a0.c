// rea decompile_all
// name: FUN_03fb59a0
// address: 0x3fb59a0
// body: available
// range: 0x3fb59a0-0x3fb5a97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fb59a0(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *__s2;
  byte bVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_38 [8];
  
  FUN_03f5d894(auStack_38,&DAT_09535358);
  plVar4 = DAT_095353b0;
  if (DAT_095353a8 != DAT_095353b0) {
    sVar2 = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    plVar8 = DAT_095353a8;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      sVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      if (*plVar8 == param_1) {
        bVar3 = *(byte *)(plVar8 + 1);
        sVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar1 = plVar8[2];
        }
        if (sVar1 == sVar2) {
          if ((bVar3 & 1) == 0) {
            if (bVar3 < 2) {
LAB_03fb5a74:
              lVar7 = plVar8[5];
              goto LAB_03fb5a78;
            }
            uVar6 = 0;
            while (*(byte *)((long)plVar8 + uVar6 + 9) == __s2[uVar6]) {
              uVar6 = uVar6 + 1;
              if (bVar3 >> 1 == uVar6) goto LAB_03fb5a74;
            }
          }
          else {
            iVar5 = memcmp((void *)plVar8[3],__s2,plVar8[2]);
            if (iVar5 == 0) goto LAB_03fb5a74;
          }
        }
      }
      plVar8 = plVar8 + 6;
    } while (plVar8 != plVar4);
  }
  lVar7 = 0;
LAB_03fb5a78:
  FUN_03f5d920(auStack_38);
  return lVar7;
}

