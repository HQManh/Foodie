// rea decompile_all
// name: Utilities.UIBonusMultiplierBar$$Update
// address: 0x4524d6c
// body: available
// range: 0x4524d6c-0x4524fbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4524f9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4524fbc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIBonusMultiplierBar__Update
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (*(char *)(param_5 + 0x78) != '\0') {
    fVar11 = (float)UnityEngine_Time__get_time(0);
    lVar9 = *(long *)(param_5 + 0x50);
    if (lVar9 == 0) goto LAB_04524f9c;
    fVar16 = *(float *)(param_5 + 0x58);
    fVar11 = fmodf(fVar11,fVar16);
    fVar11 = (float)UnityEngine_AnimationCurve__Evaluate(fVar11 / fVar16,lVar9,0);
    lVar9 = *(long *)(param_5 + 0x28);
    if (lVar9 == 0) goto LAB_04524f9c;
    if (*(uint *)(lVar9 + 0x18) == 0) {
LAB_04524fbc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar10 = *(long *)(param_5 + 0x20);
    if (lVar10 == 0) goto LAB_04524f9c;
    fVar16 = *(float *)(lVar9 + 0x20);
    param_3 = *(float *)(lVar9 + 0x20 +
                        ((long)(((ulong)*(uint *)(lVar9 + 0x18) << 0x20) + -0x100000000) >> 0x1e)) -
              fVar16;
    fVar16 = fVar16 + fVar11 * param_3;
    UnityEngine_RectTransform__get_anchoredPosition(lVar10,0);
    UnityEngine_RectTransform__set_anchoredPosition(fVar16,lVar10,0);
    lVar9 = *(long *)(param_5 + 0x28);
    if (lVar9 == 0) goto LAB_04524f9c;
    iVar2 = *(int *)(lVar9 + 0x18);
    iVar4 = -1;
    uVar8 = iVar2 - 1;
    iVar1 = iVar2;
    if (iVar2 == 0 || uVar8 == 0) {
      iVar1 = 1;
    }
    uVar5 = (ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU));
    uVar6 = (ulong)(iVar1 - 1);
    pfVar7 = (float *)(lVar9 + 0x24);
    do {
      if (uVar5 == 0) goto LAB_04524e58;
      if (uVar6 == 0) goto LAB_04524fbc;
      fVar11 = *pfVar7;
      iVar4 = iVar4 + 1;
      uVar6 = uVar6 - 1;
      uVar5 = uVar5 - 1;
      pfVar7 = pfVar7 + 1;
    } while (fVar11 <= fVar16);
    if (iVar4 < 0) {
LAB_04524e58:
      iVar4 = iVar2 + -2;
    }
    if (*(int *)(param_5 + 0x68) != iVar4) {
      lVar9 = *(long *)(param_5 + 0x70);
      *(int *)(param_5 + 0x68) = iVar4;
      if (lVar9 != 0) {
        Utilities_UIBonusMultiplierBar__get_CurrentBonusMultiplier(param_5);
        (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
      }
    }
  }
  fVar11 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
  if ((*(long *)(param_5 + 0x60) != 0) && (lVar9 = *(long *)(param_5 + 0x30), lVar9 != 0)) {
    lVar10 = 4;
    fVar16 = fVar11 * *(float *)(*(long *)(param_5 + 0x60) + 0x14) * 50.0;
    fVar11 = 1.0;
    if (fVar16 <= 1.0) {
      fVar11 = fVar16;
    }
    fVar17 = 0.0;
    if (0.0 <= fVar16) {
      fVar17 = fVar11;
    }
    do {
      uVar8 = (int)lVar10 - 4;
      if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar8) {
        return;
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_04524fbc;
      plVar3 = *(long **)(lVar9 + lVar10 * 8);
      if (plVar3 == (long *)0x0) break;
      fVar12 = (float)(**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
      lVar9 = *(long *)(param_5 + 0x30);
      fVar16 = 1.0;
      if (uVar8 != *(uint *)(param_5 + 0x68)) {
        fVar16 = 0.0;
      }
      if (lVar9 == 0) break;
      if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_04524fbc;
      plVar3 = *(long **)(lVar9 + lVar10 * 8);
      if (plVar3 == (long *)0x0) break;
      fVar14 = fVar11;
      fVar15 = param_3;
      fVar13 = (float)(**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
      fVar11 = fVar14 + fVar17 * (fVar11 - fVar14);
      param_3 = fVar15 + fVar17 * (param_3 - fVar15);
      param_4 = param_4 + fVar17 * (fVar16 - param_4);
      (**(code **)(*plVar3 + 0x2a8))
                (fVar13 + fVar17 * (fVar12 - fVar13),fVar11,param_3,param_4,plVar3,
                 *(undefined8 *)(*plVar3 + 0x2b0));
      lVar9 = *(long *)(param_5 + 0x30);
      lVar10 = lVar10 + 1;
    } while (lVar9 != 0);
  }
LAB_04524f9c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

