// rea decompile_all
// name: ChocDino.UIFX.TrailEffectTMP$$ModifyGeometry
// address: 0x43b7520
// body: available
// range: 0x43b7520-0x43b7667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b7664 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_TrailEffectTMP__ModifyGeometry(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_09517b38 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517b38 = 1;
  }
  lVar3 = param_1[0x10];
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(lVar3,0,0);
  if ((uVar1 & 1) == 0) {
    plVar2 = (long *)param_1[0x10];
    if (plVar2 == (long *)0x0) {
LAB_043b7664:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
    if ((uVar1 & 1) != 0) {
      ChocDino_UIFX_TrailEffectTMP__StoreOriginalVertices(param_1,param_2);
      if (param_1[0x11] != 0) {
        lVar3 = *(long *)(param_1[0x11] + 0x10);
        if (lVar3 == 0) goto LAB_043b7664;
        if (0 < *(int *)(lVar3 + 0x18)) {
          if (*(float *)(param_1 + 10) != 0.0) {
            fVar5 = *(float *)(param_1 + 9);
            fVar4 = (float)ChocDino_UIFX_TrailEffectBase__get_DeltaTime(0);
            *(float *)(param_1 + 9) = fVar5 + fVar4 * *(float *)(param_1 + 10);
          }
          ChocDino_UIFX_TrailEffectTMP__PrepareTrail(param_1);
          ChocDino_UIFX_TrailEffectTMP__InterpolateTrail(param_1);
          ChocDino_UIFX_TrailEffectTMP__UpdateTrailColors(param_1);
          ChocDino_UIFX_TrailEffectTMP__GenerateTrailGeometry(param_1);
          if (*(int *)((long)param_1 + 0xa4) == 0) {
            ChocDino_UIFX_TrailEffectTMP__AssignTrailGeometryToMesh(param_1,param_2);
          }
          *(undefined1 *)(param_1 + 0x14) = 1;
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x043b7660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x278))(param_1,*(undefined8 *)(*param_1 + 0x280));
      return;
    }
  }
  return;
}

