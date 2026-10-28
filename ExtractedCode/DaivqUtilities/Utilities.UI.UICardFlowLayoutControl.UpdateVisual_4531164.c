// rea decompile_all
// name: Utilities.UI.UICardFlowLayoutControl$$UpdateVisual
// address: 0x4531164
// body: available
// range: 0x4531164-0x4531167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UI_UICardFlowLayoutControl__UpdateVisual
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if ((DAT_0951863b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_09180528);
    DAT_0951863b = 1;
  }
  lVar7 = *(long *)(param_5 + 0x28);
  if (lVar7 != 0) {
    uVar12 = 0;
    fVar22 = 0.0;
    do {
      if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar12) {
        Utilities_UI_UICardFlowLayoutControl__ApplyContentHeight(fVar22,param_5);
        return;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar12) {
LAB_04530e78:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (uVar12 != 0) {
        fVar22 = fVar22 + *(float *)(param_5 + 0x3c);
      }
      lVar7 = *(long *)(lVar7 + (long)(int)uVar12 * 8 + 0x20);
      if (lVar7 == 0) break;
      uVar11 = *(undefined8 *)(lVar7 + 0x18);
      fVar18 = param_3;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
        fVar18 = param_3;
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if ((uVar2 & 1) != 0) {
        if ((*(long *)(lVar7 + 0x18) == 0) ||
           (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(lVar7 + 0x18),0), lVar3 == 0))
        break;
        uVar2 = UnityEngine_GameObject__get_activeSelf(lVar3,0);
        if ((uVar2 & 1) != 0) {
          if (uVar12 != 0) {
            fVar22 = fVar22 + *(float *)(param_5 + 0x38);
          }
          fVar17 = fVar22;
          uVar16 = Utilities_UI_UICardFlowLayoutControl__GetAnchoredPosition
                             (0,param_5,*(undefined8 *)(lVar7 + 0x18));
          *(undefined4 *)(lVar7 + 0x20) = uVar16;
          *(float *)(lVar7 + 0x24) = fVar17;
          if (*(long *)(lVar7 + 0x18) == 0) break;
          UnityEngine_RectTransform__get_rect(*(long *)(lVar7 + 0x18),0);
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar22 = fVar22 + param_4;
        }
      }
      if (*(long *)(lVar7 + 0x10) == 0) break;
      lVar3 = FUN_03f5c394(DAT_09180528,*(undefined4 *)(*(long *)(lVar7 + 0x10) + 0x18));
      if (*(long *)(lVar7 + 0x10) == 0) break;
      lVar4 = FUN_03f5c394(DAT_0917fc40,*(undefined4 *)(*(long *)(lVar7 + 0x10) + 0x18));
      if (*(long *)(param_5 + 0x20) == 0) break;
      UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0x20),0);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar8 = *(long *)(lVar7 + 0x10);
      if (lVar8 == 0) break;
      param_3 = *(float *)(param_5 + 0x48);
      uVar15 = 0;
      param_4 = *(float *)(param_5 + 0x34);
      pfVar10 = (float *)(lVar3 + 0x20);
      fVar17 = param_3 * (float)*(int *)(lVar8 + 0x18);
      fVar19 = param_4 * (float)(*(int *)(lVar8 + 0x18) + -1);
      while ((int)uVar15 < (int)*(uint *)(lVar8 + 0x18)) {
        if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_04530e78;
        uVar2 = (ulong)uVar15;
        lVar8 = *(long *)(lVar8 + uVar2 * 8 + 0x20);
        if ((lVar8 == 0) || (lVar9 = *(long *)(lVar8 + 0x10), lVar9 == 0)) goto LAB_04530e40;
        uVar14 = 0;
        while ((long)uVar14 < (long)(int)*(uint *)(lVar9 + 0x18)) {
          if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_04530e78;
          uVar11 = *(undefined8 *)(lVar9 + uVar14 * 8 + 0x20);
          fVar21 = param_4;
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
            fVar21 = param_4;
          }
          uVar5 = UnityEngine_Object__op_Equality(uVar11,0,0);
          param_4 = fVar21;
          if ((uVar5 & 1) == 0) {
            lVar9 = *(long *)(lVar8 + 0x10);
            if (lVar9 == 0) goto LAB_04530e40;
            if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_04530e78;
            lVar9 = *(long *)(lVar9 + uVar14 * 8 + 0x20);
            if ((lVar9 == 0) || (lVar9 = UnityEngine_Component__get_gameObject(lVar9,0), lVar9 == 0)
               ) goto LAB_04530e40;
            uVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
            param_4 = fVar21;
            if ((uVar5 & 1) != 0) {
              if (lVar4 == 0) goto LAB_04530e40;
              if (*(uint *)(lVar4 + 0x18) <= uVar15) goto LAB_04530e78;
              if (*(char *)(lVar4 + uVar2 + 0x20) == '\0') {
                if (lVar3 == 0) goto LAB_04530e40;
              }
              else {
                if (lVar3 == 0) goto LAB_04530e40;
                if (*(uint *)(lVar3 + 0x18) <= uVar15) goto LAB_04530e78;
                pfVar10[uVar2] = pfVar10[uVar2] + *(float *)(param_5 + 0x38);
              }
              if (*(uint *)(lVar3 + 0x18) <= uVar15) goto LAB_04530e78;
              lVar9 = *(long *)(lVar8 + 0x10);
              if (lVar9 == 0) goto LAB_04530e40;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_04530e78;
              lVar13 = *(long *)(lVar8 + 0x18);
              fVar20 = fVar22 + *(float *)(lVar3 + uVar2 * 4 + 0x20);
              uVar16 = Utilities_UI_UICardFlowLayoutControl__GetAnchoredPosition
                                 ((fVar18 - (fVar17 + fVar19)) * 0.5 +
                                  (*(float *)(param_5 + 0x48) + *(float *)(param_5 + 0x34)) *
                                  (float)(int)uVar15,param_5,
                                  *(undefined8 *)(lVar9 + uVar14 * 8 + 0x20));
              if (lVar13 == 0) goto LAB_04530e40;
              if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_04530e78;
              lVar13 = lVar13 + uVar14 * 8;
              *(undefined4 *)(lVar13 + 0x20) = uVar16;
              *(float *)(lVar13 + 0x24) = fVar20;
              if (*(uint *)(lVar3 + 0x18) <= uVar15) goto LAB_04530e78;
              lVar9 = *(long *)(lVar8 + 0x10);
              if (lVar9 == 0) goto LAB_04530e40;
              if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_04530e78;
              lVar9 = *(long *)(lVar9 + uVar14 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_04530e40;
              fVar20 = pfVar10[uVar2];
              UnityEngine_RectTransform__get_rect(lVar9,0);
              param_4 = fVar21;
              if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar1 = *(uint *)(lVar4 + 0x18);
              pfVar10[uVar2] = fVar20 + fVar21;
              if (uVar1 <= uVar15) goto LAB_04530e78;
              *(undefined1 *)(lVar4 + uVar2 + 0x20) = 1;
            }
          }
          lVar9 = *(long *)(lVar8 + 0x10);
          uVar14 = uVar14 + 1;
          if (lVar9 == 0) goto LAB_04530e40;
        }
        uVar15 = uVar15 + 1;
        lVar8 = *(long *)(lVar7 + 0x10);
        if (lVar8 == 0) goto LAB_04530e40;
      }
      if (lVar3 == 0) break;
      iVar6 = (int)*(ulong *)(lVar3 + 0x18);
      if (iVar6 == 0) {
        fVar18 = 0.0;
      }
      else {
        fVar18 = *pfVar10;
        if (1 < iVar6) {
          lVar7 = (*(ulong *)(lVar3 + 0x18) & 0xffffffff) - 1;
          pfVar10 = (float *)(lVar3 + 0x24);
          do {
            fVar17 = *pfVar10;
            if (*pfVar10 <= fVar18) {
              fVar17 = fVar18;
            }
            fVar18 = fVar17;
            lVar7 = lVar7 + -1;
            pfVar10 = pfVar10 + 1;
          } while (lVar7 != 0);
        }
      }
      fVar22 = fVar22 + fVar18;
      lVar7 = *(long *)(param_5 + 0x28);
      uVar12 = uVar12 + 1;
      if (lVar7 == 0) break;
    } while( true );
  }
LAB_04530e40:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

