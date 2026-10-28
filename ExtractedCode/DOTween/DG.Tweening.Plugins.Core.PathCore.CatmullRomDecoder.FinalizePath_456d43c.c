// rea decompile_all
// name: DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder$$FinalizePath
// address: 0x456d43c
// body: available
// range: 0x456d43c-0x456d69b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456d690 to 0x456d8a8 DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder$$SetWaypointsLengths (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x456d694 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x456d698 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Core_PathCore_CatmullRomDecoder__FinalizePath
               (undefined8 param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  float fVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  
  if ((DAT_0951887d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fd58);
    DAT_0951887d = 1;
  }
  if ((param_3 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(param_3 + 0x18);
    plVar6 = (long *)(param_2 + 0x30);
    if ((*plVar6 == 0) || (*(int *)(*plVar6 + 0x18) != 2)) {
      lVar2 = FUN_03f5c394(DAT_0917fd58,2);
      *plVar6 = lVar2;
      thunk_FUN_03f5d7b8(plVar6,lVar2);
    }
    lVar2 = *plVar6;
    if ((param_4 & 1) == 0) {
      if ((*(uint *)(param_3 + 0x18) & 0xfffffffe) != 0) {
        uVar12 = *(undefined8 *)(param_3 + 0x2c);
        uVar13 = *(undefined4 *)(param_3 + 0x34);
        if (DAT_09515ce6 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515ce6 = '\x01';
        }
        if (lVar2 == 0) goto LAB_0456d698;
        if (*(int *)(lVar2 + 0x18) != 0) {
          uVar8 = **(undefined8 **)(DAT_0918cbd0 + 0xb8);
          uVar9 = *(undefined4 *)(*(undefined8 **)(DAT_0918cbd0 + 0xb8) + 1);
          *(undefined8 *)(lVar2 + 0x20) = uVar12;
          *(undefined4 *)(lVar2 + 0x28) = uVar13;
          *(undefined8 *)(lVar2 + 0x2c) = uVar8;
          *(undefined4 *)(lVar2 + 0x34) = uVar9;
          if ((iVar1 - 1U < *(uint *)(param_3 + 0x18)) && (iVar1 - 2U < *(uint *)(param_3 + 0x18)))
          {
            lVar2 = *plVar6;
            if (lVar2 == 0) goto LAB_0456d698;
            if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
              puVar4 = (undefined8 *)(param_3 + 0x20 + (long)(int)(iVar1 - 1U) * 0xc);
              puVar5 = (undefined8 *)(param_3 + 0x20 + (long)(int)(iVar1 - 2U) * 0xc);
              fVar7 = *(float *)(puVar4 + 1);
              uVar12 = *puVar4;
              uVar8 = *puVar5;
              fVar10 = (float)uVar12;
              fVar11 = (float)((ulong)uVar12 >> 0x20);
              fVar7 = fVar7 + (fVar7 - *(float *)(puVar5 + 1));
              uVar12 = CONCAT44(fVar11 + (fVar11 - (float)((ulong)uVar8 >> 0x20)),
                                fVar10 + (fVar10 - (float)uVar8));
              goto LAB_0456d634;
            }
          }
        }
      }
    }
    else if (iVar1 - 2U < *(uint *)(param_3 + 0x18)) {
      lVar3 = param_3 + (long)(int)(iVar1 - 2U) * 0xc;
      uVar12 = *(undefined8 *)(lVar3 + 0x20);
      uVar13 = *(undefined4 *)(lVar3 + 0x28);
      if (DAT_09515ce6 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515ce6 = '\x01';
      }
      if (lVar2 == 0) goto LAB_0456d698;
      if (*(int *)(lVar2 + 0x18) != 0) {
        uVar8 = **(undefined8 **)(DAT_0918cbd0 + 0xb8);
        uVar9 = *(undefined4 *)(*(undefined8 **)(DAT_0918cbd0 + 0xb8) + 1);
        *(undefined8 *)(lVar2 + 0x20) = uVar12;
        *(undefined4 *)(lVar2 + 0x28) = uVar13;
        *(undefined8 *)(lVar2 + 0x2c) = uVar8;
        *(undefined4 *)(lVar2 + 0x34) = uVar9;
        if ((*(uint *)(param_3 + 0x18) & 0xfffffffe) != 0) {
          lVar2 = *plVar6;
          if (lVar2 == 0) goto LAB_0456d698;
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
            fVar7 = *(float *)(param_3 + 0x34);
            uVar12 = *(undefined8 *)(param_3 + 0x2c);
LAB_0456d634:
            uVar13 = *(undefined4 *)(*(undefined8 **)(DAT_0918cbd0 + 0xb8) + 1);
            uVar8 = **(undefined8 **)(DAT_0918cbd0 + 0xb8);
            *(undefined8 *)(lVar2 + 0x38) = uVar12;
            *(float *)(lVar2 + 0x40) = fVar7;
            *(undefined8 *)(lVar2 + 0x44) = uVar8;
            *(undefined4 *)(lVar2 + 0x4c) = uVar13;
            *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x24) * iVar1;
            DG_Tweening_Plugins_Core_PathCore_CatmullRomDecoder__SetTimeToLengthTables
                      (param_1,param_2);
            DG_Tweening_Plugins_Core_PathCore_CatmullRomDecoder__SetWaypointsLengths
                      (param_1,param_2,*(undefined4 *)(param_2 + 0x24));
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_0456d698:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

