// rea decompile_all
// name: UniRx.Operators.RangeObservable.<>c__DisplayClass4_0$$<SubscribeCore>b__0
// address: 0x4188104
// body: available
// range: 0x4188104-0x418825b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4188258 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_Operators_RangeObservable_<>c__DisplayClass4_0__<SubscribeCore>b__0
               (long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  
  if ((DAT_0951674a & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b268);
    DAT_0951674a = 1;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 < *(int *)(lVar7 + 0x18)) {
      plVar9 = *(long **)(param_1 + 0x18);
      if (plVar9 != (long *)0x0) {
        lVar5 = *plVar9;
        iVar2 = *(int *)(lVar7 + 0x14);
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917b268) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_04188200;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917b268,0);
LAB_04188200:
        (*(code *)*puVar3)(plVar9,iVar2 + iVar1,puVar3[1]);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        if (param_2 != 0) {
          plVar9 = *(long **)(param_2 + 0x40);
          uVar4 = *(undefined8 *)(param_2 + 0x28);
          UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0x18);
          goto LAB_04188248;
        }
      }
    }
    else {
      plVar9 = *(long **)(param_1 + 0x18);
      if (plVar9 != (long *)0x0) {
        lVar7 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917b268) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_04188240;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917b268,2);
LAB_04188240:
        UNRECOVERED_JUMPTABLE = (code *)*puVar3;
        uVar4 = puVar3[1];
LAB_04188248:
                    /* WARNING: Could not recover jumptable at 0x04188254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar9,uVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

