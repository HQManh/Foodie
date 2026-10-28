// rea decompile_all
// name: AnhPD.FoodOrder.LevelPieceBook$$OpenOrderWantsAsIs
// address: 0x41f30a4
// body: available
// range: 0x41f30a4-0x41f33db inclusive
// range: 0x41f3444-0x41f346b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f33d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f33d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f33d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_LevelPieceBook__OpenOrderWantsAsIs
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_218 [72];
  undefined8 local_1d0;
  undefined8 *puStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  ulong local_1a0;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09516b83 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3b60);
    FUN_03f5c2a4(&DAT_091a3b68);
    FUN_03f5c2a4(&DAT_091a3b70);
    FUN_03f5c2a4(&DAT_091aed38);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516b83 = 1;
  }
  local_70 = 0;
  local_d0 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar4 = AnhPD_FoodOrder_LevelInfo__GetIdPieceOffer(*(long *)(param_1 + 0x10),param_2),
     lVar4 != 0)) {
    uStack_1b8 = *(undefined8 *)(lVar4 + 0x18);
    local_1c0 = *(undefined8 *)(lVar4 + 0x10);
    local_1b0 = *(undefined8 *)(lVar4 + 0x20);
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_158 = uStack_1b8;
    local_160 = local_1c0;
    local_150 = local_1b0;
    iVar1 = AnhPD_FoodOrder_PieceSet__IntersectCount(param_3,&local_160,0);
    if (iVar1 != 0) {
      uVar5 = AnhPD_FoodOrder_FlexibleId__IsFlexible(param_2,0);
      if ((uVar5 & 1) == 0) {
        uVar7 = **(undefined8 **)(DAT_091881a0 + 0xb8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(uVar7,0);
        lVar8 = 0;
        if ((uVar5 & 1) != 0) {
          if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_041f33d4;
          lVar8 = AnhPD_FoodOrder_MessyController__get_LineHandle
                            (**(long **)(DAT_091881a0 + 0xb8),0);
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(lVar8,0);
        if ((uVar5 & 1) != 0) {
          if ((lVar8 == 0) ||
             (lVar8 = AnhPD_FoodOrder_FCustomerLineHandle__GetActiveOpenOrderSpecs(lVar8,0),
             lVar8 == 0)) {
LAB_041f33d4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_057f00fc(&local_1c0,lVar8,DAT_091aed38);
          memcpy(&local_c0,&local_1c0,0x58);
          local_1d0 = 0;
          puStack_1c8 = &local_c0;
          while( true ) {
            uVar2 = FUN_071c1a7c(&local_c0,DAT_091a3b68);
            if ((uVar2 & 1) == 0) break;
            memcpy(&local_110,&local_b0,0x48);
            if ((uStack_e8 & 1) != 0) {
              lVar8 = *(long *)(param_1 + 0x10);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              memcpy(auStack_218,&local_b0,0x48);
              uVar3 = AnhPD_FoodOrder_LevelInfo__DishKeyOfOrder(lVar8,auStack_218);
              if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_1c0,lVar4 + 0x10,0);
              local_120 = local_1a0;
              uStack_138 = uStack_1b8;
              local_140 = local_1c0;
              uStack_128 = uStack_1a8;
              uStack_130 = local_1b0;
              while (uVar6 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_140,0),
                    uVar5 = local_120, (uVar6 & 1) != 0) {
                if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                iVar1 = AnhPD_FoodOrder_PieceSet__get_Item(param_3,uVar5 & 0xffffffff,0);
                if (iVar1 != 0) {
                  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  iVar1 = AnhPD_FoodOrder_PieceSet__get_Item(&uStack_100,uVar5 & 0xffffffff,0);
                  if (iVar1 != 0) {
                    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    uVar5 = AnhPD_FoodOrder_LevelInfo__TryGetFormOf
                                      (*(long *)(param_1 + 0x10),uVar3,uVar5 & 0xffffffff,&local_148
                                      );
                    if (((uVar5 & 1) == 0) ||
                       (uVar5 = System_String__op_Equality(local_148,param_2,0), (uVar5 & 1) != 0))
                    goto LAB_041f33b0;
                  }
                }
              }
            }
          }
LAB_041f33b0:
          FUN_071c1a78(&local_c0,DAT_091a3b60);
          goto LAB_041f3448;
        }
      }
      uVar2 = 1;
      goto LAB_041f3448;
    }
  }
  uVar2 = 0;
LAB_041f3448:
  return uVar2 & 1;
}

