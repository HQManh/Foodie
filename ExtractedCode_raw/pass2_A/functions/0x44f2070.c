// rea decompile_all
// name: UnityEngine.UI.Extensions.Gradient2$$SplitTrianglesAtGradientStops
// address: 0x44f2070
// body: available
// range: 0x44f2070-0x44f2b17 inclusive
// range: 0x44f2b1c-0x44f2b1f inclusive
// range: 0x44f2b24-0x44f2b27 inclusive
// range: 0x44f2c1c-0x44f2f93 inclusive
// range: 0x44f2fd8-0x44f300b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44f2b14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44f2b1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44f2b24 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44f3004 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44f3008 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UnityEngine_UI_Extensions_Gradient2__SplitTrianglesAtGradientStops
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,long param_7,long param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined1 auStack_8e4 [108];
  undefined1 auStack_878 [108];
  undefined1 auStack_80c [108];
  undefined1 auStack_7a0 [108];
  undefined1 auStack_734 [108];
  undefined1 auStack_6c8 [108];
  undefined1 auStack_65c [108];
  undefined8 local_5f0;
  undefined8 *puStack_5e8;
  undefined1 auStack_580 [108];
  undefined1 auStack_514 [108];
  undefined1 auStack_4a8 [108];
  undefined1 auStack_43c [108];
  undefined8 local_3d0;
  undefined8 *puStack_3c8;
  undefined8 local_3c0;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined4 local_2f4;
  undefined4 uStack_2f0;
  undefined8 uStack_2ec;
  undefined8 local_2e0;
  undefined8 *puStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 local_1e4;
  undefined4 uStack_1e0;
  undefined8 uStack_1dc;
  undefined1 auStack_1d4 [108];
  undefined1 auStack_168 [108];
  undefined1 auStack_fc [108];
  
  if ((DAT_09518418 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4c28);
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a4c30);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a4c38);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091b1700);
    FUN_03f5c2a4(&DAT_091b1710);
    FUN_03f5c2a4(&DAT_091adcb0);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091b1728);
    FUN_03f5c2a4(&DAT_091b1730);
    FUN_03f5c2a4(&DAT_091adcd0);
    FUN_03f5c2a4(&DAT_091adc80);
    FUN_03f5c2a4(&DAT_091b16f8);
    FUN_03f5c2a4(&DAT_091b1748);
    FUN_03f5c2a4(&DAT_091affd8);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091b1750);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_091affe0);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917cfe8);
    DAT_09518418 = 1;
  }
  local_2e0 = 0;
  puStack_2d8 = (undefined8 *)0x0;
  local_2d0 = 0;
  uStack_1dc = 0;
  uStack_1e0 = 0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  local_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_1e8 = 0;
  local_1e4 = 0;
  uStack_1f0 = 0;
  uStack_2ec = 0;
  uStack_2f0 = 0;
  uStack_348 = 0;
  local_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  local_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  local_310 = 0;
  uStack_2f8 = 0;
  local_2f4 = 0;
  uStack_300 = 0;
  uStack_2b8 = 0;
  local_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  local_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  local_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  local_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  lVar8 = UnityEngine_UI_Extensions_Gradient2__FindStops
                    (param_5,param_1,param_2,param_3,param_4,param_6);
  if (lVar8 != 0) {
    if (0 < *(int *)(lVar8 + 0x18)) {
      if ((param_8 == 0) || (UnityEngine_UI_VertexHelper__Clear(param_8,0), param_7 == 0))
      goto LAB_044f3004;
      iVar1 = *(int *)(param_7 + 0x18);
      if (0 < iVar1) {
        iVar18 = 0;
        do {
          lVar9 = UnityEngine_UI_Extensions_Gradient2__GetPositions(param_6,param_7,iVar18);
          lVar10 = thunk_FUN_03f9944c(DAT_0917c520);
          FUN_05796990(lVar10,3,DAT_091adc80);
          lVar11 = thunk_FUN_03f9944c(DAT_0917cfe8);
          FUN_058941e8(lVar11,3,DAT_091b16f8);
          lVar12 = thunk_FUN_03f9944c(DAT_0917cfe8);
          FUN_058941e8(lVar12,2,DAT_091b16f8);
          if (0 < *(int *)(lVar8 + 0x18)) {
            iVar19 = 0;
            do {
              iVar4 = UnityEngine_UI_VertexHelper__get_currentVertCount(param_8,0);
              if ((lVar12 == 0) || (lVar10 == 0)) goto LAB_044f3004;
              iVar7 = *(int *)(lVar12 + 0x18);
              uVar20 = 0;
              bVar3 = false;
              do {
                uVar13 = FUN_05797528(lVar10,uVar20 & 0xffffffff,DAT_091adcb0);
                if ((uVar13 & 1) == 0) {
                  if (lVar9 == 0) goto LAB_044f3004;
                  if (*(uint *)(lVar9 + 0x18) <= uVar20) goto LAB_044f3008;
                  fVar23 = *(float *)(lVar9 + 0x20 + uVar20 * 4);
                  fVar21 = (float)FUN_05863308(lVar8,iVar19,DAT_091affe0);
                  if (fVar23 < fVar21) {
                    iVar5 = (int)uVar20;
                    uVar16 = 0;
                    if (uVar20 != 2) {
                      uVar16 = iVar5 + 1;
                    }
                    FUN_05894708(&local_3d0,param_7,iVar18 + iVar5,DAT_091b1750);
                    memcpy(&local_240,&local_3d0,0x6c);
                    if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_044f3008;
                    fVar23 = *(float *)(lVar9 + (ulong)uVar16 * 4 + 0x20);
                    fVar21 = (float)FUN_05863308(lVar8,iVar19,DAT_091affe0);
                    lVar15 = DAT_091adc88;
                    if (fVar23 <= fVar21) {
                      lVar14 = *(long *)(lVar10 + 0x10);
                      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                      if (lVar14 == 0) goto LAB_044f3004;
                      uVar16 = *(uint *)(lVar10 + 0x18);
                      if (uVar16 < *(uint *)(lVar14 + 0x18)) {
                        *(uint *)(lVar10 + 0x18) = uVar16 + 1;
                        *(int *)(lVar14 + (long)(int)uVar16 * 4 + 0x20) = iVar5;
                      }
                      else {
                        FUN_057971a8(lVar10,uVar20 & 0xffffffff,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar15 = DAT_091b1700;
                      if (lVar11 == 0) goto LAB_044f3004;
                      lVar14 = *(long *)(lVar11 + 0x10);
                      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                      if (lVar14 == 0) goto LAB_044f3004;
                      uVar16 = *(uint *)(lVar11 + 0x18);
                      if (uVar16 < *(uint *)(lVar14 + 0x18)) {
                        *(uint *)(lVar11 + 0x18) = uVar16 + 1;
                        memcpy((void *)(lVar14 + (long)(int)uVar16 * 0x6c + 0x20),&local_240,0x6c);
                      }
                      else {
                        uVar17 = *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
                        memcpy(&local_3d0,&local_240,0x6c);
                        FUN_05894a80(lVar11,&local_3d0,uVar17);
                      }
                    }
                    else {
                      FUN_05798030(lVar10,0,uVar20 & 0xffffffff,DAT_091adcd0);
                      if (lVar11 == 0) goto LAB_044f3004;
                      memcpy(&local_3d0,&local_240,0x6c);
                      FUN_05895c78(lVar11,0,&local_3d0,DAT_091b1730);
                      bVar3 = true;
                    }
                  }
                }
                uVar20 = uVar20 + 1;
              } while (uVar20 != 3);
              if (*(int *)(lVar10 + 0x18) != 0) {
                if (*(int *)(lVar10 + 0x18) == 3) break;
                if (lVar11 == 0) goto LAB_044f3004;
                FUN_0589591c(&local_3d0,lVar11,DAT_091b1728);
                memcpy(&local_2c0,&local_3d0,0x80);
                puStack_3c8 = &local_2c0;
                local_3d0 = 0;
                while (uVar20 = FUN_071f9b7c(&local_2c0,DAT_091a4c30), (uVar20 & 1) != 0) {
                  memcpy(auStack_43c,&uStack_2b0,0x6c);
                  UnityEngine_UI_VertexHelper__AddVert(param_8,auStack_43c,0);
                }
                FUN_071f9b78(&local_2c0,DAT_091a4c28);
                uVar17 = DAT_091adcc0;
                *(undefined4 *)(lVar12 + 0x18) = 0;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                FUN_05797d74(&local_3d0,lVar10,uVar17);
                local_2d0 = local_3c0;
                puStack_5e8 = &local_2e0;
                puStack_2d8 = puStack_3c8;
                local_2e0 = local_3d0;
                local_5f0 = 0;
                while (uVar20 = FUN_071ad7a4(&local_2e0,DAT_091a34d8), (uVar20 & 1) != 0) {
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  iVar5 = (int)local_2d0;
                  uVar16 = ((int)local_2d0 + 1) % 3;
                  if (*(uint *)(lVar9 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  fVar23 = *(float *)(lVar9 + (long)(int)uVar16 * 4 + 0x20);
                  fVar21 = (float)FUN_05863308(lVar8,iVar19,DAT_091affe0);
                  if (fVar23 < fVar21) {
                    cVar2 = (char)uVar16 + '\x01';
                    uVar16 = cVar2 * 0x56;
                    uVar16 = (uint)(char)(cVar2 + (((byte)(uVar16 >> 0xf) & 1) + (char)(uVar16 >> 8)
                                                  ) * -3);
                  }
                  FUN_05894708(auStack_fc,param_7,iVar5 + iVar18,DAT_091b1750);
                  memcpy(&local_3d0,auStack_fc,0x6c);
                  FUN_05894708(auStack_4a8,param_7,uVar16 + iVar18,DAT_091b1750);
                  memcpy(auStack_fc,auStack_4a8,0x6c);
                  uVar22 = FUN_05863308(lVar8,iVar19,DAT_091affe0);
                  memcpy(auStack_514,&local_3d0,0x6c);
                  memcpy(auStack_580,auStack_fc,0x6c);
                  UnityEngine_UI_Extensions_Gradient2__CreateSplitVertex
                            (auStack_4a8,uVar22,param_6,auStack_514,auStack_580);
                  memcpy(auStack_1d4,auStack_4a8,0x6c);
                  lVar15 = DAT_091b1700;
                  lVar14 = *(long *)(lVar12 + 0x10);
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar16 = *(uint *)(lVar12 + 0x18);
                  if (uVar16 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar12 + 0x18) = uVar16 + 1;
                    memcpy((void *)(lVar14 + (long)(int)uVar16 * 0x6c + 0x20),auStack_1d4,0x6c);
                  }
                  else {
                    uVar17 = *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
                    memcpy(auStack_168,auStack_1d4,0x6c);
                    FUN_05894a80(lVar12,auStack_168,uVar17);
                  }
                }
                FUN_071ad7a0(&local_2e0,DAT_091a34d0);
                if (*(int *)(lVar12 + 0x18) == 1) {
                  iVar5 = FUN_05796eb0(lVar10,0,DAT_091add20);
                  iVar6 = FUN_05796eb0(lVar10,0,DAT_091add20);
                  FUN_05894708(auStack_4a8,param_7,iVar6 + iVar18,DAT_091b1750);
                  FUN_05894708(&local_5f0,param_7,(iVar5 + 2) % 3 + iVar18,DAT_091b1750);
                  uVar22 = FUN_05863308(lVar8,iVar19,DAT_091affe0);
                  memcpy(auStack_65c,auStack_4a8,0x6c);
                  memcpy(auStack_6c8,&local_5f0,0x6c);
                  UnityEngine_UI_Extensions_Gradient2__CreateSplitVertex
                            (auStack_fc,uVar22,param_6,auStack_65c,auStack_6c8);
                  lVar15 = DAT_091b1700;
                  lVar14 = *(long *)(lVar12 + 0x10);
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar14 == 0) goto LAB_044f3004;
                  uVar16 = *(uint *)(lVar12 + 0x18);
                  if (uVar16 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar12 + 0x18) = uVar16 + 1;
                    memcpy((void *)(lVar14 + (long)(int)uVar16 * 0x6c + 0x20),auStack_fc,0x6c);
                  }
                  else {
                    uVar17 = *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
                    memcpy(&local_3d0,auStack_fc,0x6c);
                    FUN_05894a80(lVar12,&local_3d0,uVar17);
                  }
                }
                FUN_0589591c(&local_3d0,lVar12,DAT_091b1728);
                memcpy(&local_2c0,&local_3d0,0x80);
                puStack_3c8 = &local_2c0;
                local_3d0 = 0;
                while (uVar20 = FUN_071f9b7c(&local_2c0,DAT_091a4c30), (uVar20 & 1) != 0) {
                  memcpy(auStack_734,&uStack_2b0,0x6c);
                  UnityEngine_UI_VertexHelper__AddVert(param_8,auStack_734,0);
                }
                FUN_071f9b78(&local_2c0,DAT_091a4c28);
                if (iVar7 < 1) {
                  iVar5 = UnityEngine_UI_VertexHelper__get_currentVertCount(param_8,0);
                  iVar7 = iVar5 + -1;
                  UnityEngine_UI_VertexHelper__AddTriangle(param_8,iVar4,iVar5 + -2,iVar7,0);
                  if (1 < *(int *)(lVar11 + 0x18)) {
                    iVar5 = iVar4 + 1;
                    goto LAB_044f2ae4;
                  }
                }
                else {
                  iVar6 = iVar4 + -2;
                  UnityEngine_UI_VertexHelper__AddTriangle(param_8,iVar6,iVar4,iVar4 + 1,0);
                  iVar5 = iVar4 + -1;
                  UnityEngine_UI_VertexHelper__AddTriangle(param_8,iVar6,iVar4 + 1,iVar5,0);
                  if (0 < *(int *)(lVar11 + 0x18)) {
                    if (bVar3) {
                      iVar7 = iVar4 + 3;
                      iVar5 = iVar4;
                      iVar4 = iVar6;
                    }
                    else {
                      iVar7 = iVar4 + 3;
                      iVar4 = iVar4 + 1;
                    }
LAB_044f2ae4:
                    UnityEngine_UI_VertexHelper__AddTriangle(param_8,iVar4,iVar7,iVar5,0);
                  }
                }
                *(undefined4 *)(lVar11 + 0x18) = 0;
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              }
              iVar19 = iVar19 + 1;
            } while (iVar19 < *(int *)(lVar8 + 0x18));
          }
          if (lVar12 == 0) goto LAB_044f3004;
          if (*(int *)(lVar12 + 0x18) < 1) {
            FUN_05894708(&local_3d0,param_7,iVar18,DAT_091b1750);
            memcpy(auStack_80c,&local_3d0,0x6c);
            UnityEngine_UI_VertexHelper__AddVert(param_8,auStack_80c,0);
            FUN_05894708(auStack_fc,param_7,iVar18 + 1,DAT_091b1750);
            memcpy(auStack_878,auStack_fc,0x6c);
            UnityEngine_UI_VertexHelper__AddVert(param_8,auStack_878,0);
            FUN_05894708(auStack_4a8,param_7,iVar18 + 2,DAT_091b1750);
            memcpy(auStack_8e4,auStack_4a8,0x6c);
            UnityEngine_UI_VertexHelper__AddVert(param_8,auStack_8e4,0);
            iVar7 = UnityEngine_UI_VertexHelper__get_currentVertCount(param_8,0);
            iVar19 = iVar7 + -2;
            iVar4 = iVar7 + -1;
LAB_044f2f40:
            iVar5 = iVar7 + -3;
LAB_044f2f78:
            UnityEngine_UI_VertexHelper__AddTriangle(param_8,iVar5,iVar19,iVar4,0);
          }
          else {
            if (lVar11 == 0) goto LAB_044f3004;
            if (*(int *)(lVar11 + 0x18) == 0) {
              if (lVar10 == 0) goto LAB_044f3004;
              uVar20 = 0;
              do {
                uVar13 = FUN_05797528(lVar10,uVar20 & 0xffffffff,DAT_091adcb0);
                if ((uVar13 & 1) == 0) {
                  if (lVar9 == 0) goto LAB_044f3004;
                  if (*(uint *)(lVar9 + 0x18) <= uVar20) goto LAB_044f3008;
                  fVar23 = *(float *)(lVar9 + 0x20 + uVar20 * 4);
                  fVar21 = (float)FUN_05863308(lVar8,*(int *)(lVar8 + 0x18) + -1,DAT_091affe0);
                  if (fVar21 < fVar23) {
                    uVar16 = 0;
                    if (uVar20 != 2) {
                      uVar16 = (int)uVar20 + 1;
                    }
                    FUN_05894708(&local_3d0,param_7,iVar18 + (int)uVar20,DAT_091b1750);
                    memcpy(&local_350,&local_3d0,0x6c);
                    if (*(uint *)(lVar9 + 0x18) <= uVar16) {
LAB_044f3008:
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c558();
                    }
                    fVar23 = *(float *)(lVar9 + (ulong)uVar16 * 4 + 0x20);
                    fVar21 = (float)FUN_05863308(lVar8,*(int *)(lVar8 + 0x18) + -1,DAT_091affe0);
                    lVar12 = DAT_091b1700;
                    if (fVar23 <= fVar21) {
                      lVar15 = *(long *)(lVar11 + 0x10);
                      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                      if (lVar15 == 0) goto LAB_044f3004;
                      uVar16 = *(uint *)(lVar11 + 0x18);
                      if (uVar16 < *(uint *)(lVar15 + 0x18)) {
                        *(uint *)(lVar11 + 0x18) = uVar16 + 1;
                        memcpy((void *)(lVar15 + (long)(int)uVar16 * 0x6c + 0x20),&local_350,0x6c);
                      }
                      else {
                        uVar17 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
                        memcpy(&local_3d0,&local_350,0x6c);
                        FUN_05894a80(lVar11,&local_3d0,uVar17);
                      }
                    }
                    else {
                      memcpy(&local_3d0,&local_350,0x6c);
                      FUN_05895c78(lVar11,0,&local_3d0,DAT_091b1730);
                    }
                  }
                }
                uVar20 = uVar20 + 1;
              } while (uVar20 != 3);
            }
            FUN_0589591c(&local_3d0,lVar11,DAT_091b1728);
            memcpy(&local_2c0,&local_3d0,0x80);
            puStack_3c8 = &local_2c0;
            local_3d0 = 0;
            while (uVar20 = FUN_071f9b7c(&local_2c0,DAT_091a4c30), (uVar20 & 1) != 0) {
              memcpy(auStack_7a0,&uStack_2b0,0x6c);
              UnityEngine_UI_VertexHelper__AddVert(param_8,auStack_7a0,0);
            }
            FUN_071f9b78(&local_2c0,DAT_091a4c28);
            iVar7 = UnityEngine_UI_VertexHelper__get_currentVertCount(param_8,0);
            if (1 < *(int *)(lVar11 + 0x18)) {
              iVar5 = iVar7 + -4;
              iVar19 = iVar7 + -1;
              UnityEngine_UI_VertexHelper__AddTriangle(param_8,iVar5,iVar7 + -2,iVar19,0);
              iVar4 = iVar7 + -3;
              goto LAB_044f2f78;
            }
            if (*(int *)(lVar11 + 0x18) == 1) {
              iVar19 = iVar7 + -1;
              iVar4 = iVar7 + -2;
              goto LAB_044f2f40;
            }
          }
          iVar18 = iVar18 + 3;
        } while (iVar18 < iVar1);
      }
    }
    return;
  }
LAB_044f3004:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

