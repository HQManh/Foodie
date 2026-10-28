// rea decompile_all
// name: ChocDino.UIFX.FilterBase$$GenerateScreenRect
// address: 0x43d7cd8
// body: available
// range: 0x43d7cd8-0x43d82f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43d82f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ChocDino_UIFX_FilterBase__GenerateScreenRect(long *param_1)

{
  float fVar1;
  float fVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined1 uVar15;
  byte bVar16;
  undefined1 uVar17;
  byte bVar18;
  undefined1 uVar19;
  byte bVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  if ((DAT_09517c9d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184618);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c48);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517c9d = 1;
  }
  ChocDino_UIFX_FilterBase__GetResolutionScalingFactor(param_1);
  uVar4 = ChocDino_UIFX_FilterBase__GetRenderCamera(param_1);
  if (param_1[0xc] == 0) goto LAB_043d82f4;
  uVar21 = 0;
  if (*(int *)((long)param_1 + 0x24) != 0) {
    uVar21 = uVar4;
  }
  ChocDino_UIFX_ScreenRectFromMeshes__Start(param_1[0xc],uVar21,*(int *)((long)param_1 + 0x24),0);
  if (*(int *)((long)param_1 + 0x2c) == 0) {
    uVar4 = ChocDino_UIFX_FilterBase__get_GraphicComponent(param_1);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar5 & 1) == 0) goto LAB_043d7dcc;
    lVar9 = param_1[0xc];
    if (*(int *)((long)param_1 + 0x24) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = UnityEngine_Component__get_transform(param_1,0);
    }
    if (lVar9 == 0) goto LAB_043d82f4;
    ChocDino_UIFX_ScreenRectFromMeshes__AddMeshBounds(lVar9,uVar4,param_1[0xf],0);
  }
  else {
LAB_043d7dcc:
    uVar4 = ChocDino_UIFX_FilterBase__get_RectTransformComponent(param_1);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar5 & 1) != 0) {
      lVar9 = param_1[0xc];
      if (*(int *)((long)param_1 + 0x24) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = UnityEngine_Component__get_transform(param_1,0);
      }
      lVar6 = ChocDino_UIFX_FilterBase__get_RectTransformComponent(param_1);
      if ((lVar6 == 0) || (UnityEngine_RectTransform__get_rect(lVar6,0), lVar9 == 0))
      goto LAB_043d82f4;
      ChocDino_UIFX_ScreenRectFromMeshes__AddRect(lVar9,uVar4,0);
    }
  }
  if (param_1[0xc] != 0) {
    ChocDino_UIFX_ScreenRectFromMeshes__End(param_1[0xc],0);
    if (DAT_09517cab == '\0') {
      FUN_03f5c2a4(&DAT_0918cb90);
      DAT_09517cab = '\x01';
    }
    lVar9 = DAT_0918cb90;
    param_1[0x2e] = **(long **)(DAT_0918cb90 + 0xb8);
    param_1[0x2f] = **(long **)(lVar9 + 0xb8);
    if ((int)param_1[5] == 1) {
      (**(code **)(*param_1 + 0x368))
                (param_1,param_1 + 0x2e,param_1 + 0x2f,*(undefined8 *)(*param_1 + 0x370));
      iVar24 = (int)param_1[0x2e];
      iVar26 = *(int *)((long)param_1 + 0x174);
      lVar9 = param_1[0x2f];
      iVar8 = *(int *)((long)param_1 + 0x17c);
      iVar25 = (int)lVar9;
      if (*(int *)((long)param_1 + 0x24) == 0) {
        fVar27 = *(float *)(param_1 + 0x17);
        if (fVar27 == 0.0) {
          if (DAT_09517cab == '\0') {
            FUN_03f5c2a4(&DAT_0918cb90);
            DAT_09517cab = '\x01';
          }
          iVar24 = **(int **)(DAT_0918cb90 + 0xb8);
          iVar26 = (*(int **)(DAT_0918cb90 + 0xb8))[1];
          iVar25 = iVar24;
          iVar8 = iVar26;
        }
        else {
          fVar28 = *(float *)((long)param_1 + 0xa4);
          if (DAT_095163ce == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_095163ce = '\x01';
          }
          fVar28 = ((float)iVar24 / fVar27) * fVar28;
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
            cVar7 = DAT_095163ce;
          }
          else {
            cVar7 = '\x01';
          }
          fVar27 = *(float *)(param_1 + 0x17);
          fVar29 = *(float *)((long)param_1 + 0xa4);
          iVar24 = -0x80000000;
          if ((float)(int)fVar28 != INFINITY) {
            iVar24 = (int)fVar28;
          }
          if (cVar7 == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_095163ce = '\x01';
          }
          fVar29 = ((float)iVar26 / fVar27) * fVar29;
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
            cVar7 = DAT_095163ce;
          }
          else {
            cVar7 = '\x01';
          }
          fVar27 = *(float *)(param_1 + 0x17);
          fVar28 = *(float *)((long)param_1 + 0xa4);
          iVar26 = -0x80000000;
          if ((float)(int)fVar29 != INFINITY) {
            iVar26 = (int)fVar29;
          }
          if (cVar7 == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_095163ce = '\x01';
          }
          fVar28 = ((float)(int)lVar9 / fVar27) * fVar28;
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
            cVar7 = DAT_095163ce;
          }
          else {
            cVar7 = '\x01';
          }
          fVar27 = *(float *)(param_1 + 0x17);
          fVar29 = *(float *)((long)param_1 + 0xa4);
          iVar25 = -0x80000000;
          if ((float)(int)fVar28 != INFINITY) {
            iVar25 = (int)fVar28;
          }
          if (cVar7 == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_095163ce = '\x01';
          }
          fVar29 = ((float)iVar8 / fVar27) * fVar29;
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar8 = -0x80000000;
          if ((float)(int)fVar29 != INFINITY) {
            iVar8 = (int)fVar29;
          }
        }
      }
      if (param_1[0xc] == 0) goto LAB_043d82f4;
      ChocDino_UIFX_ScreenRectFromMeshes__Adjust
                (param_1[0xc],CONCAT44(iVar26,iVar24),CONCAT44(iVar8,iVar25),0);
    }
    if (param_1[0xc] != 0) {
      ChocDino_UIFX_ScreenRectFromMeshes__OptimiseRects
                (param_1[0xc],*(undefined8 *)((long)param_1 + 0xac),
                 *(undefined4 *)((long)param_1 + 0xb4),0);
      lVar9 = param_1[0xc];
      if (lVar9 != 0) {
        uVar4 = *(undefined8 *)(lVar9 + 0x54);
        fVar28 = *(float *)(lVar9 + 0x2c);
        fVar27 = *(float *)(lVar9 + 0x30);
        fVar30 = *(float *)(lVar9 + 0x34);
        fVar29 = *(float *)(lVar9 + 0x38);
        iVar24 = *(int *)(lVar9 + 0x4c);
        iVar26 = *(int *)(lVar9 + 0x50);
        if (*(int *)(DAT_09189c48 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar25 = (int)uVar4 + iVar24;
        iVar8 = iVar24;
        if (iVar25 <= iVar24) {
          iVar8 = iVar25;
        }
        if (iVar24 <= iVar25) {
          iVar24 = iVar25;
        }
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        fVar22 = (float)iVar8;
        uVar21 = 0;
        uVar5 = NEON_fmov(0x3f800000,4);
        bVar10 = 0;
        bVar11 = 0;
        bVar12 = 0;
        bVar13 = 0;
        bVar14 = 0;
        bVar16 = 0;
        bVar18 = 0;
        bVar20 = 0;
        fVar1 = (float)(uVar5 >> 0x20);
        if (fVar22 != (float)iVar24) {
          fVar23 = (float)iVar24 - fVar22;
          fVar2 = (fVar28 - fVar22) / fVar23;
          fVar23 = ((fVar28 + fVar30) - fVar22) / fVar23;
          uVar15 = (undefined1)((uint)fVar23 >> 8);
          uVar17 = (undefined1)((uint)fVar23 >> 0x10);
          uVar19 = (undefined1)((uint)fVar23 >> 0x18);
          iVar24 = -(uint)(fVar2 < 0.0);
          iVar25 = -(uint)(fVar23 < 0.0);
          uVar3 = CONCAT17(uVar19,CONCAT16(uVar17,CONCAT15(uVar15,CONCAT14(SUB41(fVar23,0),fVar2))))
                  ^ (CONCAT17(uVar19,CONCAT16(uVar17,CONCAT15(uVar15,CONCAT14(SUB41(fVar23,0),fVar2)
                                                             ))) ^ uVar5) &
                    CONCAT44(-(uint)(fVar1 < fVar23),-(uint)((float)uVar5 < fVar2));
          bVar10 = (byte)uVar3 & ~(byte)iVar24;
          bVar11 = (byte)(uVar3 >> 8) & ~(byte)((uint)iVar24 >> 8);
          bVar12 = (byte)(uVar3 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
          bVar13 = (byte)(uVar3 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
          bVar14 = (byte)(uVar3 >> 0x20) & ~(byte)iVar25;
          bVar16 = (byte)(uVar3 >> 0x28) & ~(byte)((uint)iVar25 >> 8);
          bVar18 = (byte)(uVar3 >> 0x30) & ~(byte)((uint)iVar25 >> 0x10);
          bVar20 = (byte)(uVar3 >> 0x38) & ~(byte)((uint)iVar25 >> 0x18);
        }
        iVar24 = (int)((ulong)uVar4 >> 0x20) + iVar26;
        iVar25 = iVar26;
        if (iVar24 <= iVar26) {
          iVar25 = iVar24;
        }
        if (iVar26 <= iVar24) {
          iVar26 = iVar24;
        }
        fVar28 = (float)iVar25;
        if (fVar28 != (float)iVar26) {
          fVar22 = (float)iVar26 - fVar28;
          fVar30 = (fVar27 - fVar28) / fVar22;
          fVar22 = ((fVar27 + fVar29) - fVar28) / fVar22;
          iVar24 = -(uint)(fVar30 < 0.0);
          iVar26 = -(uint)(fVar22 < 0.0);
          uVar5 = uVar5 ^ (uVar5 ^ CONCAT44(fVar22,fVar30)) &
                          ~CONCAT44(-(uint)(fVar1 < fVar22),-(uint)((float)uVar5 < fVar30));
          uVar21 = CONCAT17((byte)(uVar5 >> 0x38) & ~(byte)((uint)iVar26 >> 0x18),
                            CONCAT16((byte)(uVar5 >> 0x30) & ~(byte)((uint)iVar26 >> 0x10),
                                     CONCAT15((byte)(uVar5 >> 0x28) & ~(byte)((uint)iVar26 >> 8),
                                              CONCAT14((byte)(uVar5 >> 0x20) & ~(byte)iVar26,
                                                       CONCAT13((byte)(uVar5 >> 0x18) &
                                                                ~(byte)((uint)iVar24 >> 0x18),
                                                                CONCAT12((byte)(uVar5 >> 0x10) &
                                                                         ~(byte)((uint)iVar24 >>
                                                                                0x10),
                                                                         CONCAT11((byte)(uVar5 >> 8)
                                                                                  & ~(byte)((uint)
                                                  iVar24 >> 8),(byte)uVar5 & ~(byte)iVar24)))))));
        }
        lVar9 = param_1[0xc];
        param_1[0x34] =
             CONCAT44((float)((ulong)uVar21 >> 0x20) - (float)uVar21,
                      (float)CONCAT13(bVar20,CONCAT12(bVar18,CONCAT11(bVar16,bVar14))) -
                      (float)CONCAT13(bVar13,CONCAT12(bVar12,CONCAT11(bVar11,bVar10))));
        param_1[0x33] =
             CONCAT17((char)((ulong)uVar21 >> 0x18),
                      CONCAT16((char)((ulong)uVar21 >> 0x10),
                               CONCAT15((char)((ulong)uVar21 >> 8),
                                        CONCAT14((char)uVar21,
                                                 CONCAT13(bVar13,CONCAT12(bVar12,CONCAT11(bVar11,
                                                  bVar10)))))));
        if (lVar9 != 0) {
          if (0.0 < *(float *)(lVar9 + 0x34)) {
            fVar27 = *(float *)(lVar9 + 0x38);
            if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (0.0 < fVar27) {
              if (param_1[0xc] != 0) {
                fVar27 = *(float *)(param_1[0xc] + 0x34);
                if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                if (*(int *)(DAT_09184618 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                iVar24 = ChocDino_UIFX_Filters__GetMaxiumumTextureSize(0);
                if (fVar27 <= (float)iVar24) {
                  if (param_1[0xc] == 0) goto LAB_043d82f4;
                  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  if (*(int *)(DAT_09184618 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  ChocDino_UIFX_Filters__GetMaxiumumTextureSize(0);
                }
                return 1;
              }
              goto LAB_043d82f4;
            }
          }
          return 0;
        }
      }
    }
  }
LAB_043d82f4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

