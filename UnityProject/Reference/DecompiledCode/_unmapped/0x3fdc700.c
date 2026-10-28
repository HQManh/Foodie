// rea decompile_all
// name: FUN_03fdc700
// address: 0x3fdc700
// body: available
// range: 0x3fdc700-0x3fdca9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_03fdc700(long *param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  char *pcVar12;
  
LAB_03fdc728:
  do {
    uVar11 = *(uint *)((long)param_1 + 0xb4);
    if (uVar11 < 0x103) {
      FUN_03fdb190(param_1);
      uVar11 = *(uint *)((long)param_1 + 0xb4);
      if ((param_2 == 0) && (uVar11 < 0x103)) {
        return 0;
      }
      if (uVar11 == 0) {
        *(undefined4 *)((long)param_1 + 0x172c) = 0;
        if (param_2 == 4) {
          uVar10 = param_1[0x13];
          if ((long)uVar10 < 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = param_1[0xc] + (uVar10 & 0xffffffff);
          }
          FUN_03fddcf4(param_1,lVar9,*(uint *)((long)param_1 + 0xac) - uVar10,1);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          FUN_03fdbffc(*param_1);
          if (*(int *)(*param_1 + 0x20) != 0) {
            return 3;
          }
          return 2;
        }
        if (*(int *)((long)param_1 + 0x170c) != 0) {
          uVar10 = param_1[0x13];
          if ((long)uVar10 < 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = param_1[0xc] + (uVar10 & 0xffffffff);
          }
          FUN_03fddcf4(param_1,lVar9,*(uint *)((long)param_1 + 0xac) - uVar10,0);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          FUN_03fdbffc(*param_1);
          if (*(int *)(*param_1 + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
      uVar10 = (ulong)*(uint *)((long)param_1 + 0xac);
      *(undefined4 *)(param_1 + 0x14) = 0;
      if ((2 < uVar11) && (uVar10 != 0)) goto LAB_03fdc774;
LAB_03fdc828:
      uVar11 = *(uint *)((long)param_1 + 0x170c);
LAB_03fdc82c:
      bVar6 = *(byte *)(param_1[0xc] + uVar10);
      *(uint *)((long)param_1 + 0x170c) = uVar11 + 1;
      *(undefined1 *)(param_1[0x2e0] + (ulong)uVar11) = 0;
      uVar11 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar11 + 1;
      *(undefined1 *)(param_1[0x2e0] + (ulong)uVar11) = 0;
      uVar11 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar11 + 1;
      *(byte *)(param_1[0x2e0] + (ulong)uVar11) = bVar6;
      iVar3 = *(int *)((long)param_1 + 0x170c);
      iVar4 = *(int *)((long)param_1 + 0xb4);
      lVar9 = param_1[0x2e2];
      iVar5 = *(int *)((long)param_1 + 0xac);
      *(short *)((long)param_1 + (ulong)bVar6 * 4 + 0xd4) =
           *(short *)((long)param_1 + (ulong)bVar6 * 4 + 0xd4) + 1;
      uVar11 = iVar5 + 1;
      *(int *)((long)param_1 + 0xb4) = iVar4 + -1;
      *(uint *)((long)param_1 + 0xac) = uVar11;
      if (iVar3 != (int)lVar9) goto LAB_03fdc728;
    }
    else {
      uVar10 = (ulong)*(uint *)((long)param_1 + 0xac);
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (uVar10 == 0) goto LAB_03fdc828;
LAB_03fdc774:
      pcVar2 = (char *)(param_1[0xc] + uVar10);
      cVar7 = pcVar2[-1];
      if (((cVar7 != *pcVar2) || (cVar7 != pcVar2[1])) || (cVar7 != pcVar2[2])) goto LAB_03fdc828;
      pcVar8 = (char *)(param_1[0xc] + uVar10 + 5);
      do {
        pcVar12 = pcVar8;
        if (cVar7 != pcVar12[-2]) {
          pcVar12 = pcVar12 + -2;
          goto LAB_03fdc91c;
        }
        if (cVar7 != pcVar12[-1]) {
          pcVar12 = pcVar12 + -1;
          goto LAB_03fdc91c;
        }
        if (cVar7 != *pcVar12) goto LAB_03fdc91c;
        if (cVar7 != pcVar12[1]) {
          pcVar12 = pcVar12 + 1;
          goto LAB_03fdc91c;
        }
        if (cVar7 != pcVar12[2]) {
          pcVar12 = pcVar12 + 2;
          goto LAB_03fdc91c;
        }
        if (cVar7 != pcVar12[3]) {
          pcVar12 = pcVar12 + 3;
          goto LAB_03fdc91c;
        }
        if (cVar7 != pcVar12[4]) {
          pcVar12 = pcVar12 + 4;
          goto LAB_03fdc91c;
        }
      } while ((pcVar12 + 5 < pcVar2 + 0x102) && (pcVar8 = pcVar12 + 8, cVar7 == pcVar12[5]));
      pcVar12 = pcVar12 + 5;
LAB_03fdc91c:
      uVar1 = ((int)pcVar12 - (int)(pcVar2 + 0x102)) + 0x102;
      if (uVar11 <= uVar1) {
        uVar1 = uVar11;
      }
      uVar11 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)(param_1 + 0x14) = uVar1;
      if (uVar1 < 3) goto LAB_03fdc82c;
      *(uint *)((long)param_1 + 0x170c) = uVar11 + 1;
      *(undefined1 *)(param_1[0x2e0] + (ulong)uVar11) = 1;
      uVar11 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar11 + 1;
      *(undefined1 *)(param_1[0x2e0] + (ulong)uVar11) = 0;
      uVar11 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar11 + 1;
      *(char *)(param_1[0x2e0] + (ulong)uVar11) = (char)(uVar1 - 3);
      iVar3 = *(int *)((long)param_1 + 0xb4);
      iVar4 = *(int *)((long)param_1 + 0xac);
      *(short *)((long)param_1 + (ulong)(byte)(&DAT_023aec78)[(ulong)(uVar1 - 3) & 0xff] * 4 + 0x4d8
                ) = *(short *)((long)param_1 +
                              (ulong)(byte)(&DAT_023aec78)[(ulong)(uVar1 - 3) & 0xff] * 4 + 0x4d8) +
                    1;
      lVar9 = param_1[0x14];
      *(undefined4 *)(param_1 + 0x14) = 0;
      uVar11 = iVar4 + (int)lVar9;
      *(int *)((long)param_1 + 0xb4) = iVar3 - (int)lVar9;
      *(uint *)((long)param_1 + 0xac) = uVar11;
      *(short *)(param_1 + 0x139) = (short)param_1[0x139] + 1;
      if (*(int *)((long)param_1 + 0x170c) != (int)param_1[0x2e2]) goto LAB_03fdc728;
    }
    uVar10 = param_1[0x13];
    if ((long)uVar10 < 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = param_1[0xc] + (uVar10 & 0xffffffff);
    }
    FUN_03fddcf4(param_1,lVar9,uVar11 - uVar10,0);
    param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
    FUN_03fdbffc(*param_1);
    if (*(int *)(*param_1 + 0x20) == 0) {
      return 0;
    }
  } while( true );
}

