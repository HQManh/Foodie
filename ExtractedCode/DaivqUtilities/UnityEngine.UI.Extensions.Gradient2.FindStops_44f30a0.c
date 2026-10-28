// rea decompile_all
// name: UnityEngine.UI.Extensions.Gradient2$$FindStops
// address: 0x44f30a0
// body: available
// range: 0x44f30a0-0x44f3473 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44f346c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44f3470 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long UnityEngine_UI_Extensions_Gradient2__FindStops
               (float param_1,float param_2,float param_3,float param_4,float param_5,long param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_0951841a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091affa0);
    FUN_03f5c2a4(&DAT_091affc0);
    FUN_03f5c2a4(&DAT_091affc8);
    FUN_03f5c2a4(&DAT_091aff90);
    FUN_03f5c2a4(&DAT_091affd8);
    FUN_03f5c2a4(&DAT_091affe0);
    FUN_03f5c2a4(&DAT_091affe8);
    FUN_03f5c2a4(&DAT_0917cbd0);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_0951841a = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917cbd0);
  FUN_05862d70(lVar3,DAT_091aff90);
  if (*(long *)(param_6 + 0x40) != 0) {
    fVar13 = *(float *)(param_6 + 0x34);
    lVar4 = UnityEngine_Gradient__get_colorKeys(*(long *)(param_6 + 0x40),0);
    if (lVar4 != 0) {
      fVar13 = (1.0 - param_1) * fVar13;
      fVar12 = param_1 - fVar13;
      fVar13 = (1.0 - param_1) - fVar13;
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar8 = 0;
        uVar5 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        pfVar9 = (float *)(lVar4 + 0x30);
        do {
          lVar2 = DAT_091affa0;
          if (uVar5 <= uVar8) goto LAB_044f3470;
          fVar10 = *pfVar9;
          if (fVar13 <= fVar10) break;
          if (fVar12 < fVar10) {
            if (lVar3 == 0) goto LAB_044f346c;
            lVar6 = *(long *)(lVar3 + 0x10);
            fVar11 = *(float *)(param_6 + 0x38);
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (lVar6 == 0) goto LAB_044f346c;
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              *(float *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = (fVar10 - fVar12) * fVar11;
            }
            else {
              FUN_05863604(lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
          }
          uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar8 = uVar8 + 1;
          pfVar9 = pfVar9 + 5;
        } while ((long)uVar8 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
      if ((*(long *)(param_6 + 0x40) != 0) &&
         (lVar4 = UnityEngine_Gradient__get_alphaKeys(*(long *)(param_6 + 0x40),0), lVar4 != 0)) {
        if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
          uVar8 = 0;
          uVar5 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
          pfVar9 = (float *)(lVar4 + 0x24);
          do {
            lVar2 = DAT_091affa0;
            if (uVar5 <= uVar8) {
LAB_044f3470:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            fVar10 = *pfVar9;
            if (fVar13 <= fVar10) break;
            if (fVar12 < fVar10) {
              if (lVar3 == 0) goto LAB_044f346c;
              lVar6 = *(long *)(lVar3 + 0x10);
              fVar11 = *(float *)(param_6 + 0x38);
              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
              if (lVar6 == 0) goto LAB_044f346c;
              uVar1 = *(uint *)(lVar3 + 0x18);
              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                *(float *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = (fVar10 - fVar12) * fVar11;
              }
              else {
                FUN_05863604(lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                            );
              }
            }
            uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
            uVar8 = uVar8 + 1;
            pfVar9 = pfVar9 + 2;
          } while ((long)uVar8 < (long)(int)*(uint *)(lVar4 + 0x18));
        }
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if ((*(int *)(param_6 + 0x28) == 1) &&
           (param_4 = param_5, param_2 = param_3, *(int *)(DAT_09189c30 + 0xe4) == 0)) {
          FUN_03f5c424();
        }
        if (lVar3 != 0) {
          FUN_05865024(lVar3,DAT_091affc8);
          if (0 < *(int *)(lVar3 + 0x18)) {
            iVar7 = 0;
            do {
              fVar13 = (float)FUN_05863308(lVar3,iVar7,DAT_091affe0);
              FUN_0586335c(param_2 + param_4 * fVar13,lVar3,iVar7,DAT_091affe8);
              if (0 < iVar7) {
                fVar13 = (float)FUN_05863308(lVar3,iVar7,DAT_091affe0);
                fVar12 = (float)FUN_05863308(lVar3,iVar7 + -1,DAT_091affe0);
                if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                if (ABS(fVar13 - fVar12) < 2.0) {
                  FUN_05864e60(lVar3,iVar7,DAT_091affc0);
                  iVar7 = iVar7 + -1;
                }
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < *(int *)(lVar3 + 0x18));
          }
          return lVar3;
        }
      }
    }
  }
LAB_044f346c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

