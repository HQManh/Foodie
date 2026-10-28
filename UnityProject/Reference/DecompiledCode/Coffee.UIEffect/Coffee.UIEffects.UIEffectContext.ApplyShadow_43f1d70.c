// rea decompile_all
// name: Coffee.UIEffects.UIEffectContext$$ApplyShadow
// address: 0x43f1d70
// body: available
// range: 0x43f1d70-0x43f1f07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f1e88 to 0x43f6df4 Coffee.UIEffects.ShadowUtil$$DoMirror (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43f1efc to 0x43f6a58 Coffee.UIEffects.ShadowUtil$$DoShadow (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43f1f00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f1f04 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIEffectContext__ApplyShadow
               (long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  float fVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_09517deb & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c380);
    DAT_09517deb = 1;
  }
  uVar3 = *(ulong *)(param_1 + 0xd8);
  if (DAT_09515ce8 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09515ce8 = '\x01';
  }
  fVar2 = (float)uVar3;
  fVar5 = fVar2 - (float)**(undefined8 **)(DAT_0918cb68 + 0xb8);
  fVar4 = (float)(uVar3 >> 0x20);
  fVar6 = fVar4 - (float)((ulong)**(undefined8 **)(DAT_0918cb68 + 0xb8) >> 0x20);
  if (9.9999994e-11 <= fVar5 * fVar5 + fVar6 * fVar6) {
    if ((param_4 >> 3 & 1) != 0) {
      if ((param_4 & 1) != 0) {
        fVar2 = -fVar2;
      }
      uVar3 = (ulong)(uint)fVar2;
      if ((param_4 & 2) != 0) {
        fVar4 = -fVar4;
      }
    }
    if (0xfffffffb < *(int *)(param_1 + 0xd4) - 5U) {
      if (*(int *)(DAT_0918c380 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar1 = *(long *)(*(long *)(DAT_0918c380 + 0xb8) + 0x140);
      if (lVar1 != 0) {
        if (*(uint *)(param_1 + 0xd4) < *(uint *)(lVar1 + 0x18)) {
          Coffee_UIEffects_ShadowUtil__DoShadow
                    (uVar3,fVar4,*(undefined4 *)(param_1 + 0xe4),param_2,
                     *(undefined8 *)(lVar1 + (long)(int)*(uint *)(param_1 + 0xd4) * 8 + 0x20),
                     *(undefined4 *)(param_1 + 0xe0),0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar3);
    }
    if (*(int *)(param_1 + 0xd4) == 5) {
      Coffee_UIEffects_ShadowUtil__DoMirror
                (uVar3,fVar4,*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xe4),param_2
                 ,param_3,0);
      return;
    }
  }
  return;
}

