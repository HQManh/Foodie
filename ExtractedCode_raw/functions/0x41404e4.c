// rea decompile_all
// name: AnhPD.FoodOrder.CafeOrderStrategy$$ConvertOrderData
// address: 0x41404e4
// body: available
// range: 0x41404e4-0x4140e9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4140e94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4140e98 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_CafeOrderStrategy__ConvertOrderData(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 *puStack_2b8;
  ulong local_2b0;
  undefined8 local_2a0;
  undefined8 *puStack_298;
  ulong local_290;
  undefined8 local_280;
  undefined8 *puStack_278;
  ulong local_270;
  undefined8 local_260;
  undefined8 *puStack_258;
  ulong local_250;
  undefined8 local_240;
  undefined8 *puStack_238;
  ulong local_230;
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
  undefined8 local_1b0;
  undefined8 *puStack_1a8;
  ulong local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 *puStack_148;
  ulong local_140;
  undefined8 local_130;
  undefined8 *puStack_128;
  ulong local_120;
  undefined8 local_110;
  undefined8 *puStack_108;
  ulong local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  ulong local_a0;
  
  if ((DAT_095163c5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182230);
    FUN_03f5c2a4(&DAT_09182240);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a2588);
    FUN_03f5c2a4(&DAT_091a2590);
    FUN_03f5c2a4(&DAT_091a2598);
    FUN_03f5c2a4(&DAT_091aed20);
    FUN_03f5c2a4(&DAT_091ab9e8);
    FUN_03f5c2a4(&DAT_091aed40);
    FUN_03f5c2a4(&DAT_091aed10);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_0917c850);
    FUN_03f5c2a4(&DAT_09180348);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_091f6df0);
    FUN_03f5c2a4(&DAT_09226468);
    FUN_03f5c2a4(&DAT_092141f0);
    FUN_03f5c2a4(&DAT_091f6d58);
    FUN_03f5c2a4(&DAT_09214210);
    FUN_03f5c2a4(&DAT_091f8398);
    DAT_095163c5 = 1;
  }
  puStack_108 = (undefined8 *)0x0;
  local_110 = 0;
  local_100 = 0;
  local_130 = 0;
  puStack_128 = (undefined8 *)0x0;
  local_120 = 0;
  local_150 = 0;
  puStack_148 = (undefined8 *)0x0;
  local_140 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  local_198 = 0;
  lVar3 = AnhPD_FoodOrder_CafeOrderStrategy__DecodePieces(param_2);
  if (lVar3 != 0) {
    lVar4 = thunk_FUN_03f9944c(DAT_0917c850);
    FUN_057ee92c(lVar4,DAT_091aed10);
    FUN_0579a6a8(&local_b0,lVar3,DAT_091ab9e8);
    local_150 = local_b0;
    local_b0 = 0;
    local_140 = local_a0;
    puStack_148 = puStack_a8;
    puStack_a8 = &local_150;
    do {
      uVar5 = FUN_071aef5c(&local_150,DAT_091a2590);
      uVar6 = local_140;
      if ((uVar5 & 1) == 0) {
        iVar2 = 0;
        break;
      }
      if (*(int *)(DAT_09182240 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = AnhPD_FoodOrder_CafePieceTable__DishOfBase(uVar6 & 0xffffffff,0);
    } while (iVar2 == 0);
    FUN_071aef58(&local_150,DAT_091a2588);
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar9 = *(undefined8 **)(DAT_09189158 + 0xb8);
    puStack_108 = (undefined8 *)puVar9[1];
    local_110 = *puVar9;
    local_100 = puVar9[2];
    local_120 = puVar9[2];
    puStack_128 = (undefined8 *)puVar9[1];
    local_130 = *puVar9;
    FUN_0579a6a8(&local_b0,lVar3,DAT_091ab9e8);
    local_f8 = 0;
    local_140 = local_a0;
    local_f0 = &local_150;
    puStack_148 = puStack_a8;
    local_150 = local_b0;
    while (uVar5 = FUN_071aef5c(&local_150,DAT_091a2590), uVar6 = local_140, (uVar5 & 1) != 0) {
      if (*(int *)(DAT_09182240 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = AnhPD_FoodOrder_CafePieceTable__Belongs(iVar2,uVar6 & 0xffffffff,0);
      if ((uVar5 & 1) == 0) {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_PieceSet__Add(&local_b0,&local_130,uVar6 & 0xffffffff,1,0);
        puStack_128 = puStack_a8;
        local_130 = local_b0;
        local_120 = local_a0;
      }
      else {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_PieceSet__Add(&local_b0,&local_110,uVar6 & 0xffffffff,1,0);
        puStack_108 = puStack_a8;
        local_110 = local_b0;
        local_100 = local_a0;
      }
    }
    FUN_071aef58(&local_150,DAT_091a2588);
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_110,0);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(DAT_09182240 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = AnhPD_FoodOrder_CafePieceTable__BaseIdOf(iVar2,0);
      puStack_1a8 = puStack_108;
      local_1b0 = local_110;
      local_1a0 = local_100;
      uVar8 = AnhPD_FoodOrder_FlexiblePieceId__Build(uVar7,&local_1b0,0);
      local_1c0 = 0;
      puStack_218 = puStack_108;
      local_220 = local_110;
      local_210 = local_100;
      uStack_1f8 = 0;
      local_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      local_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      AnhPD_FoodOrder_OrderSpec___ctor
                (&local_200,uVar8,uVar7,&local_220,1,0,0xffffffff,0xffffffff,0,0);
      if (lVar4 == 0) goto LAB_04140e94;
      memcpy(&local_f8,&local_200,0x48);
      lVar3 = DAT_091aed20;
      lVar10 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_04140e94;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        lVar10 = lVar10 + (long)(int)uVar1 * 0x48;
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        memcpy((void *)(lVar10 + 0x20),&local_f8,0x48);
        thunk_FUN_03f5d7b8(lVar10 + 0x20,0);
      }
      else {
        uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
        memcpy(&local_b0,&local_f8,0x48);
        FUN_057ef254(lVar4,&local_b0,uVar7);
      }
      puStack_238 = puStack_128;
      local_240 = local_130;
      local_230 = local_120;
      uVar6 = AnhPD_FoodOrder_CafePieceTable__HasBasePiece(&local_240,0);
      if ((uVar6 & 1) != 0) {
        local_f8 = CONCAT44(local_f8._4_4_,iVar2);
        uVar7 = FUN_03f5c42c(DAT_09182230,&local_f8);
        puStack_a8 = puStack_128;
        local_b0 = local_130;
        local_a0 = local_120;
        uVar8 = FUN_03f5c42c(DAT_09189158,&local_b0);
        uVar7 = System_String__Format(DAT_09226468,uVar7,uVar8,0);
        uVar7 = System_String__Concat(DAT_092141f0,param_2,DAT_091f6df0,uVar7,0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091835d0);
        }
        UnityEngine_Debug__LogWarning(uVar7,0);
      }
    }
    else {
      puStack_a8 = puStack_128;
      local_b0 = local_130;
      local_a0 = local_120;
      if (*(int *)(DAT_09182240 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puStack_258 = puStack_a8;
      local_260 = local_b0;
      local_250 = local_a0;
      uVar6 = AnhPD_FoodOrder_CafePieceTable__HasTopping(&local_260,0);
      if ((uVar6 & 1) != 0) {
        lVar3 = AnhPD_FoodOrder_CafeOrderStrategy__get_Config();
        if (lVar3 == 0) goto LAB_04140e94;
        puStack_278 = puStack_128;
        local_280 = local_130;
        local_270 = local_120;
        uVar6 = AnhPD_FoodOrder_RecipeConfigSO__TryGetPreparedOfPieceSet
                          (lVar3,&local_280,&uStack_158,0);
        if ((uVar6 & 1) == 0) {
          puStack_a8 = puStack_128;
          local_b0 = local_130;
          local_a0 = local_120;
          uVar7 = FUN_03f5c42c(DAT_09189158,&local_b0);
          uVar7 = System_String__Format(DAT_091f8398,uVar7,0);
          uVar7 = System_String__Concat(DAT_09214210,param_2,DAT_091f6d58,uVar7,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__LogError(uVar7,0);
        }
      }
    }
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_130,0);
    if ((uVar6 & 1) == 0) {
      lVar3 = AnhPD_FoodOrder_CafeOrderStrategy__get_Config();
      if (lVar3 == 0) goto LAB_04140e94;
      puStack_298 = puStack_128;
      local_2a0 = local_130;
      local_290 = local_120;
      uVar6 = AnhPD_FoodOrder_RecipeConfigSO__TryGetPreparedOfPieceSet
                        (lVar3,&local_2a0,&local_160,0);
      if ((uVar6 & 1) == 0) {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_190,&local_130,0);
        uVar5 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_190,0);
        uVar6 = local_170;
        while (local_170 = uVar6, (uVar5 & 1) != 0) {
          lVar3 = AnhPD_FoodOrder_CafeOrderStrategy__get_Config();
          if (lVar3 == 0) goto LAB_04140e94;
          uVar5 = AnhPD_FoodOrder_RecipeConfigSO__TryGetPreparedOfPiece
                            (lVar3,uVar6 & 0xffffffff,&local_198,0);
          uVar7 = local_198;
          if ((uVar5 & 1) != 0) {
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            AnhPD_FoodOrder_PieceSet__One(&local_2d8,uVar6 & 0xffffffff,0);
            local_1c0 = 0;
            uStack_1f8 = 0;
            local_200 = 0;
            uStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_1d8 = 0;
            local_1e0 = 0;
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            uStack_2e8 = uStack_2d0;
            local_2f0 = local_2d8;
            local_2e0 = local_2c8;
            AnhPD_FoodOrder_OrderSpec___ctor
                      (&local_200,uVar7,uVar7,&local_2f0,1,0,0xffffffff,0xffffffff,0,0);
            if (lVar4 == 0) goto LAB_04140e94;
            memcpy(&local_f8,&local_200,0x48);
            lVar3 = DAT_091aed20;
            lVar10 = *(long *)(lVar4 + 0x10);
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_04140e94;
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              lVar10 = lVar10 + (long)(int)uVar1 * 0x48;
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              memcpy((void *)(lVar10 + 0x20),&local_f8,0x48);
              thunk_FUN_03f5d7b8(lVar10 + 0x20,0);
            }
            else {
              uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
              memcpy(&local_b0,&local_f8,0x48);
              FUN_057ef254(lVar4,&local_b0,uVar7);
            }
          }
          uVar5 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_190,0);
          uVar6 = local_170;
        }
        goto LAB_04140b64;
      }
      local_1c0 = 0;
      puStack_2b8 = puStack_128;
      local_2c0 = local_130;
      local_2b0 = local_120;
      uStack_1f8 = 0;
      local_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      local_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      AnhPD_FoodOrder_OrderSpec___ctor
                (&local_200,local_160,local_160,&local_2c0,1,0,0xffffffff,0xffffffff,0,0);
      if (lVar4 == 0) goto LAB_04140e94;
      memcpy(&local_f8,&local_200,0x48);
      lVar3 = DAT_091aed20;
      lVar10 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_04140e94;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        lVar10 = lVar10 + (long)(int)uVar1 * 0x48;
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        memcpy((void *)(lVar10 + 0x20),&local_f8,0x48);
        thunk_FUN_03f5d7b8(lVar10 + 0x20,0);
      }
      else {
        uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
        memcpy(&local_b0,&local_f8,0x48);
        FUN_057ef254(lVar4,&local_b0,uVar7);
      }
    }
    else {
LAB_04140b64:
      if (lVar4 == 0) goto LAB_04140e94;
    }
    if (*(int *)(lVar4 + 0x18) != 0) {
      lVar3 = FUN_057f12d4(lVar4,DAT_091aed40);
      return lVar3;
    }
  }
  lVar3 = FUN_03f5c394(DAT_09180348,1);
  AnhPD_FoodOrder_OrderStrategy__BuildSpec(&local_b0,param_1,param_2,0);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      memmove((void *)(lVar3 + 0x20),&local_b0,0x48);
      thunk_FUN_03f5d7b8(lVar3 + 0x20,0);
      return lVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_04140e94:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

