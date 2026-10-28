// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$WalkComposite
// address: 0x441d234
// body: available
// range: 0x441d234-0x441d7db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x441d7d4 to 0x53ebe0c FUN_053ebe0c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x441d7d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_EstimatorBotScorer__WalkComposite
               (long param_1,undefined8 param_2,byte param_3,byte param_4,long param_5,long param_6)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09517f18 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9ed0);
    FUN_03f5c2a4(&DAT_091ca318);
    FUN_03f5c2a4(&DAT_091a3a58);
    FUN_03f5c2a4(&DAT_091a3a60);
    FUN_03f5c2a4(&DAT_091a3a68);
    FUN_03f5c2a4(&DAT_09178590);
    FUN_03f5c2a4(&DAT_091785d0);
    FUN_03f5c2a4(&DAT_091a8028);
    FUN_03f5c2a4(&DAT_091a8030);
    FUN_03f5c2a4(&DAT_091ada08);
    FUN_03f5c2a4(&DAT_091b29b0);
    FUN_03f5c2a4(&DAT_091aea30);
    FUN_03f5c2a4(&DAT_091aea28);
    FUN_03f5c2a4(&DAT_0917c7c0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091906f8);
    FUN_03f5c2a4(&DAT_091e9b98);
    FUN_03f5c2a4(&DAT_091e9c10);
    FUN_03f5c2a4(&DAT_091906d0);
    FUN_03f5c2a4(&DAT_09190660);
    DAT_09517f18 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_091906d0);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    puVar7 = (undefined8 *)(lVar2 + 0x10);
    *puVar7 = param_2;
    thunk_FUN_03f5d7b8(puVar7,param_2);
    uVar9 = *puVar7;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar9,0,0);
    if ((uVar3 & 1) != 0) {
      return;
    }
    if (param_6 != 0) {
      uVar3 = FUN_053ec72c(param_6,*puVar7,DAT_091a8028);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x88);
        uVar9 = thunk_FUN_03f9944c(DAT_09178590);
        FUN_05322d94(uVar9,lVar2,DAT_091e9c10,0);
        lVar2 = FUN_04ae9738(uVar10,uVar9,DAT_091c9ed0);
        if (lVar2 == 0) {
          if (*(long *)(param_1 + 0x10) != 0) {
            lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0xa0);
            if (lVar2 == 0) {
              lVar2 = thunk_FUN_03f9944c(DAT_0917c7c0);
              FUN_057e0400(lVar2,DAT_091aea28);
              if (lVar2 == 0) goto LAB_0441d7d8;
            }
            FUN_057e185c(&local_98,lVar2,DAT_091aea30);
            puStack_78 = puStack_90;
            local_80 = local_98;
            local_70 = local_88;
            local_98 = 0;
            puStack_90 = &local_80;
            while (uVar3 = FUN_071bd28c(&local_80,DAT_091a3a60), lVar2 = local_70, (uVar3 & 1) != 0)
            {
              if (local_70 != 0) {
                uVar9 = *(undefined8 *)(local_70 + 0x10);
                uVar10 = *puVar7;
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar3 = UnityEngine_Object__op_Equality(uVar9,uVar10,0);
                if ((uVar3 & 1) != 0) {
                  CookingGraph_EstimatorBotScorer__WalkSlotNode
                            (param_1,*(undefined8 *)(lVar2 + 0x18),param_3 & 1,param_4 & 1,param_5,
                             param_6);
                }
              }
            }
            FUN_071bd288(&local_80,DAT_091a3a58);
            if (*(long *)(param_1 + 0x10) != 0) {
              lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0xa8);
              if (lVar2 == 0) {
                lVar2 = thunk_FUN_03f9944c(DAT_0917c7c0);
                FUN_057e0400(lVar2,DAT_091aea28);
                if (lVar2 == 0) goto LAB_0441d7d8;
              }
              FUN_057e185c(&local_98,lVar2,DAT_091aea30);
              local_70 = local_88;
              puStack_78 = puStack_90;
              local_80 = local_98;
              local_98 = 0;
              puStack_90 = &local_80;
              while (uVar3 = FUN_071bd28c(&local_80,DAT_091a3a60), lVar2 = local_70,
                    (uVar3 & 1) != 0) {
                if (local_70 != 0) {
                  uVar9 = *(undefined8 *)(local_70 + 0x10);
                  uVar10 = *puVar7;
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar3 = UnityEngine_Object__op_Equality(uVar9,uVar10,0);
                  if ((uVar3 & 1) != 0) {
                    CookingGraph_EstimatorBotScorer__WalkSlotNode
                              (param_1,*(undefined8 *)(lVar2 + 0x18),0,param_4 & 1,param_5,param_6);
                  }
                }
              }
              FUN_071bd288(&local_80,DAT_091a3a58);
              FUN_053ebe0c(param_6,*puVar7,DAT_091a8030);
              return;
            }
          }
        }
        else {
          lVar4 = thunk_FUN_03f9944c(DAT_091906f8);
          CookingGraph_EstimatorBotScorer_PreviewSlot___ctor();
          if (lVar4 != 0) {
            *(byte *)(lVar4 + 0x10) = param_3 & 1;
            *(byte *)(lVar4 + 0x11) = (param_3 | param_4) & 1;
            lVar8 = *(long *)(lVar4 + 0x18);
            uVar9 = *(undefined8 *)(lVar2 + 0x50);
            if (*(int *)(DAT_09190660 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar6 = *(undefined8 **)(DAT_09190660 + 0xb8);
            lVar2 = puVar6[10];
            if (lVar2 == 0) {
              if (*(int *)(DAT_09190660 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar6 = *(undefined8 **)(DAT_09190660 + 0xb8);
              }
              uVar10 = *puVar6;
              lVar2 = thunk_FUN_03f9944c(DAT_091785d0);
              FUN_05324070(lVar2,uVar10,DAT_091e9b98,0);
              plVar5 = (long *)(*(long *)(DAT_09190660 + 0xb8) + 0x50);
              *plVar5 = lVar2;
              thunk_FUN_03f5d7b8(plVar5,lVar2);
            }
            uVar9 = FUN_04af8044(uVar9,lVar2,DAT_091ca318);
            if ((lVar8 != 0) &&
               (FUN_057e0e78(lVar8,uVar9,DAT_091ada08), lVar2 = DAT_091b29b0, param_5 != 0)) {
              lVar8 = *(long *)(param_5 + 0x10);
              *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(param_5 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(param_5 + 0x18) = uVar1 + 1;
                  plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar5 = lVar4;
                  thunk_FUN_03f5d7b8(plVar5,lVar4);
                }
                else {
                  FUN_057e0c68(param_5,lVar4,
                               *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
                FUN_053ebe0c(param_6,*puVar7,DAT_091a8030);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0441d7d8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

