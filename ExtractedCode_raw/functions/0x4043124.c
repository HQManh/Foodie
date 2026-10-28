// rea decompile_all
// name: FUN_04043124
// address: 0x4043124
// body: available
// range: 0x4043124-0x40434cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40434cc to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_04043124(long *param_1,undefined1 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  size_t sVar10;
  undefined *puVar11;
  long lVar12;
  undefined1 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  char *__s;
  void *pvVar18;
  
  pbVar2 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[1];
  if ((ulong)((long)pbVar3 - (long)pbVar2) < 2) {
LAB_0404329c:
    if (pbVar2 == pbVar3) {
      return (undefined8 *)0x0;
    }
    if (*pbVar2 != 0x76) {
      return (undefined8 *)0x0;
    }
    pbVar1 = pbVar2 + 1;
    *param_1 = (long)pbVar1;
    if (pbVar3 == pbVar1) {
      return (undefined8 *)0x0;
    }
    if (9 < *pbVar1 - 0x30) {
      return (undefined8 *)0x0;
    }
    *param_1 = (long)(pbVar2 + 2);
    lVar12 = FUN_04035818();
    if (lVar12 == 0) {
      return (undefined8 *)0x0;
    }
    pvVar18 = (void *)param_1[0x266];
    lVar7 = *(long *)((long)pvVar18 + 8);
    puVar9 = pvVar18;
    if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
      puVar9 = malloc(0x1000);
      if (puVar9 == (void *)0x0) {
LAB_040434cc:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar7 = 0;
      *puVar9 = pvVar18;
      puVar9[1] = 0;
      param_1[0x266] = (long)puVar9;
    }
    lVar14 = (long)puVar9 + lVar7;
    puVar11 = &UNK_08fafb68;
    *(long *)((long)puVar9 + 8) = lVar7 + 0x20;
    uVar13 = 4;
  }
  else {
    bVar4 = *pbVar2;
    uVar15 = 0;
    uVar16 = 0x3d;
    do {
      uVar17 = uVar15 + uVar16 >> 1;
      if (((byte)(&UNK_08fae3c8)[uVar17 * 0x10] < bVar4) ||
         ((bVar4 == (&UNK_08fae3c8)[uVar17 * 0x10] &&
          ((byte)(&UNK_08fae3c9)[uVar17 * 0x10] < pbVar2[1])))) {
        uVar15 = uVar17 + 1;
        uVar17 = uVar16;
      }
      uVar16 = uVar17;
    } while (uVar16 != uVar15);
    lVar12 = uVar15 * 0x10;
    if ((bVar4 == (&UNK_08fae3c8)[lVar12]) && (pbVar2[1] == (&UNK_08fae3c9)[lVar12])) {
      bVar4 = (&UNK_08fae3ca)[lVar12];
      *param_1 = (long)(pbVar2 + 2);
      if (bVar4 == 8) {
        cVar5 = *(char *)((long)param_1 + 0x309);
        lVar12 = param_1[0x61];
        *(undefined1 *)(param_1 + 0x61) = 0;
        *(bool *)((long)param_1 + 0x309) = param_2 != (undefined1 *)0x0 || cVar5 != '\0';
        lVar7 = FUN_040324c0();
        if (lVar7 == 0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          if (param_2 != (undefined1 *)0x0) {
            *param_2 = 1;
          }
          pvVar18 = (void *)param_1[0x266];
          lVar14 = *(long *)((long)pvVar18 + 8);
          puVar8 = pvVar18;
          if (lVar14 - 0xfd0U < 0xfffffffffffff010) {
            puVar8 = malloc(0x1000);
            if (puVar8 == (void *)0x0) goto LAB_040434cc;
            lVar14 = 0;
            *puVar8 = pvVar18;
            puVar8[1] = 0;
            param_1[0x266] = (long)puVar8;
          }
          *(long *)((long)puVar8 + 8) = lVar14 + 0x20;
          puVar9 = (undefined8 *)((long)puVar8 + lVar14 + 0x10);
          *puVar9 = &UNK_08fafb68;
          *(long *)((long)puVar8 + lVar14 + 0x20) = lVar7;
          *(undefined1 *)((long)puVar8 + lVar14 + 0x18) = 4;
          *(ushort *)((long)puVar8 + lVar14 + 0x19) =
               *(ushort *)((long)puVar8 + lVar14 + 0x19) & 0xf000 | 0x540;
        }
        *(char *)((long)param_1 + 0x309) = cVar5;
        *(char *)(param_1 + 0x61) = (char)lVar12;
        return puVar9;
      }
      if (10 < bVar4) {
        return (undefined8 *)0x0;
      }
      if ((bVar4 == 4) && (((&UNK_08fae3cb)[lVar12] & 1) == 0)) {
        return (undefined8 *)0x0;
      }
      __s = *(char **)(&UNK_08fae3d0 + lVar12);
      sVar10 = strlen(__s);
      pvVar18 = (void *)param_1[0x266];
      lVar12 = *(long *)((long)pvVar18 + 8);
      puVar9 = pvVar18;
      if (lVar12 - 0xfd0U < 0xfffffffffffff010) {
        puVar9 = malloc(0x1000);
        if (puVar9 == (void *)0x0) goto LAB_040434cc;
        lVar12 = 0;
        *puVar9 = pvVar18;
        puVar9[1] = 0;
        param_1[0x266] = (long)puVar9;
      }
      *(long *)((long)puVar9 + 8) = lVar12 + 0x20;
      puVar8 = (undefined8 *)((long)puVar9 + lVar12 + 0x10);
      *puVar8 = &UNK_08fae288;
      uVar6 = *(ushort *)((long)puVar9 + lVar12 + 0x19);
      *(char **)((long)puVar9 + lVar12 + 0x20) = __s;
      *(size_t *)((long)puVar9 + lVar12 + 0x28) = sVar10;
      *(undefined1 *)((long)puVar9 + lVar12 + 0x18) = 8;
      goto LAB_040433d4;
    }
    if (*(short *)pbVar2 != 0x696c) goto LAB_0404329c;
    *param_1 = (long)(pbVar2 + 2);
    lVar12 = FUN_04035818();
    if (lVar12 == 0) {
      return (undefined8 *)0x0;
    }
    pvVar18 = (void *)param_1[0x266];
    lVar7 = *(long *)((long)pvVar18 + 8);
    puVar9 = pvVar18;
    if (lVar7 - 0xfd0U < 0xfffffffffffff010) {
      puVar9 = malloc(0x1000);
      if (puVar9 == (void *)0x0) goto LAB_040434cc;
      lVar7 = 0;
      *puVar9 = pvVar18;
      puVar9[1] = 0;
      param_1[0x266] = (long)puVar9;
    }
    lVar14 = (long)puVar9 + lVar7;
    puVar11 = &UNK_08fafbd8;
    *(long *)((long)puVar9 + 8) = lVar7 + 0x20;
    uVar13 = 0x14;
  }
  puVar8 = (undefined8 *)(lVar14 + 0x10);
  *puVar8 = puVar11;
  uVar6 = *(ushort *)(lVar14 + 0x19);
  *(undefined1 *)(lVar14 + 0x18) = uVar13;
  *(long *)(lVar14 + 0x20) = lVar12;
LAB_040433d4:
  *(ushort *)((long)puVar8 + 9) = uVar6 & 0xf000 | 0x540;
  return puVar8;
}

