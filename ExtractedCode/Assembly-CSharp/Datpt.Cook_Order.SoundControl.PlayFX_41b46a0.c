// rea decompile_all
// name: Datpt.Cook_Order.SoundControl$$PlayFX
// address: 0x41b46a0
// body: available
// range: 0x41b46a0-0x41b48e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b48cc to 0x85db37c UnityEngine.AudioSource$$Play (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41b48e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_SoundControl__PlayFX(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_0951692f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c3e0);
    FUN_03f5c2a4(&DAT_0919c3e8);
    FUN_03f5c2a4(&DAT_0919c3f0);
    FUN_03f5c2a4(&DAT_091cd5c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951692f = 1;
  }
  if (*(char *)(param_1 + 0x30) == '\0') {
    return;
  }
  fVar6 = *(float *)(param_1 + 0x34);
  fVar5 = (float)UnityEngine_Time__get_time(0);
  if (fVar5 <= fVar6 + 0.2) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_041b48e4;
  uVar1 = FUN_06fd8648(*(long *)(param_1 + 0x20),param_2,DAT_0919c3e0);
  if ((uVar1 & 1) == 0) {
LAB_041b47a4:
    lVar4 = *(long *)(param_1 + 0x20);
    lVar3 = UnityEngine_Component__get_gameObject(param_1,0);
    if ((lVar3 == 0) || (uVar2 = FUN_04b7c294(lVar3,DAT_091cd5c8), lVar4 == 0)) goto LAB_041b48e4;
    FUN_06fd8440(lVar4,param_2,uVar2,DAT_0919c3f0);
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar3 = FUN_06fd83d4(*(long *)(param_1 + 0x20),param_2,DAT_0919c3e8), lVar3 == 0))
    goto LAB_041b48e4;
    UnityEngine_AudioSource__set_loop(lVar3,param_3 & 1,0);
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar3 = FUN_06fd83d4(*(long *)(param_1 + 0x20),param_2,DAT_0919c3e8), lVar3 == 0))
    goto LAB_041b48e4;
    UnityEngine_AudioSource__set_generatorObject(lVar3,param_2,0);
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_041b48e4;
    uVar2 = FUN_06fd83d4(*(long *)(param_1 + 0x20),param_2,DAT_0919c3e8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar1 = UnityEngine_Object__op_Equality(uVar2,0,0);
    if ((uVar1 & 1) != 0) goto LAB_041b47a4;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_06fd8648(*(long *)(param_1 + 0x20),param_2,DAT_0919c3e0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar2 = FUN_06fd83d4(*(long *)(param_1 + 0x20),param_2,DAT_0919c3e8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
      if ((uVar1 & 1) == 0) {
        return;
      }
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (lVar3 = FUN_06fd83d4(*(long *)(param_1 + 0x20),param_2,DAT_0919c3e8), lVar3 != 0)) {
        UnityEngine_AudioSource__Play(lVar3,0);
        return;
      }
    }
  }
LAB_041b48e4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

