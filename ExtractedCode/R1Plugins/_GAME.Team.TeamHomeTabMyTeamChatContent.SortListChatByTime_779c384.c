// rea decompile_all
// name: _GAME.Team.TeamHomeTabMyTeamChatContent$$SortListChatByTime
// address: 0x779c384
// body: available
// range: 0x779c384-0x779c5df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x779c5d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779c5d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779c5d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779c5dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamHomeTabMyTeamChatContent__SortListChatByTime(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  
  if ((DAT_09522df5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4700);
    FUN_03f5c2a4(&DAT_091a4708);
    FUN_03f5c2a4(&DAT_091a4710);
    FUN_03f5c2a4(&DAT_091b0bd0);
    FUN_03f5c2a4(&DAT_091b0bd8);
    FUN_03f5c2a4(&DAT_091b0be0);
    FUN_03f5c2a4(&DAT_091b0be8);
    DAT_09522df5 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x98);
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if (lVar3 != 0) {
    if (0 < *(int *)(lVar3 + 0x18)) {
      iVar9 = 0;
      do {
        iVar1 = iVar9 + 1;
        iVar2 = iVar1;
        while (iVar2 < *(int *)(lVar3 + 0x18)) {
          plVar4 = (long *)FUN_057e0998(lVar3,iVar9,DAT_091b0be0);
          if (plVar4 == (long *)0x0) goto LAB_0779c5d0;
          lVar3 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
          if ((*(long *)(param_1 + 0x98) == 0) ||
             (plVar4 = (long *)FUN_057e0998(*(long *)(param_1 + 0x98),iVar2,DAT_091b0be0),
             plVar4 == (long *)0x0)) goto LAB_0779c5d0;
          lVar5 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
          if (lVar3 < lVar5) {
            lVar3 = *(long *)(param_1 + 0x98);
            if (lVar3 == 0) goto LAB_0779c5d0;
            uVar6 = FUN_057e0998(lVar3,iVar2,DAT_091b0be0);
            if (*(long *)(param_1 + 0x98) == 0) goto LAB_0779c5d0;
            uVar7 = FUN_057e0998(*(long *)(param_1 + 0x98),iVar9,DAT_091b0be0);
            FUN_057e09ec(lVar3,iVar9,uVar6,DAT_091b0be8);
            FUN_057e09ec(lVar3,iVar2,uVar7,DAT_091b0be8);
          }
          lVar3 = *(long *)(param_1 + 0x98);
          iVar2 = iVar2 + 1;
          if (lVar3 == 0) goto LAB_0779c5d0;
        }
        iVar9 = iVar1;
      } while (iVar1 < *(int *)(lVar3 + 0x18));
    }
    FUN_057e185c(&local_88,lVar3,DAT_091b0bd0);
    local_60 = local_78;
    uStack_68 = puStack_80;
    local_70 = local_88;
    local_88 = 0;
    puStack_80 = &local_70;
    while( true ) {
      uVar8 = FUN_071bd28c(&local_70,DAT_091a4708);
      lVar3 = local_60;
      if ((uVar8 & 1) == 0) {
        FUN_071bd288(&local_70,DAT_091a4700);
        return;
      }
      if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = UnityEngine_Component__get_gameObject(local_60,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_GameObject__SetActive(lVar5,1,0);
      lVar3 = UnityEngine_Component__get_transform(lVar3,0);
      if (lVar3 == 0) break;
      UnityEngine_Transform__SetParent(lVar3,*(undefined8 *)(param_1 + 0x40),0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_0779c5d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

