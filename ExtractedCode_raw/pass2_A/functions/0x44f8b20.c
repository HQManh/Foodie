// rea decompile_all
// name: Utilities.MonoBehaviourExtension.<IEPlayTextTransitionUnscaledTime>d__17$$MoveNext
// address: 0x44f8b20
// body: available
// range: 0x44f8b20-0x44f8dcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44f8dc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Utilities_MonoBehaviourExtension_<IEPlayTextTransitionUnscaledTime>d__17__MoveNext(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  double __x;
  float fVar11;
  double local_38;
  
  if ((DAT_09518448 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ce98);
    DAT_09518448 = 1;
  }
  iVar8 = *(int *)(param_1 + 0x10);
  if (iVar8 == 2) {
    fVar11 = *(float *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (iVar8 != 1) {
      if (iVar8 != 0) {
        return 0;
      }
      uVar10 = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar2 = thunk_FUN_03f9944c(DAT_0918ce98);
      UnityEngine_WaitForSecondsRealtime___ctor(uVar10,uVar2,0);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar2);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    fVar11 = 0.0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x48) = 0xffffffff00000000;
  }
  if (*(float *)(param_1 + 0x24) <= fVar11) {
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 != 0) {
      plVar4 = *(long **)(param_1 + 0x30);
      uVar2 = (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(lVar3 + 0x40),*(undefined4 *)(param_1 + 0x2c),
                         *(undefined8 *)(lVar3 + 0x28));
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x558))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x560));
        lVar3 = *(long *)(param_1 + 0x40);
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        }
        return 0;
      }
    }
    goto LAB_044f8dc8;
  }
  fVar5 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
  cVar1 = DAT_09515cf4;
  iVar8 = *(int *)(param_1 + 0x28);
  fVar7 = (fVar11 + fVar5) / *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x48) = fVar11 + fVar5;
  fVar11 = 1.0;
  if (fVar7 <= 1.0) {
    fVar11 = fVar7;
  }
  fVar5 = 0.0;
  if (0.0 <= fVar7) {
    fVar5 = fVar11;
  }
  iVar9 = *(int *)(param_1 + 0x2c);
  fVar11 = 0.0;
  if (0.0 <= fVar5) {
    fVar11 = fVar5;
  }
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  fVar11 = ((float)iVar9 - (float)iVar8) * fVar11 + (float)iVar8;
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  __x = (double)fVar11;
  dVar6 = modf(__x,&local_38);
  if (0.0 <= fVar11) {
    if (dVar6 == 0.5) {
      dVar6 = 1.0;
      goto LAB_044f8d0c;
    }
    local_38 = (double)(long)(__x + 0.5);
  }
  else if (dVar6 == -0.5) {
    dVar6 = -1.0;
LAB_044f8d0c:
    if (((long)local_38 & 1U) != 0) {
      local_38 = local_38 + dVar6;
    }
  }
  else {
    local_38 = (double)(long)(__x + -0.5);
  }
  iVar8 = -0x80000000;
  if (local_38 != INFINITY) {
    iVar8 = (int)local_38;
  }
  if (iVar8 != *(int *)(param_1 + 0x4c)) {
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 != 0) {
      plVar4 = *(long **)(param_1 + 0x30);
      uVar2 = (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(lVar3 + 0x40),iVar8,*(undefined8 *)(lVar3 + 0x28));
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x558))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x560));
        *(int *)(param_1 + 0x4c) = iVar8;
        goto LAB_044f8d98;
      }
    }
LAB_044f8dc8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_044f8d98:
  *(undefined8 *)(param_1 + 0x18) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
  *(undefined4 *)(param_1 + 0x10) = 2;
  return 1;
}

