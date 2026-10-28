// rea decompile_all
// name: ChocDino.UIFX.FilterBase$$OnPropertyChange
// address: 0x43c4d94
// body: available
// range: 0x43c4d94-0x43c4f93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c4f90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FilterBase__OnPropertyChange(long *param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  long local_38;
  long local_28;
  
  if ((DAT_09517c8f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517c8f = 1;
  }
  local_28 = 0;
  local_38 = 0;
  plVar3 = (long *)ChocDino_UIFX_FilterBase__get_GraphicComponent(param_1);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar4 = UnityEngine_Object__op_Implicit(plVar3,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (DAT_09517cab == '\0') {
    FUN_03f5c2a4(&DAT_0918cb90);
    DAT_09517cab = '\x01';
  }
  local_38 = **(long **)(DAT_0918cb90 + 0xb8);
  local_28 = local_38;
  if ((int)param_1[5] == 1) {
    (**(code **)(*param_1 + 0x368))(param_1,&local_28,&local_38,*(undefined8 *)(*param_1 + 0x370));
  }
  if ((local_28 == param_1[0x2e]) && (local_38 == param_1[0x2f])) {
    if ((*(char *)((long)param_1 + 0xa1) != '\0') ||
       (uVar4 = (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0)),
       (uVar4 & 1) != 0)) {
      if (plVar3 == (long *)0x0) goto LAB_043c4f90;
      (**(code **)(*plVar3 + 0x308))(plVar3,*(undefined8 *)(*plVar3 + 0x310));
    }
    bVar1 = *(byte *)((long)param_1 + 0xa1);
    bVar2 = (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
    if ((bVar1 == (bVar2 & 1)) &&
       (fVar8 = *(float *)((long)param_1 + 0x16c),
       fVar7 = (float)(**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330)),
       fVar8 == fVar7)) goto LAB_043c4f74;
    if (plVar3 == (long *)0x0) goto LAB_043c4f90;
    puVar5 = (undefined8 *)(*plVar3 + 0x2f8);
    puVar6 = (undefined8 *)(*plVar3 + 0x300);
  }
  else {
    if (plVar3 == (long *)0x0) {
LAB_043c4f90:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar3 + 0x2f8))(plVar3,*(undefined8 *)(*plVar3 + 0x300));
    bVar1 = *(byte *)((long)param_1 + 0xa1);
    bVar2 = (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
    if (bVar1 == (bVar2 & 1)) goto LAB_043c4f74;
    puVar5 = (undefined8 *)(*plVar3 + 0x308);
    puVar6 = (undefined8 *)(*plVar3 + 0x310);
  }
  (*(code *)*puVar5)(plVar3,*puVar6);
LAB_043c4f74:
  *(undefined1 *)(param_1 + 0x32) = 1;
  return;
}

