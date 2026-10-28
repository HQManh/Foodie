// rea decompile_all
// name: Datpt.DebugCustom$$PrepareString
// address: 0x4196384
// body: available
// range: 0x4196384-0x4196567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4196560 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4196564 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Datpt_DebugCustom__PrepareString(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  
  if ((DAT_095167de & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091842a0);
    FUN_03f5c2a4(&DAT_09216a40);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_095167de = 1;
  }
  if (param_1 == 0) {
LAB_04196560:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar4 = DAT_091f5700;
  if (0 < (int)uVar1) {
    uVar8 = 0;
    do {
      if (uVar1 <= uVar8) {
LAB_04196564:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar9 = (long *)(param_1 + (long)(int)uVar8 * 8 + 0x20);
      plVar7 = (long *)*plVar9;
      if (plVar7 == (long *)0x0) goto LAB_04196560;
      lVar5 = *plVar7;
      bVar2 = *(byte *)(lVar5 + 0x130);
      uVar6 = (ulong)*(byte *)(DAT_091842a0 + 0x130);
      if ((*(byte *)(DAT_091842a0 + 0x130) <= bVar2) &&
         (*(long *)(*(long *)(lVar5 + 200) + uVar6 * 8 + -8) == DAT_091842a0)) {
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar5 = *plVar7;
          bVar2 = *(byte *)(lVar5 + 0x130);
          uVar6 = (ulong)*(byte *)(DAT_091842a0 + 0x130);
        }
        if ((uint)bVar2 < (uint)uVar6) {
          plVar7 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(lVar5 + 200) + uVar6 * 8 + -8) != DAT_091842a0) {
          plVar7 = (long *)0x0;
        }
        UnityEngine_Debug__LogException(plVar7,0);
        if (*(uint *)(param_1 + 0x18) <= uVar8) goto LAB_04196564;
        plVar9 = (long *)*plVar9;
        if (plVar9 != (long *)0x0) {
          lVar5 = *plVar9;
          if ((*(byte *)(DAT_091842a0 + 0x130) <= *(byte *)(lVar5 + 0x130)) &&
             (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(DAT_091842a0 + 0x130) * 8 + -8) ==
              DAT_091842a0)) {
                    /* WARNING: Could not recover jumptable at 0x0419655c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar4 = (**(code **)(lVar5 + 0x188))(plVar9,*(undefined8 *)(lVar5 + 400));
            return uVar4;
          }
        }
        goto LAB_04196560;
      }
      uVar3 = (**(code **)(lVar5 + 0x168))(plVar7,*(undefined8 *)(lVar5 + 0x170));
      if (uVar8 == uVar1 - 1) {
        uVar4 = System_String__Concat(uVar4,uVar3,0);
      }
      else {
        uVar4 = System_String__Concat(uVar4,uVar3,DAT_09216a40,0);
      }
      uVar1 = *(uint *)(param_1 + 0x18);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar1);
  }
  return uVar4;
}

