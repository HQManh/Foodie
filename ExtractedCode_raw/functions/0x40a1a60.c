// rea decompile_all
// name: UniRx.Scheduler.FixedUpdateMainThreadScheduler.<DelayAction>d__2$$MoveNext
// address: 0x40a1a60
// body: available
// range: 0x40a1a60-0x40a1cb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40a1cb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 UniRx_Scheduler_FixedUpdateMainThreadScheduler_<DelayAction>d__2__MoveNext(long param_1)

{
  int iVar1;
  double dVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  
  if ((DAT_09515dfe & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185708);
    FUN_03f5c2a4(&DAT_09187d70);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_09515dfe = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    plVar7 = *(long **)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185708) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_040a1c30;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185708,0);
LAB_040a1c30:
      uVar3 = (*(code *)*puVar4)(plVar7,puVar4[1]);
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      fVar10 = (float)UnityEngine_Time__get_fixedTime(0);
      if (*(float *)(param_1 + 0x3c) <= fVar10 - *(float *)(param_1 + 0x38)) goto LAB_040a1c78;
      goto LAB_040a1c58;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_TimeSpan__op_Equality(uVar8,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
      if ((uVar3 & 1) != 0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      uVar9 = UnityEngine_Time__get_fixedTime(0);
      lVar5 = DAT_0918bd60;
      *(undefined4 *)(param_1 + 0x38) = uVar9;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar2 = (double)System_TimeSpan__get_TotalSeconds((undefined8 *)(param_1 + 0x20),0);
      *(float *)(param_1 + 0x3c) = (float)dVar2;
LAB_040a1c58:
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 2;
      return 1;
    }
    plVar7 = *(long **)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185708) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_040a1c10;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185708,0);
LAB_040a1c10:
      uVar3 = (*(code *)*puVar4)(plVar7,puVar4[1]);
      if ((uVar3 & 1) != 0) {
        return 0;
      }
LAB_040a1c78:
      uVar8 = *(undefined8 *)(param_1 + 0x30);
      if (*(int *)(DAT_09187d70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UniRx_MainThreadDispatcher__UnsafeSend(uVar8);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

