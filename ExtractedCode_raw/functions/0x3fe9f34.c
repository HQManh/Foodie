// rea decompile_all
// name: std::__ndk1::__thread_struct::notify_all_at_thread_exit
// address: 0x3fe9f34
// body: available
// range: 0x3fe9f34-0x3fea04b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__thread_struct::notify_all_at_thread_exit(std::__ndk1::condition_variable*,
   std::__ndk1::mutex*) */

void __thiscall
std::__ndk1::__thread_struct::notify_all_at_thread_exit
          (__thread_struct *this,condition_variable *param_1,mutex *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong *puVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  undefined1 auVar24 [16];
  
  lVar16 = *(long *)this;
  puVar8 = *(undefined8 **)(lVar16 + 0x20);
  if (puVar8 < *(undefined8 **)(lVar16 + 0x28)) {
    *puVar8 = param_1;
    puVar8[1] = param_2;
    puVar19 = puVar8 + 2;
    goto LAB_03fea028;
  }
  puVar6 = *(undefined8 **)(lVar16 + 0x18);
  lVar18 = (long)puVar8 - (long)puVar6 >> 4;
  uVar1 = lVar18 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar9 = (long)*(undefined8 **)(lVar16 + 0x28) - (long)puVar6;
    uVar14 = (long)uVar9 >> 3;
    if (uVar14 <= uVar1) {
      uVar14 = uVar1;
    }
    if (0x7fffffffffffffef < uVar9) {
      uVar14 = 0xfffffffffffffff;
    }
    if (uVar14 == 0) {
      puVar11 = (undefined8 *)(lVar18 * 0x10);
      pvVar4 = (void *)0x0;
      puVar19 = puVar11 + 2;
      *puVar11 = param_1;
      puVar11[1] = param_2;
      if (puVar8 != puVar6) goto LAB_03fe9ff8;
    }
    else {
      pvVar4 = operator_new(uVar14 << 4);
      puVar6 = *(undefined8 **)(lVar16 + 0x18);
      puVar8 = *(undefined8 **)(lVar16 + 0x20);
      puVar11 = (undefined8 *)((long)pvVar4 + lVar18 * 0x10);
      pvVar4 = (void *)((long)pvVar4 + uVar14 * 0x10);
      puVar19 = puVar11 + 2;
      *puVar11 = param_1;
      puVar11[1] = param_2;
      if (puVar8 != puVar6) {
LAB_03fe9ff8:
        do {
          puVar2 = puVar8 + -1;
          uVar22 = puVar8[-2];
          puVar8 = puVar8 + -2;
          puVar11[-1] = *puVar2;
          puVar11[-2] = uVar22;
          puVar11 = puVar11 + -2;
        } while (puVar8 != puVar6);
        puVar6 = *(undefined8 **)(lVar16 + 0x18);
      }
    }
    *(undefined8 **)(lVar16 + 0x18) = puVar11;
    *(undefined8 **)(lVar16 + 0x20) = puVar19;
    *(void **)(lVar16 + 0x28) = pvVar4;
    if (puVar6 != (undefined8 *)0x0) {
      operator_delete(puVar6);
    }
LAB_03fea028:
    *(undefined8 **)(lVar16 + 0x20) = puVar19;
    return;
  }
  auVar24 = FUN_03fea1cc(lVar16 + 0x18);
  lVar16 = auVar24._8_8_;
  puVar17 = (ulong *)*auVar24._0_8_;
  plVar15 = (long *)puVar17[1];
  if (plVar15 < (long *)puVar17[2]) {
    plVar20 = plVar15 + 1;
    *plVar15 = lVar16;
    goto LAB_03fea154;
  }
  plVar7 = (long *)*puVar17;
  lVar21 = (long)plVar15 - (long)plVar7;
  lVar18 = lVar21 >> 3;
  uVar1 = lVar18 + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_03fea1e4(puVar17);
                    /* WARNING: Subroutine does not return */
    FUN_03f5d128("vector");
  }
  uVar9 = (long)puVar17[2] - (long)plVar7;
  uVar14 = (long)uVar9 >> 2;
  if (uVar14 <= uVar1) {
    uVar14 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar9) {
    uVar14 = 0x1fffffffffffffff;
  }
  if (uVar14 == 0) {
    pvVar5 = (void *)0x0;
    plVar12 = (long *)(lVar18 * 8);
    pvVar4 = (void *)0x0;
    lVar18 = (long)plVar15 - (long)plVar7;
    *plVar12 = lVar16;
  }
  else {
    pvVar5 = operator_new(uVar14 << 3);
    plVar7 = (long *)*puVar17;
    plVar15 = (long *)puVar17[1];
    plVar12 = (long *)((long)pvVar5 + lVar18 * 8);
    pvVar4 = (void *)((long)pvVar5 + uVar14 * 8);
    lVar18 = (long)plVar15 - (long)plVar7;
    *plVar12 = lVar16;
  }
  plVar20 = plVar12 + 1;
  if (lVar18 != 0) {
    if ((lVar18 - 8U < 0x38) || ((ulong)((long)plVar15 + (-lVar21 - (long)pvVar5)) < 0x20)) {
LAB_03fea128:
      do {
        plVar15 = plVar15 + -1;
        plVar13 = plVar12 + -1;
        *plVar13 = *plVar15;
        plVar12 = plVar13;
      } while (plVar15 != plVar7);
    }
    else {
      uVar1 = (lVar18 - 8U >> 3) + 1;
      uVar9 = uVar1 & 0x3ffffffffffffffc;
      plVar13 = plVar12 + -uVar9;
      plVar12 = plVar12 + -2;
      plVar10 = plVar15 + -2;
      uVar14 = uVar9;
      do {
        plVar3 = plVar10 + -1;
        lVar23 = plVar10[-2];
        lVar21 = plVar10[1];
        lVar18 = *plVar10;
        uVar14 = uVar14 - 4;
        plVar10 = plVar10 + -4;
        plVar12[-1] = *plVar3;
        plVar12[-2] = lVar23;
        plVar12[1] = lVar21;
        *plVar12 = lVar18;
        plVar12 = plVar12 + -4;
      } while (uVar14 != 0);
      plVar12 = plVar13;
      plVar15 = plVar15 + -uVar9;
      if (uVar1 != uVar9) goto LAB_03fea128;
    }
    plVar7 = (long *)*puVar17;
    plVar12 = plVar13;
  }
  *puVar17 = (ulong)plVar12;
  puVar17[1] = (ulong)plVar20;
  puVar17[2] = (ulong)pvVar4;
  if (plVar7 != (long *)0x0) {
    operator_delete(plVar7);
  }
LAB_03fea154:
  puVar17[1] = (ulong)plVar20;
  FUN_0404bff0(1,lVar16 + 8);
  return;
}

