// rea decompile_all
// name: DG.Tweening.Plugins.Core.PathCore.Path$$RefreshNonLinearDrawWps
// address: 0x456e95c
// body: available
// range: 0x456e95c-0x456ea63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456ea5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x456ea60 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Core_PathCore_Path__RefreshNonLinearDrawWps
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  
  if ((DAT_09518885 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_09518885 = 1;
  }
  if ((param_4 != 0) && (*(long *)(param_4 + 0x18) != 0)) {
    plVar4 = (long *)(param_4 + 0xe8);
    uVar2 = *(int *)(*(long *)(param_4 + 0x18) + 0x18) * 10;
    if ((*plVar4 == 0) || ((uVar2 | 1) != *(uint *)(*plVar4 + 0x18))) {
      lVar6 = FUN_03f5c394(DAT_091807f8,uVar2 | 1);
      *plVar4 = lVar6;
      thunk_FUN_03f5d7b8(plVar4,lVar6);
    }
    if (-1 < (int)uVar2) {
      uVar5 = 0;
      lVar6 = 0x20;
      do {
        uVar7 = DG_Tweening_Plugins_Core_PathCore_Path__GetPoint
                          ((float)(int)uVar5 / (float)(int)uVar2,param_4,0);
        lVar3 = *(long *)(param_4 + 0xe8);
        if (lVar3 == 0) goto LAB_0456ea5c;
        if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar5 = uVar5 + 1;
        puVar1 = (undefined4 *)(lVar3 + lVar6);
        lVar6 = lVar6 + 0xc;
        *puVar1 = uVar7;
        puVar1[1] = param_2;
        puVar1[2] = param_3;
      } while ((uVar2 | 1) != uVar5);
    }
    return;
  }
LAB_0456ea5c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

