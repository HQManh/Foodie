// rea decompile_all
// name: AnhPD.FoodOrder.SeafoodOrderStrategy$$UnclaimedDemand
// address: 0x4130504
// body: available
// range: 0x4130504-0x413083f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x413083c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_SeafoodOrderStrategy__UnclaimedDemand(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  byte local_120;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09516334 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f978);
    FUN_03f5c2a4(&DAT_09176b28);
    FUN_03f5c2a4(&DAT_091af030);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_091af058);
    FUN_03f5c2a4(&DAT_091aed50);
    FUN_03f5c2a4(&DAT_091af060);
    FUN_03f5c2a4(&DAT_0917c8f0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918a7b8);
    DAT_09516334 = 1;
  }
  local_70 = 0;
  local_a0 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uVar3 = thunk_FUN_03f9944c(DAT_09176b28);
  FUN_06fc96ac(uVar3,DAT_0919f978);
  if ((param_1 != 0) &&
     (lVar4 = AnhPD_FoodOrder_MessyController__get_LineHandle(param_1,0), lVar4 != 0)) {
    lVar4 = AnhPD_FoodOrder_FCustomerLineHandle__GetActiveOpenOrderSpecs(lVar4,0);
    lVar5 = thunk_FUN_03f9944c(DAT_0917c8f0);
    FUN_057f7434(lVar5,DAT_091af030);
    uVar6 = AnhPD_FoodOrder_MessyController__get_ServeShelf(param_1,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar7 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = AnhPD_FoodOrder_MessyController__get_ServeShelf(param_1,0);
      if (lVar8 == 0) goto LAB_0413083c;
      AnhPD_FoodOrder_ServeShelfController__GetGatheredPieces(lVar8,lVar4,lVar5,0);
    }
    if (lVar4 != 0) {
      if (0 < *(int *)(lVar4 + 0x18)) {
        iVar10 = 0;
        do {
          FUN_057eeec4(&local_148,lVar4,iVar10,DAT_091aed50);
          if ((local_120 & 1) != 0) {
            FUN_057eeec4(&local_148,lVar4,iVar10,DAT_091aed50);
            memcpy(&local_e0,&local_148,0x48);
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_170,&uStack_d0,0);
            local_70 = local_150;
            uStack_88 = uStack_168;
            local_90 = local_170;
            uStack_78 = uStack_158;
            uStack_80 = uStack_160;
            while (uVar9 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_90,0),
                  uVar7 = local_70, (uVar9 & 1) != 0) {
              iVar1 = local_70._4_4_;
              if (*(int *)(DAT_0918a7b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar8 = CakeOrder_InGame_Seafood_SeafoodPieceTable__PreparedId(uVar7 & 0xffffffff,0);
              if (lVar5 == 0) goto LAB_0413083c;
              if (iVar10 < *(int *)(lVar5 + 0x18)) {
                FUN_057f79cc(&local_148,lVar5,iVar10,DAT_091af060);
                uStack_f8 = uStack_140;
                local_100 = local_148;
                local_f0 = local_138;
                if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                iVar2 = AnhPD_FoodOrder_PieceSet__get_Item(&local_100,uVar7 & 0xffffffff,0);
              }
              else {
                iVar2 = 0;
              }
              if ((lVar8 != 0) && (0 < iVar1 - iVar2)) {
                AnhPD_FoodOrder_SeafoodOrderStrategy__AddCount(uVar3,lVar8);
              }
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(lVar4 + 0x18));
      }
      return uVar3;
    }
  }
LAB_0413083c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

