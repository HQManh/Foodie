// rea decompile_all
// name: FUN_04030c9c
// address: 0x4030c9c
// body: available
// range: 0x4030c9c-0x4030eef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_04030c9c(long param_1,long param_2,long param_3,long *param_4,int param_5,uint param_6)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar10 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar10 + 8)) goto LAB_04030d3c;
  }
  else if ((lVar10 != param_1) &&
          (iVar9 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar10 + 8)), iVar9 != 0)) {
LAB_04030d3c:
    cVar2 = *(char *)(param_2 + 0x4c);
    cVar3 = *(char *)(param_2 + 0x4d);
    uVar1 = *(uint *)(param_1 + 0x14);
    *(undefined2 *)(param_2 + 0x4c) = 0;
    uVar11 = *(ulong *)(param_1 + 0x20);
    lVar10 = (long)uVar11 >> 8;
    if ((uVar11 & 1) != 0) {
      lVar10 = *(long *)(*param_4 + lVar10);
    }
    iVar9 = 2;
    if ((uVar11 & 2) != 0) {
      iVar9 = param_5;
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
              (*(long **)(param_1 + 0x18),param_2,param_3,(long)param_4 + lVar10,iVar9,param_6 & 1);
    cVar4 = *(char *)(param_2 + 0x4d);
    cVar5 = *(char *)(param_2 + 0x4c);
    bVar7 = cVar4 != '\0' || cVar3 != '\0';
    bVar8 = cVar5 != '\0' || cVar2 != '\0';
    if (1 < uVar1) {
      puVar13 = (undefined8 *)(param_1 + 0x28);
      do {
        if (*(char *)(param_2 + 0x4e) != '\0') break;
        if (cVar5 == '\0') {
          if (cVar4 != '\0') {
            bVar6 = *(byte *)(param_1 + 0x10);
            goto joined_r0x04030e54;
          }
        }
        else {
          if (*(int *)(param_2 + 0x30) == 1) break;
          bVar6 = *(byte *)(param_1 + 0x10) >> 1;
joined_r0x04030e54:
          if ((bVar6 & 1) == 0) break;
        }
        *(undefined2 *)(param_2 + 0x4c) = 0;
        uVar11 = puVar13[1];
        lVar10 = (long)uVar11 >> 8;
        if ((uVar11 & 1) != 0) {
          lVar10 = *(long *)(*param_4 + lVar10);
        }
        puVar12 = puVar13 + 2;
        iVar9 = 2;
        if ((uVar11 & 2) != 0) {
          iVar9 = param_5;
        }
        (**(code **)(*(long *)*puVar13 + 0x28))
                  ((long *)*puVar13,param_2,param_3,(long)param_4 + lVar10,iVar9,param_6 & 1);
        cVar5 = *(char *)(param_2 + 0x4c);
        cVar4 = *(char *)(param_2 + 0x4d);
        bVar8 = cVar5 != '\0' || bVar8;
        bVar7 = cVar4 != '\0' || bVar7;
        puVar13 = puVar12;
      } while (puVar12 < (undefined8 *)(param_1 + (ulong)uVar1 * 0x10 + 0x18));
    }
    *(bool *)(param_2 + 0x4c) = bVar8;
    *(bool *)(param_2 + 0x4d) = bVar7;
    return;
  }
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if (*(long **)(param_2 + 8) != param_4) {
    return;
  }
  *(undefined1 *)(param_2 + 0x4c) = 1;
  if (*(long *)(param_2 + 0x20) == 0) {
    *(long *)(param_2 + 0x20) = param_3;
    *(int *)(param_2 + 0x30) = param_5;
    *(undefined4 *)(param_2 + 0x3c) = 1;
    iVar9 = param_5;
  }
  else {
    if (*(long *)(param_2 + 0x20) != param_3) {
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      goto LAB_04030ec8;
    }
    iVar9 = *(int *)(param_2 + 0x30);
    if (*(int *)(param_2 + 0x30) == 2) {
      *(int *)(param_2 + 0x30) = param_5;
      iVar9 = param_5;
    }
  }
  if (iVar9 != 1) {
    return;
  }
  if (*(int *)(param_2 + 0x48) != 1) {
    return;
  }
LAB_04030ec8:
  *(undefined1 *)(param_2 + 0x4e) = 1;
  return;
}

