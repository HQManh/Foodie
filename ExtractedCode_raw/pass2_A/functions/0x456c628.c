// rea decompile_all
// name: DG.Tweening.Plugins.Core.PathCore.CubicBezierDecoder$$FinalizePath
// address: 0x456c628
// body: available
// range: 0x456c628-0x456cb1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456c75c to 0x85f70f4 UnityEngine.Debug$$LogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x456cb14 to 0x456cd3c DG.Tweening.Plugins.Core.PathCore.CubicBezierDecoder$$SetWaypointsLengths (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x456cb18 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x456cb1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Core_PathCore_CubicBezierDecoder__FinalizePath
               (undefined8 param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  if ((DAT_09518877 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fd58);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091807f8);
    FUN_03f5c2a4(&DAT_091ff9a0);
    DAT_09518877 = 1;
  }
  if ((param_4 & 1) == 0) {
    bVar4 = false;
  }
  else {
    if (param_2 == 0) goto LAB_0456cb1c;
    bVar4 = *(char *)(param_2 + 0x55) != '\0';
  }
  if ((param_3 != 0) && (param_2 != 0)) {
    iVar3 = *(int *)(param_3 + 0x18);
    iVar1 = (uint)*(byte *)(param_2 + 0x55) + (uint)*(byte *)(param_2 + 0x54);
    if ((iVar3 < iVar1 + 3) || (iVar2 = (iVar3 - iVar1) / 3, iVar3 - iVar1 != iVar2 * 3)) {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogError(DAT_091ff9a0,0);
      return;
    }
    iVar2 = iVar2 + iVar1;
    lVar5 = FUN_03f5c394(DAT_091807f8,iVar2);
    lVar6 = FUN_03f5c394(DAT_0917fd58,iVar2 + -1);
    plVar14 = (long *)(param_2 + 0x30);
    *plVar14 = lVar6;
    thunk_FUN_03f5d7b8(plVar14,lVar6);
    if (*(int *)(param_3 + 0x18) != 0) {
      if (lVar5 == 0) goto LAB_0456cb1c;
      if (*(int *)(lVar5 + 0x18) != 0) {
        uVar15 = *(undefined4 *)(param_3 + 0x28);
        *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(param_3 + 0x20);
        *(undefined4 *)(lVar5 + 0x28) = uVar15;
        uVar7 = 5;
        if (*(char *)(param_2 + 0x54) != '\0') {
          uVar7 = 3;
        }
        if ((int)uVar7 < iVar3) {
          uVar10 = 1;
          do {
            if ((*(uint *)(param_3 + 0x18) <= uVar7 - 2) || (*(uint *)(lVar5 + 0x18) <= uVar10))
            goto LAB_0456cb18;
            lVar6 = param_3 + (long)(int)(uVar7 - 2) * 0xc;
            lVar11 = lVar5 + (long)(int)uVar10 * 0xc;
            uVar15 = *(undefined4 *)(lVar6 + 0x28);
            *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar6 + 0x20);
            *(undefined4 *)(lVar11 + 0x28) = uVar15;
            if ((*(uint *)(param_3 + 0x18) <= uVar7 - 1) || (*(uint *)(param_3 + 0x18) <= uVar7))
            goto LAB_0456cb18;
            lVar6 = *plVar14;
            if (lVar6 == 0) goto LAB_0456cb1c;
            if (*(uint *)(lVar6 + 0x18) <= uVar10 - 1) goto LAB_0456cb18;
            lVar11 = param_3 + (long)(int)(uVar7 - 1) * 0xc;
            lVar12 = param_3 + (long)(int)uVar7 * 0xc;
            uVar7 = uVar7 + 3;
            lVar6 = lVar6 + (long)(int)(uVar10 - 1) * 0x18;
            uVar10 = uVar10 + 1;
            uVar15 = *(undefined4 *)(lVar11 + 0x28);
            uVar17 = *(undefined8 *)(lVar12 + 0x20);
            uVar18 = *(undefined4 *)(lVar12 + 0x28);
            *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar11 + 0x20);
            *(undefined4 *)(lVar6 + 0x28) = uVar15;
            *(undefined8 *)(lVar6 + 0x2c) = uVar17;
            *(undefined4 *)(lVar6 + 0x34) = uVar18;
          } while ((int)uVar7 < iVar3);
        }
        plVar13 = (long *)(param_2 + 0x18);
        *plVar13 = lVar5;
        thunk_FUN_03f5d7b8(plVar13,lVar5);
        if (!bVar4) {
LAB_0456cac8:
          *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x24) * iVar2;
          DG_Tweening_Plugins_Core_PathCore_CubicBezierDecoder__SetTimeToLengthTables
                    (param_1,param_2);
          DG_Tweening_Plugins_Core_PathCore_CubicBezierDecoder__SetWaypointsLengths
                    (param_1,param_2,*(undefined4 *)(param_2 + 0x24));
          return;
        }
        lVar5 = *plVar13;
        if (lVar5 == 0) goto LAB_0456cb1c;
        if ((*(ulong *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
          lVar6 = *plVar14;
          if (lVar6 == 0) goto LAB_0456cb1c;
          if ((*(ulong *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
            iVar1 = (int)*(ulong *)(lVar6 + 0x18) + -2;
            uVar25 = *(undefined8 *)(lVar5 + 0x20);
            puVar9 = (undefined8 *)(lVar5 + 0x20 + (long)((int)*(ulong *)(lVar5 + 0x18) + -2) * 0xc)
            ;
            puVar8 = (undefined8 *)(lVar6 + 0x20);
            uVar17 = *puVar8;
            fVar19 = *(float *)(lVar5 + 0x28);
            uVar29 = *puVar9;
            fVar27 = *(float *)(puVar9 + 1);
            fVar32 = *(float *)(lVar6 + 0x28);
            uVar22 = *(undefined8 *)((long)puVar8 + (long)iVar1 * 0x18 + 0xc);
            fVar31 = *(float *)((long)puVar8 + (long)iVar1 * 0x18 + 0x14);
            if (DAT_0951690d == '\0') {
              FUN_03f5c2a4(&DAT_09187e80);
              DAT_0951690d = '\x01';
            }
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar5 = *plVar14;
            if (lVar5 == 0) goto LAB_0456cb1c;
            fVar24 = (float)uVar25;
            fVar28 = (float)uVar29;
            fVar26 = (float)((ulong)uVar25 >> 0x20);
            fVar30 = (float)((ulong)uVar29 >> 0x20);
            fVar33 = fVar28 - (float)uVar22;
            fVar34 = fVar30 - (float)((ulong)uVar22 >> 0x20);
            fVar31 = fVar27 - fVar31;
            fVar16 = SQRT((fVar24 - fVar28) * (fVar24 - fVar28) +
                          (fVar26 - fVar30) * (fVar26 - fVar30) +
                          (fVar19 - fVar27) * (fVar19 - fVar27));
            if (DAT_0951877f == '\0') {
              FUN_03f5c2a4(&DAT_09187e80);
              DAT_0951877f = '\x01';
            }
            fVar20 = fVar31 * fVar31 + fVar33 * fVar33 + fVar34 * fVar34;
            if (fVar16 * fVar16 < fVar20) {
              if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                FUN_03f5c424();
                bVar4 = DAT_0951877f == '\0';
              }
              else {
                bVar4 = false;
              }
              fVar20 = SQRT(fVar20);
              fVar33 = (fVar33 / fVar20) * fVar16;
              fVar34 = (fVar34 / fVar20) * fVar16;
              fVar31 = fVar16 * (fVar31 / fVar20);
              if (bVar4) {
                FUN_03f5c2a4(&DAT_09187e80);
                DAT_0951877f = '\x01';
              }
            }
            fVar32 = fVar19 - fVar32;
            fVar21 = fVar24 - (float)uVar17;
            fVar23 = fVar26 - (float)((ulong)uVar17 >> 0x20);
            fVar20 = fVar32 * fVar32 + fVar21 * fVar21 + fVar23 * fVar23;
            if (fVar16 * fVar16 < fVar20) {
              if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              fVar20 = SQRT(fVar20);
              fVar21 = (fVar21 / fVar20) * fVar16;
              fVar23 = (fVar23 / fVar20) * fVar16;
              fVar32 = fVar16 * (fVar32 / fVar20);
            }
            if (*(int *)(lVar5 + 0x18) != 0) {
              lVar5 = lVar5 + (long)(*(int *)(lVar5 + 0x18) + -1) * 0x18;
              *(ulong *)(lVar5 + 0x20) = CONCAT44(fVar30 + fVar34,fVar28 + fVar33);
              *(float *)(lVar5 + 0x28) = fVar27 + fVar31;
              *(ulong *)(lVar5 + 0x2c) = CONCAT44(fVar26 + fVar23,fVar24 + fVar21);
              *(float *)(lVar5 + 0x34) = fVar19 + fVar32;
              goto LAB_0456cac8;
            }
          }
        }
      }
    }
LAB_0456cb18:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_0456cb1c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

