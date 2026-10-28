// rea decompile_all
// name: _GAME.Team.UITabTeamTabCreateCtrl$$Init
// address: 0x7797fd0
// body: available
// range: 0x7797fd0-0x77983a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77983a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_UITabTeamTabCreateCtrl__Init(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_48;
  
  if ((DAT_09522dd7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189978);
    FUN_03f5c2a4(&DAT_0918a440);
    FUN_03f5c2a4(&DAT_091dd118);
    FUN_03f5c2a4(&DAT_091dd120);
    FUN_03f5c2a4(&DAT_091dd128);
    FUN_03f5c2a4(&DAT_091dd130);
    FUN_03f5c2a4(&DAT_091dd108);
    FUN_03f5c2a4(&DAT_091dd110);
    FUN_03f5c2a4(&DAT_0917f6f0);
    FUN_03f5c2a4(&DAT_0918c678);
    FUN_03f5c2a4(&DAT_091be128);
    FUN_03f5c2a4(&DAT_09226038);
    DAT_09522dd7 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  local_48 = 0;
  local_58 = 0;
  uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
  UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dd130,0);
  _GAME_Utils_HelperButton__AddOnClickListener(uVar3,uVar1,0);
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x1d0);
    uVar1 = thunk_FUN_03f9944c(DAT_0917f6f0);
    FUN_06478c04(uVar1,param_1,DAT_091dd128,0);
    if (lVar4 != 0) {
      FUN_0647f878(lVar4,uVar1,DAT_091be128);
      if (*(long *)(param_1 + 0x40) != 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 0x1d0);
        uVar1 = thunk_FUN_03f9944c(DAT_0917f6f0);
        FUN_06478c04(uVar1,param_1,DAT_091dd120,0);
        if (lVar4 != 0) {
          FUN_0647f878(lVar4,uVar1,DAT_091be128);
          local_5c = *(undefined4 *)(param_1 + 0x7c);
          lVar4 = *(long *)(param_1 + 0x48);
          uVar1 = FUN_03f5c42c(DAT_09535420,&local_5c);
          uVar1 = System_String__Format(DAT_09226038,uVar1,0);
          if (lVar4 != 0) {
            TMPro_TMP_Text__SetText(lVar4,uVar1,0);
            uVar3 = *(undefined8 *)(param_1 + 0x50);
            uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
            UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dd108,0);
            _GAME_Utils_HelperButton__AddOnClickListener(uVar3,uVar1,0);
            uVar3 = *(undefined8 *)(param_1 + 0x58);
            uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
            UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dd110,0);
            _GAME_Utils_HelperButton__AddOnClickListener(uVar3,uVar1,0);
            uVar3 = *(undefined8 *)(param_1 + 0x60);
            uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
            UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dd118,0);
            _GAME_Utils_HelperButton__AddOnClickListener(uVar3,uVar1,0);
            plVar5 = *(long **)(param_1 + 0x68);
            local_60 = 100;
            uVar1 = FUN_03f5c42c(DAT_09535420,&local_60);
            uVar1 = System_String__Format(DAT_09226038,uVar1,0);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x558))(plVar5,uVar1,*(undefined8 *)(*plVar5 + 0x560));
              uVar1 = *(undefined8 *)(param_1 + 0x70);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
              if ((uVar2 & 1) != 0) {
                uVar1 = thunk_FUN_03f9944c(DAT_0918a440);
                _GAME_GameItem_RwItemModel___ctor(uVar1,5,1,0);
                if (*(int *)(DAT_09189978 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar2 = _GAME_Bridge_R1RewardMap__TryGetDisplay(uVar1,&local_48,&local_58,0);
                uVar1 = local_48;
                if ((uVar2 & 1) != 0) {
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
                  if ((uVar2 & 1) != 0) {
                    if (*(long *)(param_1 + 0x70) != 0) {
                      UnityEngine_UI_Image__set_sprite(*(long *)(param_1 + 0x70),local_48,0);
                      if (*(long *)(param_1 + 0x70) != 0) {
                        UnityEngine_UI_Image__set_preserveAspect(*(long *)(param_1 + 0x70),1,0);
                        return;
                      }
                    }
                    goto LAB_077983a4;
                  }
                }
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_077983a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

