// rea decompile_all
// name: Kien.BG.MapCoffee.Bike$$Play
// address: 0x407afd4
// body: available
// range: 0x407afd4-0x407b253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407b24c to 0x4d9629c FUN_04d9629c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x407b250 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Kien_BG_MapCoffee_Bike__Play(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((DAT_09515c3c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091dbf08);
    DAT_09515c3c = 1;
  }
  lVar1 = *(long *)(param_4 + 0x40);
  if (lVar1 != 0) {
    DG_Tweening_TweenExtensions__Kill(lVar1,0,0);
  }
  if (*(long *)(param_4 + 0x20) != 0) {
    fVar4 = (float)UnityEngine_Transform__get_localPosition(*(long *)(param_4 + 0x20),0);
    fVar10 = param_3;
    if (DAT_09515cf0 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515cf0 = '\x01';
    }
    if (*(long *)(param_4 + 0x28) != 0) {
      lVar1 = *(long *)(DAT_0918cbd0 + 0xb8);
      fVar11 = *(float *)(param_4 + 0x30);
      fVar8 = *(float *)(lVar1 + 0x3c);
      fVar5 = *(float *)(lVar1 + 0x40);
      fVar6 = *(float *)(lVar1 + 0x44);
      fVar9 = fVar8;
      fVar7 = (float)UnityEngine_Transform__get_localPosition(*(long *)(param_4 + 0x28),0);
      if (DAT_09515cf1 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515cf1 = '\x01';
      }
      lVar1 = *(long *)(DAT_0918cbd0 + 0xb8);
      fVar15 = *(float *)(param_4 + 0x30);
      fVar13 = *(float *)(lVar1 + 0x30);
      fVar14 = *(float *)(lVar1 + 0x34);
      fVar12 = *(float *)(lVar1 + 0x38);
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = DG_Tweening_DOTween__Sequence(0);
      *(undefined8 *)(param_4 + 0x40) = uVar2;
      thunk_FUN_03f5d7b8((long *)(param_4 + 0x40),uVar2);
      uVar3 = *(undefined8 *)(param_4 + 0x40);
      uVar2 = DG_Tweening_ShortcutExtensions__DOLocalMove
                        (fVar4 + fVar8 * fVar11,param_2 + fVar5 * fVar11,param_3 + fVar6 * fVar11,
                         *(undefined4 *)(param_4 + 0x34),*(undefined8 *)(param_4 + 0x20),0,0);
      uVar2 = FUN_04d95e8c(uVar2,1,DAT_091dbeb0);
      DG_Tweening_TweenSettingsExtensions__Append(uVar3,uVar2,0);
      DG_Tweening_TweenSettingsExtensions__AppendInterval
                (*(undefined4 *)(param_4 + 0x38),*(undefined8 *)(param_4 + 0x40),0);
      uVar3 = *(undefined8 *)(param_4 + 0x40);
      uVar2 = DG_Tweening_ShortcutExtensions__DOLocalMove
                        (fVar7 + fVar13 * fVar15,fVar9 + fVar14 * fVar15,fVar10 + fVar12 * fVar15,
                         *(undefined4 *)(param_4 + 0x34),*(undefined8 *)(param_4 + 0x28),0,0);
      uVar2 = FUN_04d95e8c(uVar2,1,DAT_091dbeb0);
      DG_Tweening_TweenSettingsExtensions__Append(uVar3,uVar2,0);
      DG_Tweening_TweenSettingsExtensions__AppendInterval
                (*(undefined4 *)(param_4 + 0x38),*(undefined8 *)(param_4 + 0x40),0);
      FUN_04d9629c(*(undefined8 *)(param_4 + 0x40),0xffffffff,DAT_091dbf08);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

