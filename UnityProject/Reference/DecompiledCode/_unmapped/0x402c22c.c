// rea decompile_all
// name: FUN_0402c22c
// address: 0x402c22c
// body: available
// range: 0x402c22c-0x402c39b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0402c22c(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  size_t sVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *__s;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  void *pvVar15;
  undefined8 *__dest;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  
  uVar8 = param_1[2];
  __dest = (undefined8 *)*param_1;
  pvVar15 = param_2;
  if (param_4 <= (ulong)((long)(uVar8 - (long)__dest) >> 3)) {
    sVar7 = (long)param_1[1] - (long)__dest;
    if (((ulong)((long)sVar7 >> 3) < param_4) &&
       (pvVar15 = (void *)((long)param_2 + sVar7), (undefined8 *)param_1[1] != __dest)) {
      memmove(__dest,param_2,sVar7);
      __dest = (undefined8 *)param_1[1];
    }
joined_r0x0402c2cc:
    sVar7 = param_3 - (long)pvVar15;
    if (sVar7 != 0) {
      memmove(__dest,pvVar15,sVar7);
    }
    param_1[1] = (long)__dest + sVar7;
    return;
  }
  if (__dest != (undefined8 *)0x0) {
    param_1[1] = __dest;
    if (__dest == param_1 + 3) {
      *(undefined1 *)(__dest + 0x1e) = 0;
    }
    else {
      operator_delete(__dest);
    }
    uVar8 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 >> 0x3d == 0) {
    uVar13 = (long)uVar8 >> 2;
    if ((ulong)((long)uVar8 >> 2) <= param_4) {
      uVar13 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar13 = 0x1fffffffffffffff;
    }
    if (uVar13 >> 0x3d == 0) {
      if ((uVar13 < 0x1f) && (*(char *)(param_1 + 0x21) == '\0')) {
        __dest = param_1 + 3;
        *(undefined1 *)(param_1 + 0x21) = 1;
        *param_1 = __dest;
        param_1[1] = __dest;
        param_1[2] = __dest + uVar13;
      }
      else {
        __dest = operator_new(uVar13 << 3);
        *param_1 = __dest;
        param_1[1] = __dest;
        param_1[2] = __dest + uVar13;
      }
      goto joined_r0x0402c2cc;
    }
  }
  auVar18 = FUN_0402c214(param_1);
  uVar8 = auVar18._8_8_;
  plVar4 = auVar18._0_8_;
  pvVar15 = (void *)plVar4[1];
  if (uVar8 <= (ulong)(plVar4[2] - (long)pvVar15 >> 3)) {
    if (uVar8 != 0) {
      memset(pvVar15,0,uVar8 * 8);
      pvVar15 = (void *)((long)pvVar15 + uVar8 * 8);
    }
    plVar4[1] = (long)pvVar15;
    return;
  }
  lVar16 = (long)pvVar15 - *plVar4;
  lVar14 = lVar16 >> 3;
  uVar13 = lVar14 + uVar8;
  if (uVar13 >> 0x3d != 0) {
    FUN_0402c214(plVar4);
LAB_0402c57c:
                    /* WARNING: Subroutine does not return */
    FUN_03f650f4();
  }
  uVar9 = plVar4[2] - *plVar4;
  uVar10 = (long)uVar9 >> 2;
  if (uVar10 <= uVar13) {
    uVar10 = uVar13;
  }
  if (0x7ffffffffffffff7 < uVar9) {
    uVar10 = 0x1fffffffffffffff;
  }
  if (uVar10 == 0) {
    plVar5 = (long *)0x0;
  }
  else if (uVar10 < 0x1f && (char)plVar4[0x21] == '\0') {
    *(undefined1 *)(plVar4 + 0x21) = 1;
    plVar5 = plVar4 + 3;
  }
  else {
    if (uVar10 >> 0x3d != 0) goto LAB_0402c57c;
    plVar5 = operator_new(uVar10 << 3);
  }
  __s = plVar5 + lVar14;
  memset(__s,0,uVar8 * 8);
  plVar2 = (long *)*plVar4;
  plVar6 = (long *)plVar4[1];
  plVar1 = __s + uVar8;
  lVar14 = (long)plVar6 - (long)plVar2;
  if (lVar14 == 0) goto LAB_0402c524;
  uVar8 = lVar14 - 8;
  if ((uVar8 < 0x38) || ((ulong)((long)plVar6 + (-lVar16 - (long)plVar5)) < 0x20)) {
LAB_0402c50c:
    do {
      plVar6 = plVar6 + -1;
      __s = __s + -1;
      *__s = *plVar6;
    } while (plVar6 != plVar2);
  }
  else {
    plVar11 = __s + -2;
    plVar12 = plVar6 + -2;
    uVar8 = (uVar8 >> 3) + 1;
    uVar9 = uVar8 & 0x3ffffffffffffffc;
    plVar6 = plVar6 + -uVar9;
    __s = __s + -uVar9;
    uVar13 = uVar9;
    do {
      plVar3 = plVar12 + -1;
      lVar17 = plVar12[-2];
      lVar16 = plVar12[1];
      lVar14 = *plVar12;
      uVar13 = uVar13 - 4;
      plVar12 = plVar12 + -4;
      plVar11[-1] = *plVar3;
      plVar11[-2] = lVar17;
      plVar11[1] = lVar16;
      *plVar11 = lVar14;
      plVar11 = plVar11 + -4;
    } while (uVar13 != 0);
    if (uVar8 != uVar9) goto LAB_0402c50c;
  }
  plVar6 = (long *)*plVar4;
LAB_0402c524:
  *plVar4 = (long)__s;
  plVar4[1] = (long)plVar1;
  plVar4[2] = (long)(plVar5 + uVar10);
  if (plVar6 != (long *)0x0) {
    if (plVar6 != plVar4 + 3) {
      operator_delete(plVar6);
      return;
    }
    *(undefined1 *)(plVar4 + 0x21) = 0;
  }
  return;
}

