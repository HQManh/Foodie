// rea decompile_all
// name: std::__ndk1::__thread_struct::__make_ready_at_thread_exit
// address: 0x3fea04c
// body: available
// range: 0x3fea04c-0x3fea1cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__thread_struct::__make_ready_at_thread_exit(std::__ndk1::__assoc_sub_state*) */

void __thiscall
std::__ndk1::__thread_struct::__make_ready_at_thread_exit
          (__thread_struct *this,__assoc_sub_state *param_1)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  puVar12 = *(ulong **)this;
  puVar11 = (undefined8 *)puVar12[1];
  if (puVar11 < (undefined8 *)puVar12[2]) {
    puVar14 = puVar11 + 1;
    *puVar11 = param_1;
    goto LAB_03fea154;
  }
  puVar5 = (undefined8 *)*puVar12;
  lVar15 = (long)puVar11 - (long)puVar5;
  lVar13 = lVar15 >> 3;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_03fea1e4(puVar12);
                    /* WARNING: Subroutine does not return */
    FUN_03f5d128("vector");
  }
  uVar6 = (long)puVar12[2] - (long)puVar5;
  uVar10 = (long)uVar6 >> 2;
  if (uVar10 <= uVar1) {
    uVar10 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar6) {
    uVar10 = 0x1fffffffffffffff;
  }
  if (uVar10 == 0) {
    pvVar4 = (void *)0x0;
    puVar8 = (undefined8 *)(lVar13 * 8);
    pvVar2 = (void *)0x0;
    lVar13 = (long)puVar11 - (long)puVar5;
    *puVar8 = param_1;
  }
  else {
    pvVar4 = operator_new(uVar10 << 3);
    puVar5 = (undefined8 *)*puVar12;
    puVar11 = (undefined8 *)puVar12[1];
    puVar8 = (undefined8 *)((long)pvVar4 + lVar13 * 8);
    pvVar2 = (void *)((long)pvVar4 + uVar10 * 8);
    lVar13 = (long)puVar11 - (long)puVar5;
    *puVar8 = param_1;
  }
  puVar14 = puVar8 + 1;
  if (lVar13 != 0) {
    if ((lVar13 - 8U < 0x38) || ((ulong)((long)puVar11 + (-lVar15 - (long)pvVar4)) < 0x20)) {
LAB_03fea128:
      do {
        puVar11 = puVar11 + -1;
        puVar9 = puVar8 + -1;
        *puVar9 = *puVar11;
        puVar8 = puVar9;
      } while (puVar11 != puVar5);
    }
    else {
      uVar1 = (lVar13 - 8U >> 3) + 1;
      uVar6 = uVar1 & 0x3ffffffffffffffc;
      puVar9 = puVar8 + -uVar6;
      puVar8 = puVar8 + -2;
      puVar7 = puVar11 + -2;
      uVar10 = uVar6;
      do {
        puVar3 = puVar7 + -1;
        uVar18 = puVar7[-2];
        uVar17 = puVar7[1];
        uVar16 = *puVar7;
        uVar10 = uVar10 - 4;
        puVar7 = puVar7 + -4;
        puVar8[-1] = *puVar3;
        puVar8[-2] = uVar18;
        puVar8[1] = uVar17;
        *puVar8 = uVar16;
        puVar8 = puVar8 + -4;
      } while (uVar10 != 0);
      puVar8 = puVar9;
      puVar11 = puVar11 + -uVar6;
      if (uVar1 != uVar6) goto LAB_03fea128;
    }
    puVar5 = (undefined8 *)*puVar12;
    puVar8 = puVar9;
  }
  *puVar12 = (ulong)puVar8;
  puVar12[1] = (ulong)puVar14;
  puVar12[2] = (ulong)pvVar2;
  if (puVar5 != (undefined8 *)0x0) {
    operator_delete(puVar5);
  }
LAB_03fea154:
  puVar12[1] = (ulong)puVar14;
  FUN_0404bff0(1,param_1 + 8);
  return;
}

