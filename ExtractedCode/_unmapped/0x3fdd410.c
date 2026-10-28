// rea decompile_all
// name: FUN_03fdd410
// address: 0x3fdd410
// body: available
// range: 0x3fdd410-0x3fdd617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_03fdd410(long param_1,ulong param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  
  uVar8 = *(uint *)(param_1 + 0xb8);
  uVar9 = *(uint *)(param_1 + 0xac);
  uVar17 = (ulong)uVar9;
  lVar16 = *(long *)(param_1 + 0x60);
  uVar20 = (ulong)(int)uVar8;
  uVar21 = *(int *)(param_1 + 0x50) - 0x106;
  uVar10 = *(uint *)(param_1 + 0xb4);
  pcVar4 = (char *)(lVar16 + uVar17);
  uVar7 = 0;
  if (uVar21 <= uVar9) {
    uVar7 = uVar9 - uVar21;
  }
  cVar12 = pcVar4[(int)(uVar8 - 1)];
  cVar13 = pcVar4[uVar20];
  uVar21 = *(uint *)(param_1 + 0xbc);
  if (*(uint *)(param_1 + 0xcc) <= uVar8) {
    uVar21 = *(uint *)(param_1 + 0xbc) >> 2;
  }
  uVar8 = *(uint *)(param_1 + 0xd0);
  if (uVar10 <= *(uint *)(param_1 + 0xd0)) {
    uVar8 = uVar10;
  }
  do {
    pcVar1 = (char *)(lVar16 + (param_2 & 0xffffffff));
    iVar18 = (int)uVar20;
    if ((((pcVar1[iVar18] == cVar13) && (pcVar1[iVar18 + -1] == cVar12)) && (*pcVar1 == *pcVar4)) &&
       (pcVar1[1] == pcVar4[1])) {
      lVar2 = (param_2 & 0xffffffff) + 5;
      lVar15 = lVar16;
      do {
        lVar5 = lVar15 + uVar17;
        if (*(char *)(lVar5 + 3) != *(char *)(lVar15 + lVar2 + -2)) {
          iVar14 = (int)lVar5 + 3;
          goto LAB_03fdd5b8;
        }
        iVar14 = (int)lVar15;
        if (*(char *)(lVar5 + 4) != *(char *)(lVar15 + lVar2 + -1)) {
          iVar14 = iVar14 + uVar9 + 4;
          goto LAB_03fdd5b8;
        }
        lVar5 = lVar15 + uVar17;
        if (*(char *)(lVar5 + 5) != *(char *)(lVar15 + lVar2)) {
          iVar14 = (int)lVar5 + 5;
          goto LAB_03fdd5b8;
        }
        if (*(char *)(lVar5 + 6) != *(char *)(lVar15 + lVar2 + 1)) {
          iVar14 = iVar14 + uVar9 + 6;
          goto LAB_03fdd5b8;
        }
        lVar5 = lVar15 + uVar17;
        if (*(char *)(lVar5 + 7) != *(char *)(lVar15 + lVar2 + 2)) {
          iVar14 = (int)lVar5 + 7;
          goto LAB_03fdd5b8;
        }
        if (*(char *)(lVar5 + 8) != *(char *)(lVar15 + lVar2 + 3)) {
          iVar14 = iVar14 + uVar9 + 8;
          goto LAB_03fdd5b8;
        }
        lVar5 = lVar15 + uVar17;
        if (*(char *)(lVar5 + 9) != *(char *)(lVar15 + lVar2 + 4)) {
          iVar14 = (int)lVar5 + 9;
          goto LAB_03fdd5b8;
        }
        lVar3 = lVar15 + 8;
      } while (((char *)(lVar5 + 10) < pcVar4 + 0x102) &&
              (lVar6 = lVar15 + lVar2, lVar15 = lVar3, *(char *)(lVar5 + 10) == *(char *)(lVar6 + 5)
              ));
      iVar14 = (int)lVar3 + uVar9 + 2;
LAB_03fdd5b8:
      iVar14 = iVar14 - (int)(pcVar4 + 0x102);
      uVar19 = iVar14 + 0x102;
      if (iVar18 < (int)uVar19) {
        *(int *)(param_1 + 0xb0) = (int)param_2;
        if ((int)uVar8 <= (int)uVar19) {
LAB_03fdd5fc:
          if (uVar10 <= uVar19) {
            uVar19 = uVar10;
          }
          return uVar19;
        }
        cVar13 = pcVar4[(int)uVar19];
        cVar12 = pcVar4[iVar14 + 0x101];
        uVar20 = (ulong)uVar19;
      }
    }
    uVar19 = (uint)uVar20;
    uVar11 = *(ushort *)(*(long *)(param_1 + 0x70) + (param_2 & *(uint *)(param_1 + 0x58)) * 2);
    param_2 = (ulong)uVar11;
    if ((uVar11 <= uVar7) || (uVar21 = uVar21 - 1, uVar21 == 0)) goto LAB_03fdd5fc;
  } while( true );
}

