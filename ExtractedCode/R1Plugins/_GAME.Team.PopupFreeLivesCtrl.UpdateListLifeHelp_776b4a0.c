// rea decompile_all
// name: _GAME.Team.PopupFreeLivesCtrl$$UpdateListLifeHelp
// address: 0x776b4a0
// body: available
// range: 0x776b4a0-0x776b857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x776b844 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776b848 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776b84c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776b850 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776b854 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_PopupFreeLivesCtrl__UpdateListLifeHelp(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09522c85 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091a4730);
    FUN_03f5c2a4(&DAT_091a3710);
    FUN_03f5c2a4(&DAT_091a4738);
    FUN_03f5c2a4(&DAT_091a3718);
    FUN_03f5c2a4(&DAT_091a3720);
    FUN_03f5c2a4(&DAT_091a4740);
    FUN_03f5c2a4(&DAT_09187680);
    FUN_03f5c2a4(&DAT_091ae260);
    FUN_03f5c2a4(&DAT_091ae268);
    FUN_03f5c2a4(&DAT_091b0c40);
    FUN_03f5c2a4(&DAT_091ae270);
    FUN_03f5c2a4(&DAT_091d4bf8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d6250);
    DAT_09522c85 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  if (*(long *)(param_1 + 0xf8) != 0) {
    FUN_057e185c(&local_b8,*(long *)(param_1 + 0xf8),DAT_091ae270);
    local_70 = local_a8;
    puStack_78 = puStack_b0;
    local_80 = local_b8;
    local_b8 = 0;
    puStack_b0 = &local_80;
    while (uVar3 = FUN_071bd28c(&local_80,DAT_091a3718), lVar7 = local_70, (uVar3 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Equality(lVar7,0,0);
      if ((uVar3 & 1) == 0) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = UnityEngine_Component__get_gameObject(lVar7,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_GameObject__SetActive(lVar4,0,0);
        uVar5 = UnityEngine_Component__get_gameObject(lVar7,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Object__Destroy(uVar5,0);
      }
    }
    FUN_071bd288(&local_80,DAT_091a3710);
    lVar7 = *(long *)(param_1 + 0xf8);
    if (lVar7 != 0) {
      iVar1 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
      }
      if (param_2 != 0) {
        FUN_057e185c(&local_b8,param_2,DAT_091b0c40);
        local_90 = local_a8;
        puStack_98 = puStack_b0;
        local_a0 = local_b8;
        local_b8 = 0;
        puStack_b0 = &local_a0;
        while( true ) {
          uVar3 = FUN_071bd28c(&local_a0,DAT_091a4738);
          lVar7 = local_90;
          if ((uVar3 & 1) == 0) {
            FUN_071bd288(&local_a0,DAT_091a4730);
            uVar5 = *(undefined8 *)(param_1 + 0x100);
            if (*(int *)(DAT_09187680 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(uVar5,0);
            _GAME_Team_PopupFreeLivesCtrl__UpdateTotalLives(param_1);
            return;
          }
          uVar5 = *(undefined8 *)(param_1 + 0xf0);
          uVar10 = *(undefined8 *)(param_1 + 0x100);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar4 = FUN_04c35338(uVar5,uVar10,DAT_091d4bf8);
          uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(uVar5,param_1,DAT_091d6250,0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          _GAME_Team_LifeHelpItemUICtrl__SetLifeHelp(lVar4,lVar7,uVar5,0);
          lVar7 = DAT_091ae260;
          lVar6 = *(long *)(param_1 + 0xf8);
          if (lVar6 == 0) break;
          lVar8 = *(long *)(lVar6 + 0x10);
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar8 == 0) break;
          uVar2 = *(uint *)(lVar6 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
            plVar9 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
            *plVar9 = lVar4;
            thunk_FUN_03f5d7b8(plVar9,lVar4);
          }
          else {
            FUN_057e0c68(lVar6,lVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

