// rea decompile_all
// name: _GAME.Shop.ShopPackUICtrl$$Setup
// address: 0x7747a18
// body: available
// range: 0x7747a18-0x7747d47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7747bd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7747cc8 to 0x844ad24 TMPro.TMP_Text$$SetText (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Shop_ShopPackUICtrl__Setup(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  undefined4 local_44;
  
  if ((DAT_09522b34 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091852b8);
    FUN_03f5c2a4(&DAT_091afa98);
    FUN_03f5c2a4(&DAT_091afa60);
    FUN_03f5c2a4(&DAT_091afaa0);
    FUN_03f5c2a4(&DAT_091afa68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918a4d0);
    FUN_03f5c2a4(&DAT_09214178);
    DAT_09522b34 = 1;
  }
  if (param_2 == -1) {
    param_2 = *(int *)(param_1 + 0x20);
  }
  else {
    *(int *)(param_1 + 0x20) = param_2;
  }
  if (*(int *)(DAT_0918a4d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = _GAME_BaseGame_SOIAPConfig__GetPack(param_2,0);
  plVar7 = (long *)(param_1 + 0x58);
  *plVar7 = lVar3;
  thunk_FUN_03f5d7b8(plVar7,lVar3);
  if (*plVar7 == 0) {
    local_44 = *(undefined4 *)(param_1 + 0x20);
    uVar4 = FUN_03f5c42c(DAT_091852b8,&local_44);
    uVar4 = System_String__Format(DAT_09214178,uVar4,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__LogError(uVar4,0);
    return;
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar8) {
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(long *)(param_1 + 0x58) == 0) break;
          lVar3 = *(long *)(param_1 + 0x38);
          uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x18),0);
          if (lVar3 == 0) break;
          UnityEngine_GameObject__SetActive(lVar3,(uVar2 ^ 0xffffffff) & 1,0);
        }
        uVar4 = *(undefined8 *)(param_1 + 0x40);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
        if ((uVar5 & 1) != 0) {
          if ((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x40) == 0)) break;
          TMPro_TMP_Text__SetText
                    (*(long *)(param_1 + 0x40),*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x18),0);
        }
        uVar4 = *(undefined8 *)(param_1 + 0x48);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
        if ((uVar5 & 1) == 0) {
          return;
        }
        if ((*(long *)(param_1 + 0x58) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
          TMPro_TMP_Text__SetText
                    (*(long *)(param_1 + 0x48),*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x28),0);
          return;
        }
        break;
      }
      if ((*plVar7 == 0) || (lVar6 = *(long *)(*plVar7 + 0x20), lVar6 == 0)) break;
      iVar1 = *(int *)(lVar6 + 0x18);
      lVar3 = FUN_057e0998(lVar3,iVar8,DAT_091afaa0);
      if ((lVar3 == 0) || (lVar3 = UnityEngine_Component__get_gameObject(lVar3,0), lVar3 == 0))
      break;
      UnityEngine_GameObject__SetActive(lVar3,iVar8 < iVar1,0);
      if (iVar8 < iVar1) {
        if (*(long *)(param_1 + 0x30) == 0) break;
        lVar3 = FUN_057e0998(*(long *)(param_1 + 0x30),iVar8,DAT_091afaa0);
        if (((*plVar7 == 0) || (lVar6 = *(long *)(*plVar7 + 0x20), lVar6 == 0)) ||
           (uVar4 = FUN_057e0998(lVar6,iVar8,DAT_091afa68), lVar3 == 0)) break;
        _GAME_GameUI_RwItemUICtrl__SetData(lVar3,uVar4,0);
      }
      lVar3 = *(long *)(param_1 + 0x30);
      iVar8 = iVar8 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

