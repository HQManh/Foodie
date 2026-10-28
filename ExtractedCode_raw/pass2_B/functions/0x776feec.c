// rea decompile_all
// name: _GAME.Team.PopupTeamInfoListMember$$UpdateListMember
// address: 0x776feec
// body: available
// range: 0x776feec-0x777020b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77701c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7770208 to 0x89a1808 UnityEngine.UI.LayoutRebuilder$$ForceRebuildLayoutImmediate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_PopupTeamInfoListMember__UpdateListMember(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  
  if ((DAT_09522ca4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_0919ffc8);
    FUN_03f5c2a4(&DAT_091cb2f0);
    FUN_03f5c2a4(&DAT_09187680);
    FUN_03f5c2a4(&DAT_091b0c88);
    FUN_03f5c2a4(&DAT_091b0cb8);
    FUN_03f5c2a4(&DAT_091b0cc0);
    FUN_03f5c2a4(&DAT_091b0c90);
    FUN_03f5c2a4(&DAT_0918b978);
    DAT_09522ca4 = 1;
  }
  puVar7 = (undefined8 *)(param_1 + 0x40);
  *puVar7 = 0;
  thunk_FUN_03f5d7b8(puVar7,0);
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x38),0), lVar1 != 0)) {
    UnityEngine_GameObject__SetActive(lVar1,0,0);
    if ((*(long *)(param_1 + 0x90) != 0) &&
       ((lVar1 = *(long *)(*(long *)(param_1 + 0x90) + 0xf8), lVar1 != 0 &&
        (lVar1 = *(long *)(lVar1 + 0x58), lVar1 != 0)))) {
      uVar2 = FUN_06fd8278(lVar1,DAT_0919ffc8);
      lVar1 = FUN_04b08b78(uVar2,DAT_091cb2f0);
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 != 0) {
        iVar8 = 0;
        do {
          if (*(int *)(lVar6 + 0x18) <= iVar8) {
            uVar2 = *(undefined8 *)(param_1 + 0x20);
            if (*(int *)(DAT_09187680 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(uVar2,0);
            return;
          }
          lVar6 = FUN_057e0998(lVar6,iVar8,DAT_091b0c90);
          if (lVar1 == 0) break;
          if (iVar8 < *(int *)(lVar1 + 0x18)) {
            lVar3 = FUN_057e0998(lVar1,iVar8,DAT_091b0cc0);
            if (((lVar6 == 0) ||
                (lVar4 = UnityEngine_Component__get_gameObject(lVar6,0), lVar4 == 0)) ||
               (UnityEngine_GameObject__SetActive(lVar4,1,0), lVar3 == 0)) break;
            lVar4 = *(long *)(lVar3 + 0x10);
            if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (DAT_09522cb0 == '\0') {
              FUN_03f5c2a4(&DAT_09180dc0);
              DAT_09522cb0 = '\x01';
            }
            if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (lVar4 == 0) break;
            uVar5 = System_String__Equals(lVar4,**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
            if ((uVar5 & 1) != 0) {
              uVar2 = UnityEngine_Component__get_transform(lVar6,0);
              *(undefined8 *)(param_1 + 0x40) = uVar2;
              thunk_FUN_03f5d7b8(puVar7,uVar2);
              if ((*(long *)(param_1 + 0x38) == 0) ||
                 (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x38),0),
                 lVar3 == 0)) break;
              UnityEngine_GameObject__SetActive(lVar3,1,0);
              lVar3 = *(long *)(param_1 + 0x38);
              if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if ((**(long **)(DAT_0918b978 + 0xb8) == 0) || (lVar3 == 0)) break;
              _GAME_Team_TeamMemberItemUICtrl__UpdateUIData
                        (lVar3,iVar8,*(undefined8 *)(**(long **)(DAT_0918b978 + 0xb8) + 0x40),0);
              if (**(long **)(DAT_0918b978 + 0xb8) == 0) break;
              lVar3 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x40);
            }
            _GAME_Team_TeamMemberItemUICtrl__UpdateUIData(lVar6,iVar8,lVar3,0);
          }
          else {
            if ((lVar6 == 0) || (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)
               ) break;
            UnityEngine_GameObject__SetActive(lVar6,0,0);
          }
          lVar6 = *(long *)(param_1 + 0x18);
          iVar8 = iVar8 + 1;
        } while (lVar6 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

