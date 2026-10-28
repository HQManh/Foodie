// rea decompile_all
// name: _GAME.DreamyPass.DreamyPassDbModel$$FromSaveGameModel
// address: 0x7818fb4
// body: available
// range: 0x7818fb4-0x781929b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7819290 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7819294 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7819298 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_DreamyPassDbModel__FromSaveGameModel(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  
  if ((DAT_095232ae & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091ab3e8);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091ab3e0);
    FUN_03f5c2a4(&DAT_0917bd08);
    DAT_095232ae = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  if (param_2 != 0) {
    *(bool *)(param_1 + 0x10) = *(int *)(param_2 + 0x10) == 1;
    *(bool *)(param_1 + 0x11) = *(int *)(param_2 + 0x14) == 1;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(bool *)(param_1 + 0x20) = *(int *)(param_2 + 0x20) == 1;
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    uVar2 = DAT_0917bd08;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    lVar3 = thunk_FUN_03f9944c(uVar2);
    FUN_0571b84c(lVar3,DAT_091ab3e0);
    plVar7 = (long *)(param_1 + 0x30);
    *plVar7 = lVar3;
    thunk_FUN_03f5d7b8(plVar7,lVar3);
    if (*(long *)(param_2 + 0x30) != 0) {
      FUN_05797d74(&local_88,*(long *)(param_2 + 0x30),DAT_091adcc0);
      local_60 = local_78;
      puStack_68 = puStack_80;
      local_70 = local_88;
      local_88 = 0;
      puStack_80 = &local_70;
      while (uVar4 = FUN_071ad7a4(&local_70,DAT_091a34d8), lVar3 = DAT_091ab3e8, (uVar4 & 1) != 0) {
        lVar5 = *plVar7;
        if (lVar5 == 0) {
LAB_07819290:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *(long *)(lVar5 + 0x10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_07819290;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(bool *)(lVar6 + (int)uVar1 + 0x20) = (int)local_60 == 1;
        }
        else {
          FUN_0571c0e8(lVar5,(int)local_60 == 1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_071ad7a0(&local_70,DAT_091a34d0);
      lVar3 = thunk_FUN_03f9944c(DAT_0917bd08);
      FUN_0571b84c(lVar3,DAT_091ab3e0);
      plVar7 = (long *)(param_1 + 0x38);
      *plVar7 = lVar3;
      thunk_FUN_03f5d7b8(plVar7,lVar3);
      if (*(long *)(param_2 + 0x38) != 0) {
        FUN_05797d74(&local_88,*(long *)(param_2 + 0x38),DAT_091adcc0);
        local_60 = local_78;
        puStack_68 = puStack_80;
        local_70 = local_88;
        local_88 = 0;
        puStack_80 = &local_70;
        while( true ) {
          uVar4 = FUN_071ad7a4(&local_70,DAT_091a34d8);
          lVar3 = DAT_091ab3e8;
          if ((uVar4 & 1) == 0) {
            FUN_071ad7a0(&local_70,DAT_091a34d0);
            return;
          }
          lVar5 = *plVar7;
          if (lVar5 == 0) break;
          lVar6 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar6 == 0) break;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(bool *)(lVar6 + (int)uVar1 + 0x20) = (int)local_60 == 1;
          }
          else {
            FUN_0571c0e8(lVar5,(int)local_60 == 1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

