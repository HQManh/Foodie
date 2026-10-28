// rea decompile_all
// name: CookingGraph.GenerationCurve$$EvaluateNormalized
// address: 0x4435ae8
// body: available
// range: 0x4435ae8-0x4435fb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4435fb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float CookingGraph_GenerationCurve__EvaluateNormalized(float param_1,long *param_2)

{
  ushort uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if ((DAT_09517fc3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b350);
    FUN_03f5c2a4(&DAT_0917b4e8);
    DAT_09517fc3 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_0917b350) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04435b88;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b350,0);
LAB_04435b88:
    iVar3 = (*(code *)*puVar5)(param_2,puVar5[1]);
    if (iVar3 == 0) {
      return 0.5;
    }
    lVar6 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_0917b4e8) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04435bf4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b4e8,0);
LAB_04435bf4:
    lVar6 = (*(code *)*puVar5)(param_2,0,puVar5[1]);
    if (lVar6 != 0) {
      lVar7 = *param_2;
      uVar1 = *(ushort *)(lVar7 + 0x12e);
      uVar9 = (ulong)uVar1;
      if (param_1 <= *(float *)(lVar6 + 0x10)) {
        if (uVar1 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_0917b4e8) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_04435cf4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b4e8,0);
LAB_04435cf4:
        lVar6 = (*(code *)*puVar5)(param_2,0,puVar5[1]);
        if (lVar6 != 0) {
          return *(float *)(lVar6 + 0x14);
        }
      }
      else {
        if (uVar1 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_0917b350) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_04435c98;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b350,0);
LAB_04435c98:
        iVar3 = (*(code *)*puVar5)(param_2,puVar5[1]);
        lVar6 = *param_2;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_0917b4e8) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_04435d1c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b4e8,0);
LAB_04435d1c:
        lVar6 = (*(code *)*puVar5)(param_2,iVar3 + -1,puVar5[1]);
        if (lVar6 != 0) {
          if (*(float *)(lVar6 + 0x10) <= param_1) {
LAB_04435f94:
            fVar11 = *(float *)(lVar6 + 0x14);
          }
          else {
            iVar3 = 0;
            do {
              do {
                lVar7 = *param_2;
                uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == DAT_0917b350) {
                      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                      goto LAB_04435d90;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b350,0);
LAB_04435d90:
                iVar4 = (*(code *)*puVar5)(param_2,puVar5[1]);
                if (iVar4 + -1 <= iVar3) goto LAB_04435f94;
                lVar7 = *param_2;
                uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == DAT_0917b4e8) {
                      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                      goto LAB_04435df4;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b4e8,0);
LAB_04435df4:
                lVar7 = (*(code *)*puVar5)(param_2,iVar3,puVar5[1]);
                lVar8 = *param_2;
                uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == DAT_0917b4e8) {
                      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                      goto LAB_04435e54;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b4e8,0);
LAB_04435e54:
                iVar3 = iVar3 + 1;
                lVar8 = (*(code *)*puVar5)(param_2,iVar3,puVar5[1]);
                if (lVar7 == 0) goto LAB_04435fb0;
                fVar11 = *(float *)(lVar7 + 0x10);
              } while (param_1 < fVar11);
              if (lVar8 == 0) goto LAB_04435fb0;
              fVar13 = *(float *)(lVar8 + 0x10);
            } while (fVar13 < param_1);
            fVar12 = fVar13 - fVar11;
            fVar14 = 0.0;
            fVar15 = 1.0;
            iVar3 = 0x28;
            do {
              fVar16 = (fVar15 + fVar14) * 0.5;
              fVar17 = 1.0 - fVar16;
              fVar2 = fVar16;
              if (param_1 <=
                  fVar13 * fVar16 * fVar16 * fVar16 +
                  (fVar13 - fVar12 / 3.0) * fVar16 * fVar16 * fVar17 * 3.0 +
                  fVar11 * fVar17 * fVar17 * fVar17 +
                  (fVar11 + fVar12 / 3.0) * fVar16 * fVar17 * fVar17 * 3.0) {
                fVar2 = fVar14;
                fVar15 = fVar16;
              }
              fVar14 = fVar2;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            fVar11 = (fVar15 + fVar14) * 0.5;
            fVar13 = 1.0 - fVar11;
            fVar11 = *(float *)(lVar8 + 0x14) * fVar11 * fVar11 * fVar11 +
                     (*(float *)(lVar8 + 0x14) - (fVar12 * *(float *)(lVar8 + 0x18)) / 3.0) *
                     fVar11 * fVar11 * fVar13 * 3.0 +
                     *(float *)(lVar7 + 0x14) * fVar13 * fVar13 * fVar13 +
                     (*(float *)(lVar7 + 0x14) + (fVar12 * *(float *)(lVar7 + 0x18)) / 3.0) *
                     fVar11 * fVar13 * fVar13 * 3.0;
          }
          return fVar11;
        }
      }
    }
  }
LAB_04435fb0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

