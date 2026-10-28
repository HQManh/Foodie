// rea decompile_all
// name: _GAME.StageRace.PopupStageRaceStartCtrl$$Open
// address: 0x77f4f64
// body: available
// range: 0x77f4f64-0x77f5327 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77f5208 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f5324 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_StageRace_PopupStageRaceStartCtrl__Open(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int local_68;
  undefined4 local_64;
  
  if ((DAT_09523113 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091acd80);
    FUN_03f5c2a4(&DAT_091b0de8);
    FUN_03f5c2a4(&DAT_091acd88);
    FUN_03f5c2a4(&DAT_091d6330);
    FUN_03f5c2a4(&DAT_091d6338);
    FUN_03f5c2a4(&DAT_0918b158);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_0918c678);
    FUN_03f5c2a4(&DAT_0920d8a0);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_0920d8a8);
    DAT_09523113 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x100);
  lVar2 = FUN_03f5c394(DAT_091805f8,1);
  if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918b158);
  }
  if (**(long **)(DAT_0918b158 + 0xb8) != 0) {
    local_64 = *(undefined4 *)(**(long **)(DAT_0918b158 + 0xb8) + 0x14);
    uVar3 = FUN_03f5c42c(DAT_09535420,&local_64);
    uVar3 = System_String__Format(DAT_09226038,uVar3,0);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) == 0) {
LAB_077f5324:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      thunk_FUN_03f5d7b8();
      _GAME_Localize_LocalizeHelper__SetTextLocalizedByKey(uVar5,DAT_0920d8a0,lVar2,0);
      lVar2 = *(long *)(param_1 + 0xf8);
      if (lVar2 != 0) {
        iVar6 = 0;
        while (iVar6 < *(int *)(lVar2 + 0x18)) {
          if (*(long *)(param_1 + 0xf0) == 0) goto LAB_077f5208;
          uVar5 = FUN_057e0998(*(long *)(param_1 + 0xf0),iVar6,DAT_091b0de8);
          lVar2 = FUN_03f5c394(DAT_091805f8,1);
          local_68 = iVar6 + 1;
          uVar3 = FUN_03f5c42c(DAT_09535420,&local_68);
          uVar3 = System_String__Format(DAT_09226038,uVar3,0);
          if (lVar2 == 0) goto LAB_077f5208;
          if (*(int *)(lVar2 + 0x18) == 0) goto LAB_077f5324;
          *(undefined8 *)(lVar2 + 0x20) = uVar3;
          thunk_FUN_03f5d7b8();
          _GAME_Localize_LocalizeHelper__SetTextLocalizedByKey(uVar5,DAT_0920d8a8,lVar2,0);
          if (*(long *)(param_1 + 0xf8) == 0) goto LAB_077f5208;
          lVar2 = FUN_057e0998(*(long *)(param_1 + 0xf8),iVar6,DAT_091acd88);
          if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918b158);
          }
          lVar4 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
          if ((lVar4 == 0) || (lVar2 == 0)) goto LAB_077f5208;
          UnityEngine_GameObject__SetActive(lVar2,*(int *)(lVar4 + 0x20) == iVar6,0);
          lVar2 = *(long *)(param_1 + 0xf8);
          iVar6 = iVar6 + 1;
          if (lVar2 == 0) goto LAB_077f5208;
        }
        lVar2 = *(long *)(param_1 + 0x120);
        if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if ((**(long **)(DAT_0918b158 + 0xb8) != 0) && (lVar2 != 0)) {
          _GAME_GameUI_RwBoxUICtrl__SetData
                    (lVar2,*(undefined8 *)(**(long **)(DAT_0918b158 + 0xb8) + 0x20),0);
          if (*(long *)(param_1 + 0x128) != 0) {
            UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x128),0,0);
            uVar1 = *(undefined4 *)(param_1 + 0x130);
            if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            _GAME_BaseGame_TimerManager__RemoveCallbackTick(uVar1,0);
            uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
            System_Action___ctor(uVar5,param_1,DAT_091d6338,0);
            uVar1 = _GAME_BaseGame_TimerManager__AddCallbackTick(uVar5,param_1,0);
            *(undefined4 *)(param_1 + 0x130) = uVar1;
            uVar5 = thunk_FUN_03f9944c(DAT_0918c678);
            UnityEngine_Events_UnityAction___ctor(uVar5,param_1,DAT_091d6330,0);
            _GAME_GameUI_PopupBaseCtrl__Open(param_1,5,uVar5,0);
            return;
          }
        }
      }
    }
  }
LAB_077f5208:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

