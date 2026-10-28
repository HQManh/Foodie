// rea decompile_all
// name: DG.Tweening.Plugins.CirclePlugin$$EvaluateAndApply
// address: 0x454e1d0
// body: available
// range: 0x454e1d0-0x454e2c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x454e2c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_CirclePlugin__EvaluateAndApply
               (undefined4 param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               undefined1 param_5 [16],undefined4 param_6,undefined8 param_7,undefined8 *param_8,
               long param_9,undefined8 param_10,undefined8 param_11,long param_12)

{
  undefined8 uVar1;
  long lVar2;
  float extraout_s0;
  float fVar3;
  float fVar4;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  
  if (param_9 != 0) {
    fVar4 = *(float *)((long)param_8 + 0x14);
    if (*(int *)(param_9 + 0xa8) == 2) {
      fVar4 = fVar4 + param_4 * (float)(*(int *)(param_9 + 0x10c) - (int)*(char *)(param_9 + 0x111))
      ;
    }
    if (*(char *)(param_9 + 0xe9) != '\0') {
      lVar2 = *(long *)(param_9 + 0xf0);
      if (lVar2 == 0) goto LAB_0454e2c0;
      if (*(int *)(lVar2 + 0xa8) == 2) {
        fVar3 = 1.0;
        if (*(int *)(param_9 + 0xa8) == 2) {
          fVar3 = (float)*(int *)(param_9 + 0xa4);
        }
        fVar4 = fVar4 + param_4 * fVar3 *
                        (float)(*(int *)(lVar2 + 0x10c) - (int)*(char *)(lVar2 + 0x111));
      }
    }
    uVar1 = DG_Tweening_Core_Easing_EaseManager__Evaluate
                      (param_1,param_6,*(undefined4 *)(param_9 + 0xc0),
                       *(undefined4 *)(param_9 + 0xc4),*(undefined4 *)(param_9 + 0xb4),
                       *(undefined8 *)(param_9 + 0xb8),0);
    local_50 = *param_8;
    uStack_3c = *(undefined8 *)((long)param_8 + 0x14);
    uStack_48 = (undefined4)param_8[1];
    uStack_44 = (undefined4)*(undefined8 *)((long)param_8 + 0xc);
    uStack_40 = (undefined4)((ulong)*(undefined8 *)((long)param_8 + 0xc) >> 0x20);
    DG_Tweening_Plugins_CirclePlugin__GetPositionOnCircle
              (fVar4 + param_4 * extraout_s0,uVar1,&local_50);
    if (param_12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0454e2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_12 + 0x18))
                (*(undefined8 *)(param_12 + 0x40),*(undefined8 *)(param_12 + 0x28));
      return;
    }
  }
LAB_0454e2c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

