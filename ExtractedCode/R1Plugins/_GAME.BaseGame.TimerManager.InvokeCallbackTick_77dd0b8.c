// rea decompile_all
// name: _GAME.BaseGame.TimerManager$$InvokeCallbackTick
// address: 0x77dd0b8
// body: available
// range: 0x77dd0b8-0x77dd393 inclusive
// range: 0x77dd42c-0x77dd4e7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77dd4d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77dd4dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77dd4e4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_BaseGame_TimerManager__InvokeCallbackTick(void)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long local_c8;
  long *plStack_c0;
  ulong local_b8;
  long lStack_b0;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  long local_80;
  long *plStack_78;
  ulong local_70;
  long local_68;
  
  if ((DAT_09523033 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d478);
    FUN_03f5c2a4(&DAT_091a1d80);
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a1d88);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091a1d90);
    FUN_03f5c2a4(&DAT_091a9488);
    FUN_03f5c2a4(&DAT_091a9490);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091aa5d0);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091aa5c8);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917ba20);
    FUN_03f5c2a4(&DAT_0918be20);
    DAT_09523033 = 1;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  plStack_78 = (long *)0x0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar7 = *(long *)(*(long *)(DAT_0918be20 + 0xb8) + 0x10);
  if (lVar7 != 0) {
    if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar7 = *(long *)(*(long *)(DAT_0918be20 + 0xb8) + 0x10);
      if (lVar7 == 0) goto LAB_077dd4dc;
    }
    iVar4 = FUN_06ef01a4(lVar7,DAT_0919d478);
    if (iVar4 != 0) {
      lVar7 = thunk_FUN_03f9944c(DAT_0917c520);
      FUN_05796918(lVar7,DAT_091adc70);
      if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = *(undefined8 *)(*(long *)(DAT_0918be20 + 0xb8) + 0x10);
      lVar5 = thunk_FUN_03f9944c(DAT_0917ba20);
      FUN_05656c0c(lVar5,uVar9,DAT_091aa5c8);
      if (lVar5 != 0) {
        FUN_05657fd8(&local_c8,lVar5,DAT_091aa5d0);
        plStack_78 = plStack_c0;
        local_80 = local_c8;
        local_68 = lStack_b0;
        local_70 = local_b8;
        plStack_c0 = &local_80;
        local_c8 = 0;
LAB_077dd2e8:
        uVar6 = FUN_071802a0(&local_80,DAT_091a1d88);
        lVar8 = local_68;
        uVar2 = local_70;
        lVar5 = local_c8;
        if ((uVar6 & 1) != 0) {
          uVar3 = (undefined4)local_70;
          if (local_68 != 0) {
            if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = _GAME_BaseGame_TimerManager__IsCallbackTickDead(uVar2 & 0xffffffff,lVar8);
            if ((uVar6 & 1) == 0) {
              (**(code **)(lVar8 + 0x18))
                        (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
              goto LAB_077dd2e8;
            }
          }
          lVar5 = DAT_091adc88;
          if (lVar7 == 0) {
LAB_077dd4d8:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(lVar7 + 0x10);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_077dd4d8;
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = uVar3;
          }
          else {
            FUN_057971a8(lVar7,uVar2 & 0xffffffff,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_077dd2e8;
        }
        FUN_0718029c(plStack_c0,DAT_091a1d80);
        if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c548(lVar5);
        }
        if (lVar7 != 0) {
          FUN_05797d74(&local_98,lVar7,DAT_091adcc0);
          local_c8 = 0;
          plStack_c0 = &local_98;
          while (uVar6 = FUN_071ad7a4(&local_98,DAT_091a34d8), uVar2 = local_88, (uVar6 & 1) != 0) {
            if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            _GAME_BaseGame_TimerManager__RemoveCallbackTick(uVar2 & 0xffffffff);
          }
          FUN_071ad7a0(&local_98,DAT_091a34d0);
          return;
        }
      }
LAB_077dd4dc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

