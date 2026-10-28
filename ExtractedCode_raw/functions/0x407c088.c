// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaBlenderView$$Play
// address: 0x407c088
// body: available
// range: 0x407c088-0x407c1db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407c1c8 to 0x407c4ac CakeOrder.InGame.Pasta.PastaSpineSfxPlayer$$Play (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x407c1d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_Pasta_PastaBlenderView__Play(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  
  if ((DAT_09515c3f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515c3f = 1;
  }
  lVar3 = UnityEngine_Component__get_gameObject(param_1,0);
  if (lVar3 != 0) {
    UnityEngine_GameObject__SetActive(lVar3,1,0);
    lVar3 = CakeOrder_InGame_Pasta_PastaBlenderView__StateOf(param_1);
    lVar4 = CakeOrder_InGame_Pasta_PastaBlenderView__AnimationOf
                      (param_1,*(undefined8 *)(param_1 + 0x58));
    if ((lVar3 == 0) || (lVar4 == 0)) {
      return;
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined1 *)(param_1 + 0x9d) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa8),0);
    lVar4 = Spine_AnimationState__SetAnimation(lVar3,0,lVar4,0,0);
    lVar3 = DAT_09188ad0;
    if (lVar4 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = 0x3f800000;
      if (*(char *)(param_1 + 0x9e) != '\0') {
        uVar2 = 0;
      }
      iVar1 = *(int *)(DAT_09188ad0 + 0xe4);
      *(undefined4 *)(lVar4 + 0xa4) = uVar2;
      if (iVar1 == 0) {
        FUN_03f5c424(lVar3);
      }
      uVar5 = UnityEngine_Object__op_Implicit(uVar6,0);
      if ((uVar5 & 1) != 0) {
        fVar7 = 0.0;
        if (*(char *)(param_1 + 0x9e) == '\0') {
          fVar7 = 0.01;
          if (0.01 <= *(float *)(param_1 + 0x78)) {
            fVar7 = *(float *)(param_1 + 0x78);
          }
        }
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_0407c1d8;
        *(float *)(*(long *)(param_1 + 0x20) + 0x15c) = fVar7;
      }
      lVar3 = CakeOrder_InGame_Pasta_PastaBlenderView__get_SfxPlayer(param_1);
      if (lVar3 != 0) {
        fVar7 = 0.01;
        if (0.01 <= *(float *)(param_1 + 0x78)) {
          fVar7 = *(float *)(param_1 + 0x78);
        }
        CakeOrder_InGame_Pasta_PastaSpineSfxPlayer__Play
                  (0,0,fVar7,lVar3,*(undefined8 *)(param_1 + 0x70));
        return;
      }
    }
  }
LAB_0407c1d8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

