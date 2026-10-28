// rea decompile_all
// name: Coffee.UIEffects.UIEffectReplica$$RefreshTarget
// address: 0x43f4584
// body: available
// range: 0x43f4584-0x43f4737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f470c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43f4730 to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43f4734 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIEffectReplica__RefreshTarget(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if ((DAT_09517e01 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1348);
    FUN_03f5c2a4(&DAT_091b1350);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517e01 = 1;
  }
  plVar5 = (long *)(param_1 + 200);
  lVar6 = *plVar5;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(lVar6,param_2,0);
  if ((uVar2 & 1) == 0) {
    lVar6 = *plVar5;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(lVar6,0);
    if ((uVar2 & 1) != 0) {
      if ((*plVar5 == 0) || (lVar6 = Coffee_UIEffects_UIEffect__get_replicas(), lVar6 == 0))
      goto LAB_043f4734;
      FUN_057e2274(lVar6,param_1,DAT_091b1350);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(param_2,0);
    if ((uVar2 & 1) == 0) {
      param_1 = 0;
      *plVar5 = 0;
LAB_043f4700:
      thunk_FUN_03f5d7b8(plVar5,param_1);
      return;
    }
    *(undefined8 *)(param_1 + 200) = param_2;
    thunk_FUN_03f5d7b8(plVar5,param_2);
    uVar2 = Coffee_UIEffects_UIEffectReplica__get_isTargetInScene(param_1);
    if ((uVar2 & 1) != 0) {
      if ((*plVar5 != 0) &&
         (lVar3 = Coffee_UIEffects_UIEffect__get_replicas(), lVar6 = DAT_091b1348, lVar3 != 0)) {
        lVar4 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (*(uint *)(lVar4 + 0x18) <= uVar1) {
            FUN_057e0c68(lVar3,param_1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            return;
          }
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
          *plVar5 = param_1;
          goto LAB_043f4700;
        }
      }
LAB_043f4734:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

