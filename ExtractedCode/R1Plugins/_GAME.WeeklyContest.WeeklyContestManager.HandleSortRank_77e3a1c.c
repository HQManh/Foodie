// rea decompile_all
// name: _GAME.WeeklyContest.WeeklyContestManager$$HandleSortRank
// address: 0x77e3a1c
// body: available
// range: 0x77e3a1c-0x77e3e2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77e3e04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e3e10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e3e1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e3e20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e3e24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e3e28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e3e2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_WeeklyContest_WeeklyContestManager__HandleSortRank(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09523079 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091a4e50);
    FUN_03f5c2a4(&DAT_091a4e58);
    FUN_03f5c2a4(&DAT_091a4e60);
    FUN_03f5c2a4(&DAT_091b1d50);
    FUN_03f5c2a4(&DAT_091b1d58);
    FUN_03f5c2a4(&DAT_091b1d60);
    FUN_03f5c2a4(&DAT_091b1d48);
    FUN_03f5c2a4(&DAT_091b1d68);
    FUN_03f5c2a4(&DAT_091b1d70);
    FUN_03f5c2a4(&DAT_0917d0d0);
    FUN_03f5c2a4(&DAT_0918d050);
    DAT_09523079 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0917d0d0);
  FUN_057e0400(lVar2,DAT_091b1d48);
  if (param_1 != 0) {
    FUN_057e185c(&local_98,param_1,DAT_091b1d58);
    local_70 = local_88;
    puStack_78 = puStack_90;
    local_80 = local_98;
    local_98 = 0;
    puStack_90 = &local_80;
LAB_077e3b74:
    uVar3 = FUN_071bd28c(&local_80,DAT_091a4e58);
    lVar6 = local_70;
    if ((uVar3 & 1) != 0) {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar7 = *(uint *)(lVar2 + 0x18);
      if (0 < (int)uVar7) {
        iVar9 = 0;
        do {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar1 = *(int *)(lVar6 + 0x1c);
          lVar4 = FUN_057e0998(lVar2,iVar9,DAT_091b1d70);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(int *)(lVar4 + 0x1c) < iVar1) {
LAB_077e3c90:
            FUN_057e1b20(lVar2,iVar9,lVar6,DAT_091b1d60);
            goto LAB_077e3b74;
          }
          iVar1 = *(int *)(lVar6 + 0x1c);
          lVar4 = FUN_057e0998(lVar2,iVar9,DAT_091b1d70);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (iVar1 == *(int *)(lVar4 + 0x1c)) {
            lVar4 = *(long *)(lVar6 + 0x10);
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
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar3 = System_String__Equals(lVar4,**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
            if ((uVar3 & 1) != 0) goto LAB_077e3c90;
          }
          uVar7 = *(uint *)(lVar2 + 0x18);
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)uVar7);
      }
      lVar4 = DAT_091b1d50;
      lVar8 = *(long *)(lVar2 + 0x10);
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (uVar7 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar7 + 1;
        plVar5 = (long *)(lVar8 + (long)(int)uVar7 * 8 + 0x20);
        *plVar5 = lVar6;
        thunk_FUN_03f5d7b8(plVar5,lVar6);
      }
      else {
        FUN_057e0c68(lVar2,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_077e3b74;
    }
    FUN_071bd288(&local_80,DAT_091a4e50);
    if (lVar2 != 0) {
      if (0 < *(int *)(lVar2 + 0x18)) {
        iVar9 = 0;
        do {
          lVar6 = FUN_057e0998(lVar2,iVar9,DAT_091b1d70);
          if (lVar6 == 0) goto LAB_077e3e24;
          lVar6 = *(long *)(lVar6 + 0x10);
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
          if (lVar6 == 0) goto LAB_077e3e24;
          uVar3 = System_String__Equals(lVar6,**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
          if ((uVar3 & 1) != 0) {
            if (**(long **)(DAT_0918d050 + 0xb8) == 0) goto LAB_077e3e24;
            *(int *)(**(long **)(DAT_0918d050 + 0xb8) + 0x28) = iVar9;
          }
          lVar6 = FUN_057e0998(lVar2,iVar9,DAT_091b1d70);
          if (lVar6 == 0) goto LAB_077e3e24;
          *(int *)(lVar6 + 0x18) = iVar9;
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(lVar2 + 0x18));
      }
      if (**(long **)(DAT_0918d050 + 0xb8) != 0) {
        *(long *)(**(long **)(DAT_0918d050 + 0xb8) + 0x30) = param_1;
        thunk_FUN_03f5d7b8();
        if (**(long **)(DAT_0918d050 + 0xb8) != 0) {
          plVar5 = (long *)(**(long **)(DAT_0918d050 + 0xb8) + 0x38);
          *plVar5 = lVar2;
          thunk_FUN_03f5d7b8(plVar5,lVar2);
          return;
        }
      }
    }
  }
LAB_077e3e24:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

