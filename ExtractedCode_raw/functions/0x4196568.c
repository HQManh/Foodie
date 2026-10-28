// rea decompile_all
// name: Datpt.DebugCustom$$PrepareStringJson
// address: 0x4196568
// body: available
// range: 0x4196568-0x4196797 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4196790 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4196794 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Datpt_DebugCustom__PrepareStringJson(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  if ((DAT_095167df & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091842a0);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_09216a40);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_095167df = 1;
  }
  if (param_1 == 0) {
LAB_04196794:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = *(ulong *)(param_1 + 0x18);
  uVar3 = DAT_091f5700;
  if (0 < (int)uVar4) {
    uVar8 = 0;
    do {
      if ((uVar4 & 0xffffffff) <= uVar8) {
LAB_04196790:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar7 = *(long **)(param_1 + 0x20 + uVar8 * 8);
      if (plVar7 != (long *)0x0) {
        lVar5 = *plVar7;
        bVar1 = *(byte *)(lVar5 + 0x130);
        uVar6 = (ulong)*(byte *)(DAT_091842a0 + 0x130);
        if ((*(byte *)(DAT_091842a0 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar5 + 200) + uVar6 * 8 + -8) == DAT_091842a0)) {
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar5 = *plVar7;
            bVar1 = *(byte *)(lVar5 + 0x130);
            uVar6 = (ulong)*(byte *)(DAT_091842a0 + 0x130);
          }
          if ((uint)bVar1 < (uint)uVar6) {
            plVar7 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(lVar5 + 200) + uVar6 * 8 + -8) != DAT_091842a0) {
            plVar7 = (long *)0x0;
          }
          UnityEngine_Debug__LogException(plVar7,0);
          if (*(uint *)(param_1 + 0x18) <= (uint)uVar8) goto LAB_04196790;
          plVar7 = *(long **)(param_1 + 0x20 + uVar8 * 8);
          if (plVar7 != (long *)0x0) {
            lVar5 = *plVar7;
            if ((*(byte *)(DAT_091842a0 + 0x130) <= *(byte *)(lVar5 + 0x130)) &&
               (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(DAT_091842a0 + 0x130) * 8 + -8)
                == DAT_091842a0)) {
                    /* WARNING: Could not recover jumptable at 0x0419678c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar3 = (**(code **)(lVar5 + 0x188))(plVar7,*(undefined8 *)(lVar5 + 400));
              return uVar3;
            }
          }
          goto LAB_04196794;
        }
      }
      if (uVar8 == (int)uVar4 - 1) {
        if (*(int *)(DAT_09187300 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = Newtonsoft_Json_JsonConvert__SerializeObject(plVar7,0);
        uVar3 = System_String__Concat(uVar3,uVar2,0);
      }
      else {
        if (*(int *)(DAT_09187300 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = Newtonsoft_Json_JsonConvert__SerializeObject(plVar7,0);
        uVar3 = System_String__Concat(uVar3,uVar2,DAT_09216a40,0);
      }
      uVar4 = *(ulong *)(param_1 + 0x18);
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)(int)uVar4);
  }
  return uVar3;
}

