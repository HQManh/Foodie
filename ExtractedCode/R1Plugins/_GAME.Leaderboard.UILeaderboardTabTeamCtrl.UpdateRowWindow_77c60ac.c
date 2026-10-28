// rea decompile_all
// name: _GAME.Leaderboard.UILeaderboardTabTeamCtrl$$UpdateRowWindow
// address: 0x77c60ac
// body: available
// range: 0x77c60ac-0x77c62ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77c62fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Leaderboard_UILeaderboardTabTeamCtrl__UpdateRowWindow
               (undefined1 param_1 [16],float param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_09522f58 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0c20);
    DAT_09522f58 = 1;
  }
  if ((*(long *)(param_3 + 0x90) == 0) || (*(int *)(*(long *)(param_3 + 0x90) + 0x18) == 0)) {
    return;
  }
  if (*(long *)(param_3 + 0x80) != 0) {
    lVar5 = *(long *)(param_3 + 0x70);
    UnityEngine_Transform__get_position(*(long *)(param_3 + 0x80),0);
    if (lVar5 != 0) {
      UnityEngine_Transform__InverseTransformPoint(lVar5,0);
      if (*(long *)(param_3 + 0x78) != 0) {
        lVar5 = *(long *)(param_3 + 0x70);
        fVar7 = param_2;
        UnityEngine_Transform__get_position(*(long *)(param_3 + 0x78),0);
        if (lVar5 != 0) {
          UnityEngine_Transform__InverseTransformPoint(lVar5,0);
          fVar8 = fVar7;
          if (param_2 <= fVar7) {
            fVar8 = param_2;
            param_2 = fVar7;
          }
          if (DAT_095163ce == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_095163ce = '\x01';
          }
          fVar7 = (-30.0 - param_2) / 182.0 + -0.5;
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = (uint)fVar7;
          if (DAT_09516626 == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_09516626 = '\x01';
          }
          fVar8 = (-30.0 - fVar8) / 182.0 + -0.5;
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar2 = -0x80000000;
          if ((float)(int)fVar8 != INFINITY) {
            iVar2 = (int)fVar8;
          }
          uVar1 = 0;
          if ((float)(int)fVar7 != INFINITY) {
            uVar1 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
          }
          if ((DAT_09522f58 & 1) == 0) {
            FUN_03f5c2a4(&DAT_091b0c20);
            DAT_09522f58 = 1;
          }
          if (*(long *)(param_3 + 0x90) == 0) {
            iVar4 = -1;
          }
          else {
            iVar4 = *(int *)(*(long *)(param_3 + 0x90) + 0x18) + -1;
          }
          if (iVar4 <= iVar2) {
            iVar2 = iVar4;
          }
          uVar6 = *(uint *)(param_3 + 0xa8);
          iVar4 = *(int *)(param_3 + 0xac);
          if (iVar2 < (int)uVar1) {
            iVar2 = -1;
            uVar1 = 0;
          }
          if (uVar1 == uVar6 && iVar2 == iVar4) {
            return;
          }
          for (; uVar3 = uVar1, (int)uVar6 <= iVar4; uVar6 = uVar6 + 1) {
            if (((int)uVar6 < (int)uVar1) || (iVar2 < (int)uVar6)) {
              _GAME_Leaderboard_UILeaderboardTabTeamCtrl__Unbind(param_3,uVar6);
              iVar4 = *(int *)(param_3 + 0xac);
            }
          }
          for (; (int)uVar3 <= iVar2; uVar3 = uVar3 + 1) {
            if (((int)uVar3 < *(int *)(param_3 + 0xa8)) || (*(int *)(param_3 + 0xac) < (int)uVar3))
            {
              _GAME_Leaderboard_UILeaderboardTabTeamCtrl__Bind(param_3,uVar3);
            }
          }
          *(uint *)(param_3 + 0xa8) = uVar1;
          *(int *)(param_3 + 0xac) = iVar2;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

