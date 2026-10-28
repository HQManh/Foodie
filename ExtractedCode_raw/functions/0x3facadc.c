// rea decompile_all
// name: FUN_03facadc
// address: 0x3facadc
// body: available
// range: 0x3facadc-0x3face4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3face4c to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03facadc(long *param_1)

{
  void *pvVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  int *piVar17;
  long *plVar18;
  uint uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_d8 [24];
  undefined4 local_c0;
  undefined1 auStack_b4 [32];
  int local_94;
  ushort local_78;
  
  FUN_03f71cb4(param_1,(long)*(int *)(DAT_09535208 + 0x20) + (long)*(int *)(DAT_09535220 + 0x4c));
  if (0 < DAT_09535228) {
    lVar10 = 0;
    iVar5 = DAT_09535228;
    do {
      piVar17 = (int *)(DAT_09535240 + lVar10 * 0x18);
      plVar18 = (long *)(piVar17 + 4);
      if (*(int *)(*plVar18 + 0x18) != 0) {
        uVar15 = 0;
        do {
          iVar5 = 0;
          if (*(int *)(DAT_09535220 + 0xf4) != 0) {
            iVar5 = *(int *)(DAT_09535220 + 0xf0) / *(int *)(DAT_09535220 + 0xf4);
          }
          FUN_03f98df4(auStack_b4,
                       DAT_09535218 + *(int *)(DAT_09535220 + 0xec) +
                       (long)(iVar5 * (*piVar17 + (int)uVar15)),&DAT_0953522c);
          if (local_78 != 0) {
            uVar19 = 0;
            do {
              iVar5 = 0;
              if (*(int *)(DAT_09535220 + 0x4c) != 0) {
                iVar5 = *(int *)(DAT_09535220 + 0x48) / *(int *)(DAT_09535220 + 0x4c);
              }
              lVar21 = DAT_09535218 + *(int *)(DAT_09535220 + 0x44) +
                       (long)(int)(iVar5 * (local_94 + uVar19));
              FUN_03f98b50(auStack_d8,lVar21,&DAT_0953522c);
              lVar4 = FUN_03fc06fc(*plVar18,local_c0);
              if (lVar4 != 0) {
                plVar13 = (long *)param_1[1];
                if (plVar13 < (long *)param_1[2]) {
                  *plVar13 = lVar4;
                  plVar13[1] = lVar21;
                  plVar13 = plVar13 + 2;
                  param_1[1] = (long)plVar13;
                }
                else {
                  lVar14 = (long)plVar13 - *param_1 >> 4;
                  uVar9 = lVar14 + 1;
                  if (uVar9 >> 0x3c != 0) goto LAB_03face48;
                  uVar6 = param_1[2] - *param_1;
                  uVar7 = (long)uVar6 >> 3;
                  if (uVar7 <= uVar9) {
                    uVar7 = uVar9;
                  }
                  if (0x7fffffffffffffef < uVar6) {
                    uVar7 = 0xfffffffffffffff;
                  }
                  if (uVar7 == 0) {
                    auVar22 = ZEXT816(0);
                  }
                  else {
                    auVar22 = FUN_03f71f50(param_1 + 2);
                  }
                  plVar13 = (long *)(auVar22._0_8_ + lVar14 * 0x10);
                  *plVar13 = lVar4;
                  plVar13[1] = lVar21;
                  pvVar1 = (void *)*param_1;
                  pvVar8 = (void *)param_1[1];
                  plVar11 = plVar13;
                  if (pvVar8 != pvVar1) {
                    do {
                      plVar2 = (long *)((long)pvVar8 + -8);
                      lVar21 = *(long *)((long)pvVar8 + -0x10);
                      pvVar8 = (void *)((long)pvVar8 + -0x10);
                      plVar11[-1] = *plVar2;
                      plVar11[-2] = lVar21;
                      plVar11 = plVar11 + -2;
                    } while (pvVar8 != pvVar1);
                    pvVar8 = (void *)*param_1;
                  }
                  plVar13 = plVar13 + 2;
                  *param_1 = (long)plVar11;
                  param_1[1] = (long)plVar13;
                  param_1[2] = auVar22._0_8_ + auVar22._8_8_ * 0x10;
                  if (pvVar8 != (void *)0x0) {
                    operator_delete(pvVar8);
                  }
                }
                param_1[1] = (long)plVar13;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < local_78);
          }
          uVar15 = uVar15 + 1;
          iVar5 = DAT_09535228;
        } while (uVar15 < *(uint *)(*plVar18 + 0x18));
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar5);
  }
  if (0 < *(int *)(DAT_09535208 + 0x20)) {
    lVar10 = 0;
    lVar21 = DAT_09535208;
    puVar12 = (undefined8 *)param_1[1];
    do {
      piVar17 = (int *)(*(long *)(lVar21 + 0x28) + lVar10 * 0x10);
      iVar5 = 0;
      if (*(int *)(DAT_09535220 + 0x4c) != 0) {
        iVar5 = *(int *)(DAT_09535220 + 0x48) / *(int *)(DAT_09535220 + 0x4c);
      }
      uVar20 = *(undefined8 *)(*(long *)(lRam0000000009535210 + 0x18) + (long)piVar17[1] * 8);
      lVar21 = DAT_09535218 + *(int *)(DAT_09535220 + 0x44) +
               (long)(iVar5 * *(int *)(*(long *)(lVar21 + 0x48) + (long)*piVar17 * 0xc));
      if (puVar12 < (undefined8 *)param_1[2]) {
        puVar16 = puVar12 + 2;
        *puVar12 = uVar20;
        puVar12[1] = lVar21;
        param_1[1] = (long)puVar16;
      }
      else {
        lVar4 = (long)puVar12 - *param_1 >> 4;
        uVar15 = lVar4 + 1;
        if (uVar15 >> 0x3c != 0) {
LAB_03face48:
                    /* WARNING: Subroutine does not return */
          FUN_03f5fa4c(param_1);
        }
        uVar7 = param_1[2] - *param_1;
        uVar9 = (long)uVar7 >> 3;
        if (uVar9 <= uVar15) {
          uVar9 = uVar15;
        }
        if (0x7fffffffffffffef < uVar7) {
          uVar9 = 0xfffffffffffffff;
        }
        if (uVar9 == 0) {
          auVar22 = ZEXT816(0);
        }
        else {
          auVar22 = FUN_03f71f50(param_1 + 2);
        }
        puVar16 = (undefined8 *)(auVar22._0_8_ + lVar4 * 0x10);
        *puVar16 = uVar20;
        puVar16[1] = lVar21;
        pvVar1 = (void *)*param_1;
        pvVar8 = (void *)param_1[1];
        puVar12 = puVar16;
        if (pvVar8 != pvVar1) {
          do {
            puVar3 = (undefined8 *)((long)pvVar8 + -8);
            uVar20 = *(undefined8 *)((long)pvVar8 + -0x10);
            pvVar8 = (void *)((long)pvVar8 + -0x10);
            puVar12[-1] = *puVar3;
            puVar12[-2] = uVar20;
            puVar12 = puVar12 + -2;
          } while (pvVar8 != pvVar1);
          pvVar8 = (void *)*param_1;
        }
        puVar16 = puVar16 + 2;
        *param_1 = (long)puVar12;
        param_1[1] = (long)puVar16;
        param_1[2] = auVar22._0_8_ + auVar22._8_8_ * 0x10;
        if (pvVar8 != (void *)0x0) {
          operator_delete(pvVar8);
        }
      }
      lVar21 = DAT_09535208;
      lVar10 = lVar10 + 1;
      param_1[1] = (long)puVar16;
      puVar12 = puVar16;
    } while (lVar10 < *(int *)(lVar21 + 0x20));
  }
  return;
}

