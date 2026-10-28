// rea decompile_all
// name: Newtonsoft.Json.Utilities.ConvertUtils$$Int32TryParse
// address: 0x768a34c
// body: available
// range: 0x768a34c-0x768a4d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x768a4cc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768a4d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Utilities_ConvertUtils__Int32TryParse
          (long param_1,uint param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  undefined8 uVar4;
  ushort *puVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  *param_4 = 0;
  if (param_3 == 0) {
    return 3;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 <= param_2) {
LAB_0768a4cc:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  sVar3 = *(short *)(param_1 + (long)(int)param_2 * 2 + 0x20);
  if (sVar3 == 0x2d) {
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      return 3;
    }
    param_2 = param_2 + 1;
  }
  iVar1 = param_2 + param_3;
  if (param_3 < 0xb) {
    if (param_3 == 10) {
      if (uVar2 <= param_2) goto LAB_0768a4cc;
      if (0x32 < *(ushort *)(param_1 + (long)(int)param_2 * 2 + 0x20)) goto LAB_0768a398;
    }
    if ((int)param_2 < iVar1) {
      lVar7 = (long)(int)param_2;
      iVar8 = 0;
      if (param_2 <= uVar2) {
        param_2 = uVar2;
      }
      do {
        uVar6 = (uint)lVar7;
        if (param_2 == uVar6) goto LAB_0768a4cc;
        uVar9 = (uint)*(ushort *)(param_1 + 0x20 + lVar7 * 2);
        if (9 < uVar9 - 0x30) {
          return 3;
        }
        iVar10 = (iVar8 * 10 - uVar9) + 0x30;
        if (iVar8 < iVar10) goto LAB_0768a49c;
        param_3 = param_3 + -1;
        lVar7 = lVar7 + 1;
        *param_4 = iVar10;
        iVar8 = iVar10;
      } while (param_3 != 0);
      if (sVar3 != 0x2d) {
        if (iVar10 != -0x80000000) goto LAB_0768a480;
        goto LAB_0768a3d4;
      }
    }
    else if (sVar3 != 0x2d) {
      iVar10 = 0;
LAB_0768a480:
      *param_4 = -iVar10;
    }
    uVar4 = 1;
  }
  else {
LAB_0768a398:
    if ((int)param_2 < iVar1) {
      iVar1 = 0;
      if (param_2 <= uVar2) {
        iVar1 = uVar2 - param_2;
      }
      puVar5 = (ushort *)(param_1 + (long)(int)param_2 * 2 + 0x20);
      do {
        if (iVar1 == 0) goto LAB_0768a4cc;
        if (9 < *puVar5 - 0x30) {
          return 3;
        }
        param_3 = param_3 + -1;
        iVar1 = iVar1 + -1;
        puVar5 = puVar5 + 1;
      } while (param_3 != 0);
    }
LAB_0768a3d4:
    uVar4 = 2;
  }
  return uVar4;
LAB_0768a49c:
  uVar6 = uVar6 + 1;
  if (iVar1 <= (int)uVar6) goto LAB_0768a3d4;
  if (uVar2 <= uVar6) goto LAB_0768a4cc;
  if (9 < *(ushort *)(param_1 + (long)(int)uVar6 * 2 + 0x20) - 0x30) {
    return 3;
  }
  goto LAB_0768a49c;
}

