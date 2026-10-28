// rea decompile_all
// name: Utilities.UIGradientTransition$$BakeBlend
// address: 0x4529620
// body: available
// range: 0x4529620-0x4529afb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4529af4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4529af8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIGradientTransition__BakeBlend
               (float param_1,undefined1 param_2 [16],float param_3,float param_4,long param_5,
               long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_58;
  
  if ((DAT_0951860b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917ffa8);
    FUN_03f5c2a4(&DAT_0917ffb0);
    FUN_03f5c2a4(&DAT_091affa0);
    FUN_03f5c2a4(&DAT_091affb0);
    FUN_03f5c2a4(&DAT_091aff98);
    FUN_03f5c2a4(&DAT_091affd8);
    FUN_03f5c2a4(&DAT_091affe0);
    FUN_03f5c2a4(&DAT_0917cbd0);
    FUN_03f5c2a4(&DAT_091ba830);
    FUN_03f5c2a4(&DAT_091ba828);
    FUN_03f5c2a4(&DAT_0917e7b0);
    DAT_0951860b = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0917e7b0);
  FUN_060fc710(lVar1,DAT_091ba828);
  if ((param_5 != 0) && (lVar2 = UnityEngine_Gradient__get_colorKeys(param_5,0), lVar2 != 0)) {
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar6 = 0;
      uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      puVar7 = (undefined4 *)(lVar2 + 0x30);
      do {
        if (uVar3 <= uVar6) goto LAB_04529af8;
        if (lVar1 == 0) goto LAB_04529af4;
        FUN_060fc9e8(*puVar7,lVar1,DAT_091ba830);
        uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 5;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    lVar2 = UnityEngine_Gradient__get_alphaKeys(param_5,0);
    if (lVar2 != 0) {
      if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
        uVar6 = 0;
        uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
        puVar7 = (undefined4 *)(lVar2 + 0x24);
        do {
          if (uVar3 <= uVar6) goto LAB_04529af8;
          if (lVar1 == 0) goto LAB_04529af4;
          FUN_060fc9e8(*puVar7,lVar1,DAT_091ba830);
          uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
          uVar6 = uVar6 + 1;
          puVar7 = puVar7 + 2;
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
      }
      if ((param_6 != 0) && (lVar2 = UnityEngine_Gradient__get_colorKeys(param_6,0), lVar2 != 0)) {
        if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
          uVar6 = 0;
          uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
          puVar7 = (undefined4 *)(lVar2 + 0x30);
          do {
            if (uVar3 <= uVar6) goto LAB_04529af8;
            if (lVar1 == 0) goto LAB_04529af4;
            FUN_060fc9e8(*puVar7,lVar1,DAT_091ba830);
            uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
            uVar6 = uVar6 + 1;
            puVar7 = puVar7 + 5;
          } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
        }
        lVar2 = UnityEngine_Gradient__get_alphaKeys(param_6,0);
        if (lVar2 != 0) {
          if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
            uVar6 = 0;
            uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
            puVar7 = (undefined4 *)(lVar2 + 0x24);
            do {
              if (uVar3 <= uVar6) goto LAB_04529af8;
              if (lVar1 == 0) goto LAB_04529af4;
              FUN_060fc9e8(*puVar7,lVar1,DAT_091ba830);
              uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
              uVar6 = uVar6 + 1;
              puVar7 = puVar7 + 2;
            } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
          }
          lVar2 = thunk_FUN_03f9944c(DAT_0917cbd0);
          FUN_05862eac(lVar2,lVar1,DAT_091aff98);
          lVar1 = DAT_091affa0;
          if (lVar2 != 0) {
            iVar5 = *(int *)(lVar2 + 0x18);
            if (6 < iVar5 - 2U) {
              iVar5 = 0;
              *(undefined4 *)(lVar2 + 0x18) = 0;
              *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
              do {
                lVar4 = *(long *)(lVar2 + 0x10);
                *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                if (lVar4 == 0) goto LAB_04529af4;
                uVar9 = *(uint *)(lVar2 + 0x18);
                if (uVar9 < *(uint *)(lVar4 + 0x18)) {
                  *(uint *)(lVar2 + 0x18) = uVar9 + 1;
                  *(float *)(lVar4 + (long)(int)uVar9 * 4 + 0x20) = (float)iVar5 / 7.0;
                }
                else {
                  FUN_05863604(lVar2,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
                  lVar1 = DAT_091affa0;
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 != 8);
              iVar5 = *(int *)(lVar2 + 0x18);
            }
            lVar1 = FUN_03f5c394(DAT_0917ffb0,iVar5);
            lVar4 = FUN_03f5c394(DAT_0917ffa8,*(undefined4 *)(lVar2 + 0x18));
            if (0 < *(int *)(lVar2 + 0x18)) {
              uVar3 = 0;
              uVar6 = 0;
              puVar8 = (undefined8 *)(lVar1 + 0x20);
              fVar14 = 1.0;
              if (param_1 <= 1.0) {
                fVar14 = param_1;
              }
              fVar16 = 0.0;
              if (0.0 <= param_1) {
                fVar16 = fVar14;
              }
              do {
                fVar12 = (float)uVar3;
                uVar9 = FUN_05863308(lVar2,uVar6 & 0xffffffff,DAT_091affe0);
                fVar10 = (float)UnityEngine_Gradient__Evaluate(param_5,0);
                fVar14 = param_3;
                fVar15 = param_4;
                fVar13 = fVar12;
                fVar11 = (float)UnityEngine_Gradient__Evaluate(uVar9,param_6,0);
                local_a8 = 0;
                uStack_a0 = 0;
                local_98 = 0;
                fVar15 = param_4 + fVar16 * (fVar15 - param_4);
                param_3 = param_3 + fVar16 * (fVar14 - param_3);
                param_4 = fVar15;
                UnityEngine_GradientColorKey___ctor
                          (fVar10 + fVar16 * (fVar11 - fVar10),fVar12 + fVar16 * (fVar13 - fVar12),
                           param_3,fVar15,uVar9,&local_a8,0);
                if (lVar1 == 0) goto LAB_04529af4;
                if (*(uint *)(lVar1 + 0x18) <= uVar6) {
LAB_04529af8:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                uVar3 = (ulong)uVar9;
                local_58 = 0;
                puVar8[1] = uStack_a0;
                *puVar8 = local_a8;
                *(undefined4 *)(puVar8 + 2) = local_98;
                UnityEngine_GradientAlphaKey___ctor(fVar15,&local_58,0);
                if (lVar4 == 0) goto LAB_04529af4;
                if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_04529af8;
                puVar8 = (undefined8 *)((long)puVar8 + 0x14);
                *(undefined8 *)(lVar4 + 0x20 + uVar6 * 8) = local_58;
                uVar6 = uVar6 + 1;
              } while ((long)uVar6 < (long)*(int *)(lVar2 + 0x18));
            }
            if (param_7 != 0) {
              UnityEngine_Gradient__set_mode(param_7,0,0);
              UnityEngine_Gradient__SetKeys(param_7,lVar1,lVar4,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_04529af4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

