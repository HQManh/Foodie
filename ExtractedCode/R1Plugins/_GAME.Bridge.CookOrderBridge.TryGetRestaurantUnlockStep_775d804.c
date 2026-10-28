// rea decompile_all
// name: _GAME.Bridge.CookOrderBridge$$TryGetRestaurantUnlockStep
// address: 0x775d804
// body: available
// range: 0x775d804-0x775d9e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x775d9e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_GAME_Bridge_CookOrderBridge__TryGetRestaurantUnlockStep
          (undefined8 param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((DAT_09522c05 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09522c05 = 1;
  }
  *param_4 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  thunk_FUN_03f5d7b8(param_4,0);
  *param_3 = 0;
  thunk_FUN_03f5d7b8(param_3,0);
  uVar3 = FUN_05a8f088(DAT_091b4b68);
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = **(long **)(lVar4 + 0xb8);
    if (lVar4 == 0) goto LAB_0775d9e0;
    uVar2 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapIndexById(lVar4,param_1,0);
    uVar1 = uVar2 - ((param_2 ^ 0xffffffff) & 1);
    if (-1 < (int)(uVar2 | uVar1)) {
      lVar4 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapSO(lVar4,uVar1,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Equality(lVar4,0,0);
      if ((uVar3 & 1) == 0) {
        if (lVar4 != 0) {
          iVar7 = *(int *)(lVar4 + 0x50);
          if (*(int *)(lVar4 + 0x50) < 1) {
            lVar5 = CakeOrder_Home_Journey_JourneyLevelMap__get_Instance(0);
            if (lVar5 == 0) goto LAB_0775d9e0;
            uVar3 = CakeOrder_Home_Journey_JourneyLevelMap__TryGetRange
                              (lVar5,*(undefined8 *)(lVar4 + 0x18),&local_60,0);
            if ((uVar3 & 1) == 0) {
              return 0;
            }
            iVar7 = uStack_58._4_4_;
            if (uStack_58._4_4_ < 1) {
              return 0;
            }
          }
          uVar6 = _GAME_Bridge_CookOrderBridge__DayText(iVar7);
          *param_3 = uVar6;
          thunk_FUN_03f5d7b8(param_3,uVar6);
          uVar6 = CakeOrder_DataSO_ScriptableObjectWithId__get_LocalizedName(lVar4,0);
          *param_4 = uVar6;
          thunk_FUN_03f5d7b8(param_4,uVar6);
          return 1;
        }
LAB_0775d9e0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
  return 0;
}

