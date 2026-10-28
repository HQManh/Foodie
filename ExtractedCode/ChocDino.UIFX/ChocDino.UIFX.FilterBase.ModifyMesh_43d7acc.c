// rea decompile_all
// name: ChocDino.UIFX.FilterBase$$ModifyMesh
// address: 0x43d7acc
// body: available
// range: 0x43d7acc-0x43d7cd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43d7cb8 to 0x89a71b8 UnityEngine.UI.VertexHelper$$Clear (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43d7cd0 to 0x43d7740 ChocDino.UIFX.FilterBase$$BuildOutputQuad (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43d7cd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FilterBase__ModifyMesh(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  float fVar8;
  
  if ((DAT_09517c9a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517c9a = 1;
  }
  *(undefined1 *)((long)param_1 + 0xa1) = 0;
  if (DAT_09517cab == '\0') {
    FUN_03f5c2a4(&DAT_0918cb90);
    DAT_09517cab = '\x01';
  }
  lVar6 = **(long **)(DAT_0918cb90 + 0xb8);
  param_1[0x2e] = lVar6;
  param_1[0x2f] = lVar6;
  pcVar7 = *(code **)(*param_1 + 0x2d8);
  uVar5 = *(undefined8 *)(*param_1 + 0x2e0);
  *(undefined1 *)(param_1 + 0x32) = 1;
  uVar4 = (*pcVar7)(param_1,uVar5);
  if ((((uVar4 & 1) == 0) || ((char)param_1[0x1d] != '\0')) ||
     (*(char *)((long)param_1 + 0xd9) != '\0')) {
    return;
  }
  *(undefined1 *)((long)param_1 + 0xa1) = 1;
  uVar5 = ChocDino_UIFX_FilterBase__get_GraphicComponent(param_1);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    lVar6 = ChocDino_UIFX_FilterBase__get_GraphicComponent(param_1);
    if (lVar6 == 0) goto LAB_043d7cd4;
    uVar5 = UnityEngine_UI_Graphic__get_canvas(lVar6,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar5,0,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
  fVar8 = (float)(**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
  *(float *)((long)param_1 + 0x16c) = fVar8;
  if (0.0 < fVar8) {
    iVar1 = *(int *)((long)param_1 + 0x194);
    iVar2 = UnityEngine_Time__get_frameCount(0);
    if ((iVar1 == iVar2) &&
       (uVar4 = ChocDino_UIFX_FilterBase__HasMeshChanged(param_1,param_2), (uVar4 & 1) == 0)) {
      ChocDino_UIFX_FilterBase__BuildOutputQuad(param_1,param_2);
      return;
    }
    uVar3 = UnityEngine_Time__get_frameCount(0);
    *(undefined4 *)((long)param_1 + 0x194) = uVar3;
    ChocDino_UIFX_FilterBase__GrabMesh(param_1,param_2);
    uVar4 = ChocDino_UIFX_FilterBase__GenerateScreenRect(param_1);
    if ((uVar4 & 1) != 0) {
      ChocDino_UIFX_FilterBase__BuildOutputQuad(param_1,param_2);
      if (*(char *)((long)param_1 + 0xea) != '\0') {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x043d7c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x348))(param_1,0,*(undefined8 *)(*param_1 + 0x350));
      return;
    }
  }
  if (param_2 != 0) {
    UnityEngine_UI_VertexHelper__Clear(param_2,0);
    return;
  }
LAB_043d7cd4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

