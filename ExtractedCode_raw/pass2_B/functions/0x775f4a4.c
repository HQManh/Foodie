// rea decompile_all
// name: _GAME.Bridge.CookOrderBridge$$GetIapPackRewards
// address: 0x775f4a4
// body: available
// range: 0x775f4a4-0x775f803 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x775f7f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775f7f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775f7fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775f800 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _GAME_Bridge_CookOrderBridge__GetIapPackRewards(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  
  if ((DAT_09522c22 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3620);
    FUN_03f5c2a4(&DAT_091a3628);
    FUN_03f5c2a4(&DAT_091a3630);
    FUN_03f5c2a4(&DAT_091aaa90);
    FUN_03f5c2a4(&DAT_091adf78);
    FUN_03f5c2a4(&DAT_091aaa88);
    FUN_03f5c2a4(&DAT_0917bb38);
    FUN_03f5c2a4(&DAT_091b49d0);
    FUN_03f5c2a4(&DAT_091b49d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bed30);
    FUN_03f5c2a4(&DAT_09224f28);
    DAT_09522c22 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0917bb38);
  FUN_056bb2c0(lVar3,DAT_091aaa88);
  uVar4 = FUN_05a8eda4(DAT_091b49d8);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = _GAME_Bridge_CookOrderBridge__IsIapListed(param_1), (uVar4 & 1) == 0)) {
    return lVar3;
  }
  lVar5 = *(long *)(DAT_091b49d0 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (((lVar5 != 0) &&
      (lVar6 = CakeOrder_Shop_InAppShopDataAccess__GetPackValue(lVar5,param_1,0), lVar6 != 0)) &&
     (*(long *)(lVar6 + 0x10) != 0)) {
    FUN_057e185c(&local_88,*(long *)(lVar6 + 0x10),DAT_091adf78);
    uStack_68 = puStack_80;
    local_70 = local_88;
    local_60 = local_78;
    puStack_80 = &local_70;
    local_88 = 0;
LAB_0775f65c:
    uVar4 = FUN_071bd28c(&local_70,DAT_091a3628);
    lVar6 = local_60;
    if ((uVar4 & 1) != 0) {
      if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar9 = *(undefined8 *)(local_60 + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Inequality(uVar9,0,0);
      if (((uVar4 & 1) != 0) && (iVar2 = *(int *)(lVar6 + 0x18), 0 < iVar2)) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_98 = 0;
        uStack_90 = 0;
        FUN_066ce094(&local_98,*(undefined8 *)(lVar6 + 0x18),iVar2,DAT_091bed30);
        lVar6 = DAT_091aaa90;
        if (lVar3 != 0) {
          lVar8 = *(long *)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              puVar7 = (undefined8 *)(lVar8 + 0x20);
              *puVar7 = local_98;
              *(undefined8 *)(lVar8 + 0x28) = uStack_90;
              thunk_FUN_03f5d7b8(puVar7,0);
            }
            else {
              FUN_056bbb6c(lVar3,local_98,uStack_90,
                           *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_0775f65c;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_0775f65c;
    }
    FUN_071bd288(&local_70,DAT_091a3620);
    iVar2 = CakeOrder_Shop_InAppShopDataAccess__GetUnlimitedHeartMinutes(lVar5,param_1,0);
    if (iVar2 < 1) {
      return lVar3;
    }
    local_88 = 0;
    puStack_80 = (undefined8 *)0x0;
    FUN_066ce094(&local_88,DAT_09224f28,iVar2,DAT_091bed30);
    lVar5 = DAT_091aaa90;
    if (lVar3 != 0) {
      lVar6 = *(long *)(lVar3 + 0x10);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          puVar7 = (undefined8 *)(lVar6 + 0x20);
          *puVar7 = local_88;
          *(undefined8 **)(lVar6 + 0x28) = puStack_80;
          thunk_FUN_03f5d7b8(puVar7,0);
          return lVar3;
        }
        FUN_056bbb6c(lVar3,local_88,puStack_80,
                     *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

