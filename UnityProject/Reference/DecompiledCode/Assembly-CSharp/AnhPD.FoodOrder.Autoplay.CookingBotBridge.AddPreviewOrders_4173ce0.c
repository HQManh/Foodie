// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotBridge$$AddPreviewOrders
// address: 0x4173ce0
// body: available
// range: 0x4173ce0-0x4174023 inclusive
// range: 0x4174070-0x41740af inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4174020 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41740a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41740ac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_Autoplay_CookingBotBridge__AddPreviewOrders
               (long param_1,long param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_095165e4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181ee8);
    FUN_03f5c2a4(&DAT_091828a0);
    FUN_03f5c2a4(&DAT_091a2a38);
    FUN_03f5c2a4(&DAT_091a2a40);
    FUN_03f5c2a4(&DAT_091a2a48);
    FUN_03f5c2a4(&DAT_091abbd8);
    FUN_03f5c2a4(&DAT_091ab508);
    FUN_03f5c2a4(&DAT_091ac608);
    FUN_03f5c2a4(&DAT_091ac200);
    FUN_03f5c2a4(&DAT_091ab518);
    FUN_03f5c2a4(&DAT_091ac208);
    DAT_095165e4 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  if (lVar5 != 0) {
    while (*(long *)(lVar5 + 0x10) != 0) {
      param_3 = param_3 + 1;
      if (*(int *)(*(long *)(lVar5 + 0x10) + 0x18) <= (int)param_3) {
        return;
      }
      if ((param_2 == 0) || (*(long *)(param_2 + 0x60) == 0)) break;
      if (2 < *(int *)(*(long *)(param_2 + 0x60) + 0x18)) {
        return;
      }
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 0x98), lVar9 == 0)) break;
      if ((int)param_3 < (int)*(uint *)(lVar9 + 0x18)) {
        if (*(uint *)(lVar9 + 0x18) <= param_3) goto LAB_041740ac;
        lVar9 = *(long *)(lVar9 + (long)(int)param_3 * 8 + 0x20);
        if (lVar9 != 0) {
          uVar3 = CakeOrder_InGame_CustomerSpawnData__get_IsBoss(lVar9,0);
          if ((uVar3 & 1) != 0) {
            if (*(long *)(param_2 + 0x60) != 0) {
              *(bool *)(param_2 + 0x68) = *(int *)(*(long *)(param_2 + 0x60) + 0x18) == 0;
              return;
            }
            break;
          }
          lVar5 = *(long *)(param_1 + 0x28);
          if (lVar5 == 0) break;
        }
      }
      if (*(long *)(lVar5 + 0x10) == 0) break;
      lVar5 = FUN_057e0998(*(long *)(lVar5 + 0x10),param_3,DAT_091ac208);
      lVar9 = thunk_FUN_03f9944c(DAT_09181ee8);
      CookingGraph_BotPreviewOrderState___ctor(lVar9,0);
      if (lVar9 == 0) break;
      *(uint *)(lVar9 + 0x10) = param_3;
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x98), lVar6 == 0)) break;
      if ((int)param_3 < (int)*(uint *)(lVar6 + 0x18)) {
        if (*(uint *)(lVar6 + 0x18) <= param_3) {
LAB_041740ac:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar6 = *(long *)(lVar6 + (long)(int)param_3 * 8 + 0x20);
        bVar2 = 0;
        if (lVar6 != 0) {
          bVar2 = CakeOrder_InGame_CustomerSpawnData__get_IsCleanDishStaff(lVar6,0);
        }
      }
      else {
        bVar2 = 0;
      }
      *(byte *)(lVar9 + 0x14) = bVar2 & 1;
      if (lVar5 == 0) break;
      if (*(long *)(lVar5 + 0x20) != 0) {
        FUN_057e185c(&local_98,*(long *)(lVar5 + 0x20),DAT_091ac608);
        local_70 = local_88;
        puStack_78 = puStack_90;
        local_80 = local_98;
        local_98 = 0;
        puStack_90 = &local_80;
LAB_04173f04:
        uVar3 = FUN_071bd28c(&local_80,DAT_091a2a40);
        lVar5 = DAT_091abbd8;
        if ((uVar3 & 1) != 0) {
          if ((((local_70 != 0) && (*(long *)(local_70 + 0x10) != 0)) &&
              (plVar4 = *(long **)(*(long *)(local_70 + 0x10) + 0x20), plVar4 != (long *)0x0)) &&
             (*plVar4 == DAT_091828a0)) {
            lVar6 = *(long *)(lVar9 + 0x18);
            if (lVar6 != 0) {
              lVar7 = *(long *)(lVar6 + 0x10);
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar1 = *(uint *)(lVar6 + 0x18);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                  plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar8 = (long)plVar4;
                  thunk_FUN_03f5d7b8(plVar8);
                }
                else {
                  FUN_057e0c68(lVar6,plVar4,
                               *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_04173f04;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_04173f04;
        }
        FUN_071bd288(&local_80,DAT_091a2a38);
      }
      lVar5 = DAT_091ab508;
      lVar6 = *(long *)(param_2 + 0x60);
      if (lVar6 == 0) break;
      lVar7 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) break;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        plVar4 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *plVar4 = lVar9;
        thunk_FUN_03f5d7b8(plVar4,lVar9);
      }
      else {
        FUN_057e0c68(lVar6,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

