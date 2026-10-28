// rea decompile_all
// name: _GAME.Profile.AvatarItemUICtrl$$SetNewIndex
// address: 0x77bb428
// body: available
// range: 0x77bb428-0x77bb663 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77bb65c to 0x866d690 UnityEngine.Transform$$set_localScale (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77bb660 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_AvatarItemUICtrl__SetNewIndex(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_09522ee9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918a4d8);
    DAT_09522ee9 = 1;
  }
  lVar7 = DAT_09188ad0;
  plVar5 = (long *)(param_1 + 0x48);
  lVar8 = *plVar5;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(lVar8,0,0);
  if ((uVar2 & 1) != 0) {
    lVar7 = *plVar5;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Object__Destroy(lVar7,0);
  }
  uVar3 = UnityEngine_Component__get_gameObject(param_1,0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      if (*(int *)(DAT_0918a4d8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = _GAME_Profile_SOProfileConfig__GetAvatar(uVar1);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      lVar7 = FUN_04c35338(uVar3,uVar6,DAT_091d4bc0);
      *plVar5 = lVar7;
      thunk_FUN_03f5d7b8(plVar5,lVar7);
      if (*plVar5 != 0) {
        lVar7 = UnityEngine_GameObject__get_transform(*plVar5,0);
        if (DAT_09515ce6 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515ce6 = '\x01';
        }
        if (lVar7 != 0) {
          puVar4 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
          UnityEngine_Transform__set_localPosition(*puVar4,puVar4[1],puVar4[2],lVar7,0);
          if (*plVar5 != 0) {
            lVar7 = UnityEngine_GameObject__get_transform(*plVar5,0);
            if (DAT_09515cf3 == '\0') {
              FUN_03f5c2a4(&DAT_0918cbd0);
              DAT_09515cf3 = '\x01';
            }
            if (lVar7 != 0) {
              lVar8 = *(long *)(DAT_0918cbd0 + 0xb8);
              UnityEngine_Transform__set_localScale
                        (*(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 0x10),
                         *(undefined4 *)(lVar8 + 0x14),lVar7,0);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

