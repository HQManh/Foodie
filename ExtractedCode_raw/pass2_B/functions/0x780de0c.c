// rea decompile_all
// name: _GAME.DreamyPass.DreamyPassManager$$ResetData
// address: 0x780de0c
// body: available
// range: 0x780de0c-0x780e1a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x780e194 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780e198 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780e19c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780e1a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780e1a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_DreamyPassManager__ResetData(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  
  if ((DAT_09523242 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183d50);
    FUN_03f5c2a4(&DAT_09183d58);
    FUN_03f5c2a4(&DAT_091a2a80);
    FUN_03f5c2a4(&DAT_091a2a88);
    FUN_03f5c2a4(&DAT_091a2a90);
    FUN_03f5c2a4(&DAT_091ab3e8);
    FUN_03f5c2a4(&DAT_091ac710);
    FUN_03f5c2a4(&DAT_091ab3e0);
    FUN_03f5c2a4(&DAT_0917bd08);
    FUN_03f5c2a4(&DAT_091ba358);
    FUN_03f5c2a4(&DAT_0917e700);
    DAT_09523242 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  lVar6 = **(long **)(DAT_09183d58 + 0xb8);
  if (lVar6 == 0) {
    uVar2 = thunk_FUN_03f9944c(DAT_09183d50);
    _GAME_DreamyPass_DreamyPassDbModel___ctor();
    **(undefined8 **)(DAT_09183d58 + 0xb8) = uVar2;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09183d58 + 0xb8),uVar2);
    lVar6 = **(long **)(DAT_09183d58 + 0xb8);
    if (lVar6 == 0) goto LAB_0780e1a4;
  }
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined1 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  uVar2 = DAT_0917bd08;
  *(undefined4 *)(lVar6 + 0x24) = 0;
  uVar2 = thunk_FUN_03f9944c(uVar2);
  FUN_0571b84c(uVar2,DAT_091ab3e0);
  *(undefined8 *)(lVar6 + 0x30) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x30),uVar2);
  lVar6 = _GAME_DreamyPass_SODreamyPassConfig__get_ListLevel();
  if (lVar6 != 0) {
    FUN_057e185c(&local_98,lVar6,DAT_091ac710);
    local_70 = local_88;
    puStack_78 = puStack_90;
    local_80 = local_98;
    local_98 = 0;
    puStack_90 = &local_80;
    while (uVar3 = FUN_071bd28c(&local_80,DAT_091a2a88), lVar6 = DAT_091ab3e8, (uVar3 & 1) != 0) {
      if (**(long **)(DAT_09183d58 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *(long *)(**(long **)(DAT_09183d58 + 0xb8) + 0x30);
      if (lVar4 == 0) {
LAB_0780e194:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_0780e194;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(undefined1 *)(lVar5 + (int)uVar1 + 0x20) = 0;
      }
      else {
        FUN_0571c0e8(lVar4,0,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_071bd288(&local_80,DAT_091a2a80);
    lVar6 = **(long **)(DAT_09183d58 + 0xb8);
    uVar2 = thunk_FUN_03f9944c(DAT_0917bd08);
    FUN_0571b84c(uVar2,DAT_091ab3e0);
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)(lVar6 + 0x38);
      *puVar7 = uVar2;
      thunk_FUN_03f5d7b8(puVar7,uVar2);
      lVar6 = _GAME_DreamyPass_SODreamyPassConfig__get_ListLevel();
      if (lVar6 != 0) {
        FUN_057e185c(&local_98,lVar6,DAT_091ac710);
        local_70 = local_88;
        puStack_78 = puStack_90;
        local_80 = local_98;
        local_98 = 0;
        puStack_90 = &local_80;
        while (uVar3 = FUN_071bd28c(&local_80,DAT_091a2a88), lVar6 = DAT_091ab3e8, (uVar3 & 1) != 0)
        {
          if (**(long **)(DAT_09183d58 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = *(long *)(**(long **)(DAT_09183d58 + 0xb8) + 0x38);
          if (lVar4 == 0) {
LAB_0780e198:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = *(long *)(lVar4 + 0x10);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar5 == 0) goto LAB_0780e198;
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined1 *)(lVar5 + (int)uVar1 + 0x20) = 0;
          }
          else {
            FUN_0571c0e8(lVar4,0,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_071bd288(&local_80,DAT_091a2a80);
        if (**(long **)(DAT_09183d58 + 0xb8) != 0) {
          _GAME_DreamyPass_DreamyPassDbModel__AddSaveAction();
          lVar6 = DAT_0917e700;
          if (**(long **)(DAT_09183d58 + 0xb8) != 0) {
            *(undefined8 *)(**(long **)(DAT_09183d58 + 0xb8) + 0x40) = 0;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_060df854(DAT_091ba358);
            return;
          }
        }
      }
    }
  }
LAB_0780e1a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

