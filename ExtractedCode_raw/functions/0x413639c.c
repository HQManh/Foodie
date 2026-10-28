// rea decompile_all
// name: AnhPD.FoodOrder.BurgerOrderStrategy$$ConvertOrderData
// address: 0x413639c
// body: available
// range: 0x413639c-0x41373b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41373a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41373ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41373b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41373b4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_BurgerOrderStrategy__ConvertOrderData(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  byte bVar18;
  byte bVar19;
  undefined8 local_2f0;
  undefined8 *puStack_2e8;
  ulong local_2e0;
  undefined8 local_2d0;
  undefined8 *puStack_2c8;
  ulong local_2c0;
  undefined8 local_2b0;
  undefined8 *puStack_2a8;
  ulong local_2a0;
  undefined8 local_290;
  undefined8 *puStack_288;
  ulong local_280;
  undefined8 local_270;
  undefined8 *puStack_268;
  ulong local_260;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 *puStack_218;
  ulong local_210;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 *puStack_1a8;
  ulong local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 *puStack_188;
  ulong local_180;
  undefined8 local_170;
  undefined8 *puStack_168;
  ulong local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 *puStack_148;
  ulong local_140;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 *puStack_118;
  ulong local_110;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  ulong local_a0;
  
  if ((DAT_09516363 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820b0);
    FUN_03f5c2a4(&DAT_091820c0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a23f8);
    FUN_03f5c2a4(&DAT_091a2400);
    FUN_03f5c2a4(&DAT_091a2408);
    FUN_03f5c2a4(&DAT_091ab610);
    FUN_03f5c2a4(&DAT_091aed20);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091ab620);
    FUN_03f5c2a4(&DAT_091b05e8);
    FUN_03f5c2a4(&DAT_091aed40);
    FUN_03f5c2a4(&DAT_091ab600);
    FUN_03f5c2a4(&DAT_091aed10);
    FUN_03f5c2a4(&DAT_091b0568);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_091ab630);
    FUN_03f5c2a4(&DAT_091ab638);
    FUN_03f5c2a4(&DAT_0917bd88);
    FUN_03f5c2a4(&DAT_0917c850);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_091b6a90);
    FUN_03f5c2a4(&DAT_091b6a98);
    FUN_03f5c2a4(&DAT_091b6aa0);
    FUN_03f5c2a4(&DAT_09180348);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_09214208);
    FUN_03f5c2a4(&DAT_09218658);
    FUN_03f5c2a4(&DAT_09218c00);
    FUN_03f5c2a4(&DAT_092141d8);
    FUN_03f5c2a4(&DAT_0921e060);
    FUN_03f5c2a4(&DAT_09223b00);
    FUN_03f5c2a4(&DAT_09218650);
    FUN_03f5c2a4(&DAT_092141e0);
    FUN_03f5c2a4(&DAT_092263b0);
    DAT_09516363 = 1;
  }
  local_100 = 0;
  puStack_118 = (undefined8 *)0x0;
  local_120 = 0;
  local_110 = 0;
  local_128 = 0;
  local_130 = 0;
  local_150 = 0;
  puStack_148 = (undefined8 *)0x0;
  local_140 = 0;
  local_160 = 0;
  local_158 = 0;
  local_170 = 0;
  puStack_168 = (undefined8 *)0x0;
  local_190 = 0;
  puStack_188 = (undefined8 *)0x0;
  local_180 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_1b0 = 0;
  puStack_1a8 = (undefined8 *)0x0;
  local_1b8 = 0;
  if (*(int *)(DAT_091820b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar9 = AnhPD_FoodOrder_BurgerOrderStrategy__DecodePieces(param_2);
  if (lVar9 != 0) {
    lVar10 = thunk_FUN_03f9944c(DAT_0917c850);
    FUN_057ee92c(lVar10,DAT_091aed10);
    lVar11 = thunk_FUN_03f9944c(DAT_0917bd88);
    FUN_0579924c(lVar11,DAT_091ab600);
    local_100 = 0;
    FUN_0579a6a8(&local_b0,lVar9,DAT_091ab620);
    bVar18 = 0;
    bVar4 = false;
    bVar19 = 0;
    local_110 = local_a0;
    bVar2 = false;
    bVar5 = false;
    bVar3 = false;
    puStack_118 = puStack_a8;
    local_120 = local_b0;
    local_b0 = 0;
    puStack_a8 = &local_120;
LAB_041366a0:
    do {
      uVar12 = FUN_071aef5c(&local_120,DAT_091a2400);
      uVar13 = local_110;
      if ((uVar12 & 1) == 0) goto LAB_041367dc;
      iVar8 = (int)local_110;
      if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = AnhPD_FoodOrder_BurgerPieceTable__TryGetPieceInfo(uVar13 & 0xffffffff,&local_130);
      lVar9 = DAT_091ab610;
      if ((uVar12 & 1) != 0) {
        if ((int)local_130 < 2) {
          if ((int)local_130 == 1) {
            local_f8 = 0;
            FUN_05c30b18(&local_f8,uVar13 & 0xffffffff,DAT_091b6a90);
            local_100 = local_f8;
            goto LAB_041366a0;
          }
        }
        else if ((int)local_130 < 4) {
          if ((int)local_130 == 2) {
            bVar3 = true;
            goto LAB_041366a0;
          }
          if ((int)local_130 == 3) {
            bVar19 = iVar8 != 0xf | bVar19;
            bVar18 = iVar8 == 0xf | bVar18;
            goto LAB_041366a0;
          }
        }
        else {
          if ((int)local_130 == 4) {
            bVar4 = true;
            goto LAB_041366a0;
          }
          if ((int)local_130 == 5) {
            bVar5 = (bool)(iVar8 != 7 | bVar5);
            bVar2 = (bool)(iVar8 == 7 | bVar2);
            goto LAB_041366a0;
          }
        }
        if (lVar11 != 0) {
          lVar15 = *(long *)(lVar11 + 0x10);
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar15 != 0) {
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              *(int *)(lVar15 + (long)(int)uVar1 * 4 + 0x20) = iVar8;
            }
            else {
              FUN_05799adc(lVar11,uVar13 & 0xffffffff,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_041366a0;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    } while( true );
  }
  lVar9 = FUN_03f5c394(DAT_09180348,1);
LAB_04137320:
  AnhPD_FoodOrder_OrderStrategy__BuildSpec(&local_b0,param_1,param_2,0);
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) != 0) {
      memmove((void *)(lVar9 + 0x20),&local_b0,0x48);
      thunk_FUN_03f5d7b8(lVar9 + 0x20,0);
      return lVar9;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_041373b0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_041367dc:
  FUN_071aef58(&local_120,DAT_091a23f8);
  if (lVar11 == 0) goto LAB_041373b0;
  iVar8 = *(int *)(lVar11 + 0x18);
  if (iVar8 < 2) {
    if (iVar8 == 1) {
      if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_041373b0;
      lVar9 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0xd0);
      uVar7 = FUN_057997e4(lVar11,0,DAT_091ab638);
      if (lVar9 == 0) goto LAB_041373b0;
      uVar13 = AnhPD_FoodOrder_RecipeConfigSO__TryGetPreparedOfPiece(lVar9,uVar7,&local_158,0);
      uVar17 = local_158;
      if ((uVar13 & 1) != 0) {
        uVar7 = FUN_057997e4(lVar11,0,DAT_091ab638);
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09189158);
        }
        AnhPD_FoodOrder_PieceSet__One(&local_238,uVar7,0);
        uStack_248 = uStack_230;
        local_250 = local_238;
        puVar16 = &local_250;
        local_240 = local_228;
        uVar14 = uVar17;
        goto LAB_04136b70;
      }
    }
  }
  else {
    lVar9 = thunk_FUN_03f9944c(DAT_0917cce8);
    FUN_057e0478(lVar9,iVar8,DAT_091b0568);
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar16 = *(undefined8 **)(DAT_09189158 + 0xb8);
    puStack_148 = (undefined8 *)puVar16[1];
    local_150 = *puVar16;
    local_140 = puVar16[2];
    FUN_0579a6a8(&local_b0,lVar11,DAT_091ab620);
    local_f0 = &local_120;
    puStack_118 = puStack_a8;
    local_120 = local_b0;
    local_110 = local_a0;
    local_f8 = 0;
    while (uVar12 = FUN_071aef5c(&local_120,DAT_091a2400), uVar13 = local_110, (uVar12 & 1) != 0) {
      if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar17 = AnhPD_FoodOrder_BurgerPieceTable__BurgerCodeOf(uVar13 & 0xffffffff);
      lVar11 = DAT_091b0570;
      if (lVar9 == 0) {
LAB_041373a8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar15 = *(long *)(lVar9 + 0x10);
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar15 == 0) goto LAB_041373a8;
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar17;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(lVar9,uVar17,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70)
                    );
      }
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceSet__Add(&local_b0,&local_150,uVar13 & 0xffffffff,1,0);
      puStack_148 = puStack_a8;
      local_150 = local_b0;
      local_140 = local_a0;
    }
    FUN_071aef58(&local_120,DAT_091a23f8);
    if (lVar9 == 0) goto LAB_041373b0;
    FUN_057e272c(lVar9,DAT_091b05e8);
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar8 = AnhPD_FoodOrder_PieceSet__get_Item(&local_150,0,0);
    if (iVar8 == 0) {
      puStack_a8 = puStack_148;
      local_b0 = local_150;
      local_a0 = local_140;
      uVar17 = FUN_03f5c42c(DAT_09189158,&local_b0);
      uVar17 = System_String__Format(DAT_09214208,param_2,uVar17,0);
      uVar17 = System_String__Concat(uVar17,DAT_09223b00,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogError(uVar17,0);
    }
    uVar17 = System_String__Concat(lVar9,0);
    uVar17 = System_String__Concat(DAT_09218658,uVar17,0);
    puStack_218 = puStack_148;
    local_220 = local_150;
    puVar16 = &local_220;
    local_210 = local_140;
    uVar14 = DAT_09218650;
LAB_04136b70:
    local_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1d8 = 0;
    local_1e0 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1f8 = 0;
    local_200 = 0;
    AnhPD_FoodOrder_OrderSpec___ctor(&local_200,uVar17,uVar14,puVar16,1,0,0xffffffff,0xffffffff,0,0)
    ;
    if (lVar10 == 0) goto LAB_041373b0;
    memcpy(&local_f8,&local_200,0x48);
    lVar9 = DAT_091aed20;
    lVar11 = *(long *)(lVar10 + 0x10);
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_041373b0;
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      lVar11 = lVar11 + (long)(int)uVar1 * 0x48;
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      memcpy((void *)(lVar11 + 0x20),&local_f8,0x48);
      thunk_FUN_03f5d7b8(lVar11 + 0x20,0);
    }
    else {
      uVar17 = *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70);
      memcpy(&local_b0,&local_f8,0x48);
      FUN_057ef254(lVar10,&local_b0,uVar17);
    }
  }
  uVar17 = local_270;
  puVar16 = puStack_268;
  uVar13 = local_260;
  if ((char)local_100 != '\0') {
    uVar7 = FUN_05c30b30(&local_100,DAT_091b6aa0);
    if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091820c0);
    }
    lVar9 = AnhPD_FoodOrder_BurgerPieceTable__BuildChickenId(uVar7,bVar3,bVar19,bVar18);
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189158);
    }
    AnhPD_FoodOrder_PieceSet__One(&local_b0,uVar7,0);
    puStack_168 = puStack_a8;
    local_170 = local_b0;
    local_160 = local_a0;
    if (bVar3) {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceSet__Add(&local_b0,&local_170,0xe,1,0);
      local_170 = local_b0;
      puStack_168 = puStack_a8;
      local_160 = local_a0;
    }
    if (bVar19 != 0) {
      local_b0 = local_170;
      puStack_a8 = puStack_168;
      local_a0 = local_160;
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceSet__Add(&local_b0,&local_170,0x10,1,0);
      local_170 = local_b0;
      puStack_168 = puStack_a8;
      local_160 = local_a0;
    }
    uVar17 = local_270;
    puVar16 = puStack_268;
    uVar13 = local_260;
    uVar14 = local_170;
    puVar6 = puStack_168;
    uVar12 = local_160;
    if (bVar18 != 0) {
      local_b0 = local_170;
      puStack_a8 = puStack_168;
      local_a0 = local_160;
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceSet__Add(&local_b0,&local_170,0xf,1,0);
      uVar17 = local_270;
      puVar16 = puStack_268;
      uVar13 = local_260;
      uVar14 = local_b0;
      puVar6 = puStack_a8;
      uVar12 = local_a0;
    }
    local_260 = uVar12;
    puStack_268 = puVar6;
    local_270 = uVar14;
    local_170 = local_270;
    puStack_168 = puStack_268;
    local_160 = local_260;
    local_b0 = local_270;
    puStack_a8 = puStack_268;
    local_a0 = local_260;
    if (lVar9 != 0) {
      local_1c0 = 0;
      uStack_1f8 = 0;
      local_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      local_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      AnhPD_FoodOrder_OrderSpec___ctor
                (&local_200,lVar9,DAT_09218c00,&local_270,1,0,0xffffffff,0xffffffff,0,0);
      if (lVar10 == 0) goto LAB_041373b0;
      memcpy(&local_f8,&local_200,0x48);
      lVar9 = DAT_091aed20;
      lVar11 = *(long *)(lVar10 + 0x10);
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_041373b0;
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        lVar11 = lVar11 + (long)(int)uVar1 * 0x48;
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        memcpy((void *)(lVar11 + 0x20),&local_f8,0x48);
        thunk_FUN_03f5d7b8(lVar11 + 0x20,0);
        uVar17 = local_270;
        puVar16 = puStack_268;
        uVar13 = local_260;
      }
      else {
        uVar17 = *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70);
        memcpy(&local_b0,&local_f8,0x48);
        FUN_057ef254(lVar10,&local_b0,uVar17);
        uVar17 = local_270;
        puVar16 = puStack_268;
        uVar13 = local_260;
      }
    }
  }
  local_260 = uVar13;
  puStack_268 = puVar16;
  local_270 = uVar17;
  if (bVar4) {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_FoodOrder_PieceSet__One(&local_b0,0xd,0);
    puStack_188 = puStack_a8;
    local_190 = local_b0;
    local_180 = local_a0;
    if ((char)local_100 == '\0') {
      if (bVar18 != 0) {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_PieceSet__Add(&local_b0,&local_190,0xf,1,0);
      }
      if (bVar19 != 0) {
        local_190 = local_b0;
        puStack_188 = puStack_a8;
        local_180 = local_a0;
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_PieceSet__Add(&local_b0,&local_190,0x10,1,0);
      }
    }
    local_190 = local_b0;
    puStack_188 = puStack_a8;
    local_180 = local_a0;
    if ((**(long **)(DAT_091881a0 + 0xb8) == 0) ||
       (lVar9 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0xd0), lVar9 == 0)) goto LAB_041373b0;
    puStack_288 = puStack_a8;
    local_290 = local_b0;
    local_280 = local_a0;
    uVar13 = AnhPD_FoodOrder_RecipeConfigSO__TryGetPreparedOfPieceSet(lVar9,&local_290,&local_198,0)
    ;
    if ((uVar13 & 1) == 0) {
      puStack_a8 = puStack_188;
      local_b0 = local_190;
      local_a0 = local_180;
      uVar17 = FUN_03f5c42c(DAT_09189158,&local_b0);
      uVar17 = System_String__Format(DAT_092263b0,uVar17,param_2,0);
      uVar17 = System_String__Concat(DAT_092141d8,uVar17,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogError(uVar17,0);
    }
    else {
      local_1c0 = 0;
      puStack_2a8 = puStack_188;
      local_2b0 = local_190;
      local_2a0 = local_180;
      uStack_1f8 = 0;
      local_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      local_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      AnhPD_FoodOrder_OrderSpec___ctor
                (&local_200,local_198,local_198,&local_2b0,1,0,0xffffffff,0xffffffff,0,0);
      if (lVar10 == 0) goto LAB_041373b0;
      memcpy(&local_f8,&local_200,0x48);
      lVar9 = DAT_091aed20;
      lVar11 = *(long *)(lVar10 + 0x10);
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_041373b0;
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        lVar11 = lVar11 + (long)(int)uVar1 * 0x48;
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        memcpy((void *)(lVar11 + 0x20),&local_f8,0x48);
        thunk_FUN_03f5d7b8(lVar11 + 0x20,0);
      }
      else {
        uVar17 = *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70);
        memcpy(&local_b0,&local_f8,0x48);
        FUN_057ef254(lVar10,&local_b0,uVar17);
      }
    }
  }
  if (bVar5 || bVar2) {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_FoodOrder_PieceSet__One(&local_1b0,7,0);
    if (bVar5) {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceSet__Add(&local_b0,&local_1b0,8,1,0);
      puStack_1a8 = puStack_a8;
      local_1b0 = local_b0;
      local_1a0 = local_a0;
    }
    if ((**(long **)(DAT_091881a0 + 0xb8) == 0) ||
       (lVar9 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0xd0), lVar9 == 0)) goto LAB_041373b0;
    puStack_2c8 = puStack_1a8;
    local_2d0 = local_1b0;
    local_2c0 = local_1a0;
    uVar13 = AnhPD_FoodOrder_RecipeConfigSO__TryGetPreparedOfPieceSet(lVar9,&local_2d0,&local_1b8,0)
    ;
    if ((uVar13 & 1) == 0) {
      puStack_a8 = puStack_1a8;
      local_b0 = local_1b0;
      local_a0 = local_1a0;
      uVar17 = FUN_03f5c42c(DAT_09189158,&local_b0);
      uVar17 = System_String__Format(DAT_092141e0,uVar17,0);
      uVar17 = System_String__Concat(uVar17,DAT_0921e060,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogError(uVar17,0);
      goto LAB_041372d8;
    }
    local_1c0 = 0;
    puStack_2e8 = puStack_1a8;
    local_2f0 = local_1b0;
    local_2e0 = local_1a0;
    uStack_1f8 = 0;
    local_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    local_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    AnhPD_FoodOrder_OrderSpec___ctor
              (&local_200,local_1b8,local_1b8,&local_2f0,1,0,0xffffffff,0xffffffff,0,0);
    if (lVar10 == 0) goto LAB_041373b0;
    memcpy(&local_f8,&local_200,0x48);
    lVar9 = DAT_091aed20;
    lVar11 = *(long *)(lVar10 + 0x10);
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_041373b0;
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      lVar11 = lVar11 + (long)(int)uVar1 * 0x48;
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      memcpy((void *)(lVar11 + 0x20),&local_f8,0x48);
      thunk_FUN_03f5d7b8(lVar11 + 0x20,0);
    }
    else {
      uVar17 = *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70);
      memcpy(&local_b0,&local_f8,0x48);
      FUN_057ef254(lVar10,&local_b0,uVar17);
    }
  }
  else {
LAB_041372d8:
    if (lVar10 == 0) goto LAB_041373b0;
  }
  if (*(int *)(lVar10 + 0x18) != 0) {
    lVar9 = FUN_057f12d4(lVar10,DAT_091aed40);
    return lVar9;
  }
  lVar9 = FUN_03f5c394(DAT_09180348,1);
  goto LAB_04137320;
}

