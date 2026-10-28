// rea decompile_all
// name: _GAME.GameUI.RwItemDropCtrl.<PlayLegacyAsync>d__6$$MoveNext
// address: 0x775c02c
// body: available
// range: 0x775c02c-0x775c44b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x775c434 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775c438 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775c43c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775c440 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775c444 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775c448 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0775c430) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _GAME_GameUI_RwItemDropCtrl_<PlayLegacyAsync>d__6__MoveNext(int *param_1)

{
  undefined2 uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 local_90 [16];
  long *local_80;
  int local_74;
  undefined1 local_70 [16];
  
  if ((DAT_09522bf4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c27b8);
    FUN_03f5c2a4(&DAT_0919a5c0);
    FUN_03f5c2a4(&DAT_0919a5c8);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091ef570);
    FUN_03f5c2a4(&DAT_09194020);
    FUN_03f5c2a4(&DAT_091bde20);
    DAT_09522bf4 = 1;
  }
  local_74 = *param_1;
  local_80 = *(long **)(param_1 + 4);
  local_90._8_8_ = 0;
  local_90._0_8_ = 0;
  if (local_74 == 0) {
LAB_0775c2b4:
    local_90 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    local_74 = -1;
    *param_1 = -1;
LAB_0775c2cc:
    uVar3 = local_90._0_8_;
    if ((long *)local_90._0_8_ != (long *)0x0) {
      uVar1 = local_90._12_2_;
      lVar7 = *(long *)(DAT_0919a5c0 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c(lVar7);
      }
      lVar6 = *(long *)uVar3;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar7) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0775c360;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(uVar3,lVar7,0);
LAB_0775c360:
      (*(code *)*puVar5)(uVar3,uVar1,puVar5[1]);
    }
    iVar10 = 6;
  }
  else {
    uVar3 = thunk_FUN_03f9944c(DAT_09194020);
    System_Object___ctor(uVar3,0);
    *(undefined8 *)(param_1 + 0xe) = uVar3;
    thunk_FUN_03f5d7b8(param_1 + 0xe,uVar3);
    if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*(long *)(param_1 + 0xe) + 0x18) = *(undefined8 *)(param_1 + 4);
    thunk_FUN_03f5d7b8();
    if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*(long *)(param_1 + 0xe) + 0x20) = *(undefined8 *)(param_1 + 6);
    thunk_FUN_03f5d7b8();
    plVar2 = local_80;
    if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(*(long *)(param_1 + 0xe) + 0x10) = 0;
    if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    param_1[0x10] = (int)local_80[0xb];
    if (local_74 == 0) goto LAB_0775c2b4;
    iVar10 = param_1[8];
    iVar11 = param_1[9];
    iVar12 = param_1[10];
    iVar13 = param_1[0xb];
    iVar14 = param_1[0xc];
    iVar15 = param_1[0xd];
    uVar9 = *(undefined8 *)(param_1 + 0xe);
    uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar3,uVar9,DAT_091ef570,0);
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = System_Threading_CancellationToken__get_None(0);
    auVar16 = _GAME_GameUI_RwItemDropCtrl__PlayDropAsync
                        (iVar10,iVar11,iVar12,iVar13,iVar14,iVar15,plVar2,uVar3,uVar9);
    local_70._0_8_ = 0;
    local_70._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bde20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_70 = auVar16;
    thunk_FUN_03f5d7b8(local_70,0);
    local_90 = local_70;
    uVar4 = FUN_0429cb44(local_90,DAT_0919a5c8);
    if ((uVar4 & 1) != 0) goto LAB_0775c2cc;
    local_74 = 0;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0x12) = local_90;
    thunk_FUN_03f5d7b8(param_1 + 0x12,0);
    FUN_049b4a9c(param_1 + 2,local_90,param_1,DAT_091c27b8);
    iVar10 = 5;
  }
  if (-1 < local_74) {
LAB_0775c3d8:
    if ((iVar10 == 0) || (iVar10 == 6)) {
      *param_1 = -2;
      piVar8 = param_1 + 0xe;
      piVar8[0] = 0;
      piVar8[1] = 0;
      thunk_FUN_03f5d7b8(piVar8,0);
      FUN_042dada8(param_1 + 2,0);
    }
    return;
  }
  lVar7 = *(long *)(param_1 + 0xe);
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x10) == '\0') {
      if (local_80 == (long *)0x0) goto LAB_0775c438;
      _GAME_GameUI_RwItemDropCtrl__SafeInvoke(local_80,*(undefined8 *)(lVar7 + 0x20));
    }
    if (local_80 != (long *)0x0) {
      if ((int)local_80[0xb] == param_1[0x10]) {
        (**(code **)(*local_80 + 0x1b8))(local_80,*(undefined8 *)(*local_80 + 0x1c0));
      }
      goto LAB_0775c3d8;
    }
  }
LAB_0775c438:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

