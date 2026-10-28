// rea decompile_all
// name: ChocDino.UIFX.TextLetterSpacing$$ModifyMesh
// address: 0x43ae4f4
// body: available
// range: 0x43ae4f4-0x43ae96b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43ae938 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43ae968 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_TextLetterSpacing__ModifyMesh
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long *param_4,
               long param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_fc [108];
  
  if ((DAT_09517aed & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b15a0);
    FUN_03f5c2a4(&DAT_091b12b0);
    FUN_03f5c2a4(&DAT_091b15a8);
    FUN_03f5c2a4(&DAT_0918bb60);
    DAT_09517aed = 1;
  }
  uVar6 = (**(code **)(*param_4 + 0x1c8))(param_4,*(undefined8 *)(*param_4 + 0x1d0));
  if (((uVar6 & 1) == 0) ||
     (fVar17 = *(float *)(param_4 + 4) * *(float *)((long)param_4 + 0x24), fVar17 == 0.0)) {
    return;
  }
  lVar7 = ChocDino_UIFX_TextLetterSpacing__get_TextComponent(param_4);
  if ((lVar7 != 0) && (lVar7 = UnityEngine_UI_Text__get_cachedTextGenerator(lVar7,0), lVar7 != 0)) {
    UnityEngine_TextGenerator__GetCharactersInternal(lVar7,param_4[6],0);
    lVar7 = ChocDino_UIFX_TextLetterSpacing__get_TextComponent(param_4);
    if ((lVar7 != 0) && (lVar7 = UnityEngine_UI_Text__get_cachedTextGenerator(lVar7,0), lVar7 != 0))
    {
      UnityEngine_TextGenerator__GetLinesInternal(lVar7,param_4[7],0);
      lVar7 = ChocDino_UIFX_TextLetterSpacing__get_TextComponent(param_4);
      if (lVar7 != 0) {
        uVar2 = UnityEngine_UI_Text__get_alignment(lVar7,0);
        fVar16 = 0.5;
        if (uVar2 < 9) {
          fVar16 = *(float *)(&DAT_01a8f9ec + (ulong)uVar2 * 4);
        }
        lVar7 = ChocDino_UIFX_TextLetterSpacing__get_TextComponent(param_4);
        if (lVar7 != 0) {
          iVar3 = UnityEngine_UI_Text__get_fontSize(lVar7,0);
          plVar8 = (long *)ChocDino_UIFX_TextLetterSpacing__get_TextComponent(param_4);
          if (plVar8 != (long *)0x0) {
            lVar7 = (**(code **)(*plVar8 + 0x5d8))(plVar8,*(undefined8 *)(*plVar8 + 0x5e0));
            lVar9 = param_4[7];
            if (lVar9 != 0) {
              uVar2 = 0;
              iVar13 = 0;
              fVar17 = (fVar17 * (float)iVar3) / 100.0;
              do {
                if (*(int *)(lVar9 + 0x18) <= iVar13) {
                  return;
                }
                uVar4 = FUN_05891d70(lVar9,iVar13,DAT_091b15a8);
                lVar9 = param_4[7];
                if (lVar9 == 0) break;
                iVar13 = iVar13 + 1;
                if (iVar13 < *(int *)(lVar9 + 0x18)) {
                  iVar3 = FUN_05891d70(lVar9,iVar13,DAT_091b15a8);
                  iVar3 = iVar3 + ~uVar4;
                }
                else {
                  lVar9 = ChocDino_UIFX_TextLetterSpacing__get_TextComponent(param_4);
                  if ((lVar9 == 0) ||
                     (lVar9 = UnityEngine_UI_Text__get_cachedTextGenerator(lVar9,0), lVar9 == 0))
                  break;
                  iVar3 = UnityEngine_TextGenerator__get_characterCountVisible(lVar9,0);
                  iVar3 = iVar3 - uVar4;
                }
                uVar1 = iVar3 + uVar4;
                if ((int)uVar4 < (int)uVar1) {
                  if (lVar7 == 0) break;
                  iVar12 = 0;
                  uVar11 = uVar4;
                  do {
                    System_String__get_Chars(lVar7,uVar11,0);
                    if (param_4[6] == 0) goto LAB_043ae938;
                    FUN_0588f2bc(param_4[6],uVar11,DAT_091b12b0);
                    uVar11 = uVar11 + 1;
                    if (0.0 < param_3) {
                      iVar12 = iVar12 + 1;
                    }
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != 0);
                  if ((int)uVar4 < (int)uVar1) {
                    if (lVar7 == 0) break;
                    iVar3 = 0;
                    do {
                      uVar5 = System_String__get_Chars(lVar7,uVar4,0);
                      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
                        FUN_03f5c424(DAT_09535460);
                      }
                      uVar6 = System_Char__IsWhiteSpace(uVar5,0);
                      if (param_4[6] == 0) goto LAB_043ae938;
                      FUN_0588f2bc(param_4[6],uVar4,DAT_091b12b0);
                      if (0.0 < param_3) {
                        if ((uVar6 & 1) == 0) {
                          if (DAT_09515cf0 == '\0') {
                            FUN_03f5c2a4(&DAT_0918cbd0);
                            DAT_09515cf0 = '\x01';
                          }
                          lVar9 = 0;
                          uVar6 = 0;
                          uVar15 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x3c);
                          param_3 = *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x44);
                          fVar14 = fVar17 * (float)iVar3 - fVar16 * fVar17 * (float)(iVar12 + -1);
                          fVar18 = fVar14 * param_3;
                          do {
                            if (*(int *)(DAT_0918bb60 + 0xe4) == 0) {
                              FUN_03f5c424();
                            }
                            lVar10 = **(long **)(DAT_0918bb60 + 0xb8);
                            if ((lVar10 == 0) || (param_5 == 0)) goto LAB_043ae938;
                            if (*(uint *)(lVar10 + 0x18) <= uVar6) {
LAB_043ae968:
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c558();
                            }
                            UnityEngine_UI_VertexHelper__PopulateUIVertex
                                      (param_5,lVar10 + lVar9 + 0x20,uVar2 + uVar6 & 0xffffffff,0);
                            lVar10 = **(long **)(DAT_0918bb60 + 0xb8);
                            if (lVar10 == 0) goto LAB_043ae938;
                            if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_043ae968;
                            lVar10 = lVar10 + lVar9;
                            *(ulong *)(lVar10 + 0x20) =
                                 CONCAT44((float)((ulong)uVar15 >> 0x20) * fVar14 +
                                          (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20),
                                          (float)uVar15 * fVar14 +
                                          (float)*(undefined8 *)(lVar10 + 0x20));
                            *(float *)(lVar10 + 0x28) = fVar18 + *(float *)(lVar10 + 0x28);
                            lVar10 = **(long **)(DAT_0918bb60 + 0xb8);
                            if (lVar10 == 0) goto LAB_043ae938;
                            if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_043ae968;
                            memmove(auStack_fc,(void *)(lVar10 + lVar9 + 0x20),0x6c);
                            UnityEngine_UI_VertexHelper__SetUIVertex
                                      (param_5,auStack_fc,uVar2 + uVar6 & 0xffffffff,0);
                            uVar6 = uVar6 + 1;
                            lVar9 = lVar9 + 0x6c;
                          } while (uVar6 != 4);
                          uVar2 = uVar2 + 4;
                        }
                        iVar3 = iVar3 + 1;
                      }
                      uVar4 = uVar4 + 1;
                    } while (uVar4 != uVar1);
                  }
                }
                lVar9 = param_4[7];
              } while (lVar9 != 0);
            }
          }
        }
      }
    }
  }
LAB_043ae938:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

