// rea decompile_all
// name: _GAME.GameUI.DropItemController$$ConvertUIWorldPosInternal
// address: 0x774dbdc
// body: available
// range: 0x774dbdc-0x774dd83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x774dd18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_GAME_GameUI_DropItemController__ConvertUIWorldPosInternal
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5,
          long param_6)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 local_70;
  undefined4 local_68;
  
  if ((DAT_09522b88 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189ca0);
    FUN_03f5c2a4(&DAT_09189c98);
    DAT_09522b88 = 1;
  }
  local_68 = 0;
  local_70 = 0;
  if (param_6 != 0) {
    plVar2 = (long *)UnityEngine_Component__get_transform(param_6,0);
    if ((plVar2 == (long *)0x0) || (*plVar2 != DAT_09189c98)) {
      return param_1;
    }
    if (param_5 != 0) {
      iVar1 = UnityEngine_Canvas__get_renderMode(param_5,0);
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = UnityEngine_Canvas__get_worldCamera(param_5,0);
      }
      if (param_4 != 0) {
        uVar5 = UnityEngine_Transform__get_position(param_4,0);
        if (*(int *)(DAT_09189ca0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_RectTransformUtility__WorldToScreenPoint(uVar5,param_2,param_3,uVar3,0);
        iVar1 = UnityEngine_Canvas__get_renderMode(param_6,0);
        if (iVar1 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = UnityEngine_Canvas__get_worldCamera(param_6,0);
        }
        if (*(int *)(DAT_09189ca0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_RectTransformUtility__ScreenPointToWorldPointInRectangle
                          (uVar5,param_2,plVar2,uVar3,&local_70,0);
        if ((uVar4 & 1) == 0) {
          return param_1;
        }
        return (undefined4)local_70;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

