// rea decompile_all
// name: Datpt.Cook_Order.ItemGottenBySpoon$$OnTakenBySpoon
// address: 0x41ad704
// body: available
// range: 0x41ad704-0x41ada03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ad9fc to 0x4545344 DG.Tweening.ShortcutExtensions$$DOScale (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41ada00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_ItemGottenBySpoon__OnTakenBySpoon(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  
  if ((DAT_095168c9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dbee0);
    DAT_095168c9 = 1;
  }
  if (*(char *)(param_1 + 0x45) != '\0') {
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + 1.0;
    DG_Tweening_ShortcutExtensions__DOKill(*(undefined8 *)(param_1 + 0x28),0,0);
    lVar4 = *(long *)(param_1 + 0x28);
    if (DAT_09515cf3 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515cf3 = '\x01';
    }
    if (lVar4 == 0) {
LAB_041ada00:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = *(long *)(DAT_0918cbd0 + 0xb8);
    UnityEngine_Transform__set_localScale
              (*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
               *(undefined4 *)(lVar2 + 0x14),lVar4,0);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    if (DAT_09515cf3 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515cf3 = '\x01';
    }
    uVar9 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
    fVar7 = (float)((ulong)uVar9 >> 0x20) * 0.1;
    uVar5 = DG_Tweening_ShortcutExtensions__DOPunchScale
                      (CONCAT44(fVar7,(float)uVar9 * 0.1),fVar7,
                       *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x14) * 0.1,0x3e4ccccd,0x3f800000
                       ,uVar5,10,0);
    FUN_04d95e8c(uVar5,7,DAT_091dbee0);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_041ada00;
      Datpt_Cook_Order_ObjectShaking__DoNormalShake(*(long *)(param_1 + 0x30),0);
    }
    if (*(char *)(param_1 + 0x38) != '\0') {
      if (*(float *)(param_1 + 0x3c) <= *(float *)(param_1 + 0x40)) {
        lVar4 = *(long *)(param_1 + 0x20);
        if (DAT_09515ce6 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515ce6 = '\x01';
        }
        if (lVar4 == 0) goto LAB_041ada00;
        puVar3 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
        UnityEngine_Transform__set_localScale(*puVar3,puVar3[1],puVar3[2],lVar4,0);
        lVar4 = *(long *)(param_1 + 0x48);
        *(undefined1 *)(param_1 + 0x45) = 0;
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        }
      }
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      fVar6 = *(float *)(param_1 + 0x40) / *(float *)(param_1 + 0x3c);
      fVar7 = 1.0;
      if (fVar6 <= 1.0) {
        fVar7 = fVar6;
      }
      fVar11 = 0.0;
      if (0.0 <= fVar6) {
        fVar11 = fVar7;
      }
      if (1.0 <= fVar11) {
        if (DAT_09515ce6 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515ce6 = '\x01';
        }
        uVar1 = **(ulong **)(DAT_0918cbd0 + 0xb8);
        fVar7 = *(float *)(*(ulong **)(DAT_0918cbd0 + 0xb8) + 1);
      }
      else {
        if (DAT_09515cf3 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515cf3 = '\x01';
          fVar6 = *(float *)(param_1 + 0x40) / *(float *)(param_1 + 0x3c);
        }
        fVar11 = *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x14);
        fVar7 = 1.0;
        if (fVar6 <= 1.0) {
          fVar7 = fVar6;
        }
        uVar9 = NEON_fmov(0x3e800000,4);
        fVar8 = 1.0;
        if (0.0 <= fVar6) {
          fVar8 = 1.0 - fVar7;
        }
        uVar10 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
        fVar7 = (float)uVar10;
        fVar6 = (float)((ulong)uVar10 >> 0x20);
        uVar1 = CONCAT44(fVar6 * fVar8 + fVar6 * (float)((ulong)uVar9 >> 0x20),
                         fVar7 * fVar8 + fVar7 * (float)uVar9);
        fVar7 = fVar11 * fVar8 + fVar11 * 0.25;
      }
      DG_Tweening_ShortcutExtensions__DOScale(uVar1,uVar1 >> 0x20,fVar7,0x3e4ccccd,uVar5,0);
      return;
    }
  }
  return;
}

