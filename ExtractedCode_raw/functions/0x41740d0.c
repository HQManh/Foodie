// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotBridge$$CollectSlots
// address: 0x41740d0
// body: available
// range: 0x41740d0-0x41742eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41741c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41742c0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41742e8 to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_Autoplay_CookingBotBridge__CollectSlots
               (long param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  
  if ((DAT_095165e7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181ed0);
    FUN_03f5c2a4(&DAT_09186c00);
    FUN_03f5c2a4(&DAT_091ab4c0);
    FUN_03f5c2a4(&DAT_091aecc8);
    FUN_03f5c2a4(&DAT_091ab4d0);
    FUN_03f5c2a4(&DAT_091aecd0);
    DAT_095165e7 = 1;
  }
  if (param_2 == 0) {
    return;
  }
  if (((*(int *)(param_2 + 0x10) == 0) &&
      (plVar9 = *(long **)(param_2 + 0x20), plVar9 != (long *)0x0)) && (*plVar9 == DAT_09186c00)) {
    if (param_3 != 0) {
      lVar7 = *(long *)(param_3 + 0x18);
      lVar4 = thunk_FUN_03f9944c(DAT_09181ed0);
      CookingGraph_BotOrderSlotState___ctor(lVar4,0);
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x10) = plVar9;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),plVar9);
        bVar3 = true;
        *(undefined1 *)(lVar4 + 0x18) = 0;
        if ((param_4 & 1) == 0) {
          if (*(long *)(param_3 + 0x18) == 0) goto LAB_041741c8;
          bVar3 = *(int *)(*(long *)(param_3 + 0x18) + 0x18) == 0;
        }
        *(bool *)(lVar4 + 0x1a) = bVar3;
        *(undefined1 *)(lVar4 + 0x1b) = 1;
        lVar2 = DAT_091ab4c0;
        if (lVar7 != 0) {
          lVar6 = *(long *)(lVar7 + 0x10);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (*(uint *)(lVar6 + 0x18) <= uVar1) {
              FUN_057e0c68(lVar7,lVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              return;
            }
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            plVar9 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            *plVar9 = lVar4;
            thunk_FUN_03f5d7b8(plVar9,lVar4);
            return;
          }
        }
      }
    }
  }
  else {
    lVar4 = *(long *)(param_2 + 0x28);
    if (lVar4 != 0) {
      iVar8 = 0;
      do {
        if (*(int *)(lVar4 + 0x18) <= iVar8) {
          return;
        }
        uVar5 = FUN_057e0998(lVar4,iVar8,DAT_091aecd0);
        if (iVar8 == 0) {
          if (*(long *)(param_2 + 0x28) == 0) break;
          bVar3 = 1 < *(int *)(*(long *)(param_2 + 0x28) + 0x18);
        }
        else {
          bVar3 = false;
        }
        if (param_1 == 0) break;
        AnhPD_FoodOrder_Autoplay_CookingBotBridge__CollectSlots(param_1,uVar5,param_3,bVar3);
        lVar4 = *(long *)(param_2 + 0x28);
        iVar8 = iVar8 + 1;
      } while (lVar4 != 0);
    }
  }
LAB_041741c8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

