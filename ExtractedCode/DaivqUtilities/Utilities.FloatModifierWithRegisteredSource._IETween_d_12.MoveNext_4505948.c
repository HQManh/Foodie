// rea decompile_all
// name: Utilities.FloatModifierWithRegisteredSource.<IETween>d__12$$MoveNext
// address: 0x4505948
// body: available
// range: 0x4505948-0x4505b37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4505b34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Utilities_FloatModifierWithRegisteredSource_<IETween>d__12__MoveNext(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_095184d8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919dbe0);
    FUN_03f5c2a4(&DAT_0919dbf0);
    FUN_03f5c2a4(&DAT_0919dc30);
    DAT_095184d8 = 1;
  }
  plVar3 = *(long **)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (1.0 <= *(float *)(param_1 + 0x60)) {
      lVar4 = *(long *)(param_1 + 0x50);
      if (lVar4 == 0) {
        return 0;
      }
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_04505b34;
    uVar1 = UnityEngine_Object__GetInstanceID(*(long *)(param_1 + 0x20),0);
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    if ((plVar3 == (long *)0x0) || (plVar3[2] == 0)) goto LAB_04505b34;
    uVar2 = FUN_06efb0a8(plVar3[2],uVar1,DAT_0919dbf0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_04505b34;
      fVar6 = *(float *)(param_1 + 0x30);
      fVar7 = *(float *)(param_1 + 0x34);
      lVar4 = plVar3[2];
      uVar1 = *(undefined4 *)(param_1 + 0x58);
      fVar5 = (float)UnityEngine_AnimationCurve__Evaluate(0,*(long *)(param_1 + 0x38),0);
      if (lVar4 == 0) goto LAB_04505b34;
      FUN_06efaeb0(fVar6 + (fVar7 - fVar6) * fVar5,lVar4,uVar1,DAT_0919dbe0);
    }
    uVar1 = UnityEngine_Time__get_time(0);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
  }
  fVar5 = (float)UnityEngine_Time__get_time(0);
  *(float *)(param_1 + 0x60) = (fVar5 - *(float *)(param_1 + 0x5c)) / *(float *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x38) != 0) {
    fVar6 = *(float *)(param_1 + 0x30);
    fVar7 = *(float *)(param_1 + 0x34);
    fVar5 = (float)UnityEngine_AnimationCurve__Evaluate(*(long *)(param_1 + 0x38),0);
    if ((plVar3 != (long *)0x0) && (plVar3[2] != 0)) {
      fVar6 = fVar6 + (fVar7 - fVar6) * fVar5;
      FUN_06efae9c(fVar6,plVar3[2],*(undefined4 *)(param_1 + 0x58),DAT_0919dc30);
      lVar4 = *(long *)(param_1 + 0x48);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))
                  (fVar6,*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      }
      (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
LAB_04505b34:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

