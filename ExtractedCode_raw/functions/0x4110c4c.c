// rea decompile_all
// name: AnhPD.FoodOrder.StationGridFeeder$$OpensUnstartedOrder
// address: 0x4110c4c
// body: available
// range: 0x4110c4c-0x4110e43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4110e18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_StationGridFeeder__OpensUnstartedOrder
               (long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined1 auStack_160 [72];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_095161f7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_091af058);
    FUN_03f5c2a4(&DAT_091aed50);
    FUN_03f5c2a4(&DAT_091af060);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_095161f7 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x38);
  local_70 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (lVar3 == 0) {
    return false;
  }
  iVar5 = 0;
  do {
    iVar1 = *(int *)(lVar3 + 0x18);
    if (iVar1 <= iVar5) {
      return iVar5 < iVar1;
    }
    FUN_057eeec4(&local_118,lVar3,iVar5,DAT_091aed50);
    memcpy(&local_b0,&local_118,0x48);
    if ((uStack_88 & 1) != 0) {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&uStack_a0,0);
      if ((uVar4 & 1) == 0) {
        lVar3 = *(long *)(param_1 + 0x30);
        if (lVar3 == 0) break;
        if (iVar5 < *(int *)(lVar3 + 0x18)) {
          FUN_057f79cc(&local_118,lVar3,iVar5,DAT_091af060);
          uStack_c8 = uStack_110;
          local_d0 = local_118;
          local_c0 = local_108;
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_d0,0);
          if ((uVar4 & 1) == 0) goto LAB_04110e0c;
        }
        if (param_2 == 0) break;
        memcpy(auStack_160,&local_b0,0x48);
        iVar2 = AnhPD_FoodOrder_LevelInfo__DishKeyOfOrder(param_2,auStack_160,0);
        if (iVar2 != -1) {
          uStack_178 = param_4[1];
          local_180 = *param_4;
          local_170 = param_4[2];
          uVar4 = AnhPD_FoodOrder_LevelInfo__CanOpenDish(param_2,iVar2,param_3,&local_180,0);
          if ((uVar4 & 1) != 0) {
            return iVar5 < iVar1;
          }
        }
      }
    }
LAB_04110e0c:
    lVar3 = *(long *)(param_1 + 0x38);
    iVar5 = iVar5 + 1;
  } while (lVar3 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

