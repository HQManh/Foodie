// rea decompile_all
// name: CakeOrder.Home.Map.HomeLevelNode$$UpdateSelectState
// address: 0x434d770
// body: available
// range: 0x434d770-0x434d8bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434d888 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x434d8b8 to 0x434d96c CakeOrder.Home.Map.HomeLevelNode$$SetScaleAndTintImmediate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x434d8bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Map_HomeLevelNode__UpdateSelectState(long param_1,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  plVar10 = (long *)(param_1 + 0xd8);
  *(int *)(param_1 + 0x50) = param_2;
  if (*plVar10 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,*plVar10,0);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    thunk_FUN_03f5d7b8(plVar10,0);
  }
  lVar7 = *(long *)(param_1 + 0xb8);
  if (param_2 == 1) {
    if (lVar7 == 0) goto LAB_0434d8bc;
    puVar4 = (undefined4 *)(lVar7 + 0x18);
    puVar3 = (undefined4 *)(lVar7 + 0x2c);
    puVar5 = (undefined4 *)(lVar7 + 0x20);
    puVar6 = (undefined4 *)(lVar7 + 0x28);
    puVar9 = (undefined4 *)(lVar7 + 0x24);
    puVar8 = (undefined4 *)(lVar7 + 0x10);
  }
  else {
    if (lVar7 == 0) goto LAB_0434d8bc;
    puVar4 = (undefined4 *)(lVar7 + 0x1c);
    puVar3 = (undefined4 *)(lVar7 + 0x3c);
    puVar5 = (undefined4 *)(lVar7 + 0x30);
    puVar6 = (undefined4 *)(lVar7 + 0x38);
    puVar9 = (undefined4 *)(lVar7 + 0x34);
    puVar8 = (undefined4 *)(lVar7 + 0x14);
  }
  uVar15 = *puVar4;
  uVar14 = *puVar5;
  uVar13 = *puVar9;
  uVar12 = *puVar6;
  uVar11 = *puVar3;
  uVar16 = *puVar8;
  lVar7 = UnityEngine_Component__get_gameObject(param_1,0);
  if (lVar7 != 0) {
    uVar1 = UnityEngine_GameObject__get_activeInHierarchy(lVar7,0);
    if ((uVar1 & 1) != 0) {
      uVar2 = CakeOrder_Home_Map_HomeLevelNode__IETweenToScaleAndTint
                        (uVar15,uVar14,uVar13,uVar12,uVar11,uVar16,param_1);
      uVar2 = UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar2,0);
      *(undefined8 *)(param_1 + 0xd8) = uVar2;
      thunk_FUN_03f5d7b8(plVar10);
      return;
    }
    CakeOrder_Home_Map_HomeLevelNode__SetScaleAndTintImmediate
              (uVar15,uVar14,uVar13,uVar12,uVar11,param_1);
    return;
  }
LAB_0434d8bc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

