// rea decompile_all
// name: FUN_03fcecbc
// address: 0x3fcecbc
// body: available
// range: 0x3fcecbc-0x3fcee4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fcecbc(code *param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  clock_t cVar3;
  clock_t cVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  if (DAT_09535be0 == 2) {
    cVar3 = clock();
  }
  else {
    cVar3 = 0;
  }
  uVar5 = (ulong)DAT_09515690;
  if (DAT_09515690 != 0) {
    uVar11 = 0;
    do {
      lVar10 = (&DAT_095156e8)[uVar11 * 4];
      if (lVar10 != 0) {
        lVar9 = 1;
        do {
          uVar5 = *(ulong *)(lVar10 + lVar9 * 8);
          while (uVar1 = uVar5, uVar1 != 0) {
            if ((param_1 != (code *)0x0) && (iVar2 = (*param_1)(), iVar2 != 0)) {
              return 0;
            }
            plVar8 = (long *)(&DAT_097440c8 + (uVar1 >> 0x16 & 0x7ff) * 8);
            do {
              lVar7 = *plVar8;
              plVar8 = (long *)(lVar7 + 0x2018);
            } while (*(ulong *)(lVar7 + 0x2010) != uVar1 >> 0x16 && lVar7 != DAT_09535c90);
            puVar6 = *(ulong **)(lVar7 + (uVar1 >> 0xc & 0x3ff) * 8);
            uVar5 = *puVar6;
            *(ulong *)(lVar10 + lVar9 * 8) = uVar5;
            if ((param_2 == 0) || (DAT_09748118 - 1U == (ulong)*(ushort *)((long)puVar6 + 0x1a))) {
              FUN_03fd5038(uVar1,0);
              uVar5 = *(ulong *)(lVar10 + lVar9 * 8);
            }
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 != 0x81);
        uVar5 = (ulong)DAT_09515690;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar5);
  }
  if (DAT_09535be0 == 2) {
    cVar4 = clock();
    FUN_03fcb51c("Disposing of reclaim lists took %lu msecs\n",(ulong)(cVar4 - cVar3) / 1000);
  }
  return 1;
}

