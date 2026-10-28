// rea decompile_all
// name: Datpt.Cook_Order.EmojiControl$$ShowNegative
// address: 0x41a569c
// body: available
// range: 0x41a569c-0x41a58d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a58d0 to 0x4d8dd74 FUN_04d8dd74 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41a58d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_EmojiControl__ShowNegative(float param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_09516871 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091c8ba0);
    FUN_03f5c2a4(&DAT_09183f50);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbcc0);
    FUN_03f5c2a4(&DAT_091dbeb0);
    DAT_09516871 = 1;
  }
  puVar4 = (undefined8 *)(param_2 + 0x78);
  uVar1 = DG_Tweening_TweenExtensions__IsActive(*puVar4,0);
  if ((uVar1 & 1) != 0) {
    DG_Tweening_TweenExtensions__Complete(*puVar4,0);
  }
  lVar6 = *(long *)(param_2 + 0x40);
  if (*(int *)(DAT_09183f50 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (lVar6 != 0) {
    UnityEngine_Animator__Play(lVar6,*(undefined4 *)(*(long *)(DAT_09183f50 + 0xb8) + 4),0);
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = DG_Tweening_DOTween__Sequence(0);
    *puVar4 = uVar2;
    thunk_FUN_03f5d7b8(puVar4,uVar2);
    if (0.0 < param_1) {
      DG_Tweening_TweenSettingsExtensions__AppendInterval(param_1,*puVar4,0);
    }
    uVar5 = *(undefined8 *)(param_2 + 0x78);
    uVar2 = DG_Tweening_ShortcutExtensions__DOScale
                      (*(undefined4 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x84),
                       *(undefined4 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x50),
                       *(undefined8 *)(param_2 + 0x48),0);
    uVar2 = FUN_04d95e8c(uVar2,0x1b,DAT_091dbeb0);
    uVar2 = DG_Tweening_TweenSettingsExtensions__Append(uVar5,uVar2,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
    DG_Tweening_TweenCallback___ctor(uVar5,param_2,DAT_091c8ba0,0);
    uVar2 = DG_Tweening_TweenSettingsExtensions__AppendCallback(uVar2,uVar5,0);
    uVar2 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                      (*(undefined4 *)(param_2 + 0x54),uVar2,0);
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    if (DAT_09515ce6 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515ce6 = '\x01';
    }
    puVar3 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
    uVar5 = DG_Tweening_ShortcutExtensions__DOScale
                      (*puVar3,puVar3[1],puVar3[2],*(undefined4 *)(param_2 + 0x58),uVar5,0);
    uVar5 = FUN_04d95e8c(uVar5,0x1a,DAT_091dbeb0);
    uVar2 = DG_Tweening_TweenSettingsExtensions__Append(uVar2,uVar5,0);
    FUN_04d8dd74(uVar2,DAT_091dbcc0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

