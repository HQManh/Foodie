// rea decompile_all
// name: FUN_03f7a5b8
// address: 0x3f7a5b8
// body: available
// range: 0x3f7a5b8-0x3f7abef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f7abc4 to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3f7abcc to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3f7abd4 to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3f7abdc to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3f7abe4 to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3f7abec to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f7a5b8(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  long *local_68;
  long *local_60;
  undefined8 local_58;
  long local_48;
  
  if (param_1 != 0) {
    do {
      plVar9 = (long *)param_2[1];
      if (plVar9 < (long *)param_2[2]) {
        plVar12 = plVar9 + 1;
        *plVar9 = param_1;
        param_2[1] = (long)plVar12;
      }
      else {
        lVar4 = (long)plVar9 - *param_2 >> 3;
        uVar1 = lVar4 + 1;
        if (uVar1 >> 0x3d != 0) {
LAB_03f7abc0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5fa4c(param_2);
        }
        uVar7 = param_2[2] - *param_2;
        uVar10 = (long)uVar7 >> 2;
        if (uVar10 <= uVar1) {
          uVar10 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar10 = 0x1fffffffffffffff;
        }
        if (uVar10 == 0) {
          auVar15 = ZEXT816(0);
        }
        else {
          auVar15 = FUN_03f695c0(param_2 + 2);
        }
        plVar9 = (long *)(auVar15._0_8_ + lVar4 * 8);
        plVar12 = plVar9 + 1;
        *plVar9 = param_1;
        plVar2 = (long *)*param_2;
        plVar6 = (long *)param_2[1];
        if (plVar6 != plVar2) {
          do {
            plVar6 = plVar6 + -1;
            plVar9 = plVar9 + -1;
            *plVar9 = *plVar6;
          } while (plVar6 != plVar2);
          plVar6 = (long *)*param_2;
        }
        *param_2 = (long)plVar9;
        param_2[1] = (long)plVar12;
        param_2[2] = auVar15._0_8_ + auVar15._8_8_ * 8;
        if (plVar6 != (long *)0x0) {
          operator_delete(plVar6);
        }
      }
      param_2[1] = (long)plVar12;
      if (((-1 < *(int *)(param_1 + 0x28)) && (param_1 != DAT_09535628)) &&
         (param_1 != DAT_09535470)) {
        local_68 = (long *)0x0;
        lVar4 = FUN_03fbedac(param_1,&local_68);
        while (lVar4 != 0) {
          plVar9 = (long *)param_2[1];
          if (plVar9 < (long *)param_2[2]) {
            plVar12 = plVar9 + 1;
            *plVar9 = lVar4;
            param_2[1] = (long)plVar12;
          }
          else {
            lVar13 = (long)plVar9 - *param_2 >> 3;
            uVar1 = lVar13 + 1;
            if (uVar1 >> 0x3d != 0) goto LAB_03f7abc0;
            uVar7 = param_2[2] - *param_2;
            uVar10 = (long)uVar7 >> 2;
            if (uVar10 <= uVar1) {
              uVar10 = uVar1;
            }
            if (0x7ffffffffffffff7 < uVar7) {
              uVar10 = 0x1fffffffffffffff;
            }
            if (uVar10 == 0) {
              auVar15 = ZEXT816(0);
            }
            else {
              auVar15 = FUN_03f695c0(param_2 + 2);
            }
            plVar9 = (long *)(auVar15._0_8_ + lVar13 * 8);
            plVar12 = plVar9 + 1;
            *plVar9 = lVar4;
            plVar2 = (long *)*param_2;
            plVar6 = (long *)param_2[1];
            if (plVar6 != plVar2) {
              do {
                plVar6 = plVar6 + -1;
                plVar9 = plVar9 + -1;
                *plVar9 = *plVar6;
              } while (plVar6 != plVar2);
              plVar6 = (long *)*param_2;
            }
            *param_2 = (long)plVar9;
            param_2[1] = (long)plVar12;
            param_2[2] = auVar15._0_8_ + auVar15._8_8_ * 8;
            if (plVar6 != (long *)0x0) {
              operator_delete(plVar6);
            }
          }
          param_2[1] = (long)plVar12;
          lVar4 = FUN_03fbedac(param_1,&local_68);
        }
      }
      if (*(char *)(param_1 + 0x132) == '\x01') {
        local_68 = (long *)0x0;
        local_60 = (long *)0x0;
        local_58 = 0;
        FUN_03f7a5b8(*(undefined8 *)(param_1 + 0x40),&local_68);
        plVar9 = local_68;
        if (local_68 != local_60) {
          do {
            local_48 = *plVar9 + 0x20;
            uVar5 = FUN_03fc0f40(DAT_09535550,&local_48,1);
            puVar11 = (undefined8 *)param_2[1];
            if (puVar11 < (undefined8 *)param_2[2]) {
              puVar14 = puVar11 + 1;
              *puVar11 = uVar5;
              param_2[1] = (long)puVar14;
            }
            else {
              lVar4 = (long)puVar11 - *param_2 >> 3;
              uVar1 = lVar4 + 1;
              if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5fa4c(param_2);
              }
              uVar7 = param_2[2] - *param_2;
              uVar10 = (long)uVar7 >> 2;
              if (uVar10 <= uVar1) {
                uVar10 = uVar1;
              }
              if (0x7ffffffffffffff7 < uVar7) {
                uVar10 = 0x1fffffffffffffff;
              }
              if (uVar10 == 0) {
                auVar15 = ZEXT816(0);
              }
              else {
                auVar15 = FUN_03f695c0(param_2 + 2);
              }
              puVar11 = (undefined8 *)(auVar15._0_8_ + lVar4 * 8);
              puVar14 = puVar11 + 1;
              *puVar11 = uVar5;
              puVar3 = (undefined8 *)*param_2;
              puVar8 = (undefined8 *)param_2[1];
              if (puVar8 != puVar3) {
                do {
                  puVar8 = puVar8 + -1;
                  puVar11 = puVar11 + -1;
                  *puVar11 = *puVar8;
                } while (puVar8 != puVar3);
                puVar8 = (undefined8 *)*param_2;
              }
              *param_2 = (long)puVar11;
              param_2[1] = (long)puVar14;
              param_2[2] = auVar15._0_8_ + auVar15._8_8_ * 8;
              if (puVar8 != (undefined8 *)0x0) {
                operator_delete(puVar8);
              }
            }
            param_2[1] = (long)puVar14;
            uVar5 = FUN_03fc0f40(DAT_09535558,&local_48,1);
            puVar11 = (undefined8 *)param_2[1];
            if (puVar11 < (undefined8 *)param_2[2]) {
              puVar14 = puVar11 + 1;
              *puVar11 = uVar5;
              param_2[1] = (long)puVar14;
            }
            else {
              lVar4 = (long)puVar11 - *param_2 >> 3;
              uVar1 = lVar4 + 1;
              if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5fa4c(param_2);
              }
              uVar7 = param_2[2] - *param_2;
              uVar10 = (long)uVar7 >> 2;
              if (uVar10 <= uVar1) {
                uVar10 = uVar1;
              }
              if (0x7ffffffffffffff7 < uVar7) {
                uVar10 = 0x1fffffffffffffff;
              }
              if (uVar10 == 0) {
                auVar15 = ZEXT816(0);
              }
              else {
                auVar15 = FUN_03f695c0(param_2 + 2);
              }
              puVar11 = (undefined8 *)(auVar15._0_8_ + lVar4 * 8);
              puVar14 = puVar11 + 1;
              *puVar11 = uVar5;
              puVar3 = (undefined8 *)*param_2;
              puVar8 = (undefined8 *)param_2[1];
              if (puVar8 != puVar3) {
                do {
                  puVar8 = puVar8 + -1;
                  puVar11 = puVar11 + -1;
                  *puVar11 = *puVar8;
                } while (puVar8 != puVar3);
                puVar8 = (undefined8 *)*param_2;
              }
              *param_2 = (long)puVar11;
              param_2[1] = (long)puVar14;
              param_2[2] = auVar15._0_8_ + auVar15._8_8_ * 8;
              if (puVar8 != (undefined8 *)0x0) {
                operator_delete(puVar8);
              }
            }
            param_2[1] = (long)puVar14;
            uVar5 = FUN_03fc0f40(DAT_09535560,&local_48,1);
            puVar11 = (undefined8 *)param_2[1];
            if (puVar11 < (undefined8 *)param_2[2]) {
              puVar14 = puVar11 + 1;
              *puVar11 = uVar5;
              param_2[1] = (long)puVar14;
            }
            else {
              lVar4 = (long)puVar11 - *param_2 >> 3;
              uVar1 = lVar4 + 1;
              if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5fa4c(param_2);
              }
              uVar7 = param_2[2] - *param_2;
              uVar10 = (long)uVar7 >> 2;
              if (uVar10 <= uVar1) {
                uVar10 = uVar1;
              }
              if (0x7ffffffffffffff7 < uVar7) {
                uVar10 = 0x1fffffffffffffff;
              }
              if (uVar10 == 0) {
                auVar15 = ZEXT816(0);
              }
              else {
                auVar15 = FUN_03f695c0(param_2 + 2);
              }
              puVar11 = (undefined8 *)(auVar15._0_8_ + lVar4 * 8);
              puVar14 = puVar11 + 1;
              *puVar11 = uVar5;
              puVar3 = (undefined8 *)*param_2;
              puVar8 = (undefined8 *)param_2[1];
              if (puVar8 != puVar3) {
                do {
                  puVar8 = puVar8 + -1;
                  puVar11 = puVar11 + -1;
                  *puVar11 = *puVar8;
                } while (puVar8 != puVar3);
                puVar8 = (undefined8 *)*param_2;
              }
              *param_2 = (long)puVar11;
              param_2[1] = (long)puVar14;
              param_2[2] = auVar15._0_8_ + auVar15._8_8_ * 8;
              if (puVar8 != (undefined8 *)0x0) {
                operator_delete(puVar8);
              }
            }
            param_2[1] = (long)puVar14;
            uVar5 = FUN_03fc0f40(DAT_09535568,&local_48,1);
            puVar11 = (undefined8 *)param_2[1];
            if (puVar11 < (undefined8 *)param_2[2]) {
              puVar14 = puVar11 + 1;
              *puVar11 = uVar5;
              param_2[1] = (long)puVar14;
            }
            else {
              lVar4 = (long)puVar11 - *param_2 >> 3;
              uVar1 = lVar4 + 1;
              if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5fa4c(param_2);
              }
              uVar7 = param_2[2] - *param_2;
              uVar10 = (long)uVar7 >> 2;
              if (uVar10 <= uVar1) {
                uVar10 = uVar1;
              }
              if (0x7ffffffffffffff7 < uVar7) {
                uVar10 = 0x1fffffffffffffff;
              }
              if (uVar10 == 0) {
                auVar15 = ZEXT816(0);
              }
              else {
                auVar15 = FUN_03f695c0(param_2 + 2);
              }
              puVar11 = (undefined8 *)(auVar15._0_8_ + lVar4 * 8);
              puVar14 = puVar11 + 1;
              *puVar11 = uVar5;
              puVar3 = (undefined8 *)*param_2;
              puVar8 = (undefined8 *)param_2[1];
              if (puVar8 != puVar3) {
                do {
                  puVar8 = puVar8 + -1;
                  puVar11 = puVar11 + -1;
                  *puVar11 = *puVar8;
                } while (puVar8 != puVar3);
                puVar8 = (undefined8 *)*param_2;
              }
              *param_2 = (long)puVar11;
              param_2[1] = (long)puVar14;
              param_2[2] = auVar15._0_8_ + auVar15._8_8_ * 8;
              if (puVar8 != (undefined8 *)0x0) {
                operator_delete(puVar8);
              }
            }
            param_2[1] = (long)puVar14;
            uVar5 = FUN_03fc0f40(DAT_09535570,&local_48,1);
            puVar11 = (undefined8 *)param_2[1];
            if (puVar11 < (undefined8 *)param_2[2]) {
              puVar14 = puVar11 + 1;
              *puVar11 = uVar5;
              param_2[1] = (long)puVar14;
            }
            else {
              lVar4 = (long)puVar11 - *param_2 >> 3;
              uVar1 = lVar4 + 1;
              if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5fa4c(param_2);
              }
              uVar7 = param_2[2] - *param_2;
              uVar10 = (long)uVar7 >> 2;
              if (uVar10 <= uVar1) {
                uVar10 = uVar1;
              }
              if (0x7ffffffffffffff7 < uVar7) {
                uVar10 = 0x1fffffffffffffff;
              }
              if (uVar10 == 0) {
                auVar15 = ZEXT816(0);
              }
              else {
                auVar15 = FUN_03f695c0(param_2 + 2);
              }
              puVar11 = (undefined8 *)(auVar15._0_8_ + lVar4 * 8);
              puVar14 = puVar11 + 1;
              *puVar11 = uVar5;
              puVar3 = (undefined8 *)*param_2;
              puVar8 = (undefined8 *)param_2[1];
              if (puVar8 != puVar3) {
                do {
                  puVar8 = puVar8 + -1;
                  puVar11 = puVar11 + -1;
                  *puVar11 = *puVar8;
                } while (puVar8 != puVar3);
                puVar8 = (undefined8 *)*param_2;
              }
              *param_2 = (long)puVar11;
              param_2[1] = (long)puVar14;
              param_2[2] = auVar15._0_8_ + auVar15._8_8_ * 8;
              if (puVar8 != (undefined8 *)0x0) {
                operator_delete(puVar8);
              }
            }
            plVar9 = plVar9 + 1;
            param_2[1] = (long)puVar14;
          } while (plVar9 != local_60);
        }
        if (local_68 != (long *)0x0) {
          local_60 = local_68;
          operator_delete(local_68);
        }
      }
      param_1 = FUN_03fbf154(param_1);
    } while (((param_1 != 0) && (-1 < *(int *)(param_1 + 0x28))) &&
            ((param_1 != DAT_09535628 && (param_1 != DAT_09535470))));
  }
  return;
}

