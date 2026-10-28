// rea decompile_all
// name: _GAME.Team.TeamChatInputBarUICtrl$$FitChatPadding
// address: 0x7794800
// body: available
// range: 0x7794800-0x7794a4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7794a40 to 0x899c934 UnityEngine.UI.LayoutRebuilder$$MarkLayoutForRebuild (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7794a44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7794a4c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamChatInputBarUICtrl__FitChatPadding
               (undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  double dVar7;
  double __x;
  float fVar8;
  double local_38;
  
  if ((DAT_09522dbd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187680);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    DAT_09522dbd = 1;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x88);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x78);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (*(long *)(param_3 + 0x78) == 0) goto LAB_07794a44;
  iVar2 = *(int *)(param_3 + 0x90);
  UnityEngine_RectTransform__get_offsetMin(*(long *)(param_3 + 0x78),0);
  fVar8 = 0.0;
  if (param_2 <= -0.0) {
    fVar8 = -param_2;
  }
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  __x = (double)fVar8;
  dVar7 = modf(__x,&local_38);
  if (0.0 <= fVar8) {
    if (dVar7 == 0.5) {
      dVar7 = 1.0;
      goto LAB_07794948;
    }
    local_38 = (double)(long)(__x + 0.5);
  }
  else if (dVar7 == -0.5) {
    dVar7 = -1.0;
LAB_07794948:
    if (((long)local_38 & 1U) != 0) {
      local_38 = local_38 + dVar7;
    }
  }
  else {
    local_38 = (double)(long)(__x + -0.5);
  }
  iVar1 = -0x80000000;
  if (local_38 != INFINITY) {
    iVar1 = (int)local_38;
  }
  if ((*(long *)(param_3 + 0x88) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_3 + 0x88) + 0x20), lVar4 != 0)) {
    iVar1 = iVar1 + iVar2;
    iVar2 = UnityEngine_RectOffset__get_bottom(lVar4,0);
    if (iVar2 == iVar1) {
      return;
    }
    if ((*(long *)(param_3 + 0x88) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_3 + 0x88) + 0x20), lVar4 != 0)) {
      UnityEngine_RectOffset__set_bottom(lVar4,iVar1,0);
      if (*(long *)(param_3 + 0x88) != 0) {
        plVar5 = (long *)UnityEngine_Component__get_transform(*(long *)(param_3 + 0x88),0);
        if (*(int *)(DAT_09187680 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09187680);
        }
        if ((plVar5 != (long *)0x0) && (*plVar5 != DAT_09189c98)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar5);
        }
        UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild(plVar5,0);
        return;
      }
    }
  }
LAB_07794a44:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

