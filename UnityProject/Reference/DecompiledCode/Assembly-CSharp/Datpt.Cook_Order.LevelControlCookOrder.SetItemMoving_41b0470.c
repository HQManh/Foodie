// rea decompile_all
// name: Datpt.Cook_Order.LevelControlCookOrder$$SetItemMoving
// address: 0x41b0470
// body: available
// range: 0x41b0470-0x41b05e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b05e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_LevelControlCookOrder__SetItemMoving
               (undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4,long *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_095168ec & 1) == 0) {
    FUN_03f5c2a4(&DAT_09191508);
    FUN_03f5c2a4(&DAT_09191510);
    DAT_095168ec = 1;
  }
  *(long *)(param_4 + 0xd0) = (long)param_5;
  thunk_FUN_03f5d7b8((long *)(param_4 + 0xd0),param_5);
  if (param_5 == (long *)0x0) {
    return;
  }
  lVar2 = *param_5;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_09191510) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_041b0530;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_03f95da8(param_5,DAT_09191510,0);
LAB_041b0530:
  lVar2 = (*(code *)*puVar1)(param_5,puVar1[1]);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  fVar6 = (float)UnityEngine_Transform__get_position(lVar2,0);
  fVar8 = param_2;
  fVar7 = (float)Datpt_Cook_Order_LevelControlCookOrder__GetPoint(param_4);
  lVar2 = DAT_09191508;
  *(float *)(param_4 + 0xe8) = fVar6 - fVar7;
  *(float *)(param_4 + 0xec) = param_2 - fVar8;
  *(undefined4 *)(param_4 + 0xf0) = param_3;
  lVar3 = *param_5;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar2) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
        goto LAB_041b05c4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_03f95da8(param_5,lVar2,5);
LAB_041b05c4:
                    /* WARNING: Could not recover jumptable at 0x041b05dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(param_5,puVar1[1]);
  return;
}

