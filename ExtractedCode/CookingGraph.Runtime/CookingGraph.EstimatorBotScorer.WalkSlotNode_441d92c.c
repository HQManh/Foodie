// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$WalkSlotNode
// address: 0x441d92c
// body: available
// range: 0x441d92c-0x441deff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x441dbb0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x441dbe4 to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x441dc44 to 0x441d234 CookingGraph.EstimatorBotScorer$$WalkComposite (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x441def8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441defc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_EstimatorBotScorer__WalkSlotNode
               (long param_1,long *param_2,byte param_3,byte param_4,long param_5,long param_6)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09517f19 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091828a0);
    FUN_03f5c2a4(&DAT_091a3ad0);
    FUN_03f5c2a4(&DAT_091a3ad8);
    FUN_03f5c2a4(&DAT_091a3ae0);
    FUN_03f5c2a4(&DAT_09184f18);
    FUN_03f5c2a4(&DAT_091a8028);
    FUN_03f5c2a4(&DAT_091a8030);
    FUN_03f5c2a4(&DAT_09186c00);
    FUN_03f5c2a4(&DAT_091b29b0);
    FUN_03f5c2a4(&DAT_091ada00);
    FUN_03f5c2a4(&DAT_091aebe8);
    FUN_03f5c2a4(&DAT_091aebe0);
    FUN_03f5c2a4(&DAT_091ada38);
    FUN_03f5c2a4(&DAT_0917c810);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091906f8);
    DAT_09517f19 = 1;
  }
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  local_70 = 0;
  if (param_2 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = param_2;
    if (*param_2 != DAT_09186c00) {
      plVar5 = (long *)0x0;
    }
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(plVar5,0,0);
  if ((uVar2 & 1) == 0) {
    if (param_2 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = param_2;
      if (*param_2 != DAT_091828a0) {
        plVar5 = (long *)0x0;
      }
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Inequality(plVar5,0,0);
    if ((uVar2 & 1) != 0) {
      CookingGraph_EstimatorBotScorer__WalkComposite
                (param_1,plVar5,param_3 & 1,param_4 & 1,param_5,param_6);
      return;
    }
    if ((param_2 != (long *)0x0) && (*param_2 != DAT_09184f18)) {
      param_2 = (long *)0x0;
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(param_2,0,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if (param_6 != 0) {
      uVar2 = FUN_053ec72c(param_6,param_2,DAT_091a8028);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = thunk_FUN_03f9944c(DAT_091906f8);
      CookingGraph_EstimatorBotScorer_PreviewSlot___ctor();
      if (lVar3 != 0) {
        *(byte *)(lVar3 + 0x10) = param_3 & 1;
        if ((param_3 & 1) == 0) {
          if (param_2 == (long *)0x0) goto LAB_0441def8;
          bVar6 = 0 < (int)param_2[7];
        }
        else {
          bVar6 = true;
        }
        *(byte *)(lVar3 + 0x11) = bVar6 | param_4 & 1;
        if (*(long *)(param_1 + 0x10) != 0) {
          lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0);
          if (lVar9 == 0) {
            lVar9 = thunk_FUN_03f9944c(DAT_0917c810);
            FUN_057e0400(lVar9,DAT_091aebe0);
            if (lVar9 == 0) goto LAB_0441def8;
          }
          FUN_057e185c(&local_98,lVar9,DAT_091aebe8);
          puStack_78 = puStack_90;
          local_80 = local_98;
          local_70 = local_88;
          local_98 = 0;
          puStack_90 = &local_80;
LAB_0441dd64:
          uVar2 = FUN_071bd28c(&local_80,DAT_091a3ad8);
          lVar9 = local_70;
          if ((uVar2 & 1) != 0) {
            if (local_70 != 0) {
              uVar10 = *(undefined8 *)(local_70 + 0x10);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar2 = UnityEngine_Object__op_Inequality(uVar10,param_2,0);
              if ((uVar2 & 1) == 0) {
                plVar5 = *(long **)(lVar9 + 0x18);
                if (plVar5 == (long *)0x0) {
                  plVar5 = (long *)0x0;
                }
                else if (*plVar5 != DAT_09186c00) {
                  plVar5 = (long *)0x0;
                }
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar2 = UnityEngine_Object__op_Inequality(plVar5,0,0);
                lVar4 = DAT_091ada00;
                if ((uVar2 & 1) != 0) {
                  lVar9 = *(long *)(lVar3 + 0x18);
                  if (lVar9 != 0) {
                    lVar7 = *(long *)(lVar9 + 0x10);
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    if (lVar7 != 0) {
                      uVar1 = *(uint *)(lVar9 + 0x18);
                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                        plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar8 = (long)plVar5;
                        thunk_FUN_03f5d7b8(plVar8,plVar5);
                      }
                      else {
                        FUN_057e0c68(lVar9,plVar5,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                      }
                      goto LAB_0441dd64;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                CookingGraph_EstimatorBotScorer__WalkSlotNode
                          (param_1,*(undefined8 *)(lVar9 + 0x18),param_3 & 1,param_4 & 1,param_5,
                           param_6);
              }
            }
            goto LAB_0441dd64;
          }
          FUN_071bd288(&local_80,DAT_091a3ad0);
          if (*(long *)(lVar3 + 0x18) != 0) {
            if (0 < *(int *)(*(long *)(lVar3 + 0x18) + 0x18)) {
              if (param_5 == 0) goto LAB_0441def8;
              FUN_039b0ea8(param_5,lVar3,DAT_091b29b0);
            }
            FUN_053ebe0c(param_6,param_2,DAT_091a8030);
            return;
          }
        }
      }
    }
  }
  else {
    lVar3 = thunk_FUN_03f9944c(DAT_091906f8);
    CookingGraph_EstimatorBotScorer_PreviewSlot___ctor();
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x18);
      *(byte *)(lVar3 + 0x10) = param_3 & 1;
      *(byte *)(lVar3 + 0x11) = (param_3 | param_4) & 1;
      lVar9 = DAT_091ada00;
      if (lVar4 != 0) {
        lVar7 = *(long *)(lVar4 + 0x10);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            plVar8 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *plVar8 = (long)plVar5;
            thunk_FUN_03f5d7b8(plVar8,plVar5);
          }
          else {
            FUN_057e0c68(lVar4,plVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          lVar9 = DAT_091b29b0;
          if (param_5 != 0) {
            lVar4 = *(long *)(param_5 + 0x10);
            *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
            if (lVar4 != 0) {
              uVar1 = *(uint *)(param_5 + 0x18);
              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                *(uint *)(param_5 + 0x18) = uVar1 + 1;
                plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                *plVar5 = lVar3;
                thunk_FUN_03f5d7b8(plVar5,lVar3);
                return;
              }
              FUN_057e0c68(param_5,lVar3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              return;
            }
          }
        }
      }
    }
  }
LAB_0441def8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

