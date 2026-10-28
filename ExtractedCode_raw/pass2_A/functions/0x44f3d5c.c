// rea decompile_all
// name: Utilities.AnimatorBehaviourPlayFxOnEnterState$$TriggerFx
// address: 0x44f3d5c
// body: available
// range: 0x44f3d5c-0x44f3ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44f3ed0 to 0x86f45a8 UnityEngine.ParticleSystem$$Play (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44f3ee4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_AnimatorBehaviourPlayFxOnEnterState__TriggerFx(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if ((DAT_0951841f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c52d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951841f = 1;
  }
  plVar4 = (long *)(param_1 + 0x18);
  lVar6 = *plVar4;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar6,0);
  if ((uVar2 & 1) == 0) {
    if (param_2 == 0) goto LAB_044f3ee4;
    lVar6 = FUN_04a6a14c(param_2,DAT_091c52d8);
    *plVar4 = lVar6;
    thunk_FUN_03f5d7b8(plVar4,lVar6);
  }
  lVar6 = *plVar4;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar6,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  puVar7 = (undefined8 *)(param_1 + 0x28);
  uVar5 = *puVar7;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar2 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0x34);
    if (-1 < (int)uVar1) {
      lVar6 = *plVar4;
      if ((lVar6 == 0) || (lVar3 = *(long *)(lVar6 + 0x28), lVar3 == 0)) goto LAB_044f3ee4;
      if ((int)uVar1 < *(int *)(lVar3 + 0x18)) {
        puVar7 = (undefined8 *)(lVar3 + (ulong)uVar1 * 8 + 0x20);
        goto LAB_044f3e78;
      }
    }
  }
  else {
    lVar6 = *plVar4;
    if (lVar6 == 0) goto LAB_044f3ee4;
LAB_044f3e78:
    Utilities_AudioSourceExtension__PlaySfx
              (*(undefined4 *)(param_1 + 0x30),0x3e4ccccd,*(undefined8 *)(lVar6 + 0x20),*puVar7);
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  if ((int)uVar1 < 0) {
    return;
  }
  if ((*plVar4 != 0) && (lVar6 = *(long *)(*plVar4 + 0x30), lVar6 != 0)) {
    if (*(int *)(lVar6 + 0x18) <= (int)uVar1) {
      return;
    }
    lVar6 = *(long *)(lVar6 + (ulong)uVar1 * 8 + 0x20);
    if (lVar6 != 0) {
      UnityEngine_ParticleSystem__Play(lVar6,0);
      return;
    }
  }
LAB_044f3ee4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

