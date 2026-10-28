// rea decompile_all
// name: Utilities.AnimatorBehaviourSendEventOnEnterExit$$OnStateEnter
// address: 0x44f4040
// body: available
// range: 0x44f4040-0x44f418f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44f418c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_AnimatorBehaviourSendEventOnEnterExit__OnStateEnter
               (long param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  if ((DAT_09518420 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c52d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518420 = 1;
  }
  uStack_98 = param_3[1];
  local_a0 = *param_3;
  uStack_88 = param_3[3];
  uStack_90 = param_3[2];
  local_80 = *(undefined4 *)(param_3 + 4);
  UnityEngine_StateMachineBehaviour__OnStateEnter(param_1,param_2,&local_a0,param_4,0);
  plVar2 = (long *)(param_1 + 0x18);
  lVar3 = *plVar2;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar3,0);
  if ((uVar1 & 1) == 0) {
    if (param_2 == 0) goto LAB_044f418c;
    lVar3 = FUN_04a6a14c(param_2,DAT_091c52d8);
    *plVar2 = lVar3;
    thunk_FUN_03f5d7b8(plVar2,lVar3);
  }
  lVar3 = *plVar2;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar3,0);
  if (((uVar1 & 1) != 0) && (*(char *)(param_1 + 0x20) != '\0')) {
    if (*plVar2 == 0) {
LAB_044f418c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *(long *)(*plVar2 + 0x38);
    if (lVar3 != 0) {
      uStack_68 = param_3[1];
      local_70 = *param_3;
      uStack_58 = param_3[3];
      uStack_60 = param_3[2];
      local_50 = *(undefined4 *)(param_3 + 4);
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),param_1,&local_70,*(undefined8 *)(lVar3 + 0x28));
    }
  }
  return;
}

