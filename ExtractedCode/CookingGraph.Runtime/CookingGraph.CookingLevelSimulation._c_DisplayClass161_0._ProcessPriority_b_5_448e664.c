// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<>c__DisplayClass161_0$$<ProcessPriority>b__5
// address: 0x448e664
// body: available
// range: 0x448e664-0x448e803 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x448e800 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CookingGraph_CookingLevelSimulation_<>c__DisplayClass161_0__<ProcessPriority>b__5
               (long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  int local_34;
  
  if ((DAT_09518150 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d990);
    FUN_03f5c2a4(&DAT_091c9798);
    FUN_03f5c2a4(&DAT_0917afd8);
    DAT_09518150 = 1;
  }
  local_34 = 0;
  iVar2 = FUN_04ad7c28(param_2,DAT_091c9798);
  if (param_2 != (long *)0x0) {
    lVar7 = *param_2;
    lVar10 = *(long *)(param_1 + 0x20);
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917afd8) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0448e72c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917afd8,0);
LAB_0448e72c:
    uVar3 = (*(code *)*puVar5)(param_2,puVar5[1]);
    if (lVar10 != 0) {
      uVar6 = FUN_06ee7aac(lVar10,uVar3,&local_34,DAT_0919d990);
      iVar1 = local_34;
      lVar7 = *param_2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917afd8) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0448e7ac;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917afd8,0);
LAB_0448e7ac:
      iVar4 = (*(code *)*puVar5)(param_2,puVar5[1]);
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 != 0) {
        if (iVar4 == *(int *)(lVar7 + 0x14)) {
          iVar4 = *(int *)(lVar7 + 0x18);
        }
        else {
          iVar4 = 0;
        }
        if ((uVar6 & 1) == 0) {
          iVar1 = 0;
        }
        return iVar2 <= iVar4 + iVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

