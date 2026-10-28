// rea decompile_all
// name: ChocDino.UIFX.TrailEffectTMP$$WillRenderCanvases
// address: 0x43b9844
// body: available
// range: 0x43b9844-0x43b9947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b9940 to 0x43b9948 ChocDino.UIFX.TrailEffectTMP$$ApplyOutputMeshAndMaterial (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43b9944 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_TrailEffectTMP__WillRenderCanvases(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_09517b43 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517b43 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  plVar5 = *(long **)(param_1 + 0x80);
  if (plVar5 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0xa4) != 1) {
      return;
    }
    uVar4 = ChocDino_UIFX_TrailEffectBase__CanApply(param_1,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x88) == 0) {
      return;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x88) + 0x10);
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) < 1) {
        return;
      }
      iVar1 = *(int *)(param_1 + 0xb8);
      iVar2 = UnityEngine_Time__get_frameCount(0);
      if (iVar1 == iVar2) {
        return;
      }
      uVar3 = UnityEngine_Time__get_frameCount(0);
      *(undefined4 *)(param_1 + 0xb8) = uVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        uVar7 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0x80),0);
        ChocDino_UIFX_TrailEffectTMP__ApplyOutputMeshAndMaterial(param_1,uVar7);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

