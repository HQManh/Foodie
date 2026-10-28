// rea decompile_all
// name: _GAME.StageRace.StageRaceManager$$UpdatePointOfFakePlayer
// address: 0x77f3434
// body: available
// range: 0x77f3434-0x77f37db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77f37c4 to 0x77f7b3c _GAME.StageRace.StageRaceManager$$LogEventFinishRace (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77f37d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_StageRace_StageRaceManager__UpdatePointOfFakePlayer(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  if ((DAT_0952313a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9878);
    FUN_03f5c2a4(&DAT_09179028);
    FUN_03f5c2a4(&DAT_091b04b8);
    FUN_03f5c2a4(&DAT_091ba4c8);
    FUN_03f5c2a4(&DAT_0917e750);
    FUN_03f5c2a4(&DAT_0918b158);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_091f0510);
    FUN_03f5c2a4(&DAT_09194bb0);
    DAT_0952313a = 1;
  }
  if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x30) != 1) {
      return;
    }
    if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = _GAME_BaseGame_TimerManager__get_UnixTimeSeconds(0);
    if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918b158);
    }
    lVar5 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x48) != 0)) {
      lVar11 = *(long *)(lVar5 + 0x28);
      lVar5 = FUN_057e0998(*(long *)(lVar5 + 0x48),*(undefined4 *)(lVar5 + 0x40),DAT_091b04b8);
      plVar8 = *(long **)(DAT_0918b158 + 0xb8);
      lVar7 = *plVar8;
      if ((lVar7 != 0) && (lVar5 != 0)) {
        lVar4 = lVar4 - lVar11;
        iVar9 = 0;
        if (*(int *)(lVar7 + 0x28) != 0) {
          iVar9 = (*(int *)(lVar5 + 0x10) * (*(int *)(lVar7 + 0x30) - *(int *)(lVar7 + 0x2c))) /
                  *(int *)(lVar7 + 0x28);
        }
        iVar9 = iVar9 + *(int *)(lVar7 + 0x2c);
        iVar1 = 0;
        if ((long)iVar9 != 0) {
          iVar1 = (int)(lVar4 / (long)iVar9);
        }
        lVar5 = DAT_0918b158;
        if (*(int *)(lVar7 + 0x14) <= iVar1) {
          if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918b158);
            plVar8 = *(long **)(DAT_0918b158 + 0xb8);
            lVar7 = *plVar8;
            if (lVar7 == 0) goto LAB_077f37d8;
          }
          lVar5 = DAT_0918b158;
          if (plVar8[1] == 0) goto LAB_077f37d8;
          lVar4 = (long)(*(int *)(lVar7 + 0x14) * iVar9);
          *(undefined4 *)(plVar8[1] + 0x30) = 2;
        }
        iVar9 = 0;
        while( true ) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            FUN_03f5c424(lVar5);
            lVar5 = DAT_0918b158;
          }
          plVar8 = *(long **)(lVar5 + 0xb8);
          if (*plVar8 == 0) goto LAB_077f37d8;
          if (*(int *)(*plVar8 + 0x18) + -1 <= iVar9) break;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            FUN_03f5c424(lVar5);
            plVar8 = *(long **)(DAT_0918b158 + 0xb8);
          }
          if ((plVar8[1] == 0) || (lVar5 = *(long *)(plVar8[1] + 0x48), lVar5 == 0))
          goto LAB_077f37d8;
          lVar7 = FUN_057e0998(lVar5,iVar9,DAT_091b04b8);
          lVar5 = DAT_0918b158;
          lVar11 = **(long **)(DAT_0918b158 + 0xb8);
          if ((lVar11 == 0) || (lVar7 == 0)) goto LAB_077f37d8;
          iVar9 = iVar9 + 1;
          iVar1 = 0;
          if (*(int *)(lVar11 + 0x28) != 0) {
            iVar1 = (*(int *)(lVar7 + 0x10) * (*(int *)(lVar11 + 0x30) - *(int *)(lVar11 + 0x2c))) /
                    *(int *)(lVar11 + 0x28);
          }
          lVar11 = (long)(iVar1 + *(int *)(lVar11 + 0x2c));
          uVar2 = 0;
          if (lVar11 != 0) {
            uVar2 = (uint)(lVar4 / lVar11);
          }
          *(uint *)(lVar7 + 0x2c) = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
        }
        if (*(int *)(DAT_0917e750 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_060df854(DAT_091ba4c8);
        if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x30) != 2) {
            return;
          }
          if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar4 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
            if (lVar4 == 0) goto LAB_077f37d8;
          }
          uVar10 = *(undefined8 *)(lVar4 + 0x48);
          if (*(int *)(DAT_09194bb0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar6 = *(undefined8 **)(DAT_09194bb0 + 0xb8);
          lVar4 = puVar6[1];
          if (lVar4 == 0) {
            if (*(int *)(DAT_09194bb0 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar6 = *(undefined8 **)(DAT_09194bb0 + 0xb8);
            }
            uVar12 = *puVar6;
            lVar4 = thunk_FUN_03f9944c(DAT_09179028);
            FUN_05322d94(lVar4,uVar12,DAT_091f0510,0);
            plVar8 = (long *)(*(long *)(DAT_09194bb0 + 0xb8) + 8);
            *plVar8 = lVar4;
            thunk_FUN_03f5d7b8(plVar8,lVar4);
          }
          uVar3 = FUN_04adc4d0(uVar10,lVar4,DAT_091c9878);
          if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918b158);
          }
          _GAME_StageRace_StageRaceManager__LogEventFinishRace(uVar3);
          return;
        }
      }
    }
  }
LAB_077f37d8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

