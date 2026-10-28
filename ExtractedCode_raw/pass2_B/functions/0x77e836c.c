// rea decompile_all
// name: _GAME.TeamTreasure.PopupTeamTreasureCtrl$$Update
// address: 0x77e836c
// body: available
// range: 0x77e836c-0x77e872b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77e8620 to 0x866c8b0 UnityEngine.Transform$$set_position (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77e8710 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e8714 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e8718 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e871c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e8720 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e8724 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e8728 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_TeamTreasure_PopupTeamTreasureCtrl__Update
               (undefined1 param_1 [16],float param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined8 local_78;
  undefined8 *puStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  long local_50;
  
  if ((DAT_0952309d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4790);
    FUN_03f5c2a4(&DAT_091a4798);
    FUN_03f5c2a4(&DAT_091a47a0);
    FUN_03f5c2a4(&DAT_091b0cd0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091b8700);
    DAT_0952309d = 1;
  }
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  lVar2 = *(long *)(DAT_091b8700 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  uVar6 = **(undefined8 **)(lVar2 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if (((uVar3 & 1) != 0) || (*(char *)(param_3 + 0xd8) != '\0')) {
    return;
  }
  if (*(long *)(param_3 + 0x160) == 0) goto LAB_077e8710;
  uVar3 = UnityEngine_GameObject__get_activeSelf(*(long *)(param_3 + 0x160),0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar2 = *(long *)(param_3 + 0x128);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(lVar2,0,0);
  if ((uVar3 & 1) == 0) {
    if (lVar2 == 0) goto LAB_077e8710;
    if (*(long *)(lVar2 + 0x60) != 0) {
      if (*(long *)(param_3 + 0x118) != 0) {
        FUN_057e185c(&local_78,*(long *)(param_3 + 0x118),DAT_091b0cd0);
        puStack_58 = puStack_70;
        local_60 = local_78;
        local_50 = local_68;
        local_78 = 0;
        puStack_70 = &local_60;
        while (uVar3 = FUN_071bd28c(&local_60,DAT_091a4798), lVar5 = local_50, (uVar3 & 1) != 0) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Equality(lVar5,0,0);
          if ((uVar3 & 1) == 0) {
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(long *)(lVar5 + 0x60) != 0) {
              lVar7 = *(long *)(lVar5 + 0x20);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar3 = UnityEngine_Object__op_Inequality(lVar5,lVar2,0);
              if ((uVar3 & 1) == 0) {
LAB_077e85bc:
                bVar1 = false;
              }
              else {
                lVar4 = UnityEngine_Component__get_transform(lVar5,0);
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                UnityEngine_Transform__get_position(lVar4,0);
                if (*(long *)(param_3 + 0x148) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                fVar8 = param_2;
                uVar3 = UnityEngine_Transform__get_position(*(long *)(param_3 + 0x148),0);
                bVar1 = fVar8 <= param_2;
                param_2 = fVar8;
                if (bVar1) goto LAB_077e85bc;
                lVar5 = UnityEngine_Component__get_transform(lVar5,0);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                UnityEngine_Transform__get_position(lVar5,0);
                if (*(long *)(param_3 + 0x150) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                param_2 = fVar8;
                uVar3 = UnityEngine_Transform__get_position(*(long *)(param_3 + 0x150),0);
                bVar1 = param_2 < fVar8;
              }
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550(uVar3,bVar1);
              }
              UnityEngine_GameObject__SetActive(lVar7,bVar1,0);
            }
          }
        }
        FUN_071bd288(&local_60,DAT_091a4790);
        if (*(long *)(param_3 + 0x120) != 0) {
          lVar5 = UnityEngine_Component__get_transform(*(long *)(param_3 + 0x120),0);
          lVar7 = UnityEngine_Component__get_transform(lVar2,0);
          if (lVar7 != 0) {
            UnityEngine_Transform__get_position(lVar7,0);
            if (*(long *)(param_3 + 0x138) != 0) {
              fVar8 = param_2;
              UnityEngine_Transform__get_position(*(long *)(param_3 + 0x138),0);
              if (param_2 <= fVar8) {
                lVar7 = UnityEngine_Component__get_transform(lVar2,0);
                if (lVar7 == 0) goto LAB_077e8710;
                UnityEngine_Transform__get_position(lVar7,0);
                if (*(long *)(param_3 + 0x140) == 0) goto LAB_077e8710;
                fVar9 = fVar8;
                UnityEngine_Transform__get_position(*(long *)(param_3 + 0x140),0);
                if (fVar9 <= fVar8) {
                  lVar2 = UnityEngine_Component__get_transform(lVar2,0);
                }
                else {
                  lVar2 = *(long *)(param_3 + 0x140);
                }
              }
              else {
                lVar2 = *(long *)(param_3 + 0x138);
              }
              if ((lVar2 != 0) && (UnityEngine_Transform__get_position(lVar2,0), lVar5 != 0)) {
                UnityEngine_Transform__set_position(lVar5,0);
                return;
              }
            }
          }
        }
      }
      goto LAB_077e8710;
    }
  }
  if (*(long *)(param_3 + 0x120) != 0) {
    lVar2 = UnityEngine_Component__get_transform(*(long *)(param_3 + 0x120),0);
    if ((*(long *)(param_3 + 0x140) != 0) &&
       (UnityEngine_Transform__get_position(*(long *)(param_3 + 0x140),0), lVar2 != 0)) {
      UnityEngine_Transform__set_position(lVar2,0);
      return;
    }
  }
LAB_077e8710:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

