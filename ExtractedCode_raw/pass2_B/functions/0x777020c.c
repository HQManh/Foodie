// rea decompile_all
// name: _GAME.Team.PopupTeamInfoListMember$$UpdateItemActiveByPos
// address: 0x777020c
// body: available
// range: 0x777020c-0x77704df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77704b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77704bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77704c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77704c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77704c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77704cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77704d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77704d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77704d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77704dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_Team_PopupTeamInfoListMember__UpdateItemActiveByPos
               (undefined1 param_1 [16],float param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_68;
  undefined8 *puStack_60;
  long local_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  long local_40;
  
  if ((DAT_09522ca5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4760);
    FUN_03f5c2a4(&DAT_091a4768);
    FUN_03f5c2a4(&DAT_091a4770);
    FUN_03f5c2a4(&DAT_091b0c80);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09522ca5 = 1;
  }
  local_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  local_40 = 0;
  uVar2 = _GAME_Utils_Helper__ActiveSelf(*(undefined8 *)(param_3 + 0x10),0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_3 + 0x18) == 0) goto LAB_077704dc;
  FUN_057e185c(&local_68,*(long *)(param_3 + 0x18),DAT_091b0c80);
  puStack_48 = puStack_60;
  local_50 = local_68;
  local_40 = local_58;
  local_68 = 0;
  puStack_60 = &local_50;
  while (uVar2 = FUN_071bd28c(&local_50,DAT_091a4768), lVar3 = local_40, (uVar2 & 1) != 0) {
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(local_40 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(param_3 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *(long *)(*(long *)(param_3 + 0x38) + 0x68);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(local_40 + 0x20);
    uVar2 = System_String__op_Inequality
                      (*(undefined8 *)(*(long *)(local_40 + 0x68) + 0x10),
                       *(undefined8 *)(lVar4 + 0x10),0);
    if ((uVar2 & 1) == 0) {
LAB_0777037c:
      bVar1 = false;
    }
    else {
      lVar4 = UnityEngine_Component__get_transform(lVar3,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Transform__get_position(lVar4,0);
      if (*(long *)(param_3 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      fVar7 = param_2;
      uVar2 = UnityEngine_Transform__get_position(*(long *)(param_3 + 0x28),0);
      bVar1 = fVar7 <= param_2;
      param_2 = fVar7;
      if (bVar1) goto LAB_0777037c;
      lVar3 = UnityEngine_Component__get_transform(lVar3,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Transform__get_position(lVar3,0);
      if (*(long *)(param_3 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      param_2 = fVar7;
      uVar2 = UnityEngine_Transform__get_position(*(long *)(param_3 + 0x30),0);
      bVar1 = param_2 < fVar7;
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar2,bVar1);
    }
    UnityEngine_GameObject__SetActive(lVar5,bVar1,0);
  }
  FUN_071bd288(&local_50,DAT_091a4760);
  if ((*(long *)(param_3 + 0x38) == 0) ||
     (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(param_3 + 0x38),0), lVar3 == 0))
  goto LAB_077704dc;
  uVar2 = UnityEngine_GameObject__get_activeSelf(lVar3,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_3 + 0x38) == 0) goto LAB_077704dc;
  lVar3 = UnityEngine_Component__get_transform(*(long *)(param_3 + 0x38),0);
  uVar6 = *(undefined8 *)(param_3 + 0x40);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_3 + 0x40) == 0) goto LAB_077704dc;
    UnityEngine_Transform__get_position(*(long *)(param_3 + 0x40),0);
    if (*(long *)(param_3 + 0x48) == 0) goto LAB_077704dc;
    fVar7 = param_2;
    UnityEngine_Transform__get_position(*(long *)(param_3 + 0x48),0);
    if (param_2 <= fVar7) {
      if (*(long *)(param_3 + 0x40) == 0) goto LAB_077704dc;
      UnityEngine_Transform__get_position(*(long *)(param_3 + 0x40),0);
      if (*(long *)(param_3 + 0x50) == 0) goto LAB_077704dc;
      fVar8 = fVar7;
      UnityEngine_Transform__get_position(*(long *)(param_3 + 0x50),0);
      if (fVar7 < fVar8) goto LAB_07770410;
      lVar4 = *(long *)(param_3 + 0x40);
    }
    else {
      lVar4 = *(long *)(param_3 + 0x48);
    }
  }
  else {
LAB_07770410:
    lVar4 = *(long *)(param_3 + 0x50);
  }
  if ((lVar4 != 0) && (UnityEngine_Transform__get_position(lVar4,0), lVar3 != 0)) {
    UnityEngine_Transform__set_position(lVar3,0);
    return;
  }
LAB_077704dc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

