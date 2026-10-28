// rea decompile_all
// name: ChocDino.UIFX.FilterStackTextMeshPro$$RenderToTexture
// address: 0x43bd964
// body: available
// range: 0x43bd964-0x43be98b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43be984 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43be988 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FilterStackTextMeshPro__RenderToTexture(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long lVar28;
  undefined8 *puVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  uint local_64;
  
  if ((DAT_09517b6b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09184618);
    FUN_03f5c2a4(&DAT_091b0ab0);
    FUN_03f5c2a4(&DAT_091b0ab8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09190988);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091f8968);
    FUN_03f5c2a4(&DAT_09214480);
    FUN_03f5c2a4(&DAT_091f9400);
    FUN_03f5c2a4(&DAT_091f6960);
    DAT_09517b6b = 1;
  }
  puVar29 = (undefined8 *)(param_1 + 0x68);
  *puVar29 = 0;
  local_64 = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  thunk_FUN_03f5d7b8(puVar29,0);
  uVar11 = ChocDino_UIFX_FilterStackTextMeshPro__GetRenderCamera(param_1);
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_043be984;
  uVar12 = UnityEngine_UI_Graphic__get_canvas(*(long *)(param_1 + 0x30),0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar13 = UnityEngine_Object__op_Implicit(uVar12,0);
  uVar30 = 0x3f800000;
  if ((uVar13 & 1) != 0) {
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (lVar14 = UnityEngine_UI_Graphic__get_canvas(*(long *)(param_1 + 0x30),0), lVar14 == 0))
    goto LAB_043be984;
    uVar30 = UnityEngine_Canvas__get_scaleFactor(lVar14,0);
  }
  if (((*(long *)(param_1 + 0x30) == 0) ||
      (lVar14 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0x30),0), lVar14 == 0)) ||
     (*(long *)(param_1 + 0x30) == 0)) goto LAB_043be984;
  uVar7 = *(uint *)(lVar14 + 0x34);
  lVar14 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0x30),0);
  if (lVar14 == 0) goto LAB_043be984;
  if (*(long *)(lVar14 + 0x60) != 0) {
    if (((*(long *)(param_1 + 0x30) == 0) ||
        (lVar14 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0x30),0), lVar14 == 0)) ||
       (*(long *)(lVar14 + 0x60) == 0)) goto LAB_043be984;
    uVar10 = *(uint *)(*(long *)(lVar14 + 0x60) + 0x18);
    if ((int)uVar10 <= (int)uVar7) {
      uVar7 = uVar10;
    }
  }
  if (DAT_09517b7f == '\0') {
    FUN_03f5c2a4(&DAT_091828b0);
    DAT_09517b7f = '\x01';
  }
  lVar14 = *(long *)(DAT_091828b0 + 0xb8);
  iVar5 = *(int *)(lVar14 + 4);
  if (DAT_09517b80 == '\0') {
    FUN_03f5c2a4(&DAT_091828b0);
    DAT_09517b80 = '\x01';
    lVar14 = *(long *)(DAT_091828b0 + 0xb8);
  }
  if (iVar5 == *(int *)(lVar14 + 8)) {
LAB_043bdb7c:
    uVar12 = 1;
  }
  else {
    plVar16 = *(long **)(param_1 + 0x30);
    if (plVar16 == (long *)0x0) goto LAB_043be984;
    uVar12 = (**(code **)(*plVar16 + 0x568))(plVar16,*(undefined8 *)(*plVar16 + 0x570));
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar13 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    if ((uVar13 & 1) != 0) {
      plVar16 = *(long **)(param_1 + 0x30);
      if (plVar16 == (long *)0x0) goto LAB_043be984;
      uVar12 = (**(code **)(*plVar16 + 0x568))(plVar16,*(undefined8 *)(*plVar16 + 0x570));
      uVar13 = ChocDino_UIFX_FilterStackTextMeshPro__IsMaterialHdr(param_1,plVar16,uVar12);
      if ((uVar13 & 1) != 0) goto LAB_043bdb7c;
      if (1 < (int)uVar7) {
        uVar13 = 1;
        lVar14 = 0x78;
        do {
          if (((*(long *)(param_1 + 0x30) == 0) ||
              (lVar17 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0x30),0), lVar17 == 0)) ||
             (lVar17 = *(long *)(lVar17 + 0x60), lVar17 == 0)) goto LAB_043be984;
          if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_043be988;
          if (0 < *(int *)(lVar17 + lVar14)) {
            lVar28 = *(long *)(param_1 + 0x38);
            if (lVar28 == 0) goto LAB_043be984;
            if ((long)uVar13 < (long)*(int *)(lVar28 + 0x18)) {
              uVar12 = *(undefined8 *)((int *)(lVar17 + lVar14) + 0x10);
              lVar17 = FUN_057e0998(lVar28,uVar13 & 0xffffffff,DAT_091b0ab8);
              if (lVar17 == 0) goto LAB_043be984;
              uVar18 = *(undefined8 *)(lVar17 + 0xe0);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar15 = UnityEngine_Object__op_Inequality(uVar18,0,0);
              if (((uVar15 & 1) == 0) &&
                 (uVar15 = ChocDino_UIFX_FilterStackTextMeshPro__IsMaterialHdr
                                     (param_1,*(undefined8 *)(param_1 + 0x30),uVar12),
                 (uVar15 & 1) != 0)) goto LAB_043bdb7c;
            }
          }
          uVar13 = uVar13 + 1;
          lVar14 = lVar14 + 0x50;
        } while (uVar7 != uVar13);
      }
    }
    uVar12 = 0;
  }
  lVar14 = *(long *)(param_1 + 0x40);
  if ((lVar14 == 0) || (*(long *)(param_1 + 0x48) == 0)) goto LAB_043be984;
  bVar2 = *(int *)(param_1 + 0xac) != 0;
  if (bVar2) {
    uVar30 = 0x3f800000;
  }
  uVar18 = 0;
  if (bVar2) {
    uVar18 = uVar11;
  }
  uVar13 = ChocDino_UIFX_Compositor__Start
                     (uVar30,*(long *)(param_1 + 0x48),uVar18,*(undefined8 *)(lVar14 + 0x4c),
                      *(undefined8 *)(lVar14 + 0x54),uVar12,0);
  if ((uVar13 & 1) == 0) {
    return;
  }
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar13 = UnityEngine_Debug__get_isDebugBuild(0);
  if ((uVar13 & 1) != 0) {
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_043be984;
    if ((*(char *)(*(long *)(param_1 + 0x48) + 0xc0) != '\0') && (*(char *)(param_1 + 0xa5) == '\0')
       ) {
      lVar14 = FUN_03f5c394(DAT_091805f8,7);
      if (lVar14 == 0) goto LAB_043be984;
      if (*(int *)(lVar14 + 0x18) == 0) {
LAB_043be988:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar14 + 0x20) = DAT_09214480;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar14 + 0x20));
      uVar12 = UnityEngine_Object__GetName(param_1,0);
      if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) goto LAB_043be988;
      *(undefined8 *)(lVar14 + 0x28) = uVar12;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar14 + 0x28),uVar12);
      if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_043be988;
      *(undefined8 *)(lVar14 + 0x30) = DAT_091f9400;
      thunk_FUN_03f5d7b8();
      plVar16 = (long *)System_Object__GetType(param_1,0);
      if (plVar16 == (long *)0x0) goto LAB_043be984;
      uVar12 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
      if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) goto LAB_043be988;
      *(undefined8 *)(lVar14 + 0x38) = uVar12;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar14 + 0x38),uVar12);
      if (*(uint *)(lVar14 + 0x18) < 5) goto LAB_043be988;
      *(undefined8 *)(lVar14 + 0x40) = DAT_091f6960;
      thunk_FUN_03f5d7b8();
      if (*(int *)(DAT_09184618 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_64 = ChocDino_UIFX_Filters__GetMaxiumumTextureSize(0);
      uVar12 = System_Int32__ToString(&local_64,0);
      if (*(uint *)(lVar14 + 0x18) < 6) goto LAB_043be988;
      *(undefined8 *)(lVar14 + 0x48) = uVar12;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar14 + 0x48),uVar12);
      if (*(uint *)(lVar14 + 0x18) < 7) goto LAB_043be988;
      *(undefined8 *)(lVar14 + 0x50) = DAT_091f8968;
      thunk_FUN_03f5d7b8();
      uVar12 = System_String__Concat(lVar14,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogWarning(uVar12,param_1,0);
      *(undefined1 *)(param_1 + 0xa5) = 1;
    }
  }
  UnityEngine_QualitySettings__get_activeColorSpace(0);
  if (0 < (int)uVar7) {
    uVar13 = 0;
    lVar14 = 0x68;
    do {
      if (((*(long *)(param_1 + 0x30) == 0) ||
          (lVar17 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0x30),0), lVar17 == 0)) ||
         (lVar17 = *(long *)(lVar17 + 0x60), lVar17 == 0)) goto LAB_043be984;
      if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_043be988;
      puVar23 = (undefined8 *)(lVar17 + lVar14);
      if (0 < *(int *)(puVar23 + -8)) {
        uVar12 = puVar23[-9];
        if (lVar14 == 0x68) {
          plVar16 = *(long **)(param_1 + 0x30);
          if (plVar16 == (long *)0x0) goto LAB_043be984;
          auVar31 = (**(code **)(*plVar16 + 0x568))(plVar16,*(undefined8 *)(*plVar16 + 0x570));
          ChocDino_UIFX_FilterStackTextMeshPro__HandleVertexColors
                    (param_1,auVar31._8_8_,auVar31._0_8_,0);
          plVar16 = *(long **)(param_1 + 0x30);
          if (plVar16 == (long *)0x0) goto LAB_043be984;
          uVar18 = (**(code **)(*plVar16 + 0x568))(plVar16,*(undefined8 *)(*plVar16 + 0x570));
          lVar17 = *(long *)(param_1 + 0x40);
          if (lVar17 == 0) goto LAB_043be984;
          ChocDino_UIFX_FilterStackTextMeshPro__SetupMaterialTMPro
                    (param_1,uVar18,uVar11,*(undefined8 *)(lVar17 + 0x4c),
                     *(undefined8 *)(lVar17 + 0x54));
          lVar17 = *(long *)(param_1 + 0x48);
          if (*(int *)(param_1 + 0xac) == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = UnityEngine_Component__get_transform(param_1,0);
          }
          plVar16 = *(long **)(param_1 + 0x30);
          if ((plVar16 == (long *)0x0) ||
             (uVar19 = (**(code **)(*plVar16 + 0x568))(plVar16,*(undefined8 *)(*plVar16 + 0x570)),
             lVar17 == 0)) goto LAB_043be984;
          ChocDino_UIFX_Compositor__AddMesh(lVar17,uVar18,uVar12,uVar19,1,0,0);
        }
        else {
          if (*(long *)(param_1 + 0x38) == 0) goto LAB_043be984;
          uVar18 = *puVar23;
          lVar17 = FUN_057e0998(*(long *)(param_1 + 0x38),uVar13 & 0xffffffff,DAT_091b0ab8);
          if (lVar17 == 0) goto LAB_043be984;
          uVar19 = *(undefined8 *)(lVar17 + 0xe0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          auVar31 = UnityEngine_Object__op_Inequality(uVar19,0,0);
          if ((auVar31._0_8_ & 1) == 0) {
            ChocDino_UIFX_FilterStackTextMeshPro__HandleVertexColors(param_1,auVar31._8_8_,uVar18,0)
            ;
            lVar28 = *(long *)(param_1 + 0x40);
            if (lVar28 == 0) goto LAB_043be984;
            ChocDino_UIFX_FilterStackTextMeshPro__SetupMaterialTMPro
                      (param_1,uVar18,uVar11,*(undefined8 *)(lVar28 + 0x4c),
                       *(undefined8 *)(lVar28 + 0x54));
          }
          else {
            if (*(char *)(param_1 + 0xa6) == '\0') goto LAB_043be114;
            ChocDino_UIFX_FilterStackTextMeshPro__HandleVertexColors(param_1,auVar31._8_8_,uVar18,1)
            ;
          }
          lVar28 = *(long *)(param_1 + 0x48);
          if (*(int *)(param_1 + 0xac) == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = UnityEngine_Component__get_transform(param_1,0);
          }
          if (lVar28 == 0) goto LAB_043be984;
          ChocDino_UIFX_Compositor__AddMesh
                    (lVar28,uVar19,uVar12,uVar18,(auVar31._0_4_ ^ 0xffffffff) & 1,0,0);
          lVar17 = UnityEngine_UI_Graphic__get_canvasRenderer(lVar17,0);
          if (lVar17 == 0) goto LAB_043be984;
          UnityEngine_CanvasRenderer__SetMesh(lVar17,0,0);
        }
      }
LAB_043be114:
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0x50;
    } while (uVar7 != uVar13);
  }
  if (*(long *)(param_1 + 0x48) == 0) goto LAB_043be984;
  ChocDino_UIFX_Compositor__End(*(long *)(param_1 + 0x48),0);
  if (*(long *)(param_1 + 0x48) == 0) goto LAB_043be984;
  plVar16 = *(long **)(*(long *)(param_1 + 0x48) + 0x10);
  if (*(long *)(param_1 + 0xb8) != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar13 = UnityEngine_Object__op_Implicit(plVar16,0);
    if ((uVar13 & 1) != 0) {
      plVar25 = (long *)(param_1 + 0x50);
      lVar14 = *plVar25;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar13 = UnityEngine_Object__op_Implicit(lVar14,0);
      if ((uVar13 & 1) != 0) {
        plVar20 = (long *)*plVar25;
        if ((plVar20 == (long *)0x0) ||
           (iVar5 = (**(code **)(*plVar20 + 0x188))(plVar20,*(undefined8 *)(*plVar20 + 400)),
           plVar16 == (long *)0x0)) goto LAB_043be984;
        iVar6 = (**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
        if (iVar5 == iVar6) {
          plVar20 = (long *)*plVar25;
          if (plVar20 == (long *)0x0) goto LAB_043be984;
          iVar5 = (**(code **)(*plVar20 + 0x1a8))(plVar20,*(undefined8 *)(*plVar20 + 0x1b0));
          iVar6 = (**(code **)(*plVar16 + 0x1a8))(plVar16,*(undefined8 *)(*plVar16 + 0x1b0));
          if (iVar5 == iVar6) {
            if (*plVar25 == 0) goto LAB_043be984;
            iVar5 = UnityEngine_RenderTexture__get_format(*plVar25,0);
            iVar6 = UnityEngine_RenderTexture__get_format(plVar16,0);
            if (iVar5 == iVar6) goto LAB_043be22c;
          }
        }
        ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(plVar25,0);
      }
LAB_043be22c:
      plVar20 = (long *)(param_1 + 0x58);
      lVar14 = *plVar20;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar13 = UnityEngine_Object__op_Implicit(lVar14,0);
      if ((uVar13 & 1) != 0) {
        plVar21 = (long *)*plVar20;
        if ((plVar21 == (long *)0x0) ||
           (iVar5 = (**(code **)(*plVar21 + 0x188))(plVar21,*(undefined8 *)(*plVar21 + 400)),
           plVar16 == (long *)0x0)) goto LAB_043be984;
        iVar6 = (**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
        if (iVar5 == iVar6) {
          plVar21 = (long *)*plVar20;
          if (plVar21 == (long *)0x0) goto LAB_043be984;
          iVar5 = (**(code **)(*plVar21 + 0x1a8))(plVar21,*(undefined8 *)(*plVar21 + 0x1b0));
          iVar6 = (**(code **)(*plVar16 + 0x1a8))(plVar16,*(undefined8 *)(*plVar16 + 0x1b0));
          if (iVar5 == iVar6) {
            if (*plVar20 == 0) goto LAB_043be984;
            iVar5 = UnityEngine_RenderTexture__get_format(*plVar20,0);
            iVar6 = UnityEngine_RenderTexture__get_format(plVar16,0);
            if (iVar5 == iVar6) goto LAB_043be2ec;
          }
        }
        ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(plVar20,0);
      }
LAB_043be2ec:
      lVar14 = *(long *)(param_1 + 0xb8);
      local_64 = 0;
      if (lVar14 == 0) goto LAB_043be984;
      uVar7 = *(uint *)(lVar14 + 0x18);
      if ((int)uVar7 < 1) {
        plVar21 = (long *)0x0;
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        plVar27 = (long *)0x0;
        do {
          if (uVar7 <= local_64) goto LAB_043be988;
          plVar26 = *(long **)(lVar14 + (long)(int)local_64 * 8 + 0x20);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar13 = UnityEngine_Object__op_Implicit(plVar26,0);
          plVar21 = plVar27;
          if ((uVar13 & 1) != 0) {
            if (plVar26 == (long *)0x0) goto LAB_043be984;
            uVar7 = ChocDino_UIFX_FilterBase__IsFiltered(plVar26,0);
            uVar10 = uVar10 + (uVar7 & 1);
            plVar21 = plVar26;
            if ((uVar7 & 1) == 0) {
              plVar21 = plVar27;
            }
          }
          uVar7 = *(uint *)(lVar14 + 0x18);
          local_64 = local_64 + 1;
          plVar27 = plVar21;
        } while ((int)local_64 < (int)uVar7);
      }
      if (0 < (int)uVar10) {
        lVar14 = *plVar25;
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar13 = UnityEngine_Object__op_Implicit(lVar14,0);
        if (((uVar13 & 1) == 0) && (uVar10 != 1)) {
          if (plVar16 == (long *)0x0) goto LAB_043be984;
          uVar30 = (**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
          uVar8 = (**(code **)(*plVar16 + 0x1a8))(plVar16,*(undefined8 *)(*plVar16 + 0x1b0));
          uVar9 = UnityEngine_RenderTexture__get_format(plVar16,0);
          lVar14 = UnityEngine_RenderTexture__GetTemporary(uVar30,uVar8,0,uVar9,1,0);
          *plVar25 = lVar14;
          thunk_FUN_03f5d7b8(plVar25,lVar14);
        }
        lVar14 = *plVar20;
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar13 = UnityEngine_Object__op_Implicit(lVar14,0);
        if (((uVar13 & 1) == 0) && (2 < uVar10)) {
          if (plVar16 == (long *)0x0) goto LAB_043be984;
          uVar30 = (**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
          uVar8 = (**(code **)(*plVar16 + 0x1a8))(plVar16,*(undefined8 *)(*plVar16 + 0x1b0));
          uVar9 = UnityEngine_RenderTexture__get_format(plVar16,0);
          lVar14 = UnityEngine_RenderTexture__GetTemporary(uVar30,uVar8,0,uVar9,1,0);
          *plVar20 = lVar14;
          thunk_FUN_03f5d7b8(plVar20);
        }
        if (DAT_09517b80 == '\0') {
          FUN_03f5c2a4(&DAT_091828b0);
          DAT_09517b80 = '\x01';
        }
        if (plVar16 == (long *)0x0) goto LAB_043be984;
        iVar5 = *(int *)(*(long *)(DAT_091828b0 + 0xb8) + 8);
        iVar6 = UnityEngine_RenderTexture__get_format(plVar16,0);
        lVar14 = *(long *)(param_1 + 0xb8);
        local_64 = 0;
        if (lVar14 == 0) goto LAB_043be984;
        uVar7 = *(uint *)(lVar14 + 0x18);
        if (0 < (int)uVar7) {
          bVar3 = iVar6 == iVar5;
          plVar27 = *(long **)(param_1 + 0x50);
          do {
            if (uVar7 <= local_64) goto LAB_043be988;
            plVar26 = *(long **)(lVar14 + (long)(int)local_64 * 8 + 0x20);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar13 = UnityEngine_Object__op_Implicit(plVar26,0);
            plVar22 = plVar27;
            if ((uVar13 & 1) != 0) {
              if (plVar26 == (long *)0x0) goto LAB_043be984;
              *(undefined1 *)((long)plVar26 + 0xa1) = 0;
              uVar13 = ChocDino_UIFX_FilterBase__IsFiltered(plVar26,0);
              if ((uVar13 & 1) != 0) {
                uVar30 = *(undefined4 *)(param_1 + 0xac);
                *(undefined1 *)((long)plVar26 + 0xa1) = 1;
                ChocDino_UIFX_FilterBase__set_RenderSpace(plVar26,uVar30,0);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar7 = UnityEngine_Object__op_Inequality(plVar26,plVar21,0);
                if ((uVar7 & 1) == 0) {
                  ChocDino_UIFX_FilterBase__RenderToTexture(plVar26,plVar16,plVar27,uVar7 & 1,0);
                  if (plVar21 == (long *)0x0) goto LAB_043be984;
                  *(long *)(param_1 + 0x68) = plVar21[0xe];
                  thunk_FUN_03f5d7b8(puVar29);
                  uVar30 = (**(code **)(*plVar21 + 0x328))
                                     (plVar21,*(undefined8 *)(*plVar21 + 0x330));
                  *(undefined4 *)(param_1 + 0x70) = uVar30;
                  break;
                }
                bVar4 = (**(code **)(*plVar26 + 0x338))(plVar26,*(undefined8 *)(*plVar26 + 0x340));
                bVar3 = bVar4 | bVar3;
                if ((bVar3 & 1) != 0) {
                  if (plVar27 == (long *)0x0) goto LAB_043be984;
                  iVar6 = UnityEngine_RenderTexture__get_format(plVar27,0);
                  if (iVar6 != iVar5) {
                    lVar17 = *plVar25;
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar13 = UnityEngine_Object__op_Equality(plVar27,lVar17,0);
                    if ((uVar13 & 1) == 0) {
                      lVar17 = *plVar20;
                      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar13 = UnityEngine_Object__op_Equality(plVar27,lVar17,0);
                      if ((uVar13 & 1) == 0) goto LAB_043be748;
                      ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(plVar20,0);
                      if (plVar16 == (long *)0x0) goto LAB_043be984;
                      uVar30 = (**(code **)(*plVar16 + 0x188))
                                         (plVar16,*(undefined8 *)(*plVar16 + 400));
                      uVar8 = (**(code **)(*plVar16 + 0x1a8))
                                        (plVar16,*(undefined8 *)(*plVar16 + 0x1b0));
                      lVar17 = UnityEngine_RenderTexture__GetTemporary(uVar30,uVar8,0,iVar5,1,0);
                      *plVar20 = lVar17;
                      thunk_FUN_03f5d7b8(plVar20,lVar17);
                      plVar27 = plVar20;
                    }
                    else {
                      ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(plVar25,0);
                      if (plVar16 == (long *)0x0) goto LAB_043be984;
                      uVar30 = (**(code **)(*plVar16 + 0x188))
                                         (plVar16,*(undefined8 *)(*plVar16 + 400));
                      uVar8 = (**(code **)(*plVar16 + 0x1a8))
                                        (plVar16,*(undefined8 *)(*plVar16 + 0x1b0));
                      lVar17 = UnityEngine_RenderTexture__GetTemporary(uVar30,uVar8,0,iVar5,1,0);
                      *plVar25 = lVar17;
                      thunk_FUN_03f5d7b8(plVar25,lVar17);
                      plVar27 = plVar25;
                    }
                    plVar27 = (long *)*plVar27;
                  }
                }
LAB_043be748:
                uVar10 = ChocDino_UIFX_FilterBase__RenderToTexture
                                   (plVar26,plVar16,plVar27,uVar7 & 1,0);
                plVar22 = plVar27;
                if ((uVar7 & 1 & uVar10) == 1) {
                  lVar17 = *plVar25;
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar13 = UnityEngine_Object__op_Equality(plVar27,lVar17,0);
                  plVar16 = plVar20;
                  if ((uVar13 & 1) == 0) {
                    plVar16 = plVar25;
                  }
                  plVar22 = (long *)*plVar16;
                  plVar16 = plVar27;
                }
              }
            }
            uVar7 = *(uint *)(lVar14 + 0x18);
            local_64 = local_64 + 1;
            plVar27 = plVar22;
          } while ((int)local_64 < (int)uVar7);
        }
      }
    }
  }
  puVar23 = (undefined8 *)(param_1 + 0x50);
  uVar11 = *puVar23;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar13 = UnityEngine_Object__op_Equality(plVar16,uVar11,0);
  puVar1 = (undefined8 *)(param_1 + 0x58);
  puVar24 = puVar1;
  if ((uVar13 & 1) == 0) {
    uVar11 = *puVar1;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar13 = UnityEngine_Object__op_Equality(plVar16,uVar11,0);
    puVar24 = puVar23;
    if ((uVar13 & 1) == 0) {
      ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(puVar1,0);
    }
  }
  ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(puVar24,0);
  uVar11 = *puVar29;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar13 = UnityEngine_Object__op_Equality(uVar11,0,0);
  if ((uVar13 & 1) != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar13 = UnityEngine_Object__op_Implicit(plVar16,0);
    if ((uVar13 & 1) != 0) {
      uVar11 = *(undefined8 *)(param_1 + 0x60);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar13 = UnityEngine_Object__op_Implicit(uVar11,0);
      if ((uVar13 & 1) != 0) {
        if (*(long *)(param_1 + 0x60) != 0) {
          UnityEngine_Material__set_mainTexture(*(long *)(param_1 + 0x60),plVar16,0);
          lVar14 = *(long *)(param_1 + 0x60);
          if (*(int *)(DAT_09190988 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (lVar14 != 0) {
            UnityEngine_Material__SetTextureImpl
                      (lVar14,**(undefined4 **)(DAT_09190988 + 0xb8),plVar16,0);
            if (*(long *)(param_1 + 0x60) != 0) {
              UnityEngine_Material__SetTextureImpl
                        (*(long *)(param_1 + 0x60),
                         *(undefined4 *)(*(long *)(DAT_09190988 + 0xb8) + 4),plVar16,0);
              return;
            }
          }
        }
LAB_043be984:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
  return;
}

