// rea decompile_all
// name: AnhPD.FoodOrder.StationGridFeeder$$CollectMissingPieces
// address: 0x4110608
// body: available
// range: 0x4110608-0x4110a97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4110934 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_StationGridFeeder__CollectMissingPieces
               (undefined8 *param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_095161f8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091af050);
    FUN_03f5c2a4(&DAT_091b0590);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_091af058);
    FUN_03f5c2a4(&DAT_091ac6c8);
    FUN_03f5c2a4(&DAT_091aed50);
    FUN_03f5c2a4(&DAT_091ac6d0);
    FUN_03f5c2a4(&DAT_091af060);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_095161f8 = 1;
  }
  plVar5 = (long *)(param_2 + 0x38);
  *plVar5 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_90 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  thunk_FUN_03f5d7b8(plVar5,0);
  lVar3 = *(long *)(param_2 + 0x30);
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (param_3 != 0) {
      lVar3 = AnhPD_FoodOrder_MessyController__get_LineHandle(param_3,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar1 = UnityEngine_Object__op_Implicit(lVar3,0);
      if ((uVar1 & 1) == 0) {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar4 = *(undefined8 **)(DAT_09189158 + 0xb8);
        uStack_78 = puVar4[1];
        local_80 = *puVar4;
        local_70 = puVar4[2];
        goto LAB_04110a70;
      }
      if (lVar3 != 0) {
        lVar3 = AnhPD_FoodOrder_FCustomerLineHandle__GetActiveOpenOrderSpecs(lVar3,0);
        *plVar5 = lVar3;
        thunk_FUN_03f5d7b8(plVar5,lVar3);
        lVar3 = AnhPD_FoodOrder_MessyController__get_ServeShelf(param_3,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar1 = UnityEngine_Object__op_Implicit(lVar3,0);
        if ((uVar1 & 1) != 0) {
          if (lVar3 == 0) goto LAB_04110934;
          AnhPD_FoodOrder_ServeShelfController__GetGatheredPieces
                    (lVar3,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x30),0);
        }
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar4 = *(undefined8 **)(DAT_09189158 + 0xb8);
        lVar3 = *plVar5;
        uStack_78 = puVar4[1];
        local_80 = *puVar4;
        local_70 = puVar4[2];
        if (lVar3 != 0) {
          iVar6 = 0;
          do {
            if (*(int *)(lVar3 + 0x18) <= iVar6) {
              if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar1 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_80,0);
              if ((uVar1 & 1) != 0) goto LAB_04110a70;
              if (param_4 != 0) {
                if (*(int *)(param_4 + 0x18) < 1) goto LAB_04110a70;
                iVar6 = 0;
                lVar3 = *(long *)(param_3 + 0x110);
                goto LAB_041109ac;
              }
              break;
            }
            FUN_057eeec4(&local_140,lVar3,iVar6,DAT_091aed50);
            memcpy(&local_d0,&local_140,0x48);
            if ((uStack_a8 & 1) != 0) {
              if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar1 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&uStack_c0,0);
              if ((uVar1 & 1) == 0) {
                lVar3 = *(long *)(param_2 + 0x30);
                if (lVar3 == 0) break;
                if (iVar6 < *(int *)(lVar3 + 0x18)) {
                  FUN_057f79cc(&local_140,lVar3,iVar6,DAT_091af060);
                  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  local_150 = local_130;
                  uStack_158 = uStack_138;
                  local_160 = local_140;
                  AnhPD_FoodOrder_PieceSet__Subtract(&local_f0,&uStack_c0,&local_160,0);
                }
                else {
                  memcpy(&local_140,&local_d0,0x48);
                  uStack_e8 = uStack_128;
                  local_f0 = local_130;
                  local_e0 = local_120;
                }
                uStack_138 = uStack_e8;
                local_140 = local_f0;
                local_130 = local_e0;
                if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                local_180 = local_130;
                uStack_188 = uStack_138;
                local_190 = local_140;
                AnhPD_FoodOrder_PieceSet__Add(&local_178,&local_80,&local_190,0);
                uStack_78 = uStack_170;
                local_80 = local_178;
                local_70 = local_168;
              }
            }
            lVar3 = *plVar5;
            iVar6 = iVar6 + 1;
          } while (lVar3 != 0);
        }
      }
    }
  }
LAB_04110934:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_041109ac:
  do {
    lVar2 = FUN_057e0998(param_4,iVar6,DAT_091ac6d0);
    uVar1 = AnhPD_FoodOrder_StationGridFeeder__IsRestingOnGrid();
    if ((uVar1 & 1) != 0) {
      if ((lVar2 == 0) || (*(long *)(param_2 + 0x28) == 0)) goto LAB_04110934;
      uVar7 = *(undefined8 *)(lVar2 + 0x78);
      uVar1 = FUN_057e1004(*(long *)(param_2 + 0x28),uVar7,DAT_091b0590);
      if ((uVar1 & 1) != 0) {
        if (lVar3 == 0) goto LAB_04110934;
        lVar2 = AnhPD_FoodOrder_LevelInfo__GetIdPieceOffer(lVar3,uVar7,0);
        if (lVar2 != 0) {
          uStack_138 = *(undefined8 *)(lVar2 + 0x18);
          local_140 = *(undefined8 *)(lVar2 + 0x10);
          local_130 = *(undefined8 *)(lVar2 + 0x20);
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09189158);
          }
          local_1a0 = local_130;
          uStack_1a8 = uStack_138;
          local_1b0 = local_140;
          AnhPD_FoodOrder_PieceSet__Subtract(&local_178,&local_80,&local_1b0,0);
          uStack_78 = uStack_170;
          local_80 = local_178;
          local_70 = local_168;
        }
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < *(int *)(param_4 + 0x18));
LAB_04110a70:
  param_1[1] = uStack_78;
  *param_1 = local_80;
  param_1[2] = local_70;
  return;
}

