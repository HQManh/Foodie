// rea decompile_all
// name: AnhPD.FoodOrder.SushiOrderStrategy$$StationResultDemand
// address: 0x416b3b0
// body: available
// range: 0x416b3b0-0x416b737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x416b734 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int AnhPD_FoodOrder_SushiOrderStrategy__StationResultDemand(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined1 auStack_170 [72];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_64;
  
  if ((DAT_095165a5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091af050);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_091af058);
    FUN_03f5c2a4(&DAT_091aed50);
    FUN_03f5c2a4(&DAT_091af060);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918b670);
    DAT_095165a5 = 1;
  }
  local_64 = 0;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_d0 = 0;
  if (*(int *)(DAT_0918b670 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = AnhPD_FoodOrder_SushiOrderStrategy__TryGetCutForm(param_2,&local_64,&local_78,&local_70);
  if ((uVar5 & 1) != 0) {
    lVar8 = **(long **)(DAT_091881a0 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(lVar8,0);
    lVar9 = 0;
    if ((uVar5 & 1) != 0) {
      if (lVar8 == 0) goto LAB_0416b734;
      lVar9 = AnhPD_FoodOrder_MessyController__get_LineHandle(lVar8,0);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(lVar9,0);
    if ((uVar5 & 1) != 0) {
      uVar2 = System_String__op_Equality(param_2,local_70,0);
      if ((lVar9 != 0) &&
         (lVar9 = AnhPD_FoodOrder_FCustomerLineHandle__GetActiveOpenOrderSpecs(lVar9,0), lVar8 != 0)
         ) {
        uVar6 = AnhPD_FoodOrder_MessyController__get_ServeShelf(lVar8,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar5 = UnityEngine_Object__op_Implicit(uVar6,0);
        if ((uVar5 & 1) == 0) {
          lVar7 = *(long *)(param_1 + 0x28);
          if (lVar7 == 0) goto LAB_0416b734;
          *(undefined4 *)(lVar7 + 0x18) = 0;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        }
        else {
          lVar7 = AnhPD_FoodOrder_MessyController__get_ServeShelf(lVar8,0);
          if (lVar7 == 0) goto LAB_0416b734;
          AnhPD_FoodOrder_ServeShelfController__GetGatheredPieces
                    (lVar7,lVar9,*(undefined8 *)(param_1 + 0x28),0);
        }
        uVar1 = local_64;
        if (lVar9 != 0) {
          if (*(int *)(lVar9 + 0x18) < 1) {
            return 0;
          }
          iVar4 = 0;
          iVar10 = 0;
          do {
            FUN_057eeec4(&local_128,lVar9,iVar4,DAT_091aed50);
            memcpy(&local_c0,&local_128,0x48);
            if ((uStack_98 & 1) != 0) {
              if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              iVar3 = AnhPD_FoodOrder_PieceSet__get_Item(&uStack_b0,uVar1,0);
              if (iVar3 != 0) {
                lVar7 = *(long *)(param_1 + 0x28);
                if (lVar7 == 0) break;
                if (iVar4 < *(int *)(lVar7 + 0x18)) {
                  FUN_057f79cc(&local_128,lVar7,iVar4,DAT_091af060);
                  uStack_d8 = uStack_120;
                  local_e0 = local_128;
                  local_d0 = local_118;
                  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  iVar3 = AnhPD_FoodOrder_PieceSet__get_Item(&local_e0,uVar1,0);
                  if (0 < iVar3) goto LAB_0416b6c8;
                }
                memcpy(auStack_170,&local_c0,0x48);
                iVar3 = AnhPD_FoodOrder_OrderStrategy__DishKeyOfOrder(param_1,auStack_170,0);
                iVar10 = iVar10 + ((uVar2 ^ iVar3 != 3) & 1);
              }
            }
LAB_0416b6c8:
            iVar4 = iVar4 + 1;
            if (*(int *)(lVar9 + 0x18) <= iVar4) {
              if (iVar10 == 0) {
                return 0;
              }
              if (*(long *)(lVar8 + 0x110) == 0) {
                iVar4 = 0;
              }
              else {
                lVar8 = *(long *)(*(long *)(lVar8 + 0x110) + 0x18);
                iVar4 = 0;
                if (lVar8 != 0) {
                  iVar4 = AnhPD_FoodOrder_LevelPieceBook__CountMade(lVar8,param_2,0);
                }
              }
              return iVar10 - iVar4;
            }
          } while( true );
        }
      }
LAB_0416b734:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return 0;
}

