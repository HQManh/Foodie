// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl.<<PlayLevel>g__ProcessLoadMiniscene|47_3>d$$MoveNext
// address: 0x4398c90
// body: available
// range: 0x4398c90-0x4398eb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4398eb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_InGame_LevelPlayLoadAndSetupControl_<<PlayLevel>g__ProcessLoadMiniscene_47_3>d__MoveNext
          (long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_09517a7d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4c70);
    FUN_03f5c2a4(&DAT_091b4bb8);
    FUN_03f5c2a4(&DAT_091b4cf8);
    FUN_03f5c2a4(&DAT_091b4c78);
    FUN_03f5c2a4(&DAT_091b4d00);
    FUN_03f5c2a4(&DAT_091b4bc0);
    DAT_09517a7d = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar2 = FUN_05a8f088(DAT_091b4d00);
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
LAB_04398d5c:
    uVar2 = FUN_05a8f088(DAT_091b4c78);
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      uVar4 = 2;
    }
    else {
LAB_04398d70:
      uVar2 = FUN_05a8f088(DAT_091b4bc0);
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(DAT_091b4bb8 + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c();
        }
        lVar5 = **(long **)(lVar3 + 0xb8);
        lVar3 = *(long *)(DAT_091b4cf8 + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c(lVar3);
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c();
        }
        uVar6 = **(undefined8 **)(lVar3 + 0xb8);
        lVar3 = *(long *)(DAT_091b4c70 + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c(lVar3);
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c();
        }
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        CakeOrder_PopupMinigame_CookOrderPopupMinigameLoader__Initialize
                  (lVar5,uVar6,**(undefined8 **)(lVar3 + 0xb8),0);
        goto LAB_04398e68;
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      uVar4 = 3;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    uVar6 = 1;
  }
  else {
    if (uVar1 == 2) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_04398d5c;
    }
    if (uVar1 == 3) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_04398d70;
    }
LAB_04398e68:
    uVar6 = 0;
  }
  return uVar6;
}

