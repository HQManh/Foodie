// rea decompile_all
// name: FUN_03fcd8d0
// address: 0x3fcd8d0
// body: available
// range: 0x3fcd8d0-0x3fcdb5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fcd8d0(void)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar8 = 0;
  do {
    uVar9 = (&DAT_09748128)[uVar8];
    lVar5 = DAT_09535c90;
    while (uVar9 != 0) {
      plVar7 = (long *)(&DAT_097440c8 + (uVar9 >> 0x16 & 0x7ff) * 8);
      do {
        lVar6 = *plVar7;
        plVar7 = (long *)(lVar6 + 0x2018);
      } while (*(ulong *)(lVar6 + 0x2010) != uVar9 >> 0x16 && lVar6 != lVar5);
      puVar10 = *(ulong **)(lVar6 + (uVar9 >> 0xc & 0x3ff) * 8);
      uVar11 = puVar10[4];
      uVar1 = uVar11 + uVar9;
      plVar7 = (long *)(&DAT_097440c8 + (uVar1 >> 0x16 & 0x7ff) * 8);
      do {
        lVar6 = *plVar7;
        plVar7 = (long *)(lVar6 + 0x2018);
      } while (*(ulong *)(lVar6 + 0x2010) != uVar1 >> 0x16 && lVar6 != lVar5);
      lVar6 = *(long *)(lVar6 + (uVar1 >> 0xc & 0x3ff) * 8);
      if (((lVar6 != 0) && (bVar2 = *(byte *)(lVar6 + 0x19), (bVar2 >> 2 & 1) != 0)) &&
         (uVar12 = *(ulong *)(lVar6 + 0x20), 0 < (long)(uVar12 + uVar11))) {
        bVar3 = *(byte *)((long)puVar10 + 0x19);
        if (((bVar2 >> 1 & 1) == 0) || ((bVar3 >> 1 & 1) != 0)) {
          if ((bVar2 >> 1 & 1) == 0) {
            if ((bVar3 >> 1 & 1) != 0) {
              if (uVar12 < uVar11) {
                FUN_03fcd81c(uVar1,uVar12);
                goto LAB_03fcda20;
              }
              uVar12 = (uVar9 + DAT_09748110) - 1 & -DAT_09748110;
              if ((uVar12 != 0) && (uVar12 + DAT_09748110 <= uVar9 + uVar11)) {
                DAT_09535c88 = (uVar12 - (-DAT_09748110 & uVar9 + uVar11)) + DAT_09535c88;
              }
              uVar4 = *(undefined2 *)(lVar6 + 0x1a);
              *(byte *)((long)puVar10 + 0x19) = bVar3 & 0xfd;
              *(undefined2 *)((long)puVar10 + 0x1a) = uVar4;
            }
          }
          else if ((bVar3 >> 1 & 1) != 0) {
LAB_03fcda20:
            FUN_03fcdb60(uVar9,uVar11,uVar1,uVar12);
          }
        }
        else if (uVar12 < uVar11) {
          uVar11 = (uVar1 + DAT_09748110) - 1 & -DAT_09748110;
          if ((uVar11 != 0) && (uVar11 + DAT_09748110 <= uVar1 + uVar12)) {
            DAT_09535c88 = (uVar11 - (-DAT_09748110 & uVar1 + uVar12)) + DAT_09535c88;
          }
        }
        else {
          FUN_03fcd81c(uVar9,uVar11);
          FUN_03fcdb60(uVar9,uVar11,uVar1,uVar12);
          *(byte *)((long)puVar10 + 0x19) = *(byte *)((long)puVar10 + 0x19) | 2;
        }
        FUN_03fcd470(puVar10,uVar8 & 0xffffffff);
        uVar11 = *(ulong *)(lVar6 + 0x20) >> 0xc;
        if (0x20 < uVar11) {
          if (*(ulong *)(lVar6 + 0x20) >> 0x14 == 0) {
            uVar11 = (ulong)(((int)uVar11 - 0x20U >> 3) + 0x20);
          }
          else {
            uVar11 = 0x3c;
          }
        }
        FUN_03fcd470(lVar6,uVar11);
        puVar10[4] = puVar10[4] + *(long *)(lVar6 + 0x20);
        FUN_03fcc964(uVar1);
        FUN_03fcd688(uVar9,puVar10);
        lVar5 = DAT_09535c90;
        puVar10 = &DAT_09748128 + uVar8;
      }
      uVar9 = *puVar10;
    }
    uVar8 = uVar8 + 1;
    if (uVar8 == 0x3d) {
      return;
    }
  } while( true );
}

